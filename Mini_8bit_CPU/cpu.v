`timescale 1ns / 1ps
module cpu (
    input wire CLK,
    input wire RESET,
    output wire [7:0] Q,
    output wire Z,
    output wire [3:0] PC
);

wire [11:0] instruction;
wire [3:0] opcode;
wire [7:0] operand;

wire acc_load;
wire [2:0] acc_sel;

wire pc_load;
wire [3:0] pc_target;

wire [7:0] alu_result;
reg [7:0] acc_data;

localparam SEL_ACC      = 3'b000;
localparam SEL_OPERAND  = 3'b001;
localparam SEL_ADD      = 3'b010;
localparam SEL_NOT      = 3'b011;
localparam SEL_SHL      = 3'b100;

// Separate opcode and operand from the 12-bit instruction
assign opcode = instruction[11:8];
assign operand = instruction[7:0];

// Program Counter
pc u_pc (
    .clk(CLK),
    .reset(RESET),
    .pc_load(pc_load),
    .pc_target(pc_target),
    .pc_out(PC)
);

// Program ROM
program_rom u_rom (
    .address(PC),
    .instruction(instruction)
);

// Control Unit
control_unit u_control (
    .opcode(opcode),
    .operand(operand),
    .z_flag(Z),
    .acc_load(acc_load),
    .acc_sel(acc_sel),
    .pc_load(pc_load),
    .pc_target(pc_target)
);

// ALU
alu u_alu (
    .acc_in(Q),
    .operand(operand),
    .opcode(opcode),
    .alu_result(alu_result)
);

// Select the data to write into ACC
always @(*) begin
    case (acc_sel)
        SEL_OPERAND: acc_data = operand;
        SEL_ADD:     acc_data = alu_result;
        SEL_NOT:     acc_data = alu_result;
        SEL_SHL:     acc_data = alu_result;
        default:     acc_data = Q;
    endcase
end

// Accumulator and Zero Flag
accumulator u_accumulator (
    .clk(CLK),
    .reset(RESET),
    .acc_load(acc_load),
    .acc_data(acc_data),
    .acc_out(Q),
    .z_flag(Z)
);

endmodule