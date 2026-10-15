`timescale 1ns / 1ps
module program_rom (
    input wire [3:0] address,
    output reg [11:0] instruction
);

always @(*) begin
    case (address)
        4'h0: instruction = 12'h1FF; // LDI 0xFF
        4'h1: instruction = 12'h700; // NOT
        4'h2: instruction = 12'hC05; // JZ 0x05
        4'h3: instruction = 12'h277; // ADD 0x77
        4'h4: instruction = 12'h277; // ADD 0x77
        4'h5: instruction = 12'h211; // ADD 0x11
        4'h6: instruction = 12'h800; // SHL
		  4'h7: instruction = 12'hC00; // JZ 0x00
        4'h8: instruction = 12'h800; // SHL
        default: instruction = 12'h000; // NOP
    endcase
end

endmodule