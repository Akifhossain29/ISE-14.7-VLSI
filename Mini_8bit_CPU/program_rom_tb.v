`timescale 1ns / 1ps

module program_rom_tb;

    reg [3:0] address;
    wire [11:0] instruction;

    // Instantiate the Unit Under Test (UUT)
    program_rom uut (
        .address(address),
        .instruction(instruction)
    );

    initial begin
        // Test LDI instruction at address 0
        address = 4'h0;
        #10;
        if (instruction !== 12'h1FF)
            $display("FAIL: LDI instruction");
        else
            $display("PASS: LDI instruction");
		  // Test NOT instruction at address 1
        address = 4'h1;
        #10;
        if (instruction !== 12'h700)
            $display("FAIL: NOT instruction");
        else
            $display("PASS: NOT instruction");

        // Test JZ instruction at address 2
        address = 4'h2;
        #10;
        if (instruction !== 12'hC05)
            $display("FAIL: JZ instruction");
        else
            $display("PASS: JZ instruction");
		  // Test ADD instruction at address 5
        address = 4'h5;
        #10;
        if (instruction !== 12'h211)
            $display("FAIL: ADD instruction");
        else
            $display("PASS: ADD instruction");

        // Test SHL instruction at address 6
        address = 4'h6;
        #10;
        if (instruction !== 12'h800)
            $display("FAIL: SHL instruction");
        else
            $display("PASS: SHL instruction");
		  // Test NOP instruction at address 9
        address = 4'h9;
        #10;
        if (instruction !== 12'h000)
            $display("FAIL: NOP instruction");
        else
            $display("PASS: NOP instruction");

        $finish;
    end

    initial begin
        $monitor("Time=%0t | Address=%h | Instruction=%h", 
                 $time, address, instruction);
    end

endmodule