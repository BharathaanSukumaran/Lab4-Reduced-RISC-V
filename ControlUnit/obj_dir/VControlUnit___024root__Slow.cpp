// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VControlUnit.h for the primary calling header

#include "verilated.h"

#include "VControlUnit__Syms.h"
#include "VControlUnit___024root.h"

void VControlUnit___024root___ctor_var_reset(VControlUnit___024root* vlSelf);

VControlUnit___024root::VControlUnit___024root(VControlUnit__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VControlUnit___024root___ctor_var_reset(this);
}

void VControlUnit___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VControlUnit___024root::~VControlUnit___024root() {
}
