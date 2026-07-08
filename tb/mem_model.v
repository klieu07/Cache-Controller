module mem_model #(
    parameter ADDR_WIDTH = 32,
    parameter DATA_WIDTH = 32,
    parameter LINE_BYTES = 16,
    parameter LATENCY    = 4      // cycles from mem_req to mem_ready
) (
    input  wire                    clk,
    input  wire                    rst_n,
    input  wire                    mem_req,
    input  wire [ADDR_WIDTH-1:0]   mem_addr,   // line-aligned
    output reg                     mem_ready,
    output reg  [LINE_BYTES*8-1:0] mem_rdata
);

    localparam WORDS_PER_LINE = LINE_BYTES / (DATA_WIDTH/8);
    localparam CNT_WIDTH      = $clog2(LATENCY + 1);

    reg [CNT_WIDTH-1:0]  cnt;
    reg                  busy;
    reg [ADDR_WIDTH-1:0] addr_latched;

    integer w;

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            busy      <= 1'b0;
            cnt       <= {CNT_WIDTH{1'b0}};
            mem_ready <= 1'b0;
        end else begin
            mem_ready <= 1'b0;
            if (!busy && mem_req) begin
                busy         <= 1'b1;
                cnt          <= {CNT_WIDTH{1'b0}};
                addr_latched <= mem_addr;
            end else if (busy) begin
                if (cnt == LATENCY - 1) begin
                    mem_ready <= 1'b1;
                    busy      <= 1'b0;
                end else begin
                    cnt <= cnt + 1'b1;
                end
            end
        end
    end

    always @* begin
        for (w = 0; w < WORDS_PER_LINE; w = w + 1)
            mem_rdata[w*DATA_WIDTH +: DATA_WIDTH] = addr_latched + (w * (DATA_WIDTH/8));
    end

endmodule