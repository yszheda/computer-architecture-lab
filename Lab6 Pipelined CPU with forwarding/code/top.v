`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:27:31 03/30/2011 
// Design Name: 
// Module Name:    top 
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
module top(input wire CCLK, BTN0_IN, BTN3_IN, BTN2_IN, input wire [3:0]SW, output wire LED, LCDE, LCDRS, LCDRW, output wire [3:0]LCDDAT);

	wire [31:0] if_npc;
	wire [31:0] if_pc4;
	wire [31:0] if_inst;
	
	wire [31:0] id_pc4;	
	wire [31:0] id_inA;
	wire [31:0] id_inB;
	wire [31:0] id_imm;
	wire [4:0] id_destR;
	wire [4:0] id_regrt;
	wire [4:0] id_rt;
	wire [4:0] id_rd;
	wire id_branch; 
	wire id_wreg;
	wire id_m2reg;
	wire id_wmem;
	wire [3:0] id_aluc;
	wire id_shift;
	wire id_aluimm;
	
	wire ex_wreg;
	wire ex_m2reg;
	wire ex_wmem;
	wire[31:0] ex_aluR;
	wire[31:0] ex_inB;
	wire[4:0] ex_destR;
	wire ex_branch,ex_zero;
	wire[31:0]ex_pc;
	
	wire mem_wreg;
	wire mem_m2reg;
	wire[31:0] mem_mdata;
	wire[31:0] mem_aluR;
	wire[4:0] mem_destR;
	wire mem_branch;
	wire[31:0] mem_pc;
	
	wire wb_wreg;
	wire[4:0] wb_destR;
	wire[31:0] wb_dest;
	
	wire [3:0] IF_ins_type; 
	wire [3:0] IF_ins_number;
	wire [3:0] ID_ins_type;
	wire [3:0] ID_ins_number;
	wire [3:0] EX_ins_type; 
	wire [3:0] EX_ins_number;
	wire [3:0] MEM_ins_type; 
	wire [3:0] MEM_ins_number;
	wire [3:0] WB_ins_type; 
	wire [3:0] WB_ins_number;
	wire [3:0] OUT_ins_type; 
	wire [3:0] OUT_ins_number;
	
	
	//
	wire [3:0] IN_ins_type;
	wire [3:0] IN_ins_number;
	//
	
	wire [31:0] pc;
	wire [31:0] reg_content;
	wire [3:0] which_reg;
	
	///
	wire [31:0] temp_content;
	reg [31:0] temp_content_old;
	///
	wire id_wpcir;	//stall
	wire [1:0]id_fwda;
	wire [1:0]id_fwdb;

	
	reg [255:0] strdata;
	reg [3:0] SW_old;
	reg [7:0] clk_cnt;
	reg cls;
	reg [31:0] if_inst_old;
	reg [31:0] reg_content_old;

	wire [3:0] lcdd;
	wire rslcd, rwlcd, elcd;
	wire clk_1ms;

	wire BTN3;//west
	wire BTN2;//south
	wire BTN0; //north
	reg BTN_OLD;
	assign LCDDAT[3]=lcdd[3];
	assign LCDDAT[2]=lcdd[2];
	assign LCDDAT[1]=lcdd[1];
	assign LCDDAT[0]=lcdd[0];
	
	assign LCDRS=rslcd;
	assign LCDRW=rwlcd;
	assign LCDE=elcd;
	
	assign LED=BTN3;
	assign which_reg[3:0] = SW[3:0];

	initial begin
		strdata <= "01234567 00 0123f01d01e01m01w01 ";
		SW_old = 4'b0;
		clk_cnt <= 8'b0;
		cls <= 1'b0;
		BTN_OLD <= 1'b0;
		if_inst_old <= 32'b0;
		reg_content_old <= 32'b0;
	end
	clock C1 (CCLK, 25000, clk0);
	pbdebounce M1(clk0, BTN2_IN, BTN2);
	pbdebounce M2(clk0, BTN3_IN, BTN3);
	pbdebounce M3(clk0, BTN0_IN, BTN0);
	display M0 (CCLK, cls, strdata, rslcd, rwlcd, elcd, lcdd);
always @(posedge CCLK  ) begin
		
		if ((BTN3 == 1'b1) || (BTN2 == 1'b1)||(if_inst_old != if_inst)||(temp_content_old!=temp_content)) begin
			//first line 8 4-bit Instrution
		//*
			if_inst_old <= if_inst;
			if (if_inst[31:28] < 10)
				strdata[255:248] <= 8'h30 + if_inst[31:28];
			else
				strdata[255:248] <= 8'h61 + if_inst[31:28] - 10;
			if (if_inst[27:24] < 10)
				strdata[247:240] <= 8'h30 + if_inst[27:24];
			else
				strdata[247:240] <= 8'h61 + if_inst[27:24] - 10;
			if (if_inst[23:20] < 10)
				strdata[239:232] <= 8'h30 + if_inst[23:20];
			else
				strdata[239:232] <= 8'h61 + if_inst[23:20] - 10;
			if (if_inst[19:16] < 10)
				strdata[231:224] <= 8'h30 + if_inst[19:16];
			else
				strdata[231:224] <= 8'h61 + if_inst[19:16] - 10;
			if (if_inst[15:12] < 10)
				strdata[223:216] <= 8'h30 + if_inst[15:12];
			else
				strdata[223:216] <= 8'h61 + if_inst[15:12] - 10;
			if (if_inst[11:8] < 10)
				strdata[215:208] <= 8'h30 + if_inst[11:8];
			else
				strdata[215:208] <= 8'h61 + if_inst[11:8] - 10;
			if (if_inst[7:4] < 10)
				strdata[207:200] <= 8'h30 + if_inst[7:4];
			else
				strdata[207:200] <= 8'h61 + if_inst[7:4] - 10;
			if (if_inst[3:0] < 10)
				strdata[199:192] <= 8'h30 + if_inst[3:0];
			else 
				strdata[199:192] <= 8'h61 + if_inst[3:0] - 10;
			//space
			//strdata[191:184] = " ";
			//2 4-bit CLK
			if (clk_cnt[7:4] < 10)
				strdata[183:176] <= 8'h30 + clk_cnt[7:4];
			else
				strdata[183:176] <= 8'h61 + clk_cnt[7:4] - 10;
			if (clk_cnt[3:0] < 10)
				strdata[175:168] <= 8'h30 + clk_cnt[3:0];
			else
				strdata[175:168] <= 8'h61 + clk_cnt[3:0] - 10;
			//*/
			/*
			if (temp_content[31:28] < 10)
				strdata[255:248] <= 8'h30 + temp_content[31:28];
			else
				strdata[255:248] <= 8'h61 + temp_content[31:28] - 10;
			if (temp_content[27:24] < 10)
				strdata[247:240] <= 8'h30 + temp_content[27:24];
			else
				strdata[247:240] <= 8'h61 + temp_content[27:24] - 10;
			if (temp_content[23:20] < 10)
				strdata[239:232] <= 8'h30 + temp_content[23:20];
			else
				strdata[239:232] <= 8'h61 + temp_content[23:20] - 10;
			if (temp_content[19:16] < 10)
				strdata[231:224] <= 8'h30 + temp_content[19:16];
			else
				strdata[231:224] <= 8'h61 + temp_content[19:16] - 10;
			if (temp_content[15:12] < 10)
				strdata[223:216] <= 8'h30 + temp_content[15:12];
			else
				strdata[223:216] <= 8'h61 + temp_content[15:12] - 10;
			if (temp_content[11:8] < 10)
				strdata[215:208] <= 8'h30 + temp_content[11:8];
			else
				strdata[215:208] <= 8'h61 + temp_content[11:8] - 10;
			if (temp_content[7:4] < 10)
				strdata[207:200] <= 8'h30 + temp_content[7:4];
			else
				strdata[207:200] <= 8'h61 + temp_content[7:4] - 10;
			if (temp_content[3:0] < 10)
				strdata[199:192] <= 8'h30 + temp_content[3:0];
			else 
				strdata[199:192] <= 8'h61 + temp_content[3:0] - 10;
			//	*/
			//space
			//strdata[191:184] = " ";
			//2 4-bit CLK
			if (clk_cnt[7:4] < 10)
				strdata[183:176] <= 8'h30 + clk_cnt[7:4];
			else
				strdata[183:176] <= 8'h61 + clk_cnt[7:4] - 10;
			if (clk_cnt[3:0] < 10)
				strdata[175:168] <= 8'h30 + clk_cnt[3:0];
			else
				strdata[175:168] <= 8'h61 + clk_cnt[3:0] - 10;
			//space
			//strdata[167:160] = " ";
			//reg_count 12-15

			//second line
			//strdata[127:120] = "f";
			if (IF_ins_number < 10)
				strdata[119:112] <= 8'h30 + IF_ins_number;
			else 
				strdata[119:112] <= 8'h61 + IF_ins_number - 10;
			if (IF_ins_type < 10)
				strdata[111:104] <= 8'h30 + IF_ins_type;
			else
				strdata[111:104] <= 8'h61 + IF_ins_type - 10;
			//strdata[103:96] = "d";
			if (ID_ins_number < 10)
				strdata[95:88] <= 8'h30 + ID_ins_number;
			else 
				strdata[95:88] <= 8'h61 + ID_ins_number - 10;
			if (ID_ins_type < 10)
				strdata[87:80] <= 8'h30 + ID_ins_type;
			else
				strdata[87:80] <= 8'h61 + ID_ins_type - 10;
			//strdata[79:72] = "e";
			if (EX_ins_number < 10)
				strdata[71:64] <= 8'h30 + EX_ins_number;
			else
				strdata[71:64] <= 8'h61 + EX_ins_number - 10;
			if (EX_ins_type < 10)
				strdata[63:56] <= 8'h30 + EX_ins_type;
			else
				strdata[63:56] <= 8'h61 + EX_ins_type - 10;
			//strdata[55:48] = "m";
			if (MEM_ins_number < 10)
				strdata[47:40] <= 8'h30 + MEM_ins_number;
			else
				strdata[47:40] <= 8'h61 + MEM_ins_number - 10;
			if (MEM_ins_type < 10)
				strdata[39:32] <= 8'h30 + MEM_ins_type;
			else
				strdata[39:32] <= 8'h61 + MEM_ins_type - 10;
			//strdata[31:24] = "w";
			if (WB_ins_number < 10)
				strdata[23:16] <= 8'h30 + WB_ins_number;
			else
				strdata[23:16] <= 8'h61 + WB_ins_number - 10;
			if (WB_ins_type < 10)
				strdata[15:8] <= 8'h30 + WB_ins_type ;
			else
				strdata[15:8] <= 8'h61 + WB_ins_type - 10;
		end
		
		if((BTN3 == 1'b1) || (BTN2 == 1'b1)||(SW_old != SW)|| (BTN0 != BTN_OLD)||(reg_content_old != reg_content)) begin
			//first line after CLK and space
			reg_content_old <= reg_content;
			BTN_OLD <= BTN0;
			if (BTN0 == 1'b1)  begin//ÏÔ?¾¸?6 Î»
				if (reg_content[15:12] < 10)
					strdata[159:152] <= 8'h30 + reg_content[31:28];
				else
					strdata[159:152] <= 8'h61 + reg_content[31:28] - 10;
				if (reg_content[11:8] < 10)
					strdata[151:144] <= 8'h30 + reg_content[27:24];
				else
					strdata[151:144] <= 8'h61 + reg_content[27:24]- 10;
				if (reg_content[7:4] < 10)
					strdata[143:136] <= 8'h30 + reg_content[23:20];
				else
					strdata[143:136] <= 8'h61 + reg_content[23:20] - 10;
				if (reg_content[3:0] < 10)
					strdata[135:128] <= 8'h30 + reg_content[19:16];
				else 
					strdata[135:128] <= 8'h61 + reg_content[19:16] - 10;
			end
			else begin 
				if (reg_content[15:12] < 10)
						strdata[159:152] <= 8'h30 + reg_content[15:12];
					else
						strdata[159:152] <= 8'h61 + reg_content[15:12] - 10;
					if (reg_content[11:8] < 10)
						strdata[151:144] <= 8'h30 + reg_content[11:8];
					else
						strdata[151:144] <= 8'h61 + reg_content[11:8]- 10;
					if (reg_content[7:4] < 10)
						strdata[143:136] <= 8'h30 + reg_content[7:4];
					else
						strdata[143:136] <= 8'h61 + reg_content[7:4] - 10;
					if (reg_content[3:0] < 10)
						strdata[135:128] <= 8'h30 + reg_content[3:0];
					else 
						strdata[135:128] <= 8'h61 + reg_content[3:0] - 10;
			end
			
			SW_old <= SW;
			cls <= 1;
		end
		else begin
			cls <= 0;
		end
	end
	
	
	
	always @(posedge BTN3) begin
		clk_cnt <= clk_cnt + 1;
	end

	assign pc [31:0] = if_npc[31:0];
	
	//----------
//	assign temp_content = wb_dest;
//	assign temp_content = if_inst;
	//----------
	
	if_stage x_if_stage(clk0, BTN3, rst, pc, mem_pc, mem_branch, id_wpcir,
	  if_npc, if_pc4, if_inst, IF_ins_type, IF_ins_number,ID_ins_type,ID_ins_number);
	//    if_npc, if_pc4, if_inst, IN_ins_type, IN_ins_number,IF_ins_type,IF_ins_number);

	id_stage x_id_stage(BTN3, rst, if_inst, if_pc4, wb_destR, wb_dest,wb_wreg, 
		id_wreg, id_m2reg, id_wmem, id_aluc, id_shift, id_aluimm, id_branch, id_pc4, id_inA, id_inB, id_imm, id_regrt,id_rt,id_rd, 
		id_wpcir,id_fwda, id_fwdb,//temp_content,
		ID_ins_type, ID_ins_number, EX_ins_type, EX_ins_number, {1'b0,which_reg}, reg_content);
	//	IN_ins_type, IN_ins_number, ID_ins_type, ID_ins_number, {1'b0,which_reg}, reg_content);
		
	ex_stage x_ex_stage(BTN3, id_imm, id_inA, id_inB, id_wreg, id_m2reg, id_wmem, id_aluc, id_aluimm,id_shift, id_branch, id_pc4,id_regrt,id_rt,id_rd,
	  ex_wreg, ex_m2reg, ex_wmem, ex_aluR, ex_inB, ex_destR, ex_branch, ex_pc, ex_zero, 
	  id_fwda, id_fwdb, mem_aluR, wb_dest,//temp_content,////////
	 EX_ins_type, EX_ins_number, MEM_ins_type, MEM_ins_number);
	//   ID_ins_type, ID_ins_number, EX_ins_type, EX_ins_number /**,temp_content/**/);
	  
	mem_stage x_mem_stage(BTN3, ex_destR, ex_inB, ex_aluR, ex_wreg, ex_m2reg, ex_wmem, ex_branch,ex_pc,ex_zero,  
	  mem_wreg, mem_m2reg, mem_mdata, mem_aluR, mem_destR, mem_branch, mem_pc,
	MEM_ins_type, MEM_ins_number, WB_ins_type, WB_ins_number);
	//  EX_ins_type, EX_ins_number, MEM_ins_type, MEM_ins_number /*,temp_content*/);

	wb_stage x_wb_stage(BTN3, mem_destR, mem_aluR, mem_mdata, mem_wreg, mem_m2reg, 
	  wb_wreg, wb_dest, wb_destR, WB_ins_type, WB_ins_number,OUT_ins_type, OUT_ins_number);
//	  wb_wreg, wb_dest, wb_destR, MEM_ins_type, MEM_ins_number,WB_ins_type, WB_ins_number);
endmodule
