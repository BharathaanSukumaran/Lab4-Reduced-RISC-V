module muxALU#(
    parameter ALUop2_width = 32
)(
    input logic ALUsrc,
    input logic [ALUop2_width-1:0] regOp2,
    input logic [ALUop2_width-1:0] ImmOp,
    output logic [ALUop2_width-1:0] ALUop2

);

assign ALUop2 = ALUsrc ? ImmOp : regOp2;
    
endmodule
