`timescale 1ns / 1ps

module cpu_tb;

    // Inputs
    reg CLK;
    reg RESET;

    // Outputs
    wire [7:0] Q;
    wire Z;
    wire [3:0] PC;

    // Instantiate the Unit Under Test (UUT)
    cpu uut (
        .CLK(CLK),
        .RESET(RESET),
        .Q(Q),
        .Z(Z),
        .PC(PC)
    );

    // Clock generation (10ns period)
    initial begin
        CLK = 0;
        forever #5 CLK = ~CLK;
    end

    // Task to check expected outputs
    task check_output;
        input [3:0] expected_pc;
        input [7:0] expected_q;
        input expected_z;
        begin
            if (PC !== expected_pc ||
                Q !== expected_q ||
                Z !== expected_z) begin
                $display("FAIL: PC=%h Q=%h Z=%b", PC, Q, Z);
                $display("Expected: PC=%h Q=%h Z=%b",
                         expected_pc, expected_q, expected_z);
            end
            else begin
                $display("PASS: PC=%h Q=%h Z=%b", PC, Q, Z);
            end
        end
    endtask

    // Test sequence
    initial begin
        RESET = 1;
        
        // First rising edge: reset
        @(negedge CLK);
        check_output(4'h0, 8'h00, 1'b1);
        RESET = 0;

        // LDI 0xFF
        @(negedge CLK);
        check_output(4'h1, 8'hFF, 1'b0);

        // NOT: FF becomes 00
        @(negedge CLK);
        check_output(4'h2, 8'h00, 1'b1);

        // JZ 0x05: jump taken
        @(negedge CLK);
        check_output(4'h5, 8'h00, 1'b1);

        // ADD 0x11
        @(negedge CLK);
        check_output(4'h6, 8'h11, 1'b0);

        // SHL: 11 becomes 22
        @(negedge CLK);
        check_output(4'h7, 8'h22, 1'b0);

        // JZ 0x00: not taken
        @(negedge CLK);
        check_output(4'h8, 8'h22, 1'b0);

        // SHL: 22 becomes 44
        @(negedge CLK);
        check_output(4'h9, 8'h44, 1'b0);

        $display("CPU TESTBENCH FINISHED");
        $finish;
    end

    // Monitor signals
    initial begin
        $monitor("Time=%0t | RESET=%b | PC=%h | Q=%h | Z=%b",
                 $time, RESET, PC, Q, Z);
    end

endmodule