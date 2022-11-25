// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRISC.h for the primary calling header

#include "verilated.h"

#include "VRISC__Syms.h"
#include "VRISC___024root.h"

void VRISC___024root___ctor_var_reset(VRISC___024root* vlSelf);

VRISC___024root::VRISC___024root(VRISC__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VRISC___024root___ctor_var_reset(this);
}

void VRISC___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VRISC___024root::~VRISC___024root() {
}
