`timescale 1ns / 1ps

module pc_tb;

reg clk;
reg reset;
reg pc_load;
reg [3:0] pc_target;
wire [3:0] pc_out;

pc uut (
    .clk(clk),
    .reset(reset),
    .pc_load(pc_load),
    .pc_target(pc_target),
    .pc_out(pc_out)
);

initial begin
    clk = 0;
    forever #5 clk = ~clk;
end

initial begin
    reset = 1;
    pc_load = 0;
    pc_target = 0;

    @(negedge clk);
    reset = 0;
	 
	 @(negedge clk);
    if (pc_out !== 4'h1)
        $display("FAIL: PC increment");
    else
        $display("PASS: PC increment");

    pc_load = 1;
    pc_target = 4'h5;

    @(negedge clk);
    if (pc_out !== 4'h5)
        $display("FAIL: PC jump");
    else
        $display("PASS: PC jump");

    pc_load = 0;
	 
	 @(negedge clk);
    if (pc_out !== 4'h6)
        $display("FAIL: PC increment after jump");
    else
        $display("PASS: PC increment after jump");

    $finish;
end

initial begin
    $monitor("Time=%0t RESET=%b PC=%h",
             $time, reset, pc_out);
end

endmodule