module mux2#(
    parameter data_width = 32
)(
    input logic ALUsrc,
    input logic [data_width-1:0] regOp2,
    input logic [data_width-1:0] ImmOp,
    output logic [data_width-1:0] ALUop2

);

assign ALUop2 = ALUsrc ? ImmOp : regOp2;
    
endmodule
