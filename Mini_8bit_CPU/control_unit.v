`timescale 1ns / 1ps
module control_unit (
    input wire [3:0] opcode,
    input wire [7:0] operand,
    input wire z_flag,

    output reg acc_load,
    output reg [2:0] acc_sel,
    output reg pc_load,
    output reg [3:0] pc_target
);

localparam OP_LDI = 4'b0001;
localparam OP_ADD = 4'b0010;
localparam OP_NOT = 4'b0111;
localparam OP_SHL = 4'b1000;
localparam OP_JZ  = 4'b1100;

localparam SEL_ACC      = 3'b000;
localparam SEL_OPERAND  = 3'b001;
localparam SEL_ADD      = 3'b010;
localparam SEL_NOT      = 3'b011;
localparam SEL_SHL      = 3'b100;

always @(*) begin
    acc_load = 1'b0;
    acc_sel = SEL_ACC;
    pc_load = 1'b0;
    pc_target = 4'b0000;

    case (opcode)

        OP_LDI: begin
            acc_load = 1'b1;
            acc_sel = SEL_OPERAND;
        end
		  
		  OP_ADD: begin
            acc_load = 1'b1;
            acc_sel = SEL_ADD;
        end

        OP_NOT: begin
            acc_load = 1'b1;
            acc_sel = SEL_NOT;
        end

        OP_SHL: begin
            acc_load = 1'b1;
            acc_sel = SEL_SHL;
        end
		  
		  OP_JZ: begin
            if (z_flag == 1'b1) begin
                pc_load = 1'b1;
                pc_target = operand[3:0];
            end
        end

        default: begin
            // NOP: ACC and Z remain unchanged.
            // PC increments normally.
        end

    endcase
end

endmodule