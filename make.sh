rm -rf obj_dir
rm -f VRISC.vcd
verilator --cc --trace RISC.sv muxPC.sv muxALU.sv PCReg_main.sv Instr_mem_main.sv ControlUnit_main.sv SignExtend_main.sv register_main.sv alu_main.sv ram_main.sv result_mux_main.sv  --exe RISC_tb.cpp

make -j -C obj_dir/ -f VRISC.mk VRISC