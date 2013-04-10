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
module Alu(A,B,ALUoper,Result, LED1);
 
	input[31:0] A,B;
	input[5:0] ALUoper;
	output reg[31:0] Result;
	output LED1;
	reg LED1;
	reg msbA;
	reg msbB;
	reg signed [31:0] Result_temp;
	//output reg Zero;

	always@(ALUoper or A or B) begin
		case(ALUoper[5:0])
		   `ALU_ADD: 	begin 
				Result= A+B;
				//Result = $unsigned(Result_temp);
				LED1 = ((~Result[31])&A[31]&B[31])||(Result[31]&(~A[31])&(~B[31]));
			end
			`ALU_ADDU:	begin
				Result= A+B;
				LED1 = 0;
			end
			`ALU_ADDI: 	begin 
				Result = A+B;
				LED1 = ((~Result[31])&A[31]&B[31])||(Result[31]&(~A[31])&(~B[31]));
			end
			`ALU_ADDIU:	begin
				Result = A+B;
				LED1 = 0;
			end
		   `ALU_SUB: begin 
				Result_temp = $signed(A)-$signed(B);
				Result = $unsigned(Result_temp);
				LED1 = ((~Result[31])&A[31]&(~B[31]))||(Result[31]&(~A[31])&(B[31]));
			end	
			`ALU_SUBU: 	begin
				Result = A-B;
				LED1 = 0;
			end
		   `ALU_AND: 	begin
				Result = A&B;
				LED1 = 0;
			end
		   `ALU_OR:  	begin 
				Result = A|B;
				LED1 = 0;
			end
			`ALU_ORI:  	begin 
				Result = A|B;
				LED1 = 0;
			end
			`ALU_XOR: 	begin 
				Result = A^B;
				LED1 = 0;
			end
			`ALU_XORI: 	begin
				Result = A^B;
				LED1 = 0;
			end
		   `ALU_NOR: 	begin
				Result = ~(A|B);
				LED1 = 0;
			end
		   `ALU_SLT: 	begin
				if(A[31]==1 && B[31]==0)
					Result = 1;
				else if (A[31]==0 && B[31]==1)
					Result = 0;
				else if (A[31]==0 && B[31]==0)
					Result = (A<B)?1:0;
				else
					Result = (B<A)?1:0;
				LED1 = 0;
			end 
			`ALU_SLTU: 	begin
				if(A[31]==1 && B[31]==0)
					Result = 0;
				else if (A[31]==0 && B[31]==1)
					Result = 1;
				else
					Result = (A<B)?1:0;
				LED1 = 0;
			end
			`ALU_SLTI: 	begin
				if(A[31]==1 && B[31]==0)
					Result = 1;
				else if (A[31]==0 && B[31]==1)
					Result = 0;
				else if (A[31]==0 && B[31]==0)
					Result = (A<B)?1:0;
				else
					Result = (B<A)?1:0;
				LED1 = 0;
			end
			`ALU_SLTIU: begin 
				if(A[31]==1 && B[31]==0)
					Result = 0;
				else if (A[31]==0 && B[31]==1)
					Result = 1;
				else
					Result = (A<B)?1:0;
				LED1 = 0;
			end
			`ALU_SLL:	begin
				Result = B << A;
				LED1 = 0;
			end
			`ALU_SLLV:	begin
				Result = B << A;
				LED1 = 0;
			end
			`ALU_SRL:	begin
				Result = $unsigned(B)>>A;
				LED1 = 0;
			end
			`ALU_SRLV:	begin
				Result = $unsigned(B)>>A;
				LED1 = 0;
			end
		   `ALU_SRA:	begin
				Result = $signed(B)>>>A;
				LED1 = 0;
			end
			`ALU_SRAV:	begin
				Result = $signed(B)>>>A;	
				LED1 = 0;
			end					
			`ALU_JR:		begin
				Result = A+B;
				LED1 = 0;
			end
			`ALU_LUI:	begin
				Result = B*65536;
				LED1 = 0;
			end
	//	   `ALU_NONE:
			default: begin
				Result ={32{1'bx}};	
				LED1 = 0;
			end
		endcase
	//	Zero<=(Result==0)?1:0;
	end
   
endmodule
