module ram_main #(
    parameter ADDRESS_WIDTH = 12,
    parameter DATA_WIDTH = 32
)(
    input logic clk,
    input logic MemWrite,
    input logic [DATA_WIDTH-1:0] A,
    input logic [DATA_WIDTH-1:0] WD,
    output logic [DATA_WIDTH-1:0] RD
);
// 3-bit vector with a depth of 2^8 bits
logic [DATA_WIDTH-1:0] ram_array [2**ADDRESS_WIDTH-1:0];

initial begin
    $display("Loading data to RAM");
    $readmemh("sinerom.mem",ram_array);
end

always_ff @(posedge clk) begin
    if (MemWrite == 1) begin
        ram_array[A]<=WD;
    end
    else begin
        RD <= ram_array[A];
    end

end 

endmodule
