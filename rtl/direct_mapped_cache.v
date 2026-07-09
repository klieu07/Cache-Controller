module direct_mapped_cache #(
    parameter ADDR_WIDTH = 32,
    parameter DATA_WIDTH = 32,
    parameter LINE_BYTES = 16,   // power of 2, must be > DATA_WIDTH/8
    parameter NUM_SETS   = 8     // power of 2
) (
    input  wire                    clk,
    input  wire                    rst_n,

    // CPU-facing read port
    input  wire                    cpu_req,
    input  wire [ADDR_WIDTH-1:0]   cpu_addr,
    output wire                    cpu_hit,     // combinational, valid same cycle as cpu_req on a hit
    output wire [DATA_WIDTH-1:0]   cpu_rdata,
    output wire                    cpu_stall,   // hold cpu_req/cpu_addr while this is high

    // Memory-facing refill port (whatever sits behind this just needs to
    // return one full line, LINE_BYTES*8 bits wide, when mem_ready pulses)
    output wire                    mem_req,
    output wire [ADDR_WIDTH-1:0]   mem_addr,    // line-aligned
    input  wire                    mem_ready,
    input  wire [LINE_BYTES*8-1:0] mem_rdata
);

    localparam WORDS_PER_LINE = LINE_BYTES / (DATA_WIDTH/8);
    localparam OFFSET_BITS    = $clog2(LINE_BYTES);
    localparam WORD_SEL_BITS  = $clog2(WORDS_PER_LINE);
    localparam INDEX_BITS     = $clog2(NUM_SETS);
    localparam TAG_BITS       = ADDR_WIDTH - INDEX_BITS - OFFSET_BITS;

    // ---- Storage: one valid bit / tag / line of words per set ----------
    reg                  valid_array [0:NUM_SETS-1];
    reg [TAG_BITS-1:0]   tag_array   [0:NUM_SETS-1];
    reg [DATA_WIDTH-1:0] data_array  [0:NUM_SETS-1][0:WORDS_PER_LINE-1];

    // ---- Address decomposition: factored into its own module -----------
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

    // ---- FSM: IDLE (combinational hit/miss decision) <-> REFILL ---------
    localparam S_IDLE   = 1'b0;
    localparam S_REFILL = 1'b1;
    reg state;

    wire hit_comb = valid_array[index] && (tag_array[index] == tag_in);

    assign cpu_hit   = (state == S_IDLE) && cpu_req && hit_comb;
    assign cpu_rdata = data_array[index][word_sel];
    assign cpu_stall = (state == S_REFILL) || (cpu_req && !hit_comb);

    assign mem_req  = (state == S_REFILL);
    assign mem_addr = {cpu_addr[ADDR_WIDTH-1:OFFSET_BITS], {OFFSET_BITS{1'b0}}};

    integer i, w;

    // ---- Sequential: state transitions + array writes on refill --------
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state <= S_IDLE;
            for (i = 0; i < NUM_SETS; i = i + 1)
                valid_array[i] <= 1'b0;
        end else begin
            case (state)
                S_IDLE: begin
                    if (cpu_req && !hit_comb)
                        state <= S_REFILL;
                end
                S_REFILL: begin
                    if (mem_ready) begin
                        valid_array[index] <= 1'b1;
                        tag_array[index]   <= tag_in;
                        for (w = 0; w < WORDS_PER_LINE; w = w + 1)
                            data_array[index][w] <= mem_rdata[w*DATA_WIDTH +: DATA_WIDTH];
                        state <= S_IDLE;
                    end
                end
            endcase
        end
    end

endmodule