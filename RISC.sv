module RISC #(
    parameter DATA_WIDTH = 32
)(
    input logic clk,
    input logic rst,
    output logic [DATA_WIDTH-1:0] a0,
    output logic [DATA_WIDTH-1:0] a1,
    output logic [DATA_WIDTH-1:0] t1
);



// PCTop
wire [7:0] next_PC;
wire [DATA_WIDTH-1:0] ImmOp;
wire PCsrc;
wire [7:0] PC;

muxPC PCMux(
.PCsrc(PCsrc),
.branch_PC(ImmOp[7:0]+PC),
.inc_PC(PC+ 8'd4),
.next_PC(next_PC)
);
PCReg_main PCReg(
.clk(clk),
.rst(rst),
.next_PC(next_PC),
.PC(PC)
);
//end

//Instr Mem
Instr_mem_main Instr_mem(
.A(PC),
.RD(Instr)
);
//end

//Control Unit
wire[DATA_WIDTH-1:0] Instr;
wire RegWrite;
wire EQ;
wire [2:0] ALUctrl;
wire ALUsrc;
wire [11:0] ImmSrc;
wire PCsrc;

ControlUnit_main ControlUnit(
.Instr(Instr),
.EQ(EQ),
.RegWrite(RegWrite),
.ALUctrl(ALUctrl),
.ALUsrc(ALUsrc),
.ImmSrc(ImmSrc),
.PCsrc(PCsrc)
);
//end

//SignExtend
SignExtend_main SignExtend(
.Instr(Instr),
.ImmSrc(ImmSrc),
.ImmOp(ImmOp)
);
//end

//ALU
wire [DATA_WIDTH-1:0] ALUout;
wire [DATA_WIDTH-1:0] ALUop1;
wire [DATA_WIDTH-1:0] ALUop2;
wire [DATA_WIDTH-1:0] regOp2;


register_main RegFile(
.clk(clk),
.Instr(Instr),
.WE3(RegWrite),
.WD3(ALUout),
.RD1(ALUop1),
.RD2(regOp2),
.a0(a0)
);


muxALU ALUMux(
.ALUsrc(ALUsrc),
.regOp2(regOp2),
.ImmOp(ImmOp),
.ALUop2(ALUop2)
);

alu_main ALU(
.ALUctrl(ALUctrl),
.ALUop1(ALUop1),
.ALUop2(ALUop2),
.SUM(ALUout),
.EQ(EQ)
);
//end
endmodule 


