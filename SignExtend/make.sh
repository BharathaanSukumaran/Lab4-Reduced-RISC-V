rm -rf obj_dir
rm -f VSignExtend.vcd

verilator --Wall --cc --trace SignExtend.sv --exe SignExtend_tb.cpp

make -j -C obj_dir/ -f VSignExtend.mk VSignExtend