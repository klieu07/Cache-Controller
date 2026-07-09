`timescale 1ns/1ps

module tb_trace_driven;

    localparam ADDR_WIDTH = 32;
    localparam DATA_WIDTH = 32;
    localparam LINE_BYTES = 16;
    localparam NUM_SETS   = 8;
    localparam NUM_WAYS   = 2;   // only used when USE_SET_ASSOC is defined
    localparam LATENCY    = 4;

    localparam HIT_TIME_CYCLES    = 1;
    localparam MISS_PENALTY_CYCLES = 100;

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

`ifdef USE_SET_ASSOC
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
`else
    direct_mapped_cache #(
        .ADDR_WIDTH(ADDR_WIDTH), .DATA_WIDTH(DATA_WIDTH),
        .LINE_BYTES(LINE_BYTES), .NUM_SETS(NUM_SETS)
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
`endif

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

    task do_op(input rw, input [ADDR_WIDTH-1:0] addr, input [DATA_WIDTH-1:0] wdata);
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
            @(posedge clk);
            #1;
            cpu_req = 1'b0;
        end
    endtask

    integer fd;
    integer scan_ret;
    reg [8*8-1:0]        op_str;
    reg [ADDR_WIDTH-1:0] trace_addr;
    integer n_ops;
    real    hit_rate, amat;

    initial begin
        clk = 0; rst_n = 0; cpu_req = 0; cpu_we = 0; cpu_addr = 0; cpu_wdata = 0;
        hits = 0; misses = 0; n_ops = 0;

        repeat (2) @(posedge clk);
        rst_n = 1;
        @(posedge clk);

`ifdef USE_SET_ASSOC
        $display("--- tb_trace_driven: set_associative_cache (NUM_WAYS=%0d) ---", NUM_WAYS);
`else
        $display("--- tb_trace_driven: direct_mapped_cache ---");
`endif

        fd = $fopen("tb/trace_random1.txt", "r");
        if (fd == 0) begin
            $display("ERROR: could not open tb/trace_random1.txt -- this path assumes you run the simulation binary from your repo root (cache-controller/), matching every other command in this project");
            $finish;
        end

        while (!$feof(fd)) begin
            scan_ret = $fscanf(fd, "%s %h\n", op_str, trace_addr);
            if (scan_ret == 2) begin
                n_ops = n_ops + 1;
                if (op_str == "W")
                    do_op(1'b1, trace_addr, trace_addr); // synthetic write data = address, unused by this trace
                else
                    do_op(1'b0, trace_addr, {DATA_WIDTH{1'b0}});
            end
        end
        $fclose(fd);

        hit_rate = 100.0 * hits / (hits + misses);
        amat     = HIT_TIME_CYCLES + (1.0 * misses / (hits + misses)) * MISS_PENALTY_CYCLES;

        $display("\nops=%0d hits=%0d misses=%0d hit_rate=%0.1f%% AMAT=%0.2f cycles",
                  n_ops, hits, misses, hit_rate, amat);
        $finish;
    end

endmodule