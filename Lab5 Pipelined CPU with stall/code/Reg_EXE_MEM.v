`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:38:00 03/30/2011 
// Design Name: 
// Module Name:    Reg_EXE_MEM 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Reg_EXE_MEM(clk,	ewreg,em2reg,ewmem,aluout,edata_b,erdrt, ebranch,epc,ezero,//inputs
							mwreg,mm2reg,mwmem,maluout,mdata_b,mrdrt, mbranch,mpc,mzero, 
							EXE_ins_type, EXE_ins_number, MEM_ins_type, MEM_ins_number);
	input clk,ewreg,em2reg,ewmem;
	input [31:0]	aluout,edata_b;
	input ebranch;
	input ezero;
	input [4:0]		erdrt;
	input [31:0] epc;
	
	output mwreg,mm2reg,mwmem;
	output [31:0]	maluout,mdata_b;
	output mbranch;
	output mzero;
	output [4:0]		mrdrt;
	output [31:0] mpc;
		
	input[3:0] EXE_ins_type;
	input[3:0]	EXE_ins_number;
	output[3:0] MEM_ins_type;
	output[3:0] MEM_ins_number;

	reg[3:0] MEM_ins_type;
	reg[3:0] MEM_ins_number;	
	reg mwreg,mm2reg,mwmem;
	reg [31:0]	maluout,mdata_b;
	reg [4:0]		mrdrt;
	reg mbranch;
	reg mzero;
	reg [31:0] mpc;
	
	always@(posedge clk) begin
		mwreg <= ewreg;
		mm2reg <= em2reg;
		mwmem <= ewmem;
		maluout <= aluout;
		mdata_b <= edata_b;
		mrdrt <= erdrt;
		mbranch <= ebranch;
		mpc <= epc;
		mzero <= ezero;
		MEM_ins_type <= EXE_ins_type;
		MEM_ins_number <= EXE_ins_number;
	end
endmodule

