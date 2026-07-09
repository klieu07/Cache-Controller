module mem_model #(
    parameter ADDR_WIDTH = 32,
    parameter DATA_WIDTH = 32,
    parameter LINE_BYTES = 16,
    parameter LATENCY    = 4,     // cycles from request to ready/done
    parameter NUM_LINES  = 256    // size of the behavioral backing store
) (
    input  wire                    clk,
    input  wire                    rst_n,

    // read (refill) side
    input  wire                    mem_req,
    input  wire [ADDR_WIDTH-1:0]   mem_addr,     // line-aligned
    output reg                     mem_ready,
    output reg  [LINE_BYTES*8-1:0] mem_rdata,

    // write (write-back) side
    input  wire                    mem_wr_req,
    input  wire [ADDR_WIDTH-1:0]   mem_wr_addr,  // line-aligned
    input  wire [LINE_BYTES*8-1:0] mem_wr_data,
    output reg                     mem_wr_done
);

    localparam WORDS_PER_LINE = LINE_BYTES / (DATA_WIDTH/8);
    localparam OFFSET_BITS    = $clog2(LINE_BYTES);
    localparam LINE_IDX_BITS  = $clog2(NUM_LINES);
    localparam CNT_WIDTH      = $clog2(LATENCY + 1);

    reg                   busy;
    reg                   op_is_write;
    reg [CNT_WIDTH-1:0]   cnt;
    reg [ADDR_WIDTH-1:0]  addr_latched;
    reg [LINE_BYTES*8-1:0] wdata_latched;

    reg                  backing_written [0:NUM_LINES-1];
    reg [DATA_WIDTH-1:0] backing_data    [0:NUM_LINES-1][0:WORDS_PER_LINE-1];

    wire [LINE_IDX_BITS-1:0] line_idx = addr_latched[OFFSET_BITS +: LINE_IDX_BITS];

    integer li, wj, wk;

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            busy        <= 1'b0;
            cnt         <= {CNT_WIDTH{1'b0}};
            mem_ready   <= 1'b0;
            mem_wr_done <= 1'b0;
            for (li = 0; li < NUM_LINES; li = li + 1)
                backing_written[li] <= 1'b0;
        end else begin
            mem_ready   <= 1'b0;
            mem_wr_done <= 1'b0;
            if (!busy && mem_req) begin
                busy         <= 1'b1;
                op_is_write  <= 1'b0;
                cnt          <= {CNT_WIDTH{1'b0}};
                addr_latched <= mem_addr;
            end else if (!busy && mem_wr_req) begin
                busy          <= 1'b1;
                op_is_write   <= 1'b1;
                cnt           <= {CNT_WIDTH{1'b0}};
                addr_latched  <= mem_wr_addr;
                wdata_latched <= mem_wr_data;
            end else if (busy) begin
                if (cnt == LATENCY - 1) begin
                    busy <= 1'b0;
                    if (op_is_write) begin
                        backing_written[line_idx] <= 1'b1;
                        for (wj = 0; wj < WORDS_PER_LINE; wj = wj + 1)
                            backing_data[line_idx][wj] <= wdata_latched[wj*DATA_WIDTH +: DATA_WIDTH];
                        mem_wr_done <= 1'b1;
                        $display("[%0t] mem: WRITE-BACK line_idx=%0d addr=%08h word0=%08h",
                                  $time, line_idx, addr_latched, wdata_latched[DATA_WIDTH-1:0]);
                    end else begin
                        mem_ready <= 1'b1;
                    end
                end else begin
                    cnt <= cnt + 1'b1;
                end
            end
        end
    end

    always @* begin
        for (wk = 0; wk < WORDS_PER_LINE; wk = wk + 1) begin
            if (backing_written[line_idx])
                mem_rdata[wk*DATA_WIDTH +: DATA_WIDTH] = backing_data[line_idx][wk];
            else
                mem_rdata[wk*DATA_WIDTH +: DATA_WIDTH] = addr_latched + (wk * (DATA_WIDTH/8));
        end
    end

endmodule