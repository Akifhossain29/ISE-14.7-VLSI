`timescale 1ns / 1ps

module control_unit_tb;

    // Inputs
    reg [3:0] opcode;
    reg [7:0] operand;
    reg z_flag;

    // Outputs
    wire acc_load;
    wire [2:0] acc_sel;
    wire pc_load;
    wire [3:0] pc_target;

    // Instantiate the Unit Under Test (UUT)
    control_unit uut (
        .opcode(opcode),
        .operand(operand),
        .z_flag(z_flag),
        .acc_load(acc_load),
        .acc_sel(acc_sel),
        .pc_load(pc_load),
        .pc_target(pc_target)
    );
	 initial begin
        // Test LDI instruction control signals
        opcode = 4'b0001;
        operand = 8'hFF;
        z_flag = 0;
        #10;
        if (acc_load !== 1'b1 || acc_sel !== 3'b001)
            $display("FAIL: LDI control");
        else
            $display("PASS: LDI control");
				
		  // Test ADD instruction control signals
        opcode = 4'b0010;
        #10;
        if (acc_load !== 1'b1 || acc_sel !== 3'b010)
            $display("FAIL: ADD control");
        else
            $display("PASS: ADD control");
		  // Test NOT instruction control signals
        opcode = 4'b0111;
        #10;
        if (acc_load !== 1'b1 || acc_sel !== 3'b011)
            $display("FAIL: NOT control");
        else
            $display("PASS: NOT control");

        // Test SHL instruction control signals
        opcode = 4'b1000;
        #10;
        if (acc_load !== 1'b1 || acc_sel !== 3'b100)
            $display("FAIL: SHL control");
        else
            $display("PASS: SHL control");
				
		  // Test JZ instruction (taken when z_flag = 1)
        opcode = 4'b1100;
        operand = 8'h05;
        z_flag = 1;
        #10;
        if (pc_load !== 1'b1 || pc_target !== 4'h5)
            $display("FAIL: JZ taken");
        else
            $display("PASS: JZ taken");
		  // Test JZ instruction (not taken when z_flag = 0)
        operand = 8'h00;
        z_flag = 0;
        #10;
        if (pc_load !== 1'b0)
            $display("FAIL: JZ not taken");
        else
            $display("PASS: JZ not taken");
		  
		  // Test NOP instruction control signals
        opcode = 4'b0000;
        #10;
        if (acc_load !== 1'b0 || pc_load !== 1'b0)
            $display("FAIL: NOP control");
        else
            $display("PASS: NOP control");

        $finish;
    end

    initial begin
        $monitor("Time=%0t | Opcode=%b | Z=%b | acc_load=%b | acc_sel=%b | pc_load=%b | target=%h",
                 $time, opcode, z_flag, acc_load, acc_sel,
                 pc_load, pc_target);
    end

endmodule