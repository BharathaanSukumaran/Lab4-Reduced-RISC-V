// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALUtop.h for the primary calling header

#include "verilated.h"

#include "VALUtop__Syms.h"
#include "VALUtop___024root.h"

void VALUtop___024root___ctor_var_reset(VALUtop___024root* vlSelf);

VALUtop___024root::VALUtop___024root(VALUtop__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VALUtop___024root___ctor_var_reset(this);
}

void VALUtop___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VALUtop___024root::~VALUtop___024root() {
}
