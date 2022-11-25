#include "VSignExtend.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char **argv, char **env){
    int it;
    int clk;
    Verilated::commandArgs(argc,argv);
//  initialise top verilog instance
    VSignExtend* top = new VSignExtend;
// initialise trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp,99);
    tfp->open("SignExtend.vcd");

    // initialise simulation outputs
    top->ImmSrc = 0x001;
    top-> Instr = 0x0014A303;

    // run simulation for many clock cycles
    int tick = 0;
    for(int i=0;i< 300; i++){
        // Add to readme, remember to compelete part 2 of challenge
        // dump variables into VCD file and toggle clock
        for(clk=0;clk<2;clk++){
            // in ps
            tfp->dump (2*i+clk);
            // falling edge
            top->eval ();
        }
        top->ImmSrc -= 0x1;
        top->Instr = top-> Instr = 0x0014A303;;
        if(Verilated::gotFinish()) exit(0);
        
    }
    tfp->close();
    exit(0);

}

