`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:48:10 04/06/2009 
// Design Name: 
// Module Name:    help 
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
module mux9(A,B,Ctrl,S);
	input[8:0] A,B;
	input Ctrl;
	output[8:0] S;
	assign S=(Ctrl==0)?A:B;
endmodule

module mux5(A,B,Ctrl,S);
	input[4:0] A,B;
	input Ctrl;
	output[4:0] S;
	assign S=(Ctrl==0)?A:B;
endmodule

module mux8(A,B,Ctrl,S);
	input[7:0] A,B;
	input Ctrl;
	output[7:0] S;
	assign S=(Ctrl==0)?A:B;
endmodule

module mux32(A,B,Ctrl,S);
	input[31:0] A,B;
	input Ctrl;
	output[31:0] S;
	assign S=(Ctrl==0)?A:B;
endmodule

module mux16(A,B,Ctrl,S);
	input[15:0] A,B;
	input Ctrl;
	output[15:0] S;
	assign S=(Ctrl==0)?A:B;
endmodule

module single_pc(clk,rst,i_pc,o_pc);
	input clk,rst;
	input[8:0] i_pc;
	output[8:0] o_pc;
	reg[8:0] t_pc;
	always@(posedge clk) begin
		 t_pc<=i_pc;
	end
	assign o_pc=(rst)?9'b111111111:t_pc;
endmodule

module single_pc_plus4(i_pc,o_pc);
	input[8:0] i_pc;
	output[8:0] o_pc;
	assign o_pc=i_pc+1;
endmodule



module single_signext(i_16,o_32);
	input[15:0] i_16;
	output[31:0] o_32;
	assign o_32={{16{i_16[15]}},i_16[15:0]};
endmodule

module single_add(i_op1,i_op2,o_out);
	input[31:0] i_op1,i_op2;
	output[31:0] o_out;
	assign o_out=i_op1+i_op2;
endmodule

module ReadFile(clk,rst,ReadA,ReadB,ReadC,WriteC,Wdat,Wctrl,Adat,Bdat,Cdat);
	input clk,rst,Wctrl;
	input[4:0] ReadA,ReadB,ReadC,WriteC;
	input[31:0] Wdat;
	output[31:0] Adat,Bdat,Cdat;
	reg[31:0] mem[31:0];

	assign Adat=mem[ReadA];
	assign Bdat=mem[ReadB];
	assign Cdat=mem[ReadC];
	always@(posedge clk or posedge rst) begin
	if(rst==1) begin
	  mem[0]=32'h00000000;
	end
	else if(Wctrl)
	  mem[WriteC]=Wdat;
	end
endmodule

module SingleCtrl(OP,ALUop,RegDst,RegWrite,Branch,
                  MemtoReg,MemRead,MemWrite,
					  ALUsrc,Jump,led);
	input[5:0] OP;
	output[1:0] ALUop;
	output RegDst,RegWrite;
	output Branch;
	output MemtoReg,MemRead,MemWrite;
	output ALUsrc;
	output Jump;
	output[4:0] led;
	wire R,LW,SW,BEQ,J;
	assign R=(~OP[5])&(~OP[4])&(~OP[3])&(~OP[2])&(~OP[1])&(~OP[0]);
	assign LW=(OP[5])&(~OP[4])&(~OP[3])&(~OP[2])&(OP[1])&(OP[0]);
	assign SW=(OP[5])&(~OP[4])&(OP[3])&(~OP[2])&(OP[1])&(OP[0]);
	assign BEQ=(~OP[5])&(~OP[4])&(~OP[3])&(OP[2])&(~OP[1])&(~OP[0]); 
	assign J=(~OP[5])&(~OP[4])&(~OP[3])&(~OP[2])&(OP[1])&(OP[0]);
	assign ALUop={R,BEQ};
	assign ALUsrc=LW|SW;
	assign RegDst=R;
	assign MemRead=LW;
	assign MemWrite=SW;
	assign MemtoReg=LW;
	assign Branch=BEQ;
	assign Jump=J;
	assign RegWrite=R|LW;
	assign led[4:0]={R,LW,SW,BEQ,J};

endmodule

module ALU(A,B,ALUoper,Result,Zero);
 
	input[31:0] A,B;
	input[2:0] ALUoper;
	output reg[31:0] Result;
	output reg Zero;

	always@(ALUoper or A or B) begin
		case(ALUoper[2:0])
		  3'b000: Result<=A&B;
		  3'b001: Result<=A|B;
		  3'b010: Result<=A+B;
		  3'b110: Result<=A-B;
		  3'b111: Result<=(B>A)?1:0;
		  default: Result<={32{1'bx}};
		endcase
		Zero<=(Result==0)?1:0;
	end
   
endmodule

module ALUctrl(ALUop,func,ALUoper);
 
	input[1:0] ALUop;
	input[5:0] func;
	output reg[2:0] ALUoper;

	always@(ALUop or func) begin
	  case(ALUop)
		 2'b00: ALUoper<=3'b010;
		 2'b01: ALUoper<=3'b110;
		 default: case(func)
			 6'b100000: ALUoper<=3'b010;
			 6'b100010: ALUoper<=3'b110;
			 6'b100100: ALUoper<=3'b000;
			 6'b100101: ALUoper<=3'b001;
			 6'b101010: ALUoper<=3'b111;
			 endcase
	  endcase
	end
endmodule

module display(clk,digit_node,node,segment,bin);
	input clk;
	input[15:0] digit_node;
	input[3:0] bin;
	output[3:0] node;
	output[7:0] segment;
	reg[3:0] node;
	reg[7:0] segment;
	reg[15:0] cnt;
	reg[3:0] code; //显示数字
	reg     pot; //显示小数点
	always@(posedge clk) begin
		cnt<=cnt+1;
		case(cnt[15:14])
		  2'b00: begin
			  node<=4'b1110;
			  code<=digit_node[3:0];
			  pot<=bin[0];
			  end
		  2'b01: begin
			  node<=4'b1101;
			  code<=digit_node[7:4];
			  pot<=bin[1];
			  end
		  2'b10: begin
			  node<=4'b1011;
			  code<=digit_node[11:8];
			  pot<=bin[2];
			  end
		  2'b11: begin
			  node<=4'b0111;
			  code<=digit_node[15:12];
			  pot<=bin[3];
			  end
		endcase
		case(code)
		  4'b0000: segment<=8'b11000000;
		  4'b0001: segment<=8'b11111001;
		  4'b0010: segment<=8'b10100100;
		  4'b0011: segment<=8'b10110000;
		  4'b0100: segment<=8'b10011001;
		  4'b0101: segment<=8'b10010010;
		  4'b0110: segment<=8'b10000010;
		  4'b0111: segment<=8'b11111000;
		  4'b1000: segment<=8'b10000000;
		  4'b1001: segment<=8'b10010000;
		  4'b1010: segment<=8'b10001000;
		  4'b1011: segment<=8'b10000011;
		  4'b1100: segment<=8'b11000110;
		  4'b1101: segment<=8'b10100001;
		  4'b1110: segment<=8'b10000110;
		  4'b1111: segment<=8'b10001110;
		  default: segment<=8'b11111111;
		endcase
		if(pot==1'b1) //pot每个clk脉冲均判断一次，因此可以决定segment[7]
		  segment[7]<=1'b0;
		else
		  segment[7]<=1'b1;
	end
endmodule

module delay_ms(clk,clk_ms);
	input clk;
	output reg clk_ms;
	reg[15:0] cnt;
	initial begin
	 cnt=0;
	 clk_ms=0;
	end
	always@(posedge clk)begin
	 cnt=cnt+1;
	 if(cnt==25000) begin
		cnt=0;
		clk_ms=~clk_ms;
	 end
	end
endmodule

module anti(clk_ms,button,button_out);
	input clk_ms;
	input[3:0] button;
	output reg[3:0] button_out;
	reg[3:0] cnt,temp;
	initial begin
	  cnt=0;
	end
	always@(posedge clk_ms)begin
	  if(button!=temp)begin
		 temp=button;
		 cnt=0;
	  end
	  else begin
		 cnt=cnt+1;
		 if(cnt==15)begin
			button_out=temp;
		 end
	  end
	end
endmodule
