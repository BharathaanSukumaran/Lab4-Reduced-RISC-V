rm -rf obj_dir
rm -f VControlUnit.vcd

verilator --Wall --cc --trace ControlUnit.sv --exe ControlUnit_tb.cpp

make -j -C obj_dir/ -f VControlUnit.mk VControlUnit