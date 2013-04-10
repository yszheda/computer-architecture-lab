`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:31:32 03/30/2011 
// Design Name: 
// Module Name:    if_stage 
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
//if_stage
module if_stage (mem_clk, clk, rst, npc, nid_pc, ctrl_branch,
//	ctrl_jump,
	id_wpcir,
	jmp_stall,
	if_pc, if_pc4, if_inst, IF_ins_type,IF_ins_number,ID_ins_type,ID_ins_number);
	input mem_clk;			
	input clk;
	input rst;
	input [31:0] npc;
	input [31:0] nid_pc;
	input ctrl_branch;
	//
//	input ctrl_jump;
	//
	input id_wpcir;
	input jmp_stall;
	output [31:0] if_pc;
	output [31:0] if_pc4;
	output [31:0] if_inst;
	output [3:0] IF_ins_number;
	output [3:0] IF_ins_type;
	output [3:0] ID_ins_type;
	output [3:0] ID_ins_number;
	
	wire mem_clk;
	wire clk;
	wire rst;
	wire ctrl_branch;
	//
//	wire ctrl_jump;
	//
	wire id_wpcir;
	wire jmp_stall;
	wire [31:0] nid_pc;
	wire [31:0] if_pc;
	wire [31:0] if_inst;
	wire [31:0] inst_m;
	reg [31:0] pc;
	reg run;
	reg [3:0] ID_ins_type;
	reg [3:0] ID_ins_number;
	
	initial begin
		pc[31:0]=32'hffffffff;
	//	pc[31:0]=32'h00000000;
		run = 1'b0;
		ID_ins_type[3:0] = 4'b0000;
		ID_ins_number[3:0] = 4'b0000;
	end

	assign if_pc4 =pc+1; //
	assign if_pc = (ctrl_branch==1)? nid_pc: if_pc4; //
	
	assign IF_ins_number[3:0] = npc[3:0] ;
	assign IF_ins_type[3:0] = `INST_TYPE_NONE;
	assign if_inst[31:0] = inst_m[31:0];
	
	always @ (posedge clk) begin
		if(id_wpcir == 0) begin	//no stalls
			pc[31:0] <= npc[31:0];
			run <= 1'b1;
		end
	end

	always @(if_inst) begin
		if (run == 1'b0) begin	//for initial 0
			ID_ins_type[3:0] <= 4'b0000;
			ID_ins_number[3:0] <= 4'b0000;
		end
		else
		begin
			if(id_wpcir == 0) begin
				ID_ins_number[3:0] <= pc[3:0];
				if(jmp_stall == 1) begin
					ID_ins_type <= `INST_TYPE_NONE;
				end
				else begin
				case (if_inst[31:26])
					`OP_ALUOp: begin		//R-type
						case(if_inst[5:0])
							`FUNC_ADD: begin
								ID_ins_type <= `INST_TYPE_ADD;
								end
							`FUNC_SUB: begin
								ID_ins_type <= `INST_TYPE_SUB;
								end
							`FUNC_AND: begin
								ID_ins_type <= `INST_TYPE_AND;
								end
							`FUNC_OR: begin
								ID_ins_type <= `INST_TYPE_OR;
								end
							`FUNC_NOR: begin
								ID_ins_type <= `INST_TYPE_NOR;
								end
							`FUNC_SLT: begin
								ID_ins_type <= `INST_TYPE_SLT;
								end
							`FUNC_SLL: begin
								ID_ins_type <= `INST_TYPE_SLL;
								end
							`FUNC_SRL: begin
								ID_ins_type <= `INST_TYPE_SRL;
								end
							`FUNC_SRA: begin
								ID_ins_type <= `INST_TYPE_SRA;
								end
							default: begin
								ID_ins_type <= `INST_TYPE_NONE;
							end
						endcase
					end
					`OP_ADDI: begin
						ID_ins_type <= `INST_TYPE_ADD;
					end
					`OP_ANDI: begin
						ID_ins_type <= `INST_TYPE_AND;
					end
					`OP_ORI: begin
						ID_ins_type <= `INST_TYPE_OR;
					end
					`OP_LW: begin
						ID_ins_type <= `INST_TYPE_LW;
					end
					`OP_SW: begin
						ID_ins_type <= `INST_TYPE_SW;
					end
					`OP_BEQ: begin
						ID_ins_type <= `INST_TYPE_BEQ;
					end
					`OP_JMP: begin
						ID_ins_type <= `INST_TYPE_JMP;
					end
					`OP_BNE: begin
						ID_ins_type <= `INST_TYPE_BNE;
					end
					default: begin
						ID_ins_type <= `INST_TYPE_NONE;
					end
				endcase
				end
			end
			/*
			else if(jmp_stall == 1) begin	//jump stall
				ID_ins_number[3:0] <= pc[3:0];
				ID_ins_type <= `INST_TYPE_NONE;
			end
			*/
			else begin	//with stall
				ID_ins_type <= `INST_TYPE_NONE;
			end
		end
	end

	instr_mem x_inst_mem(.addr(pc[7:0]),.clk(mem_clk),.dout(inst_m));
endmodule

