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
module id_stage (clk, rst, if_inst, if_pc4, wb_destR,
	//
	ex_aluR,
	mem_aluR,
	mem_mdata,
	//
	wb_dest,wb_wreg, 
	cu_wreg, cu_m2reg, cu_wmem, cu_aluc, cu_shift, cu_aluimm, cu_branch, id_pc4,
	//
	nid_pc,
	jmp_stall,
	//
	id_a_in, id_b_in, id_imm, cu_regrt, rt, rd, 
	cu_wpcir,id_fwda,id_fwdb,
	IF_ins_type, IF_ins_number, ID_ins_type, ID_ins_number, which_reg, reg_content);
//	temp_content);
	
	input clk;
	input rst;
	input [31:0] if_inst;
	input [31:0] if_pc4;
	
	input [4:0] wb_destR;
	//
	input [31:0] ex_aluR;
	input [31:0] mem_aluR;
	input [31:0] mem_mdata;
	//
	input [31:0] wb_dest;
	input wb_wreg;
	
	
	input[3:0] IF_ins_type;
	input[3:0]	IF_ins_number;
	
	input [4:0] which_reg;
	output [31:0] reg_content;
	//--------------
	output cu_wpcir;
	output [1:0] id_fwda;
	output [1:0] id_fwdb;
	//output [31:0] temp_content;
	
	output cu_branch;
	output cu_wreg;
	output cu_m2reg;
	output cu_wmem;
	output [3:0] cu_aluc;
	output cu_shift;
	output cu_aluimm;
	output [31:0] id_pc4;
	//
	output [31:0] nid_pc;
	output jmp_stall;
	//output [31:0] id_branch_pc;
	//output [31:0] id_jump_pc;
	//
	wire [31:0] id_inA;
	wire [31:0] id_inB;
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
	//
	output [31:0] id_a_in;
	output [31:0] id_b_in;
	wire [31:0] id_a_in;
	wire [31:0] id_b_in;
	wire rsrtequ;
	wire [31:0] nid_pc;
	wire [31:0] id_branch_pc;
	wire [31:0] id_jump_pc;
	wire cu_jump;
	wire jmp_stall;
	//
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
	//
	assign id_a_in = (id_fwda==2'b11)? mem_mdata: ( (id_fwda==2'b10)? mem_aluR: ( (id_fwda==2'b01)? ex_aluR: id_inA));
	assign id_b_in = (id_fwdb==2'b11)? mem_mdata: ( (id_fwdb==2'b10)? mem_aluR: ( (id_fwdb==2'b01)? ex_aluR: id_inB));
	assign rsrtequ = (id_a_in - id_b_in) ? 0: 1;
	assign id_branch_pc = pc4 + id_imm;
	assign id_jump_pc = {pc4[31:26], reg_inst[25:0]};
	assign nid_pc =(cu_jump)? id_jump_pc: id_branch_pc;
	//
/*
	assign temp_content[25:24]= id_fwda;
	assign temp_content[17:16]= id_fwdb;
	assign temp_content[15:8]= id_a_in[7:0];
	assign temp_content[7:0]= id_b_in[7:0];
	//*/
	always @ (posedge clk or posedge rst)
		if (rst==1)
		begin
			pc4 <= 32'hffffffff;
			ID_ins_type <= 4'b0000;
			ID_ins_number <= 4'b0000;
			
		end
		else
		begin
			if(cu_wpcir == 0 && jmp_stall == 0)
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
		rsrtequ,
		cu_branch,
		cu_jump,
		jmp_stall,
		cu_wreg, cu_m2reg, cu_wmem, cu_aluc, cu_shift, cu_aluimm, cu_sext, cu_regrt, 
		cu_wpcir, id_fwda, id_fwdb);//, temp_content);
	
	assign id_inA = rdata_A;
	assign id_inB = rdata_B;
endmodule
