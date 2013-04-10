//macro.vh
//macro definitions

//operation code

`define OP_NOP		32'b00000_100000

`define OP_ALUOp	6'b000000

`define OP_ADDI 	6'b001000
`define OP_ADDIU 	6'b001001
`define OP_ANDI 	6'b001100
`define OP_ORI		6'b001101
`define OP_XORI		6'b001110
`define OP_LUI		6'b001111
`define OP_LW			6'b100011
`define OP_SW			6'b101011
`define OP_BEQ		6'b000100
`define OP_BNE		6'b000101
`define OP_SLTI		6'b001010
`define OP_SLTIU	6'b001011

`define OP_JMP		6'b000010
`define OP_JAL		6'b000011	


//ALU FUNCTION CODE
`define FUNC_ADD		6'b100000
`define FUNC_ADDU		6'b100001
`define FUNC_SUB		6'b100010
`define	FUNC_SUBU		6'b100011
`define FUNC_AND		6'b100100
`define FUNC_OR			6'b100101
`define FUNC_XOR		6'b100110
`define FUNC_NOR		6'b100111
`define FUNC_SLT		6'b101010
`define FUNC_SLTU		6'b101011
`define FUNC_SLL		6'b000000
`define FUNC_SRL		6'b000010
`define FUNC_SRA		6'b000011
`define FUNC_SLLV   6'b000100
`define FUNC_SRLV   6'b000110
`define FUNC_SRAV   6'b000111
`define FUNC_JR			6'b001000

//ALU CODE
`define ALU_ADD		6'b100000
`define ALU_ADDU	6'b100001
`define ALU_ADDI  6'b110000
`define ALU_ADDIU 6'b110001
`define ALU_SUB		6'b100010
`define ALU_SUBU	   6'b100011
`define ALU_AND		6'b100100
`define ALU_ANDI	6'b110100
`define ALU_OR		6'b100101
`define ALU_ORI		6'b110101
`define ALU_XOR		6'b100110
`define ALU_ORI		6'b110101
`define ALU_XORI  6'b110110
`define ALU_NOR		6'b100111 
`define ALU_SLT		6'b101010
`define ALU_SLTU	6'b101011
`define ALU_SLTI	6'b111010
`define ALU_SLTIU	6'b111011
`define ALU_SLL		6'b000000
`define ALU_SRL		6'b000010
`define ALU_SRA		6'b000011
`define ALU_SLLV  6'b000100
`define ALU_SRLV  6'b000110
`define ALU_SRAV  6'b000111
`define ALU_JR		6'b001000
`define ALU_LUI		6'b111111
`define ALU_NONE	6'b111110

//INST TYPE CODE
`define	INST_TYPE_NOP	4'b0000
`define	INST_TYPE_ADD	4'b0001
`define	INST_TYPE_SUB	4'b0010
`define	INST_TYPE_AND	4'b0011
`define	INST_TYPE_OR	4'b0100
`define	INST_TYPE_NOR	4'b0101
`define	INST_TYPE_LW	4'b0110
`define	INST_TYPE_SW	4'b0111
`define	INST_TYPE_BEQ	4'b1000
`define	INST_TYPE_JMP	4'b1001
`define	INST_TYPE_BNE	4'b1010
`define	INST_TYPE_SLT	4'b1011
`define	INST_TYPE_SLL	4'b1100
`define	INST_TYPE_SRL	4'b1101
`define	INST_TYPE_SRA	4'b1110
`define	INST_TYPE_NONE	4'b1111
