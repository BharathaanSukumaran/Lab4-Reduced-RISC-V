module result_mux#(
    parameter RESULT_WIDTH = 32
)(
    input logic ResultSrc,
    input logic [RESULT_WIDTH-1:0] ALUResult,
    input logic [RESULT_WIDTH-1:0] ReadData,
    output logic [RESULT_WIDTH-1:0] Result

);

assign Result = ResultSrc ? ReadData : ALUResult;
    
endmodule