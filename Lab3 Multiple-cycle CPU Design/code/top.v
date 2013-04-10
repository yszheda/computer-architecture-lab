`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:32:08 03/16/2011 
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
module top(input wire CCLK, BTN3_IN, BTN2_IN, input wire [3:0]SW, output wire [7:0]LED, output wire LCDE, LCDRS, LCDRW, output wire [3:0]LCDDAT);
  
wire          clk_1ms;
	wire          clk;
	wire          rst;         
	wire [31:0]   raddr;   
	wire [31:0]   waddr;
	wire [31:0]   mem_data;
	
	wire 			  zero;
	wire			  write_pc;
	wire          iord;
	wire			  write_mem;
	wire          write_dr;
	wire          write_ir;
	wire			  memtoreg;
	wire          regdst;
	wire [1:0]    pcsource;
	wire          write_c;
	wire [1:0]    alu_ctrl;
	wire 			  alu_srcA;
	wire [1:0]    alu_srcB;
	wire          write_a;
	wire          write_b;
	wire          write_reg;

	wire [31:0]   alu_out;
	wire [31:0]   rdata_A;
	wire [31:0]   rdata_B;
	wire [31:0]   rdata_C;
 
	wire [31:0]   pc;
	wire [3:0]    state_out;
	wire [3:0]    insn_type;
	wire [3:0]    insn_code;
	wire [2:0]    insn_stage;
	wire [7:0]	  r6out;
	
	reg  [31:0]   ir_data;
	reg  [31:0]   dr_data;
	reg  [31:0]   a_data;
	reg  [31:0]   b_data;
	reg  [31:0]   c_data;
	
	reg [3:0] SW_old;
	clock C1 (CCLK, 25000, clk0);
	pbdebounce M1(clk0, BTN2_IN, BTN2);
	pbdebounce M2(clk0, BTN3_IN, BTN3);
	
	assign raddr = iord? c_data[31:0] : pc;
	assign waddr = c_data[31:0];
	
	assign clk = BTN3;
	assign rst = BTN2;
	assign LED[7:0] = r6out[7:0];

	reg [255:0]    strdata;
	reg            cls;
	reg [31:0]     mem_data_old;
	reg [31:0]     pc_old;
	reg [31:0]		raddr_old;
	reg [31:0]     waddr_old;

	wire [3:0]     lcdd;
	wire rslcd, rwlcd, elcd;

	assign LCDDAT[3] = lcdd[3];
	assign LCDDAT[2] = lcdd[2];
	assign LCDDAT[1] = lcdd[1];
	assign LCDDAT[0] = lcdd[0];
	
	assign LCDRS = rslcd;
	assign LCDRW = rwlcd;
	assign LCDE = elcd;
	
	initial begin
		strdata = "01234567 01 01  0 1 2 01        ";
	end
	
	display M0 (CCLK, cls, strdata, rslcd, rwlcd, elcd, lcdd);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    

	always @(posedge CCLK) begin
		if ((BTN3 == 1'b1) || (mem_data != mem_data_old) || (pc != pc_old) || (raddr != raddr_old) || (waddr != waddr_old)) begin
						if(mem_data[31:28] < 10)
				strdata[255:248] = 8'h30 + mem_data[31:28];
			else
				strdata[255:248] = 8'h61 + mem_data[31:28] - 10;
				
			if(mem_data[27:24] < 10)
				strdata[247:240] = 8'h30 + mem_data[27:24];
			else
				strdata[247:240] = 8'h61 + mem_data[27:24] - 10;

			if(mem_data[23:20] < 10)
				strdata[239:232] = 8'h30 + mem_data[23:20];
			else
				strdata[239:232] = 8'h61 + mem_data[23:20] - 10;			

			if(mem_data[19:16] < 10)
				strdata[231:224] = 8'h30 + mem_data[19:16];
			else
				strdata[231:224] = 8'h61 + mem_data[19:16] - 10;
			if(mem_data[15:12] < 10)
				strdata[223:216] = 8'h30 + mem_data[15:12];
			else
				strdata[223:216] = 8'h61 + mem_data[15:12] - 10;
			if(mem_data[11:8] < 10)
				strdata[215:208] = 8'h30 + mem_data[11:8];
			else
				strdata[215:208] = 8'h61 + mem_data[11:8] - 10;
			if(mem_data[7:4] < 10)
				strdata[207:200] = 8'h30 + mem_data[7:4];
			else
				strdata[207:200] = 8'h61 + mem_data[7:4] - 10;
			if(mem_data[3:0] < 10)
				strdata[199:192] = 8'h30 + mem_data[3:0];
			else
				strdata[199:192] = 8'h61 + mem_data[3:0] - 10;
			//space
			//strdata[191:184] = " ";
			//2 4-bit raddr
			if(raddr[7:4] < 10)
				strdata[183:176] = 8'h30 + raddr[7:4];
			else
				strdata[183:176] = 8'h61 + raddr[7:4] - 10;
			if(raddr[3:0] < 10)		
				strdata[175:168] = 8'h30 + raddr[3:0];
			else
				strdata[175:168] = 8'h61 + raddr[3:0] - 10;

			//space
			//strdata[167:160] = " ";
			//2 4-bit waddr
			if(waddr[7:4] < 10)
				strdata[159:152] = 8'h30 + waddr[7:4];
			else
				strdata[159:152] = 8'h61 + waddr[7:4] - 10;
			if(waddr[3:0] < 10)
				strdata[151:144] = 8'h30 + waddr[3:0];
			else
				strdata[151:144] = 8'h61 + waddr[3:0] - 10;
			
			//secondline
			if(state_out < 10)
				strdata[127:120] = 8'h30 + state_out;
			else
				strdata[127:120] = 8'h61 + state_out - 10;
			//space
			if(insn_type < 10)
				strdata[111:104] = 8'h30 + insn_type;
			else
				strdata[111:104] = 8'h61 + insn_type - 10;
			//space
			if(insn_code < 10)
				strdata[95:88] = 8'h30 + insn_code;
			else 
				strdata[95:88] = 8'h61 + insn_code - 10;
			//space
			if( insn_stage< 10)
				strdata[79:72] = 8'h30 + insn_stage;
			else 
				strdata[79:72] = 8'h61 + insn_stage - 10;
			//space
			strdata[71:64] = " ";
			//2 4-bit pc
			if(pc[7:4] < 10)
				strdata[63:56] = 8'h30 + pc[7:4];
			else
				strdata[63:56] = 8'h61+ pc[7:4] - 10;
			if(pc[3:0] < 10)
				strdata[55:48] = 8'h30 + pc[3:0];
			else
				strdata[55:48] = 8'h61 + pc[3:0] - 10;
		//	cls = 1;
			
			pc_old <= pc;
			mem_data_old <= mem_data;
			raddr_old <= raddr;
			waddr_old <= waddr;
		end
		if((BTN3 == 1'b1) || (BTN2 == 1'b1) || (SW_old != SW)) begin
			if(rdata_C[15:12] < 10)
				strdata[39:32] = 8'h30 + rdata_C[15:12];
			else
				strdata[39:32] = 8'h61 + rdata_C[15:12] - 10;
			if(rdata_C[11:8] < 10)
				strdata[31:24] = 8'h30 + rdata_C[11:8];
			else
				strdata[31:24] = 8'h61 + rdata_C[11:8] - 10;
			if(rdata_C[7:4] < 10)
				strdata[23:16] = 8'h30 + rdata_C[7:4];
			else
				strdata[23:16] = 8'h61 + rdata_C[7:4] - 10;
			if(rdata_C[3:0] < 10)
				strdata[15:8] = 8'h30 + rdata_C[3:0];
			else
				strdata[15:8] = 8'h61 + rdata_C[3:0] - 10;

			SW_old = SW;
			cls = 1;
		end
		
		else
			cls = 0;
	end

	memory x_memory(
		.addra(raddr),
		.addrb(waddr),
		.clka(clk),
		.clkb(clk),
		.dinb(b_data),
		.douta(mem_data),
		.web(write_mem));   
       
	ctrl	x_ctrl(clk, rst, ir_data, zero,
		write_pc, iord, write_mem, write_dr, write_ir, memtoreg, regdst, 
		pcsource, write_c, alu_ctrl, alu_srcA, alu_srcB, write_a, write_b, write_reg,
		state_out, insn_type, insn_code, insn_stage);  

	pcm x_pcm(clk, rst, alu_out, c_data, ir_data, pcsource, write_pc, pc);
	
	always @(write_ir) begin
		if (write_ir)
			ir_data <= mem_data;
	end
	
	always @(write_dr) begin
		if (write_dr)
			dr_data <= mem_data;
	end
	
	reg_wrapper x_reg_wrapper(clk, rst, ir_data, dr_data,{1'b0,SW},c_data, memtoreg, regdst, write_reg,
										 rdata_A, rdata_B, rdata_C ,r6out); 

	always @(write_a) begin
 		if (write_a)
			a_data <= rdata_A;
	end
	
	always @(write_b) begin
 		if (write_b)
			b_data <= rdata_B;
	end

	alu_wrapper x_alu_wrapper(a_data, b_data, ir_data, pc, 
		alu_srcA, alu_srcB, alu_ctrl,
		zero, alu_out);
										 
	always @(write_c) begin
 		if (write_c)
			c_data <= alu_out;
	end
	
endmodule  

