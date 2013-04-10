//macro.vh for macro definitions

//ALU CONTROL CODES
`define ALU_AND		3'b000
`define ALU_OR		3'b001
`define ALU_ADD		3'b010
`define ALU_SUB		3'b110
`define ALU_SLT		3'b111

//INSTRUCTION TYPE
`define INSTR_LW			6'b100011
`define INSTR_SW			6'b101011
`define INSTR_BEQ		6'b000100
`define INSTR_RTYPE		6'b000000
`define INSTR_JUMP		6'b000010

//R-TYPE FUNCTION CODE
`define RTYPE_ADD		6'b100000
`define RTYPE_SUB		6'b100010
`define RTYPE_SLT		6'b101010
`define RTYPE_AND		6'b100100
`define RTYPE_OR		6'b100101
`define RTYPE_XOR		6'b100110
`define RTYPE_NOR		6'b100111
`define RTYPE_ADDU		6'b100001
`define RTYPE_SLTU		6'b101011
