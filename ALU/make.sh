rm -rf obj_dir
rm -f VALUtop.vcd

verilator --Wall --cc --trace ALUtop.sv alu.sv register.sv mux2.sv --exe ALUtop_tb.cpp

make -j -C obj_dir/ -f VALUtop.mk VALUtop