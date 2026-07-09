`timescale 1ns/1ps

module tb_set_associative_cache;

    localparam ADDR_WIDTH = 32;
    localparam DATA_WIDTH = 32;
    localparam LINE_BYTES = 16;
    localparam NUM_SETS   = 8;
    localparam NUM_WAYS   = 2;
    localparam LATENCY    = 4;

    reg  clk;
    reg  rst_n;

    reg                     cpu_req;
    reg                     cpu_we;
    reg  [ADDR_WIDTH-1:0]   cpu_addr;
    reg  [DATA_WIDTH-1:0]   cpu_wdata;
    wire                    cpu_hit;
    wire [DATA_WIDTH-1:0]   cpu_rdata;
    wire                    cpu_stall;

    wire                    mem_req;
    wire [ADDR_WIDTH-1:0]   mem_addr;
    wire                    mem_ready;
    wire [LINE_BYTES*8-1:0] mem_rdata;

    wire                    mem_wr_req;
    wire [ADDR_WIDTH-1:0]   mem_wr_addr;
    wire [LINE_BYTES*8-1:0] mem_wr_data;
    wire                    mem_wr_done;

    integer hits;
    integer misses;

    set_associative_cache #(
        .ADDR_WIDTH(ADDR_WIDTH), .DATA_WIDTH(DATA_WIDTH),
        .LINE_BYTES(LINE_BYTES), .NUM_SETS(NUM_SETS), .NUM_WAYS(NUM_WAYS)
    ) dut (
        .clk(clk), .rst_n(rst_n),
        .cpu_req(cpu_req), .cpu_we(cpu_we),
        .cpu_addr(cpu_addr), .cpu_wdata(cpu_wdata),
        .cpu_hit(cpu_hit), .cpu_rdata(cpu_rdata), .cpu_stall(cpu_stall),
        .mem_req(mem_req), .mem_addr(mem_addr),
        .mem_ready(mem_ready), .mem_rdata(mem_rdata),
        .mem_wr_req(mem_wr_req), .mem_wr_addr(mem_wr_addr),
        .mem_wr_data(mem_wr_data), .mem_wr_done(mem_wr_done)
    );

    mem_model #(
        .ADDR_WIDTH(ADDR_WIDTH), .DATA_WIDTH(DATA_WIDTH),
        .LINE_BYTES(LINE_BYTES), .LATENCY(LATENCY)
    ) mem (
        .clk(clk), .rst_n(rst_n),
        .mem_req(mem_req), .mem_addr(mem_addr),
        .mem_ready(mem_ready), .mem_rdata(mem_rdata),
        .mem_wr_req(mem_wr_req), .mem_wr_addr(mem_wr_addr),
        .mem_wr_data(mem_wr_data), .mem_wr_done(mem_wr_done)
    );

    always #5 clk = ~clk;

    task do_op(input rw, input [ADDR_WIDTH-1:0] addr, input [DATA_WIDTH-1:0] wdata,
               input [8*32-1:0] label);
        reg was_miss;
        begin
            @(posedge clk);
            cpu_addr  = addr;
            cpu_we    = rw;
            cpu_wdata = wdata;
            cpu_req   = 1'b1;
            #1;
            was_miss = cpu_stall;
            if (was_miss) misses = misses + 1; else hits = hits + 1;
            while (cpu_stall) begin
                @(posedge clk);
                #1;
            end
            @(posedge clk); // let a same-cycle write hit actually commit
            #1;
            $display("[%0t] %-24s addr=%08h idx=%0d way=%0d %-4s %-5s rdata=%08h",
                      $time, label, addr, dut.index, dut.hit_way_r,
                      (was_miss ? "MISS" : "HIT"), (rw ? "WRITE" : "READ"), cpu_rdata);
            cpu_req = 1'b0;
        end
    endtask

    task do_write(input [ADDR_WIDTH-1:0] addr, input [DATA_WIDTH-1:0] data, input [8*32-1:0] label);
        begin
            do_op(1'b1, addr, data, label);
        end
    endtask

    task do_read(input [ADDR_WIDTH-1:0] addr, input [8*32-1:0] label);
        begin
            do_op(1'b0, addr, {DATA_WIDTH{1'b0}}, label);
        end
    endtask

    initial begin
        clk = 0; rst_n = 0; cpu_req = 0; cpu_we = 0; cpu_addr = 0; cpu_wdata = 0;
        hits = 0; misses = 0;

        repeat (2) @(posedge clk);
        rst_n = 1;
        @(posedge clk);

        $display("--- set_associative_cache (NUM_WAYS=2) Day 4 trace ---");
        $display("(same trace as Day 3 -- predict hit/miss, then compare hit rates)\n");

        do_write(32'h0000_0000, 32'hAAAA_0000, "1: write A (cold)");
        do_read (32'h0000_0000,                "2: read A back");
        do_write(32'h0000_0080, 32'hBBBB_0000, "3: write B (same set)");
        do_read (32'h0000_0080,                "4: read B back");
        do_read (32'h0000_0000,                "5: read A (still there?)");
        do_read (32'h0000_0010,                "6: read C, other set");
        do_read (32'h0000_0000,                "7: read A, still there");

        $display("\nhits=%0d misses=%0d hit_rate=%0.1f%%",
                  hits, misses, (100.0 * hits) / (hits + misses));
        $display("Day 3 (direct-mapped) on the identical trace: hit_rate=42.9%%");
        $finish;
    end

endmodule