`timescale 1ns / 1ps

module pc (
    input wire clk,
    input wire reset,
    input wire pc_load,
    input wire [3:0] pc_target,
    output reg [3:0] pc_out
);

always @(posedge clk) begin
    if (reset)
        pc_out <= 4'b0000;
    else if (pc_load)
        pc_out <= pc_target;
    else
        pc_out <= pc_out + 4'b0001;
end

endmodule
