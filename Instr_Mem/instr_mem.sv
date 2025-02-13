module instr_mem #(
    parameter ADDRESS_WIDTH = 12,
    parameter DATA_WIDTH = 32
)(
    input logic [ADDRESS_WIDTH-1:0] A,
    output logic [DATA_WIDTH-1:0] RD
);
// 3-bit vector with a depth of 2^8 bits
logic [DATA_WIDTH-1:0] rom_array [2**ADDRESS_WIDTH-1:0];

// Initialise memory
initial begin
    $display("Loading data to ROM");
    $readmemh("Instr_Mem/cpu_ins.mem",rom_array);
end

always_comb begin
    dout <= rom_array[A];
end 

endmodule
