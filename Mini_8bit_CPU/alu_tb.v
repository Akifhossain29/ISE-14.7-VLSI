`timescale 1ns / 1ps

module alu_tb;

reg [7:0] acc_in;
reg [7:0] operand;
reg [3:0] opcode;
wire [7:0] alu_result;

alu uut (
    .acc_in(acc_in),
    .operand(operand),
    .opcode(opcode),
    .alu_result(alu_result)
);
initial begin
    acc_in = 8'h10;
    operand = 8'h05;
    opcode = 4'b0010;
    #10;
    if (alu_result !== 8'h15)
        $display("FAIL: ADD");
    else
        $display("PASS: ADD");
	 acc_in = 8'h0F;
    opcode = 4'b0111;
    #10;
    if (alu_result !== 8'hF0)
        $display("FAIL: NOT");
    else
        $display("PASS: NOT");

    acc_in = 8'h22;
    opcode = 4'b1000;
    #10;
    if (alu_result !== 8'h44)
        $display("FAIL: SHL");
    else
        $display("PASS: SHL");
	 $finish;
end

initial begin
    $monitor("Time=%0t Opcode=%b ACC=%h Operand=%h Result=%h",
             $time, opcode, acc_in, operand, alu_result);
end

endmodule