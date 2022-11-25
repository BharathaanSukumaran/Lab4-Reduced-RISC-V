// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSignExtend.h for the primary calling header

#ifndef VERILATED_VSIGNEXTEND___024ROOT_H_
#define VERILATED_VSIGNEXTEND___024ROOT_H_  // guard

#include "verilated.h"

class VSignExtend__Syms;

class VSignExtend___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN16(ImmSrc,11,0);
    VL_IN(Instr,31,0);
    VL_OUT(ImmOp,31,0);

    // INTERNAL VARIABLES
    VSignExtend__Syms* const vlSymsp;

    // CONSTRUCTORS
    VSignExtend___024root(VSignExtend__Syms* symsp, const char* name);
    ~VSignExtend___024root();
    VL_UNCOPYABLE(VSignExtend___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
