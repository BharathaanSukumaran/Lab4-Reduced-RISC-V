module SignExtend_main #(
    INSTR_WIDTH = 32,
    DATA_WIDTH = 12
) (
    input logic [INSTR_WIDTH-1:0] Instr,
    input logic [DATA_WIDTH-1:0] ImmSrc,
    output logic [INSTR_WIDTH-1:0] ImmOp 
);
logic [6:0] op  = Instr[6:0];
logic [2:0] func3  = Instr[14:12];
always_comb begin
    case (op)
    // 51: 
    3: begin 
        case (func3)
            3'b010: ImmOp = {{(INSTR_WIDTH-DATA_WIDTH){ImmSrc[DATA_WIDTH-1]}},ImmSrc};
        endcase
        
    end
    19:begin 
        case (func3)
            3'b000: ImmOp = {{(INSTR_WIDTH-DATA_WIDTH){ImmSrc[DATA_WIDTH-1]}},ImmSrc};
        endcase
    end
    // 35:
    99:begin 
        case (func3)
            3'b001: ImmOp = {{(INSTR_WIDTH-DATA_WIDTH){ImmSrc[DATA_WIDTH-1]}},ImmSrc};
        endcase
    end      
    endcase


end
    
endmodule
