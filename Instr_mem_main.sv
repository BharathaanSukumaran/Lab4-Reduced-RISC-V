module Instr_mem_main #(
    parameter ADDRESS_WIDTH = 8,
    parameter DATA_WIDTH = 32
)(
    input logic [ADDRESS_WIDTH-1:0] A,
    output logic [DATA_WIDTH-1:0] RD
);
// 32-bit vector with a depth of 2^32 bits
logic [DATA_WIDTH-1:0] rom_array [2**ADDRESS_WIDTH-1:0];

// Initialise memory
initial begin
    $display("Loading data to ROM");
    $readmemh("cpu_ins.mem",rom_array);
end

always_comb begin
    RD = rom_array[A];
end 

endmodule
