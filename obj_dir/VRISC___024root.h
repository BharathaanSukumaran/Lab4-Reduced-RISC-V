// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRISC.h for the primary calling header

#ifndef VERILATED_VRISC___024ROOT_H_
#define VERILATED_VRISC___024ROOT_H_  // guard

#include "verilated.h"

class VRISC__Syms;

class VRISC___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*7:0*/ RISC__DOT__next_PC;
    CData/*0:0*/ RISC__DOT__PCsrc;
    CData/*7:0*/ RISC__DOT__PC;
    CData/*0:0*/ RISC__DOT__RegWrite;
    CData/*0:0*/ RISC__DOT__EQ;
    CData/*2:0*/ RISC__DOT__ALUctrl;
    CData/*0:0*/ RISC__DOT__ALUsrc;
    CData/*0:0*/ RISC__DOT__MemWrite;
    CData/*0:0*/ RISC__DOT__ResultSrc;
    CData/*0:0*/ __Vclklast__TOP__clk;
    SData/*12:0*/ RISC__DOT__ImmSrc;
    VL_OUT(a0,31,0);
    IData/*31:0*/ RISC__DOT__ImmOp;
    IData/*31:0*/ RISC__DOT__Instr;
    IData/*31:0*/ RISC__DOT__ALUout;
    IData/*31:0*/ RISC__DOT__ALUop1;
    IData/*31:0*/ RISC__DOT__ALUop2;
    IData/*31:0*/ RISC__DOT__regOp2;
    IData/*31:0*/ RISC__DOT__WD3;
    IData/*31:0*/ RISC__DOT__ReadData;
    IData/*31:0*/ __Vchglast__TOP__RISC__DOT__ALUop2;
    VlUnpacked<IData/*31:0*/, 256> RISC__DOT__Instr_mem__DOT__rom_array;
    VlUnpacked<IData/*31:0*/, 32> RISC__DOT__RegFile__DOT__reg_array;
    VlUnpacked<IData/*31:0*/, 4096> RISC__DOT__DataMemory__DOT__ram_array;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VRISC__Syms* const vlSymsp;

    // CONSTRUCTORS
    VRISC___024root(VRISC__Syms* symsp, const char* name);
    ~VRISC___024root();
    VL_UNCOPYABLE(VRISC___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
