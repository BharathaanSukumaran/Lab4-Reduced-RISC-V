rm -rf obj_dir
rm -f VPCtop.vcd

verilator --Wall --cc --trace PCtop.sv PCReg.sv mux2.sv --exe PCtop_tb.cpp

make -j -C obj_dir/ -f VPCtop.mk VPCtop