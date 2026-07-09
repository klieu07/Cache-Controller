module set_associative_cache #(
    parameter ADDR_WIDTH = 32,
    parameter DATA_WIDTH = 32,
    parameter LINE_BYTES = 16,
    parameter NUM_SETS   = 8,
    parameter NUM_WAYS   = 2      // 2 = true LRU via counters is cheapest; scheme is general
) (
    input  wire                    clk,
    input  wire                    rst_n,

    input  wire                    cpu_req,
    input  wire                    cpu_we,
    input  wire [ADDR_WIDTH-1:0]   cpu_addr,
    input  wire [DATA_WIDTH-1:0]   cpu_wdata,
    output wire                    cpu_hit,
    output wire [DATA_WIDTH-1:0]   cpu_rdata,
    output wire                    cpu_stall,

    output wire                    mem_req,
    output wire [ADDR_WIDTH-1:0]   mem_addr,
    input  wire                    mem_ready,
    input  wire [LINE_BYTES*8-1:0] mem_rdata,

    output wire                    mem_wr_req,
    output wire [ADDR_WIDTH-1:0]   mem_wr_addr,
    output wire [LINE_BYTES*8-1:0] mem_wr_data,
    input  wire                    mem_wr_done
);

    localparam WORDS_PER_LINE = LINE_BYTES / (DATA_WIDTH/8);
    localparam OFFSET_BITS    = $clog2(LINE_BYTES);
    localparam WORD_SEL_BITS  = $clog2(WORDS_PER_LINE);
    localparam INDEX_BITS     = $clog2(NUM_SETS);
    localparam TAG_BITS       = ADDR_WIDTH - INDEX_BITS - OFFSET_BITS;
    localparam WAY_BITS       = (NUM_WAYS > 1) ? $clog2(NUM_WAYS) : 1;

    // ---- Storage: now [set][way] ----------------------------------------
    reg                  valid_array [0:NUM_SETS-1][0:NUM_WAYS-1];
    reg                  dirty_array [0:NUM_SETS-1][0:NUM_WAYS-1];
    reg [TAG_BITS-1:0]   tag_array   [0:NUM_SETS-1][0:NUM_WAYS-1];
    reg [DATA_WIDTH-1:0] data_array  [0:NUM_SETS-1][0:NUM_WAYS-1][0:WORDS_PER_LINE-1];
    reg [WAY_BITS-1:0]   lru_counter [0:NUM_SETS-1][0:NUM_WAYS-1]; // permutation of 0..NUM_WAYS-1; 0 = LRU

    // ---- Address decomposition (same module as Day 2/3) ------------------
    wire [INDEX_BITS-1:0]    index;
    wire [TAG_BITS-1:0]      tag_in;
    wire [WORD_SEL_BITS-1:0] word_sel;

    address_decoder #(
        .ADDR_WIDTH(ADDR_WIDTH), .DATA_WIDTH(DATA_WIDTH),
        .LINE_BYTES(LINE_BYTES), .NUM_SETS(NUM_SETS)
    ) addr_dec (
        .addr(cpu_addr), .index(index), .tag(tag_in), .word_sel(word_sel)
    );

    // ---- Hit search: does ANY way in this set match? ---------------------
    reg                hit_comb_r;
    reg [WAY_BITS-1:0] hit_way_r;
    integer hw;
    always @* begin
        hit_comb_r = 1'b0;
        hit_way_r  = {WAY_BITS{1'b0}};
        for (hw = 0; hw < NUM_WAYS; hw = hw + 1) begin
            if (valid_array[index][hw] && (tag_array[index][hw] == tag_in)) begin
                hit_comb_r = 1'b1;
                hit_way_r  = hw[WAY_BITS-1:0];
            end
        end
    end

    // ---- Victim selection: first invalid way, else the true-LRU way -----
    reg [WAY_BITS-1:0] victim_way_r;
    reg                victim_is_invalid_r;
    integer vw;
    always @* begin
        victim_way_r        = {WAY_BITS{1'b0}};
        victim_is_invalid_r = 1'b0;
        for (vw = 0; vw < NUM_WAYS; vw = vw + 1)
            if (lru_counter[index][vw] == {WAY_BITS{1'b0}})
                victim_way_r = vw[WAY_BITS-1:0];              // the way with counter==0 is LRU
        for (vw = 0; vw < NUM_WAYS; vw = vw + 1) begin
            if (!valid_array[index][vw] && !victim_is_invalid_r) begin
                victim_way_r        = vw[WAY_BITS-1:0];       // prefer a free way over evicting
                victim_is_invalid_r = 1'b1;
            end
        end
    end

    wire need_writeback = valid_array[index][victim_way_r] && dirty_array[index][victim_way_r];

    // ---- FSM: IDLE -> (WRITEBACK if victim dirty ->) REFILL -> IDLE ------
    localparam S_IDLE      = 2'b00;
    localparam S_WRITEBACK = 2'b01;
    localparam S_REFILL    = 2'b10;
    reg [1:0] state;

    assign cpu_hit   = (state == S_IDLE) && cpu_req && hit_comb_r;
    assign cpu_rdata = data_array[index][hit_way_r][word_sel];
    assign cpu_stall = (state != S_IDLE) || (cpu_req && !hit_comb_r);

    assign mem_req  = (state == S_REFILL);
    assign mem_addr = {cpu_addr[ADDR_WIDTH-1:OFFSET_BITS], {OFFSET_BITS{1'b0}}};

    assign mem_wr_req  = (state == S_WRITEBACK);
    assign mem_wr_addr = {tag_array[index][victim_way_r], index, {OFFSET_BITS{1'b0}}};
    assign mem_wr_data = mem_wr_data_r;

    reg [LINE_BYTES*8-1:0] mem_wr_data_r;
    integer k;
    always @* begin
        for (k = 0; k < WORDS_PER_LINE; k = k + 1)
            mem_wr_data_r[k*DATA_WIDTH +: DATA_WIDTH] = data_array[index][victim_way_r][k];
    end

    // ---- bump_lru: exact-LRU counter update, factored into one task -----
    // Maintains the invariant that lru_counter[s][*] is always a permutation
    // of 0..NUM_WAYS-1 (0 = least recently used, NUM_WAYS-1 = most recent).
    // Called on EVERY access to the accessed way -- hit or post-miss-fill.
    task automatic bump_lru(input [INDEX_BITS-1:0] s, input [WAY_BITS-1:0] w);
        integer j;
        reg [WAY_BITS-1:0] old_val;
        begin
            old_val = lru_counter[s][w];
            for (j = 0; j < NUM_WAYS; j = j + 1) begin
                if ((j != w) && (lru_counter[s][j] > old_val))
                    lru_counter[s][j] <= lru_counter[s][j] - 1'b1;
            end
            lru_counter[s][w] <= NUM_WAYS - 1;
        end
    endtask

    integer si, wi, wj;

    // ---- Sequential: state transitions + array writes --------------------
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state <= S_IDLE;
            for (si = 0; si < NUM_SETS; si = si + 1) begin
                for (wi = 0; wi < NUM_WAYS; wi = wi + 1) begin
                    valid_array[si][wi] <= 1'b0;
                    dirty_array[si][wi] <= 1'b0;
                    lru_counter[si][wi] <= wi[WAY_BITS-1:0]; // any valid permutation; don't-care until a set fills up
                end
            end
        end else begin
            case (state)
                S_IDLE: begin
                    if (cpu_req && !hit_comb_r) begin
                        state <= need_writeback ? S_WRITEBACK : S_REFILL;
                    end else if (cpu_req && hit_comb_r) begin
                        if (cpu_we) begin
                            data_array[index][hit_way_r][word_sel] <= cpu_wdata;
                            dirty_array[index][hit_way_r]          <= 1'b1;
                        end
                        bump_lru(index, hit_way_r);
                    end
                end
                S_WRITEBACK: begin
                    if (mem_wr_done)
                        state <= S_REFILL;
                end
                S_REFILL: begin
                    if (mem_ready) begin
                        valid_array[index][victim_way_r] <= 1'b1;
                        tag_array[index][victim_way_r]   <= tag_in;
                        for (wj = 0; wj < WORDS_PER_LINE; wj = wj + 1) begin
                            if (cpu_we && (wj == word_sel))
                                data_array[index][victim_way_r][wj] <= cpu_wdata;
                            else
                                data_array[index][victim_way_r][wj] <= mem_rdata[wj*DATA_WIDTH +: DATA_WIDTH];
                        end
                        dirty_array[index][victim_way_r] <= cpu_we;
                        bump_lru(index, victim_way_r);
                        state <= S_IDLE;
                    end
                end
            endcase
        end
    end

endmodule