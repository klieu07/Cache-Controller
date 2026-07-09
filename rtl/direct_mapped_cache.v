module direct_mapped_cache #(
    parameter ADDR_WIDTH = 32,
    parameter DATA_WIDTH = 32,
    parameter LINE_BYTES = 16,   // power of 2, must be > DATA_WIDTH/8
    parameter NUM_SETS   = 8     // power of 2
) (
    input  wire                    clk,
    input  wire                    rst_n,

    // CPU-facing read/write port
    input  wire                    cpu_req,
    input  wire                    cpu_we,      // 1 = write, 0 = read
    input  wire [ADDR_WIDTH-1:0]   cpu_addr,
    input  wire [DATA_WIDTH-1:0]   cpu_wdata,
    output wire                    cpu_hit,     // combinational, valid same cycle as cpu_req on a hit
    output wire [DATA_WIDTH-1:0]   cpu_rdata,
    output wire                    cpu_stall,   // hold ALL cpu_* inputs while this is high

    // Memory-facing refill (read) port
    output wire                    mem_req,
    output wire [ADDR_WIDTH-1:0]   mem_addr,    // line-aligned
    input  wire                    mem_ready,
    input  wire [LINE_BYTES*8-1:0] mem_rdata,

    // Memory-facing write-back port
    output wire                    mem_wr_req,
    output wire [ADDR_WIDTH-1:0]   mem_wr_addr, // line-aligned, victim's address
    output wire [LINE_BYTES*8-1:0] mem_wr_data, // whole victim line
    input  wire                    mem_wr_done
);

    localparam WORDS_PER_LINE = LINE_BYTES / (DATA_WIDTH/8);
    localparam OFFSET_BITS    = $clog2(LINE_BYTES);
    localparam WORD_SEL_BITS  = $clog2(WORDS_PER_LINE);
    localparam INDEX_BITS     = $clog2(NUM_SETS);
    localparam TAG_BITS       = ADDR_WIDTH - INDEX_BITS - OFFSET_BITS;

    // ---- Storage: one valid / dirty / tag / line of words per set -------
    reg                  valid_array [0:NUM_SETS-1];
    reg                  dirty_array [0:NUM_SETS-1];
    reg [TAG_BITS-1:0]   tag_array   [0:NUM_SETS-1];
    reg [DATA_WIDTH-1:0] data_array  [0:NUM_SETS-1][0:WORDS_PER_LINE-1];

    // ---- Address decomposition (own module) -----------------------------
    wire [INDEX_BITS-1:0]    index;
    wire [TAG_BITS-1:0]      tag_in;
    wire [WORD_SEL_BITS-1:0] word_sel;

    address_decoder #(
        .ADDR_WIDTH(ADDR_WIDTH), .DATA_WIDTH(DATA_WIDTH),
        .LINE_BYTES(LINE_BYTES), .NUM_SETS(NUM_SETS)
    ) addr_dec (
        .addr(cpu_addr),
        .index(index),
        .tag(tag_in),
        .word_sel(word_sel)
    );

    // ---- FSM: IDLE -> (WRITEBACK if victim dirty ->) REFILL -> IDLE ------
    localparam S_IDLE      = 2'b00;
    localparam S_WRITEBACK = 2'b01;
    localparam S_REFILL    = 2'b10;
    reg [1:0] state;

    wire hit_comb        = valid_array[index] && (tag_array[index] == tag_in);
    wire need_writeback  = valid_array[index] && dirty_array[index];

    assign cpu_hit   = (state == S_IDLE) && cpu_req && hit_comb;
    assign cpu_rdata = data_array[index][word_sel];
    assign cpu_stall = (state != S_IDLE) || (cpu_req && !hit_comb);

    assign mem_req  = (state == S_REFILL);
    assign mem_addr = {cpu_addr[ADDR_WIDTH-1:OFFSET_BITS], {OFFSET_BITS{1'b0}}};

    assign mem_wr_req  = (state == S_WRITEBACK);
    assign mem_wr_addr = {tag_array[index], index, {OFFSET_BITS{1'b0}}}; // victim's own address
    assign mem_wr_data = mem_wr_data_r;

    reg [LINE_BYTES*8-1:0] mem_wr_data_r;
    integer k;
    always @* begin
        for (k = 0; k < WORDS_PER_LINE; k = k + 1)
            mem_wr_data_r[k*DATA_WIDTH +: DATA_WIDTH] = data_array[index][k];
    end

    integer i, w;

    // ---- Sequential: state transitions + array writes --------------------
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state <= S_IDLE;
            for (i = 0; i < NUM_SETS; i = i + 1) begin
                valid_array[i] <= 1'b0;
                dirty_array[i] <= 1'b0;
            end
        end else begin
            case (state)
                S_IDLE: begin
                    if (cpu_req && !hit_comb) begin
                        // miss: writeback first only if the victim is dirty
                        state <= need_writeback ? S_WRITEBACK : S_REFILL;
                    end else if (cpu_req && hit_comb && cpu_we) begin
                        // write hit: update in place, same cycle, no stall
                        data_array[index][word_sel] <= cpu_wdata;
                        dirty_array[index]          <= 1'b1;
                    end
                end
                S_WRITEBACK: begin
                    if (mem_wr_done)
                        state <= S_REFILL;
                end
                S_REFILL: begin
                    if (mem_ready) begin
                        valid_array[index] <= 1'b1;
                        tag_array[index]   <= tag_in;
                        for (w = 0; w < WORDS_PER_LINE; w = w + 1) begin
                            if (cpu_we && (w == word_sel))
                                data_array[index][w] <= cpu_wdata;       // write-allocate
                            else
                                data_array[index][w] <= mem_rdata[w*DATA_WIDTH +: DATA_WIDTH];
                        end
                        dirty_array[index] <= cpu_we; // dirty only if this refill served a write
                        state <= S_IDLE;
                    end
                end
            endcase
        end
    end

endmodule