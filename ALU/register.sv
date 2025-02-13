module register #(
    parameter ADDRESS_WIDTH = 5,
    parameter DATA_WIDTH = 32
)(
    input logic clk,
    input logic [DATA_WIDTH-1:0] Instr,
    input logic WE3,
    input logic [DATA_WIDTH-1:0] WD3,
    output logic [DATA_WIDTH-1:0] RD1,
    output logic [DATA_WIDTH-1:0] RD2,
    output logic [DATA_WIDTH-1:0] a0

);
logic [4:0] rs2 = Instr[24:20];
logic [4:0] rs1  = Instr[19:15];
logic [4:0] rd = Instr[11:7];
// 3-bit vector with a depth of 2^8 bits
logic [DATA_WIDTH-1:0] reg_array [2**ADDRESS_WIDTH-1:0];

// Initialise memory

always_ff @(posedge clk) begin
    RD1 <= reg_array [rs1];
    RD2 <= reg_array[rs2];
    if(WE3 == 1) begin
        reg_array[rd]<= WD3;
    end
    a0 <= reg_array[0];
end

endmodule
