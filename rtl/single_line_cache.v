module single_line_cache #(
    parameter ADDR_WIDTH = 32,
    parameter LINE_BYTES = 4
)(
    input  wire                    clk,
    input  wire                    rst_n,
    input  wire [ADDR_WIDTH-1:0]   addr,
    input  wire                    write_enable,
    input  wire [8*LINE_BYTES-1:0] write_data,
    output wire [8*LINE_BYTES-1:0] read_data,
    output wire                    hit
);

    localparam OFFSET_BITS = $clog2(LINE_BYTES);
    localparam TAG_BITS    = ADDR_WIDTH - OFFSET_BITS;

    wire [TAG_BITS-1:0] addr_tag = addr[ADDR_WIDTH-1:OFFSET_BITS];

    reg                    valid;
    reg [TAG_BITS-1:0]     stored_tag;
    reg [8*LINE_BYTES-1:0] stored_data;

    assign hit       = valid && (stored_tag == addr_tag);
    assign read_data = stored_data;

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            valid       <= 1'b0;
            stored_tag  <= {TAG_BITS{1'b0}};
            stored_data <= {8*LINE_BYTES{1'b0}};
        end else if (write_enable) begin
            valid       <= 1'b1;
            stored_tag  <= addr_tag;
            stored_data <= write_data;
        end
    end

endmodule