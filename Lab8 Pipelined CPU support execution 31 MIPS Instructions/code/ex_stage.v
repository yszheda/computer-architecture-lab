`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:35:18 03/30/2011 
// Design Name: 
// Module Name:    ex_stage 
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
//ex_stage
module ex_stage (clk,  id_imm, id_a_in, id_b_in, id_wreg, id_m2reg, id_wmem, id_aluc, id_aluimm,id_shift, id_branch, id_pc4,id_destR,
	ex_wreg, ex_m2reg, ex_wmem, ex_aluR, ex_inB, ex_destR, ex_branch, ex_pc, ex_zero, 
	ID_ins_type, ID_ins_number, EXE_ins_type, EXE_ins_number, LED1, temp_content/**/);
	
	input clk;
	input[31:0] id_imm;
	input [31:0] id_a_in;
	input [31:0] id_b_in;
	input id_wreg;
	input id_m2reg;
	input id_wmem;
	input[5:0] id_aluc;
	input id_aluimm;
	input id_shift;
	input id_branch;
	input[31:0] id_pc4;
	input[4:0] id_destR;

	output ex_wreg;
	output ex_m2reg;
	output ex_wmem;
	output[31:0] ex_aluR;
	output[31:0] ex_inB;
	output[4:0] ex_destR;
	output ex_branch;
	output[31:0] ex_pc;
	output ex_zero;

	input[3:0] ID_ins_type;
	input[3:0] ID_ins_number;
	output[3:0] EXE_ins_type;
	output[3:0] EXE_ins_number;
	output LED1;
	output [31:0] temp_content; //for test

	wire [31:0] temp_content;
	wire [5:0] ealuc;
	wire ealuimm,eshift;
	wire [31:0] sa;
	wire [31:0] edata_a,edata_b,a_in,b_in,odata_imm;
	wire [31:0] ex_aluR;
	wire [31:0] epc4;
	wire [4:0] ex_destR;
	
	assign a_in = eshift? sa: edata_a;
	assign b_in = ealuimm? odata_imm: edata_b;

	assign ex_inB = edata_b;//////
	assign ex_pc = epc4 + odata_imm;
	assign ex_zero = (a_in - b_in) ? 0: 1;
	
//*
	assign temp_content[31:24]=a_in[7:0];
	assign temp_content[23:16]=b_in[7:0];
	assign temp_content[15:8]=ex_aluR[7:0];
	assign temp_content[4:0]=ex_destR[4:0];
//	*/
//	assign temp_content=ex_aluR;
//*/	

	Reg_ID_EXE	x_Reg_ID_EXE(clk, id_wreg,id_m2reg,id_wmem,id_aluc,id_shift,id_aluimm, id_a_in,id_b_in,id_imm,id_branch,id_pc4,id_destR,
					ex_wreg,ex_m2reg,	ex_wmem,ealuc,	eshift, ealuimm, edata_a,edata_b, odata_imm, ex_branch, epc4,ex_destR,
					ID_ins_type, ID_ins_number, EXE_ins_type, EXE_ins_number);
					//, id_fwda,id_fwdb,ex_fwda,ex_fwdb);
	imm2sa x_imm2sa(odata_imm,sa);		
	Alu x_Alu(a_in,b_in,ealuc,ex_aluR, LED1);
	
	
endmodule

