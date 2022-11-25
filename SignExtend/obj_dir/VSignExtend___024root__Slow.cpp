// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSignExtend.h for the primary calling header

#include "verilated.h"

#include "VSignExtend__Syms.h"
#include "VSignExtend___024root.h"

void VSignExtend___024root___ctor_var_reset(VSignExtend___024root* vlSelf);

VSignExtend___024root::VSignExtend___024root(VSignExtend__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VSignExtend___024root___ctor_var_reset(this);
}

void VSignExtend___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VSignExtend___024root::~VSignExtend___024root() {
}
