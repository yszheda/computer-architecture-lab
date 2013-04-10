`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:33:39 03/30/2011 
// Design Name: 
// Module Name:    regfile 
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
module regfile(clk, rst, raddr_A, raddr_B, waddr, wdata, we, rdata_A, rdata_B,
	which_reg, reg_content, high_reg_content);   
	input clk;
	input rst;
	input [4:0] raddr_A;
	input [4:0] raddr_B;
	input [4:0] waddr;
	input [31:0] wdata;
	input we;
	output [31:0] rdata_A;
	output [31:0] rdata_B;
	
	input [4:0] which_reg;
	output [31:0] reg_content;
	output [31:0] high_reg_content;

	wire clk;
	wire rst;
	wire [4:0] raddr_A;
	wire [4:0] raddr_B;
	wire [31:0] wdata;
	wire we;
	reg [31:0] rdata_A;
	reg [31:0] rdata_B;
	reg [31:0] reg_content;
	reg [31:0] high_reg_content;
	
	reg high_reg_old;
	
	reg [31:0] r0;
	reg [31:0] r1;
	reg [31:0] r2;
	reg [31:0] r3;
	reg [31:0] r4;
	reg [31:0] r5;
	reg [31:0] r6;
	reg [31:0] r7;
	reg [31:0] r8;
	reg [31:0] r9;
	reg [31:0] r10;
	reg [31:0] r11;
	reg [31:0] r12;
	reg [31:0] r13;
	reg [31:0] r14;
	reg [31:0] r15;
	reg [31:0] r16;
	reg [31:0] r17;
	reg [31:0] r18;
	reg [31:0] r19;
	reg [31:0] r20;
	reg [31:0] r21;
	reg [31:0] r22;
	reg [31:0] r23;
	reg [31:0] r24;
	reg [31:0] r25;
	reg [31:0] r26;
	reg [31:0] r27;
	reg [31:0] r28;
	reg [31:0] r29;
	reg [31:0] r30;
	reg [31:0] r31;
	

	always @ (negedge clk or posedge rst) begin		
		if (rst == 1) begin		//reset is triggered
			r0 <= 0;
			r1 <= 0;
			r2 <= 0;
			r3 <= 0;
			r4 <= 0;
			r5 <= 0;
			r6 <= 0;
			r7 <= 0;
			r8 <= 0;
			r9 <= 0;
			r10 <= 0;
			r11 <= 0;
			r12 <= 0;
			r13 <= 0;
			r14 <= 0;
			r15 <= 0;		
			r16 <= 0;
			r17 <= 0;
			r18 <= 0;
			r19 <= 0;
			r20 <= 0;
			r21 <= 0;
			r22 <= 0;
			r23 <= 0;
			r24 <= 0;
			r25 <= 0;
			r26 <= 0;
			r27 <= 0;
			r28 <= 0;
			r29 <= 0;
			r30 <= 0;
			r31 <= 0;
		end
		else if (we == 1) begin		//write register when we is high level
			case (waddr)
				5'b00000: r0 <= 0;
				5'b00001: r1 <= wdata;
				5'b00010: r2 <= wdata;
				5'b00011: r3 <= wdata;
				5'b00100: r4 <= wdata;
				5'b00101: r5 <= wdata;
				5'b00110: r6 <= wdata;
				5'b00111: r7 <= wdata;
				5'b01000: r8 <= wdata;
				5'b01001: r9 <= wdata;
				5'b01010: r10 <= wdata;
				5'b01011: r11 <= wdata;
				5'b01100: r12 <= wdata;
				5'b01101: r13 <= wdata;
				5'b01110: r14 <= wdata;
				5'b01111: r15 <= wdata;			
				5'b10000: r16 <= wdata;
				5'b10001: r17 <= wdata;
				5'b10010: r18 <= wdata;
				5'b10011: r19 <= wdata;
				5'b10100: r20 <= wdata;
				5'b10101: r21 <= wdata;
				5'b10110: r22 <= wdata;
				5'b10111: r23 <= wdata;
				5'b11000: r24 <= wdata;
				5'b11001: r25 <= wdata;
				5'b11010: r26 <= wdata;
				5'b11011: r27 <= wdata;
				5'b11100: r28 <= wdata;
				5'b11101: r29 <= wdata;
				5'b11110: r30 <= wdata;
				5'b11111: r31 <= wdata;
				default:  r0 <= 0;
			endcase
		end
	end

	always @ (clk) begin		//when clk is changed
		if	(clk == 0) begin				//when clk is low level
		  case(raddr_A)
				5'b00000: rdata_A <= r0;
				5'b00001: rdata_A <= r1;
				5'b00010: rdata_A <= r2;
				5'b00011: rdata_A <= r3;
				5'b00100: rdata_A <= r4;
				5'b00101: rdata_A <= r5;
				5'b00110: rdata_A <= r6;
				5'b00111: rdata_A <= r7;
				5'b01000: rdata_A <= r8;
				5'b01001: rdata_A <= r9;
				5'b01010: rdata_A <= r10;
				5'b01011: rdata_A <= r11;
				5'b01100: rdata_A <= r12;
				5'b01101: rdata_A <= r13;
				5'b01110: rdata_A <= r14;
				5'b01111: rdata_A <= r15;				
				5'b10000: rdata_A <= r16;
				5'b10001: rdata_A <= r17;
				5'b10010: rdata_A <= r18;
				5'b10011: rdata_A <= r19;
				5'b10100: rdata_A <= r20;
				5'b10101: rdata_A <= r21;
				5'b10110: rdata_A <= r22;
				5'b10111: rdata_A <= r23;
				5'b11000: rdata_A <= r24;
				5'b11001: rdata_A <= r25;
				5'b11010: rdata_A <= r26;
				5'b11011: rdata_A <= r27;
				5'b11100: rdata_A <= r28;
				5'b11101: rdata_A <= r29;
				5'b11110: rdata_A <= r30;
				5'b11111: rdata_A <= r31;
	
				default:  rdata_A <= r0;
			 endcase 
			 
			 case(raddr_B)
				5'b00000: rdata_B <= r0;
				5'b00001: rdata_B <= r1;
				5'b00010: rdata_B <= r2;
				5'b00011: rdata_B <= r3;
				5'b00100: rdata_B <= r4;
				5'b00101: rdata_B <= r5;
				5'b00110: rdata_B <= r6;
				5'b00111: rdata_B <= r7;
				5'b01000: rdata_B <= r8;
				5'b01001: rdata_B <= r9;
				5'b01010: rdata_B <= r10;
				5'b01011: rdata_B <= r11;
				5'b01100: rdata_B <= r12;
				5'b01101: rdata_B <= r13;
				5'b01110: rdata_B <= r14;
				5'b01111: rdata_B <= r15;				
				5'b10000: rdata_B <= r16;
				5'b10001: rdata_B <= r17;
				5'b10010: rdata_B <= r18;
				5'b10011: rdata_B <= r19;
				5'b10100: rdata_B <= r20;
				5'b10101: rdata_B <= r21;
				5'b10110: rdata_B <= r22;
				5'b10111: rdata_B <= r23;
				5'b11000: rdata_B <= r24;
				5'b11001: rdata_B <= r25;
				5'b11010: rdata_B <= r26;
				5'b11011: rdata_B <= r27;
				5'b11100: rdata_B <= r28;
				5'b11101: rdata_B <= r29;
				5'b11110: rdata_B <= r30;
				5'b11111: rdata_B <= r31;
				default:  rdata_B <= r0;
			 endcase
		 end
	end

	always @ (clk or which_reg) begin //when clk or which_reg is changed
			case(which_reg)
				5'b00000: begin
					reg_content <= r0;
					high_reg_content <= r16;
				end
				5'b00001: begin
					reg_content <= r1;
					high_reg_content <= r17;
				end
				5'b00010: begin
					reg_content <= r2;
					high_reg_content <= r18;
				end
				5'b00011: begin
					reg_content <= r3;
					high_reg_content <= r19;
				end
				5'b00100: begin
					reg_content <= r4;
					high_reg_content <= r20;
				end
				5'b00101: begin
					reg_content <= r5;
					high_reg_content <= r21;
				end
				5'b00110: begin
					reg_content <= r6;
					high_reg_content <= r22;
				end
				5'b00111: begin
					reg_content <= r7;
					high_reg_content <= r23;
				end
				5'b01000: begin
					reg_content <= r8;
					high_reg_content <= r24;
				end
				5'b01001: begin
					reg_content <= r9;
					high_reg_content <= r25;
				end
				5'b01010: begin
					reg_content <= r10;
					high_reg_content <= r26;
				end
				5'b01011: begin
					reg_content <= r11;
					high_reg_content <= r27;
				end
				5'b01100: begin
					reg_content <= r12;
					high_reg_content <= r28;
				end
				5'b01101: begin
					reg_content <= r13;
					high_reg_content <= r29;
				end
				5'b01110: begin
					reg_content <= r14;
					high_reg_content <= r30;
				end
				5'b01111: begin
					reg_content <= r15;
					high_reg_content <= r31;
				end
			endcase
	end
	endmodule    
