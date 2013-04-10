`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:00:39 03/09/2011 
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
module top(input wire CCLK, BTN3, BTN2, input wire [3:0]SW, output wire LED, LCDE, LCDRS, LCDRW, output wire [3:0]LCDDAT);
  
	wire [8:0] pc_out;
	wire [8:0] pc_in;
	wire [8:0] pc_plus_4;
	wire [4:0] reg3_out;
	wire [31:0] wdata_out;
	wire [31:0] instr_out;
	wire regwrite;
	wire alusrc;
	wire [1:0] aluop;
	wire memwrite;
	wire memtoreg;
	wire memread;
	wire branch;
	wire jump;
	wire regdst;
	wire [31:0] reg1_dat;
	wire [31:0] reg2_dat;
	wire [2:0] alu_ctrl; 
	wire [31:0] signext_out;
	wire [31:0] mux_to_alu;
	wire [31:0] alu_out;
	wire alu_zero;
	wire [31:0] mem_dat_out;
	wire and_out;
	wire [31:0] branch_addr_out;
	wire [31:0] branch_mux_out;
	wire [31:0] gpr_disp_out;
	
	reg [15:0] clk_cnt;
	reg [15:0] tmp_cnt;
	reg [1:0] disp_clk_cnt;

	reg [255:0] strdata;
	reg [3:0] SW_old;
	reg cls;

	wire [3:0] lcdd;
	wire rslcd, rwlcd, elcd;
	
	wire button3,button2;

	assign LCDDAT[3]=lcdd[3];
	assign LCDDAT[2]=lcdd[2];
	assign LCDDAT[1]=lcdd[1];
	assign LCDDAT[0]=lcdd[0];
	
	assign LCDRS=rslcd;
	assign LCDRW=rwlcd;
	assign LCDE=elcd;
	
	initial begin
		strdata = "01234567 00 00  0123            ";
	end
	
	display M0 (CCLK, cls, strdata, rslcd, rwlcd, elcd, lcdd);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
	pbdebounce M1(CCLK, BTN2, button2);
	pbdebounce M2(CCLK, BTN3, button3);
	assign LED=button3;
	
	always @(posedge CCLK) begin
		if ((button3 == 1'b1) || (button2 == 1'b1)) begin
			//first line 8 4-bit Instrution
			if(instr_out[31:28] < 10)
				strdata[255:248] = 8'h30 + instr_out[31:28];
			else
				strdata[255:248] = 8'h61 + instr_out[31:28] - 10;
			if(instr_out[27:24] < 10)
				strdata[247:240] = 8'h30 + instr_out[27:24];
			else
				strdata[247:240] = 8'h61 + instr_out[27:24] - 10;

			if(instr_out[23:20] < 10)
				strdata[239:232] = 8'h30 + instr_out[23:20];
			else
				strdata[239:232] = 8'h61 + instr_out[23:20] - 10;			

			if(instr_out[19:16] < 10)
				strdata[231:224] = 8'h30 + instr_out[19:16];
			else
				strdata[231:224] = 8'h61 + instr_out[19:16] - 10;
			if(instr_out[15:12] < 10)
				strdata[223:216] = 8'h30 + instr_out[15:12];
			else
				strdata[223:216] = 8'h61 + instr_out[15:12] - 10;
			if(instr_out[11:8] < 10)
				strdata[215:208] = 8'h30 + instr_out[11:8];
			else
				strdata[215:208] = 8'h61 + instr_out[11:8] - 10;
			if(instr_out[7:4] < 10)
				strdata[207:200] = 8'h30 + instr_out[7:4];
			else
				strdata[207:200] = 8'h61 + instr_out[7:4] - 10;
			if(instr_out[3:0] < 10)
				strdata[199:192] = 8'h30 + instr_out[3:0];
			else
				strdata[199:192] = 8'h61 + instr_out[3:0] - 10;
			//space
			//strdata[191:184] = " ";
			//2 4-bit CLK
			if(clk_cnt[7:4] < 10)
				strdata[183:176] = 8'h30 + clk_cnt[7:4];
			else
				strdata[183:176] = 8'h61 + clk_cnt[7:4] - 10;
			if(clk_cnt[3:0] < 10)		
				strdata[175:168] = 8'h30 + clk_cnt[3:0];
			else
				strdata[175:168] = 8'h61 + clk_cnt[3:0] - 10;
			//space
			//strdata[167:160] = " ";
			//2 4-bit PC
			if(pc_out[7:4] < 10)
				strdata[159:152] = 8'h30 + pc_out[7:4];
			else
				strdata[159:152] = 8'h61 + pc_out[7:4] - 10;
			if(pc_out[3:0] < 10)
				strdata[151:144] = 8'h30 + pc_out[3:0];
			else
				strdata[151:144] = 8'h61 + pc_out[3:0] - 10;
		end

		if((button3 == 1'b1) || (button2 == 1'b1) || (SW_old != SW)) begin
			if(gpr_disp_out[15:12] < 10)
				strdata[127:120] = 8'h30 + gpr_disp_out[15:12];
			else
				strdata[127:120] = 8'h61 + gpr_disp_out[15:12] - 10;
			if(gpr_disp_out[11:8] < 10)
				strdata[119:112] = 8'h30 + gpr_disp_out[11:8];
			else
				strdata[119:112] = 8'h61 + gpr_disp_out[11:8] - 10;
			if(gpr_disp_out[7:4] < 10)
				strdata[111:104] = 8'h30 + gpr_disp_out[7:4];
			else
				strdata[111:104] = 8'h61 + gpr_disp_out[7:4] - 10;
			if(gpr_disp_out[3:0] < 10)
				strdata[103:96] = 8'h30 + gpr_disp_out[3:0];
			else
				strdata[103:96] = 8'h61 + gpr_disp_out[3:0] - 10;

			SW_old = SW;
			cls = 1;
		end
		else
			cls = 0;
	end

	always @(posedge button3 or posedge button2) begin
		if (button2 == 1'b1) begin
			clk_cnt = 16'h0000;
		end
		else begin
			clk_cnt = clk_cnt + 1;
		end
	end

	always @(posedge CCLK or posedge button2) begin
    if (button2==1) begin
         disp_clk_cnt=2'b00;
         tmp_cnt=0;
       end
     else begin
         tmp_cnt=tmp_cnt+1;
     if (tmp_cnt==16'h0000)
         disp_clk_cnt=disp_clk_cnt+1;
      end
    end
		

	assign o_instr = instr_out[31:26];
	assign and_out = alu_zero & branch;
	assign pc_in = jump ? instr_out[8:0] : branch_mux_out[8:0];
	single_pc 	x_single_pc(button3,button2,pc_in,pc_out);
	c_instr_mem 	x_c_instr_mem(pc_out,CCLK,instr_out);
	single_pc_plus4 	x_single_pc_plus4(pc_out,pc_plus_4);
	single_mux5 	x_single_mux5(instr_out[20:16],instr_out[15:11],regdst,reg3_out);
	single_gpr 	x_single_gpr(button2,button3,instr_out[25:21],instr_out[20:16],
		{1'b0,SW},reg3_out,wdata_out,regwrite,reg1_dat,reg2_dat,gpr_disp_out);
	single_aluc 	x_single_aluc(aluop,instr_out[5:0],alu_ctrl);
	single_signext 	x_single_signext(instr_out[15:0],signext_out);
	single_mux32 	x_single_mux32(reg2_dat,signext_out,alusrc,mux_to_alu);
	single_alu	 x_single_alu(reg1_dat,mux_to_alu,alu_ctrl,alu_zero,alu_out);
	c_dat_mem 	x_c_dat_mem(alu_out[8:0],CCLK,reg2_dat,mem_dat_out,memwrite);
	single_mux32 	x_single_mux32_2(alu_out,mem_dat_out,memtoreg,wdata_out);
	single_add 	x_single_add(signext_out,{{23'b0},pc_plus_4},
					branch_addr_out);
	single_mux32 	x_single_mux32_3({{23'b0},pc_plus_4},
						branch_addr_out,and_out,branch_mux_out);
	single_ctl 	x_single_ctl(button2,instr_out[31:26],regdst,jump,branch,memread,
					memtoreg,aluop,memwrite,alusrc,regwrite);	
endmodule

