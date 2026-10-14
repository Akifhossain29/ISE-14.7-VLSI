`timescale 1ns / 1ps
module accumulator (
    input wire clk,
    input wire reset,
    input wire acc_load,
    input wire [7:0] acc_data,

    output reg [7:0] acc_out,
    output reg z_flag
);

always @(posedge clk) begin
    if (reset) begin
        acc_out <= 8'h00;
        z_flag <= 1'b1;
    end
    else if (acc_load) begin
        acc_out <= acc_data;
        z_flag <= (acc_data == 8'h00);
    end
end

endmodule