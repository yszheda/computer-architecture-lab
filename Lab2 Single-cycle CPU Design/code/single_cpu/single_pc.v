`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:25:43 03/09/2011 
// Design Name: 
// Module Name:    single_pc 
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
//基本模块
module single_pc(clk,rst,ipc,opc);
		input clk;
		input rst;
 		input [8:0] ipc;
  		output [8:0] opc;
		wire [8:0] tpc;
		
		dff x_dff(clk,ipc,tpc);
		sel x_sel(rst,tpc,opc);
endmodule

module dff(clk,d,q);
		input clk;
		input [8:0] d;
		output [8:0] q;
		reg [8:0] q;
		
		initial begin
			q<=0;
		end
		
		always @ (posedge clk) begin
			q<= d ;
		end
endmodule

module sel(rst,ipc,opc);
		input rst;
 		input [8:0] ipc;
  		output [8:0] opc;
		
		assign opc = rst ? 9'b111111111 : ipc;
endmodule

module single_add(op1,op2,out);
 		 	input [31:0] op1;
  		 	input [31:0] op2;
  		 	output [31:0] out;

			assign out = op1 + op2;
endmodule

module single_pc_plus4(ipc,opc);
 	 input [8:0] ipc;
 	 output [8:0] opc;
  
 	 assign opc[8:0] = ipc[8:0] + 1;
endmodule

module single_signext(in, out);
	input [15:0] in;
	output [31:0] out;
	reg [31:0] out;

	always @(in) begin
			if(in[15] == 1'b1)
		out <= {{16'b1111111111111111},in};
			else
		out <= {{16'b0000000000000000},in};
	end  
endmodule


module single_mux32(Ai,Bi,sel,out);
  		input [31:0] Ai;
  		input [31:0] Bi;
  		input sel;
  		output [31:0] out;
  
  		assign out[31:0] = (sel == 1) ? (Bi[31:0]) : (Ai[31:0]);
endmodule


module single_mux5(Ai,Bi,sel,out);
 		 input [4:0] Ai;
  		input [4:0] Bi;
  		input sel;
  		output [4:0] out;
  
  		assign out[4:0] = (sel == 1) ? (Bi[4:0]) : (Ai[4:0]);
endmodule

//ALU控制器
`include "macro.vh"
module single_aluc(aluop, func, aluc);
    input [1:0] aluop;
    input [5:0] func;
    output [2:0] aluc;
	 reg [2:0] aluc;
	
	 always @(aluop or func) begin
		case (aluop)
			2'b00: begin
				aluc = `ALU_ADD;        //lw | sw
			end
			2'b01: begin
				aluc = `ALU_SUB;			 //beq
			end
			2'b10: begin
				case (func)
				  `RTYPE_ADD:  aluc = `ALU_ADD;
				  `RTYPE_SUB:  aluc = `ALU_SUB;
				  `RTYPE_SLT:  aluc = `ALU_SLT;
				  `RTYPE_AND:  aluc = `ALU_AND;
				  `RTYPE_OR:  aluc = `ALU_OR;
					default: aluc = 3'b000;
				endcase
			end
			default: begin
			    aluc=3'b000;
			end
		endcase
	end
endmodule

//ALU模块
`include "macro.vh"
module single_alu(i_r,i_s,i_aluc,o_zf,o_alu);
	input [31:0] i_r;		//i_r: r input
	input [31:0] i_s;		//i_s: s input
	input [2:0] i_aluc;		//i_aluc: ctrl input
	output o_zf;			//o_zf: zero flag output
	output [31:0] o_alu;		//o_alu: alu result output
	reg o_zf;
	reg [31:0] o_alu;
	
	always @(i_aluc or i_r or i_s) begin
		case (i_aluc)
			`ALU_AND: begin
				o_zf = 0;
				o_alu = i_r & i_s;
			end
			`ALU_OR: begin
				o_zf = 0;
				o_alu = i_r | i_s;
			end
			`ALU_ADD: begin
				o_zf = 0;
				o_alu = i_r + i_s;
			end
			`ALU_SUB: begin
				o_alu = i_r - i_s;
				o_zf  = (o_alu == 0);
			end
			`ALU_SLT: begin
				o_zf = 0;
			  if (i_s < i_r)
				  o_alu = 1;
				else
				  o_alu = 0;
			end
			default: begin
				o_alu = 0;
				o_zf = 0;
			end
		endcase
	end
endmodule

//GPR模块
module single_gpr(
    rst,//reset
    clk,//clock
    i_adr1,//register index 1
    i_adr2,//register index 2
    i_adr3,//register index 3
    i_wreg,//register to write
    i_wdata,//data to write
    i_wen,//write enable
    o_op1,//read data1, out
    o_op2,//read data2, out
    o_op3//read data3, out
);
                             
	 input clk;
	 input rst;                
	 input [4:0] i_adr1; 
	 input [4:0] i_adr2;
	 input [4:0] i_adr3;
	 input [31:0] i_wdata;
	 input [4:0] i_wreg;
	 input i_wen;
	 output [31:0] o_op1;
	 output [31:0] o_op2;
	 output [31:0] o_op3;
	 reg [31:0] mem[31:0];
	 
		assign o_op1 = mem[i_adr1];
		assign o_op2 = mem[i_adr2];
		assign o_op3 = mem[i_adr3];
	 always @(posedge clk or posedge rst) begin
		if (rst == 1) begin
			mem[0] <= 32'h00000000;
			  mem[1] <= 32'h00000000;
			  mem[2] <= 32'h00000000;
			  mem[3] <= 32'h00000000;
			  mem[4] <= 32'h00000000;
		end
		else if (i_wen) begin
		mem[i_wreg] <= (i_wreg == 5'b00000) ? 32'h00000000 : i_wdata;
		end
	 end
endmodule

module single_ctl(clk, OP, RegDst, Jump,  Branch, MemRead, MemtoReg, ALUop, MemWrite,
 ALUsrc, RegWrite );
    input clk;
    input [5:0] OP;
    output RegDst;
    output ALUsrc;
    output [1:0] ALUop;
    output MemtoReg;
    output RegWrite;
    output MemRead;
    output MemWrite;
    output Branch;
    output Jump;

   assign RegDst = ~OP[5] & ~OP[4] & ~OP[3] & ~OP[2] & ~OP[1] & ~OP[0];
 	assign MemtoReg =OP[5] & ~OP[4] & ~OP[3] & ~OP[2] & OP[1] & OP[0];
	assign RegWrite =~OP[4] & ~OP[3] & ~OP[2];
	assign ALUsrc 	=OP[5] & ~OP[4] & ~OP[2] & OP[1] & OP[0];
	assign ALUop[1] =~OP[5] & ~OP[4] & ~OP[3] & ~OP[2] & ~OP[1] & ~OP[0];
	assign ALUop[0] =~OP[5] & ~OP[4] & ~OP[3] & OP[2] & ~OP[1] & ~OP[0];
	assign MemRead =OP[5] & ~OP[4] & ~OP[3] & ~OP[2] & OP[1] & OP[0];
	assign MemWrite =OP[5] & ~OP[4] & OP[3] & ~OP[2] & OP[1] & OP[0];
	assign Branch 	=~OP[5] & ~OP[4] & ~OP[3] & OP[2] & ~OP[1] & ~OP[0];
	assign Jump =~OP[5] & ~OP[4] & ~OP[3] & ~OP[2] & OP[1] & ~OP[0];
endmodule
