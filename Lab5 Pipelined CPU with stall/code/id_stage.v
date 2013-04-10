`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:32:50 03/30/2011 
// Design Name: 
// Module Name:    id_stage 
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
module id_stage (clk, rst, if_inst, if_pc4, wb_destR, wb_dest,wb_wreg, 
	cu_wreg, cu_m2reg, cu_wmem, cu_aluc, cu_shift, cu_aluimm, cu_branch, id_pc4, id_inA, id_inB, id_imm, cu_regrt, rt, rd, 
	cu_wpcir,
	IF_ins_type, IF_ins_number, ID_ins_type, ID_ins_number, which_reg, reg_content);
	
	input clk;
	input rst;
	input [31:0] if_inst;
	input [31:0] if_pc4;
	
	input [4:0] wb_destR;
	input [31:0] wb_dest;
	input wb_wreg;
	
	
	input[3:0] IF_ins_type;
	input[3:0]	IF_ins_number;
	
	input [4:0] which_reg;
	output [31:0] reg_content;
	//--------------
	output cu_wpcir;
	
	output cu_branch;
	output cu_wreg;
	output cu_m2reg;
	output cu_wmem;
	output [3:0] cu_aluc;
	output cu_shift;
	output cu_aluimm;
	output [31:0] id_pc4;
	output [31:0] id_inA;
	output [31:0] id_inB;
	output [31:0] id_imm;
	output [4:0] cu_regrt;
	output [4:0] rd;
	output [4:0] rt;
	
	output[3:0] ID_ins_type;
	output[3:0] ID_ins_number;
	
	wire cu_sext;
	wire cu_regrt;
	wire cu_branch;
	
	reg [31:0] reg_inst;
	reg [31:0] pc4;
	
	wire [31:0] rdata_A;
	wire [31:0] rdata_B;
	wire [4:0] rt;
	wire [4:0] rd;
	wire [15:0] imm;
	wire [31:0] id_imm;
	
	wire [31:0] id_pc4;
	//---------------
	wire cu_wpcir;
	
	reg[3:0] ID_ins_type;
	reg[3:0] ID_ins_number;
	
	assign imm = reg_inst[15:0];
	assign rt= reg_inst[20:16];
	assign rd = reg_inst[15:11];
	assign id_imm = cu_sext?( imm[15]?{16'hffff,imm}:{16'b0,imm}):{16'b0,imm};
//	assign id_imm = cu_sext?( imm[15]?{16'b1,imm}:{16'b0,imm}):{16'b0,imm};
	assign id_pc4 = pc4;//
	
	always @ (posedge clk or posedge rst)
		if (rst==1)
		begin
			pc4 <= 32'hffffffff;
			ID_ins_type <= 4'b0000;
			ID_ins_number <= 4'b0000;
			
		end
		else
		begin
			if(cu_wpcir == 0)
			begin
				reg_inst <= if_inst;
				pc4 <= if_pc4;
				
				ID_ins_type <= IF_ins_type;
				ID_ins_number <= IF_ins_number;
			end
			else	//with stall
			begin
				reg_inst <= 0;
				ID_ins_type <= `INST_TYPE_NONE;
			end
		end
	
	regfile x_regfile(clk, rst, reg_inst[25:21], reg_inst[20:16], wb_destR, wb_dest, wb_wreg, rdata_A, rdata_B,
		which_reg, reg_content);
	ctrl_unit x_ctrl_unit(clk, rst, if_inst[31:0], reg_inst[31:0],
		cu_branch, cu_wreg, cu_m2reg, cu_wmem, cu_aluc, cu_shift, cu_aluimm, cu_sext, cu_regrt, cu_wpcir);
	
	assign id_inA=rdata_A;
	assign id_inB= rdata_B;
endmodule
