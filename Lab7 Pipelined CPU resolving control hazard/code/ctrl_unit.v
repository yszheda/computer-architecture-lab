`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:34:13 03/30/2011 
// Design Name: 
// Module Name:    ctrl_unit 
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
`include "macro.vh"

module ctrl_unit(clk, rst, if_instr, instr,
	rsrtequ,
	cu_branch,
	cu_jump,
	jmp_stall,
	cu_wreg, cu_m2reg, cu_wmem, cu_aluc, cu_shift, cu_aluimm, cu_sext, cu_regrt,
	cu_wpcir, cu_fwda, cu_fwdb);//, temp_content);
	
	input clk;
	input rst;
	input [31:0] instr;
	input [31:0] if_instr;
	//
	input rsrtequ;
	//
	
	output cu_branch;
	//
	output cu_jump;
	output jmp_stall;
	//
	output cu_wreg;
	output cu_m2reg;
	output cu_wmem;
	output [3:0] cu_aluc;
	output cu_shift;
	output cu_aluimm;
	output cu_sext;
	output cu_regrt;
	//stall
	output cu_wpcir;
	output [1:0] cu_fwda;
	output [1:0] cu_fwdb;
//	output [31:0]temp_content;
	
	wire [5:0] func;
	wire [5:0] opcode;
	wire [4:0] rs;
	wire [4:0] rt;
	wire [4:0] rd;
	
	wire [5:0] if_func;
	wire [5:0] if_opcode;
	wire [4:0] if_rs;
	wire [4:0] if_rt;
	wire [4:0] if_rd; 
	
	wire [4:0] ex_rs;
	wire [4:0] ex_rt;
	wire [4:0] ex_rd;
	wire [4:0] mem_rt;
	wire [4:0] mem_rd;
	wire [4:0] wb_rd;
	wire [4:0] wb_rt;
	wire [5:0] ex_op;
	wire [5:0] mem_op;
	wire [5:0] wb_op;

	reg [31:0] ex_instr;
	reg [31:0] mem_instr;
	reg [31:0] wb_instr;
	reg [3:0] cu_aluc;
	
	//stalls
	wire AfromEx;
	wire BfromEx;
//	wire AfromMem;
//	wire BfromMem;
	//
	wire AfromMemALU;
	wire BfromMemALU;
	wire AfromMemLW;
	wire BfromMemLW;
	//
	wire AfromExLW;
	wire BfromExLW;
//	wire AfromMemLW;
//	wire BfromMemLW;
	wire stall;
	wire cu_wpcir;
	wire [1:0]cu_fwda;
	wire [1:0]cu_fwdb;
	
	//
	wire branch;
	//
	///////
	wire temp1;
	wire temp2;
	
	//------------
	//

	assign AfromEx = ((ex_op==`OP_ALUOp)&&(ex_rd==rs)&&(ex_rd!=0));//(mem_rd==ex_rs) && (mem_rd!=0) && (mem_op==`OP_ALUOp);
	assign BfromEx = ((ex_op==`OP_ALUOp)&&(ex_rd==rt)&&(ex_rd!=0));//||((mem_rd!=0)&&(mem_rd==rt)&& (mem_op==`OP_LW));
//	assign AfromMem =((mem_op==`OP_ALUOp) || (mem_op==`OP_LW))&&(ex_rd!=rs)&&(mem_rd==rs)&&(mem_rd!=0);
//	assign BfromMem =((mem_op==`OP_ALUOp) || (mem_op==`OP_LW))&&(ex_rd!=rt)&&(mem_rd==rt)&&(mem_rd!=0);
	assign AfromMemALU =(mem_op==`OP_ALUOp)&&(ex_rd!=rs)&&(mem_rd==rs)&&(mem_rd!=0);
	assign BfromMemALU =(mem_op==`OP_ALUOp)&&(ex_rd!=rt)&&(mem_rd==rt)&&(mem_rd!=0);
	assign AfromMemLW =(mem_op==`OP_LW)&&(ex_rd!=rs)&&(mem_rd==rs)&&(mem_rd!=0);
	assign BfromMemLW =(mem_op==`OP_LW)&&(ex_rd!=rt)&&(mem_rd==rt)&&(mem_rd!=0);
//	*/
	//-----------
	/*
	assign AfromEx = ((opcode==`OP_ALUOp)&&(rd==if_rs)&&(rd!=0));
	assign BfromEx = ((opcode==`OP_ALUOp)&&(rd==if_rt)&&(rd!=0));
	assign AfromMemALU =(ex_op==`OP_ALUOp)&&(rd!=if_rs)&&(ex_rd==if_rs)&&(ex_rd!=0);
	assign BfromMemALU =(ex_op==`OP_ALUOp)&&(rd!=if_rt)&&(ex_rd==if_rt)&&(ex_rd!=0);
	assign AfromMemLW =(ex_op==`OP_LW)&&(rd!=if_rs)&&(ex_rd==if_rs)&&(ex_rd!=0);
	assign BfromMemLW =(ex_op==`OP_LW)&&(rd!=if_rt)&&(ex_rd==if_rt)&&(ex_rd!=0);
	*/
	//-----------
	wire jmp_stall;
	
	assign AfromExLW = (if_rs==rt) & (if_rs!=0) & (opcode==`OP_LW);
	assign BfromExLW = (if_rt==rt) & (if_rt!=0) & (opcode==`OP_LW);
//	assign AfromMemLW = (if_rs==ex_rt) & (if_rs!=0) & (ex_op==`OP_LW);
//	assign BfromMemLW = (if_rt==ex_rt) & (if_rt!=0) & (ex_op==`OP_LW);
	assign stall =  AfromExLW || BfromExLW ;
	assign jmp_stall = (opcode == `OP_JMP)? 1: 0;
	assign cu_wpcir = stall;
//	assign cu_fwda[1:0]=(AfromEx == 1)?2'b01 :( (AfromMem==1)? 2'b10: 2'b00);
//	assign cu_fwdb[1:0]=(BfromEx == 1)?2'b01 :( (BfromMem==1)? 2'b10: 2'b00);
	assign cu_fwda[1:0]=(AfromMemLW==1)? 2'b11:( (AfromMemALU==1)? 2'b10 :( (AfromEx == 1)?2'b01: 2'b00));
	assign cu_fwdb[1:0]=(BfromMemLW==1)? 2'b11:( (BfromMemALU==1)? 2'b10 :( (BfromEx == 1)?2'b01: 2'b00));
	/*
	assign temp_content[0]=AfromEx;
	assign temp_content[4]=BfromEx;
	assign temp_content[8]=AfromMem;
	assign temp_content[12]=BfromMem;
	assign temp_content[20]=BfromExLW;
	assign temp_content[25:24]=cu_fwda;
	assign temp_content[29:28]=cu_fwdb;	
	/*
	assign temp_content[5:0]=wb_op;
	assign temp_content[13:8]=wb_rd;
	assign temp_content[21:16]=ex_rs;
	assign temp_content[29:24]=ex_rt;
*/
//	assign temp_content=mem_instr;
	
	assign opcode[5:0] =instr[31:26];
	assign rs[4:0] = instr[25:21];
	assign rt[4:0] = instr[20:16];
	assign rd[4:0] = (opcode==`OP_LW)? instr[20:16]: instr[15:11];
	assign func[5:0] = instr[5:0];
	
	assign if_opcode[5:0] =if_instr[31:26];
	assign if_rs[4:0] = if_instr[25:21];
	assign if_rt[4:0] = if_instr[20:16];
	assign if_rd[4:0] = (if_opcode==`OP_LW)? if_instr[20:16]: if_instr[15:11];
	assign if_func[5:0] = if_instr[5:0];
	
	assign ex_rs[4:0] = ex_instr[25:21];
	assign ex_rt[4:0] = ex_instr[20:16];
	assign ex_rd[4:0] = (ex_op==`OP_LW)?ex_instr[20:16]:ex_instr[15:11];
	assign mem_rt[4:0] = mem_instr[20:16];
	//ÓÐ¸Ä¶¯
	assign mem_rd[4:0] = (mem_op==`OP_LW)?mem_instr[20:16]:mem_instr[15:11];
	assign wb_rd[4:0] = (wb_op==`OP_LW)?wb_instr[20:16]:wb_instr[15:11];
	//
	assign wb_rt[4:0] = wb_instr[20:16];
	assign ex_op[5:0] = ex_instr[31:26];
	assign mem_op[5:0] = mem_instr[31:26];
	assign wb_op[5:0] = wb_instr[31:26];
	
	assign branch = (opcode == `OP_BEQ)? 1: 0; //if instr type == BEQ then 1 else 0
	//resolve control hazards
	assign cu_branch = (branch & rsrtequ)|cu_jump;
	assign cu_jump = (opcode == `OP_JMP)? 1: 0;
	//
	assign cu_regrt = (opcode == `OP_ALUOp)? 0: 1; //if instr type = R type then 0 else 1;
	assign cu_sext =  ((opcode == `OP_SW) || (opcode == `OP_LW) || (opcode == `OP_BEQ)) ? 1: 0;//when need to sign extend?
	
	assign cu_wreg = ((opcode == `OP_ALUOp) || (opcode == `OP_LW)) ? 1: 0;//when need to write reg?
	assign cu_m2reg = (opcode == `OP_LW)? 1: 0;//when need to write mem to reg ?
	assign cu_wmem = (opcode == `OP_SW)? 1: 0;//when need to enable write mem?
	assign cu_shift = ((opcode == `OP_ALUOp) && (func[5:2] == 4'b0))? 1 : 0;//
	assign cu_aluimm = ((opcode == `OP_SW)||(opcode == `OP_LW))? 1 : 0; 
	
	always @ (posedge clk or posedge rst)
		if(rst == 1)
		begin
			
		end
		else
		begin
			wb_instr[31:0] <= mem_instr[31:0];
			mem_instr[31:0] <= ex_instr[31:0];
			ex_instr[31:0] <= instr[31:0];
		end
	
	always @(opcode) begin
			case(opcode)
				`OP_ADDI: begin
					cu_aluc <= `ALU_ADD;
				end
				`OP_ANDI: begin
					cu_aluc <= `ALU_AND;
				end
				`OP_ORI: begin
					cu_aluc <= `ALU_OR;
				end
				`OP_ALUOp: begin
					case(func)
						`FUNC_ADD: begin
							cu_aluc <= `ALU_ADD;
						end
						`FUNC_SUB: begin
							cu_aluc <= `ALU_SUB;
						end
						`FUNC_AND: begin
							cu_aluc <= `ALU_AND;
						end
						`FUNC_OR: begin
							cu_aluc <= `ALU_OR;
						end
						`FUNC_NOR: begin
							cu_aluc <= `ALU_NOR;
						end
						`FUNC_SLT: begin
							cu_aluc <= `ALU_SLT;
						end
						`FUNC_SLL: begin
							cu_aluc <= `ALU_SLL;
						end
						`FUNC_SRL: begin
							cu_aluc <= `ALU_SRL;
						end
						`FUNC_SRA: begin
							cu_aluc <= `ALU_SRA;
						end
					endcase
				end
				default: begin
				
				end
			endcase
		end
endmodule

