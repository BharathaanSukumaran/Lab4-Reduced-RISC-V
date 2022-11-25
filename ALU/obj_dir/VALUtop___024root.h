// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VALUtop.h for the primary calling header

#ifndef VERILATED_VALUTOP___024ROOT_H_
#define VERILATED_VALUTOP___024ROOT_H_  // guard

#include "verilated.h"

class VALUtop__Syms;

class VALUtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(ALUsrc,0,0);
    VL_IN8(ALUctrl,0,0);
    VL_IN8(RegWrite,0,0);
    VL_OUT8(EQ,0,0);
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_IN(Instr,31,0);
    VL_IN(ImmOp,31,0);
    VL_OUT(a0,31,0);
    IData/*31:0*/ ALUtop__DOT__ALUout;
    IData/*31:0*/ ALUtop__DOT__ALUop1;
    IData/*31:0*/ ALUtop__DOT__ALUop2;
    IData/*31:0*/ ALUtop__DOT__regOp2;
    VlUnpacked<IData/*31:0*/, 32> ALUtop__DOT__RegFile__DOT__reg_array;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VALUtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VALUtop___024root(VALUtop__Syms* symsp, const char* name);
    ~VALUtop___024root();
    VL_UNCOPYABLE(VALUtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
