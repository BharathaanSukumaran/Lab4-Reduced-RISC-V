// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VControlUnit.h for the primary calling header

#ifndef VERILATED_VCONTROLUNIT___024ROOT_H_
#define VERILATED_VCONTROLUNIT___024ROOT_H_  // guard

#include "verilated.h"

class VControlUnit__Syms;

class VControlUnit___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(EQ,0,0);
    VL_OUT8(RegWrite,0,0);
    VL_OUT8(ALUctrl,2,0);
    VL_OUT8(ALUsrc,0,0);
    VL_OUT8(PCsrc,0,0);
    VL_OUT16(ImmSrc,11,0);
    VL_IN(Instr,31,0);

    // INTERNAL VARIABLES
    VControlUnit__Syms* const vlSymsp;

    // CONSTRUCTORS
    VControlUnit___024root(VControlUnit__Syms* symsp, const char* name);
    ~VControlUnit___024root();
    VL_UNCOPYABLE(VControlUnit___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
