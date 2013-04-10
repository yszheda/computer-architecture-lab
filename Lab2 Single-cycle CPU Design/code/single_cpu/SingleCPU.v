`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:47:23 04/06/2009 
// Design Name: 
// Module Name:    SingleCPU 
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
module SingleCPU(dispclk,button,bin,node,segment,led);
	input dispclk;
	input[3:0] button;
	input[7:0] bin;
	output[3:0] node;
	output[7:0] segment;
	output[7:0] led;
	
	wire[8:0] pc_out,pc_in,pc_plus4;
	wire clk,rst,zero,and_out;
	wire[31:0] instr,singnext_out,mux_alu,result;
	wire[1:0] ALUop;
	wire[2:0] ALUoper;
	wire RegDst,RegWrite,Branch,MemtoReg,MemRead,MemWrite,ALUsrc,Jump;
	wire[31:0] Adat,Bdat,Cdat,Wdat,mem_dat_out,add_out,mux_out_pc;
	wire[4:0] Write;
	wire[15:0] mux1,mux2,disp_num;
	wire[3:0] button_out;
	reg[15:0] clk_cnt;
	
	assign clk=button_out[0];
	assign rst=button_out[1];
	
	always@(posedge clk or posedge rst) begin
		if(rst==1)
			clk_cnt=16'h0000;
		else
			clk_cnt=clk_cnt+1;
	end
	
	delay_ms d1(dispclk,clk_ms);
	anti a1(clk_ms,button,button_out);
	single_pc s1(clk,rst,pc_in,pc_out);
	single_pc_plus4 s2(pc_out,pc_plus4);
	instr_block c1(pc_out,dispclk,instr);
	SingleCtrl s3(instr[31:26],ALUop,RegDst,RegWrite,Branch,MemtoReg,MemRead,MemWrite,ALUsrc,Jump,led[4:0]);
	
	assign led[7:5]=0;
	mux5 m1(instr[20:16],instr[15:11],RegDst,Write); //RegDst
	ReadFile r1(clk,rst,instr[25:21],instr[20:16],bin[4:0],Write,Wdat,RegWrite,Adat,Bdat,Cdat); //RegWrite
	single_signext s4(instr[15:0],signext_out);
	mux32 m2(Bdat,signext_out,ALUsrc,mux_alu);  //ALUsrc
	ALUctrl a2(ALUop,instr[5:0],ALUoper);   
	ALU a3(Adat,mux_alu,ALUoper,result,zero); //ALUop
	dat_block c2(result[8:0],dispclk,Bdat,mem_dat_out,MemWrite); //MemWrite(MemRead)
	mux32 m3(result,mem_dat_out,MemtoReg,Wdat); //MemtoReg
	and a4(and_out,Branch,zero);
	single_add s5(signext_out,{{23{1'b0}},pc_plus4},add_out);
	mux32 m4(pc_plus4,add_out,and_out,mux_out_pc);
	mux8 m5(mux_out_pc[8:0],instr[8:0],Jump,pc_in);

	mux16 m6(Cdat[15:0],Cdat[31:16],bin[5],mux1);
	mux16 m7({7'b0000000,pc_out},clk_cnt,bin[5],mux2);
	mux16 m8(mux1,mux2,bin[6],disp_num);
	display d2(dispclk,disp_num,node,segment,4'h0);
endmodule
