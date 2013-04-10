`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:47:06 03/16/2011 
// Design Name: 
// Module Name:    alu_wrapper 
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
//alu
module alu_wrapper(rin_A, rin_B, ir_data, pc, alu_srcA, alu_srcB, alu_ctrl, zero, res);
				 
	input [31:0] rin_A;
	input [31:0] rin_B;
	input [31:0] ir_data;
	input [31:0] pc;
	input        alu_srcA;
	input [1:0]  alu_srcB;
	input [1:0]	 alu_ctrl;
	output		 zero;
	output[31:0] res;

	wire [31:0]	 rin_A;
	wire [31:0]	 rin_B;
	wire [31:0]	 ir_data;
	wire [31:0]  pc;
	wire 			 alu_srcA;
	wire [1:0]   alu_srcB;
	wire [1:0]	 alu_ctrl;
	wire [31:0]	 res;
	wire [31:0]  in_A;
	wire [31:0]	 in_B;
	wire [31:0]  signimm;
	wire [31:0]  shiftimm;
	wire         zero;
	
	assign signimm = (ir_data[15] == 1'b0) ? {16'h0000, ir_data[15:0]} : {16'hFFFF, ir_data[15:0]};
	assign shiftimm = signimm;
	
	assign in_A = (alu_srcA == 1'b1)? rin_A : pc; 
	//assign in_A = pc; 
	assign in_B = (alu_srcB == 2'b00)? rin_B : ((alu_srcB == 2'b01)? 32'h00000001 : ((alu_srcB == 2'b10)? signimm: shiftimm));
	assign zero = (res == 32'h00000000)? 1 : 0;

	alu x_alu(in_A, in_B, alu_ctrl, res);

endmodule

module alu (//inputs
            in_A,
            in_B,
            alu_ctl,
            //outputs
            res);
input [31:0] in_A;		//ALU的A端输入
input [31:0] in_B;		//ALU的B端输入
input [1:0]  alu_ctl;	//ALU的控制信号
output reg [31:0] res;		//ALU的结果输出

always @ (alu_ctl or in_A or in_B)
   case (alu_ctl)
      2'b00: res = in_A + in_B;
      2'b01: res = in_A - in_B;
      2'b11: res = in_A & in_B;
      2'b10: res = ~(in_A | in_B);
   endcase

endmodule 

