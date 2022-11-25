module PCtop #(
    parameter IMMOp_WIDTH = 12 
) (
    input wire clk,
    input wire rst,
    input wire [IMMOp_WIDTH-1:0] ImmOp ,
    input logic PCsrc,
    output wire [11:0] PC 
);

wire [11:0] next_PC ;

mux2 PC_Select(
.PCsrc(PCsrc),
.branch_PC(PC+ImmOp),
.inc_PC(PC+4),
.next_PC(next_PC)
);

PCReg PC_Reg(
.clk(clk),
.rst(rst),
.next_PC(next_PC),
.PC(PC)
);
endmodule

