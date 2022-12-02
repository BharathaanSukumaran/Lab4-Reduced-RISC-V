module RISC #(
    parameter DATA_WIDTH = 32
)(
    input logic clk,
    input logic rst,
    output logic [DATA_WIDTH-1:0] a0
);



// PCTop
logic [7:0] next_PC;
logic [DATA_WIDTH-1:0] ImmOp;
logic PCsrc;
logic [7:0] PC;

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
logic[DATA_WIDTH-1:0] Instr;
logic RegWrite;
logic EQ;
logic [2:0] ALUctrl;
logic ALUsrc;
logic [12:0] ImmSrc;
logic MemWrite;
logic ResultSrc;

ControlUnit_main ControlUnit(
.Instr(Instr),
.EQ(EQ),
.RegWrite(RegWrite),
.ALUctrl(ALUctrl),
.ALUsrc(ALUsrc),
.ImmSrc(ImmSrc),
.PCsrc(PCsrc),
.MemWrite(MemWrite),
.ResultSrc(ResultSrc)
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
logic [DATA_WIDTH-1:0] ALUout;
logic [DATA_WIDTH-1:0] ALUop1;
logic [DATA_WIDTH-1:0] ALUop2;
logic [DATA_WIDTH-1:0] regOp2;
logic [DATA_WIDTH-1:0] WD3;

muxALU ALUmux(
.ALUsrc(ALUsrc),
.regOp2(regOp2),
.ImmOp(ImmOp),
.ALUop2(ALUop2)
);
register_main RegFile(
.clk(clk),
.Instr(Instr),
.WE3(RegWrite),
.WD3(Result),
.RD1(ALUop1),
.RD2(regOp2),
.a0(a0)
);

alu_main ALU(
.ALUctrl(ALUctrl),
.ALUop1(ALUop1),
.ALUop2(ALUop2),
.SUM(ALUout),
.EQ(EQ)
);
//end

// RAM
logic [DATA_WIDTH-1:0] ReadData;

ram_main DataMemory(
.clk(clk),
.MemWrite(MemWrite),
.A(ALUout),
.WD(regOp2),
.RD(ReadData)
);
///end

//Result MUX
logic [DATA_WIDTH-1:0] Result;
 
result_mux_main result_mux(
.ResultSrc(ResultSrc),
.ALUResult(ALUout),
.ReadData(ReadData),
.Result(Result)
);
//end
endmodule 


