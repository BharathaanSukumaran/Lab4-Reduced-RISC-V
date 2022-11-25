module PCReg_main #(
    parameter PC_WIDTH = 8
)(
    input logic clk,
    input logic rst,
    input logic [PC_WIDTH-1:0] next_PC ,
    output logic [PC_WIDTH-1:0] PC 
);

always_ff @(posedge clk) begin
    if(rst)begin 
        PC <= 8'b0;
    end
    else begin
        PC <= next_PC;   
    end
end
    
endmodule
