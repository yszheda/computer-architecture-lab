`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:47:24 03/09/2011 
// Design Name: 
// Module Name:    ctltop 
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
module ctltop(clk, OP, RegDst, ALUsrc, ALUop, MemtoReg,
RegWrite, MemRead, MemWrite, Branch, Jump);
    input clk;
    input [5:0] OP;
    output RegDst;
    output ALUsrc;
    output [1:0] ALUop;
    output MemtoReg;
    output RegWrite;
    output MemRead;
    output MemWrite;
    output Branch;
    output Jump;

   assign RegDst = ~OP[5] & ~OP[4] & ~OP[3] & ~OP[2] & ~OP[1] & ~OP[0];
 	assign MemtoReg =OP[5] & ~OP[4] & ~OP[3] & ~OP[2] & OP[1] & OP[0];
	assign RegWrite =~OP[4] & ~OP[3] & ~OP[2];
	assign ALUsrc 	=OP[5] & ~OP[4] & ~OP[2] & OP[1] & OP[0];
	assign ALUop[1] =~OP[5] & ~OP[4] & ~OP[3] & ~OP[2] & ~OP[1] & ~OP[0];
	assign ALUop[0] =~OP[5] & ~OP[4] & ~OP[3] & OP[2] & ~OP[1] & ~OP[0];
	assign MemRead =OP[5] & ~OP[4] & ~OP[3] & ~OP[2] & OP[1] & OP[0];
	assign MemWrite =OP[5] & ~OP[4] & OP[3] & ~OP[2] & OP[1] & OP[0];
	assign Branch 	=~OP[5] & ~OP[4] & ~OP[3] & OP[2] & ~OP[1] & ~OP[0];
	assign Jump =~OP[5] & ~OP[4] & ~OP[3] & ~OP[2] & OP[1] & ~OP[0];
endmodule

