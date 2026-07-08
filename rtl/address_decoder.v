module address_decoder #(
    parameter ADDR_WIDTH = 32,
    parameter DATA_WIDTH = 32,
    parameter LINE_BYTES = 16,
    parameter NUM_SETS   = 8
) (
    input  wire [ADDR_WIDTH-1:0] addr,

    output wire [$clog2(NUM_SETS)-1:0]                          index,
    output wire [ADDR_WIDTH-$clog2(NUM_SETS)-$clog2(LINE_BYTES)-1:0] tag,
    output wire [$clog2(LINE_BYTES/(DATA_WIDTH/8))-1:0]         word_sel
);

    localparam WORDS_PER_LINE = LINE_BYTES / (DATA_WIDTH/8);
    localparam OFFSET_BITS    = $clog2(LINE_BYTES);
    localparam WORD_SEL_BITS  = $clog2(WORDS_PER_LINE);
    localparam INDEX_BITS     = $clog2(NUM_SETS);
    localparam TAG_BITS       = ADDR_WIDTH - INDEX_BITS - OFFSET_BITS;

    assign index    = addr[OFFSET_BITS +: INDEX_BITS];
    assign tag      = addr[ADDR_WIDTH-1 -: TAG_BITS];
    assign word_sel = addr[OFFSET_BITS-1 -: WORD_SEL_BITS];

endmodule