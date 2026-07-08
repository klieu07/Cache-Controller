`timescale 1ns/1ps

module tb_direct_mapped_cache;

    localparam ADDR_WIDTH = 32;
    localparam DATA_WIDTH = 32;
    localparam LINE_BYTES = 16;
    localparam NUM_SETS   = 8;
    localparam LATENCY    = 4;

    reg  clk;
    reg  rst_n;

    reg                     cpu_req;
    reg  [ADDR_WIDTH-1:0]   cpu_addr;
    wire                    cpu_hit;
    wire [DATA_WIDTH-1:0]   cpu_rdata;
    wire                    cpu_stall;

    wire                    mem_req;
    wire [ADDR_WIDTH-1:0]   mem_addr;
    wire                    mem_ready;
    wire [LINE_BYTES*8-1:0] mem_rdata;

    integer hits;
    integer misses;

    direct_mapped_cache #(
        .ADDR_WIDTH(ADDR_WIDTH), .DATA_WIDTH(DATA_WIDTH),
        .LINE_BYTES(LINE_BYTES), .NUM_SETS(NUM_SETS)
    ) dut (
        .clk(clk), .rst_n(rst_n),
        .cpu_req(cpu_req), .cpu_addr(cpu_addr),
        .cpu_hit(cpu_hit), .cpu_rdata(cpu_rdata), .cpu_stall(cpu_stall),
        .mem_req(mem_req), .mem_addr(mem_addr),
        .mem_ready(mem_ready), .mem_rdata(mem_rdata)
    );

    mem_model #(
        .ADDR_WIDTH(ADDR_WIDTH), .DATA_WIDTH(DATA_WIDTH),
        .LINE_BYTES(LINE_BYTES), .LATENCY(LATENCY)
    ) mem (
        .clk(clk), .rst_n(rst_n),
        .mem_req(mem_req), .mem_addr(mem_addr),
        .mem_ready(mem_ready), .mem_rdata(mem_rdata)
    );

    always #5 clk = ~clk;

    task do_read(input [ADDR_WIDTH-1:0] addr, input [8*32-1:0] label);
        reg was_miss;
        begin
            @(posedge clk);
            cpu_addr = addr;
            cpu_req  = 1'b1;
            #1;
            // Classify hit/miss from the FIRST combinational read of
            // cpu_stall -- this is the one moment that reflects the
            // original tag-compare decision, before the while loop
            // below (if any) drives the FSM through REFILL back to a
            // (now guaranteed) hit.
            was_miss = cpu_stall;
            if (was_miss) misses = misses + 1; else hits = hits + 1;
            while (cpu_stall) begin
                @(posedge clk);
                #1;
            end
            $display("[%0t] %-28s addr=%08h index=%0d %-4s rdata=%08h",
                      $time, label, addr, dut.index,
                      (was_miss ? "MISS" : "HIT"), cpu_rdata);
            cpu_req = 1'b0;
        end
    endtask

    initial begin
        clk = 0; rst_n = 0; cpu_req = 0; cpu_addr = 0;
        hits = 0; misses = 0;

        repeat (2) @(posedge clk);
        rst_n = 1;
        @(posedge clk);

        $display("--- direct_mapped_cache directed trace ---");
        $display("(predict hit/miss for each line by hand first)\n");

        do_read(32'h0000_0000, "1: A cold");
        do_read(32'h0000_0000, "2: A repeat");
        do_read(32'h0000_0080, "3: B same set as A");
        do_read(32'h0000_0000, "4: A again");
        do_read(32'h0000_0010, "5: C different set");
        do_read(32'h0000_0000, "6: A still resident");

        $display("\nhits=%0d misses=%0d hit_rate=%0.1f%%",
                  hits, misses, (100.0 * hits) / (hits + misses));
        $finish;
    end

endmodule