`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:54:12 03/09/2011
// Design Name:   ctltop
// Module Name:   D:/workspace/CPUControl/ctltest_v.v
// Project Name:  CPUControl
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ctltop
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ctltest_v;

	// Inputs
	reg clk;
	reg [5:0] OP;

	// Outputs
	wire RegDst;
	wire ALUsrc;
	wire [1:0] ALUop;
	wire MemtoReg;
	wire RegWrite;
	wire MemRead;
	wire MemWrite;
	wire Branch;
	wire Jump;

	// Instantiate the Unit Under Test (UUT)
	ctltop uut (
		.clk(clk), 
		.OP(OP), 
		.RegDst(RegDst), 
		.ALUsrc(ALUsrc), 
		.ALUop(ALUop), 
		.MemtoReg(MemtoReg), 
		.RegWrite(RegWrite), 
		.MemRead(MemRead), 
		.MemWrite(MemWrite), 
		.Branch(Branch), 
		.Jump(Jump)
	);

	always begin
		clk =1;
		#80;
		clk =0;
		#80;
	end
	
	initial begin
		OP=6'b000000;
		#160	OP=6'b100011;
		#160	OP=6'b101011;
		#160	OP=6'b000100;
		#160	OP=6'b000010;
		#1000	$dumpflush;
		$stop;
	end
	

      
endmodule

