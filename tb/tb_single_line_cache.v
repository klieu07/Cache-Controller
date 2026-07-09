`timescale 1ns / 1ps

module tb_single_line_cache;

    parameter ADDR_WIDTH = 32;
    parameter LINE_BYTES = 4;

    reg                       clk;
    reg                       rst_n;
    reg  [ADDR_WIDTH-1:0]     addr;
    reg                       write_enable;
    reg  [8*LINE_BYTES-1:0]   write_data;
    wire [8*LINE_BYTES-1:0]   read_data;
    wire                      hit;

    integer errors = 0;

    // DUT instantiation
    single_line_cache #(
        .ADDR_WIDTH(ADDR_WIDTH),
        .LINE_BYTES(LINE_BYTES)
    ) dut (
        .clk          (clk),
        .rst_n        (rst_n),
        .addr         (addr),
        .write_enable (write_enable),
        .write_data   (write_data),
        .read_data    (read_data),
        .hit          (hit)
    );

    // Clock: 10ns period
    always #5 clk = ~clk;

    // Self-checking task: compares actual vs. predicted, logs pass/fail
    task check_hit(input expected_hit, input [255:0] label);
        begin
            if (hit !== expected_hit) begin
                $display("FAIL [%s] at t=%0t: hit=%b, expected=%b",
                          label, $time, hit, expected_hit);
                errors = errors + 1;
            end else begin
                $display("PASS [%s] at t=%0t: hit=%b as predicted",
                          label, $time, hit);
            end
        end
    endtask

    task check_data(input [8*LINE_BYTES-1:0] expected_data, input [255:0] label);
        begin
            if (read_data !== expected_data) begin
                $display("FAIL [%s] at t=%0t: read_data=%h, expected=%h",
                          label, $time, read_data, expected_data);
                errors = errors + 1;
            end else begin
                $display("PASS [%s] at t=%0t: read_data=%h as predicted",
                          label, $time, read_data);
            end
        end
    endtask

    initial begin
        $dumpfile("tb_single_line_cache.vcd");
        $dumpvars(0, tb_single_line_cache);

        // ---- Init ----
        clk          = 0;
        rst_n        = 0;
        addr         = 0;
        write_enable = 0;
        write_data   = 0;

        // ---- Step 1: Reset ----
        // Predicted: valid=0 internally, so hit must be 0 regardless of addr.
        @(negedge clk);
        rst_n = 1;
        addr  = 32'h100;
        @(negedge clk);
        check_hit(1'b0, "after reset, before any write");

        // ---- Step 2: Write to 0x100 ----
        // Predicted: next cycle, tag for 0x100 is stored, valid=1.
        addr         = 32'h100;
        write_enable = 1;
        write_data   = 32'hDEADBEEF;
        @(negedge clk);
        write_enable = 0;

        // ---- Step 3: Read 0x100 ----
        // Predicted: same tag as what's stored -> hit=1, data=0xDEADBEEF.
        addr = 32'h100;
        #1; // let combinational hit/read_data settle before checking
        check_hit(1'b1, "read 0x100 after writing 0x100");
        check_data(32'hDEADBEEF, "read 0x100 after writing 0x100");

        // ---- Step 4: Read 0x104 ----
        // Predicted: 0x104 >> 2 != 0x100 >> 2 (different tag, since
        // LINE_BYTES=4 means each word is its own line) -> hit=0.
        @(negedge clk);
        addr = 32'h104;
        #1;
        check_hit(1'b0, "read 0x104, different tag from 0x100");

        // ---- Step 5: Write to 0x200 (evicts 0x100's line) ----
        // Predicted: line now holds 0x200's tag; 0x100 no longer hits.
        @(negedge clk);
        addr         = 32'h200;
        write_enable = 1;
        write_data   = 32'hCAFEF00D;
        @(negedge clk);
        write_enable = 0;

        // ---- Step 6: Read 0x200 ----
        // Predicted: hit=1, data=0xCAFEF00D.
        addr = 32'h200;
        #1;
        check_hit(1'b1, "read 0x200 after eviction write");
        check_data(32'hCAFEF00D, "read 0x200 after eviction write");

        // ---- Step 7: Read 0x100 again ----
        // Predicted: line was evicted by the 0x200 write -> hit=0.
        @(negedge clk);
        addr = 32'h100;
        #1;
        check_hit(1'b0, "read 0x100, should be evicted by 0x200 write");

        // ---- Summary ----
        if (errors == 0)
            $display("\n=== ALL TESTS PASSED ===");
        else
            $display("\n=== %0d TEST(S) FAILED ===", errors);

        $finish;
    end

endmodule