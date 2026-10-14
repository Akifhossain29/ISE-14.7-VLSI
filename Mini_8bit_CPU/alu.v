`timescale 1ns / 1ps
module alu (
    input wire [7:0] acc_in,
    input wire [7:0] operand,
    input wire [3:0] opcode,
    output reg [7:0] alu_result
);

always @(*) begin
    case (opcode)

        4'b0010: alu_result = acc_in + operand; // ADD
        4'b0111: alu_result = ~acc_in;          // NOT
        4'b1000: alu_result = acc_in << 1;      // SHL

        default: alu_result = acc_in;

    endcase
end

endmodule