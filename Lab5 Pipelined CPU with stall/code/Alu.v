`timescale 1ns / 1ps
`include "macro.vh"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:48:21 03/30/2011 
// Design Name: 
// Module Name:    Alu 
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
module Alu(A,B,ALUoper,Result);
 
	input[31:0] A,B;
	input[3:0] ALUoper;
	output reg[31:0] Result;
	//output reg Zero;

	always@(ALUoper or A or B) begin
		case(ALUoper[3:0])
		   `ALU_ADD: Result<=A+B;
		   `ALU_SUB: Result<=A-B;
		   `ALU_AND: Result<=A&B;
		   `ALU_OR:  Result<=A|B;
		   `ALU_NOR: Result<=~(A|B);
		   `ALU_SLT: Result<=(B>A)?1:0;
		//   `ALU_SLL:	
		//   `ALU_SRL:	
		//   `ALU_SRA:	
		//   `ALU_NONE:
			default: Result<={32{1'bx}};	
		endcase
	//	Zero<=(Result==0)?1:0;
	end
   
endmodule
