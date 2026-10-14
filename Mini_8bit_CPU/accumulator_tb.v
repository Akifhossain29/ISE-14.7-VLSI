`timescale 1ns / 1ps

module accumulator_tb;

reg clk;
reg reset;
reg acc_load;
reg [7:0] acc_data;

wire [7:0] acc_out;
wire z_flag;

accumulator uut (
    .clk(clk),
    .reset(reset),
    .acc_load(acc_load),
    .acc_data(acc_data),
    .acc_out(acc_out),
    .z_flag(z_flag)
);

initial begin
    clk = 0;
    forever #5 clk = ~clk;
end

initial begin
    reset = 1;
    acc_load = 0;
    acc_data = 0;

    @(negedge clk);
    if (acc_out !== 8'h00 || z_flag !== 1'b1)
        $display("FAIL: Reset");
    else
        $display("PASS: Reset");
	 reset = 0;
    acc_load = 1;
    acc_data = 8'h25;

    @(negedge clk);
    if (acc_out !== 8'h25 || z_flag !== 1'b0)
        $display("FAIL: Nonzero data load");
    else
        $display("PASS: Nonzero data load");

    acc_data = 8'h00;

    @(negedge clk);
    if (acc_out !== 8'h00 || z_flag !== 1'b1)
        $display("FAIL: Zero flag");
    else
        $display("PASS: Zero flag");
	 acc_load = 0;
    acc_data = 8'hAA;

    @(negedge clk);
    if (acc_out !== 8'h00 || z_flag !== 1'b1)
        $display("FAIL: Hold previous value");
    else
        $display("PASS: Hold previous value");

    $finish;
end

initial begin
    $monitor("Time=%0t RESET=%b Load=%b Data=%h ACC=%h Z=%b",
             $time, reset, acc_load, acc_data, acc_out, z_flag);
end

endmodule