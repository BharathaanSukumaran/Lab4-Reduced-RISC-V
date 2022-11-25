#include "VControlUnit.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char **argv, char **env){
    int it;
    int clk;
    Verilated::commandArgs(argc,argv);
//  initialise top verilog instance
    VControlUnit* top = new VControlUnit;
// initialise trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp,99);
    tfp->open("VControlUnit.vcd");

    // initialise simulation outputs
    top->EQ = 0;
    top-> Instr = 0xfe659ce3;

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
        top->EQ= 0;
        top->Instr = 0xfe659ce3;
        if(Verilated::gotFinish()) exit(0);
        
    }
    tfp->close();
    exit(0);

}

