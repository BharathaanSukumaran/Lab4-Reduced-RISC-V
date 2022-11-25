module ControlUnit #(
    parameter DATA_WIDTH = 32
)(
    input logic [DATA_WIDTH-1:0] Instr,
    input logic EQ,
    output logic RegWrite,
    output logic [2:0] ALUctrl,
    output logic ALUsrc,
    output logic [11:0] ImmSrc,
    output logic PCsrc
);
logic [6:0] op = Instr[6:0];
logic [2:0] func3 = Instr[14:12];
logic [6:0] func7 = Instr[31:25];
always_comb begin
    case(op)
//     7'd51: case(func3)                
//                 case (func7)
                    
//                 endcase
//            endcase
      7'd3: case(func3)
                  3'b010: begin  
                        RegWrite = 1;
                        ALUctrl = 3'b000;
                        ALUsrc = 1;
                        PCsrc = 0;
                        ImmSrc =  Instr[11:0];
                  end
            endcase
      7'd19:case(func3)
                  3'b000: begin 
                        RegWrite = 1;
                        ALUctrl = 3'b000;
                        ALUsrc = 1;
                        PCsrc = 0;
                        ImmSrc =  Instr[11:0];
                  end 
                  //     case (func7)
                        
                  //     endcase
            endcase
//     7'd35:case(func3)
//           endcase
      7'd99:case(func3)
                  3'b001: begin 
                        if (!EQ) begin 
                              RegWrite = 0;
                              ALUctrl = 7;
                              ALUsrc = 1;
                              PCsrc = 1;
                              ImmSrc = {Instr[31],Instr[7],Instr[30:25],Instr[11:8]};
                        end
                  end 
            endcase


    endcase
end 
endmodule
