// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VControlUnit.h for the primary calling header

#include "verilated.h"

#include "VControlUnit___024root.h"

VL_ATTR_COLD void VControlUnit___024root___eval_initial(VControlUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root___eval_initial\n"); );
}

void VControlUnit___024root___combo__TOP__0(VControlUnit___024root* vlSelf);

VL_ATTR_COLD void VControlUnit___024root___eval_settle(VControlUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root___eval_settle\n"); );
    // Body
    VControlUnit___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void VControlUnit___024root___final(VControlUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root___final\n"); );
}

VL_ATTR_COLD void VControlUnit___024root___ctor_var_reset(VControlUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->Instr = VL_RAND_RESET_I(32);
    vlSelf->EQ = VL_RAND_RESET_I(1);
    vlSelf->RegWrite = VL_RAND_RESET_I(1);
    vlSelf->ALUctrl = VL_RAND_RESET_I(3);
    vlSelf->ALUsrc = VL_RAND_RESET_I(1);
    vlSelf->ImmSrc = VL_RAND_RESET_I(12);
    vlSelf->PCsrc = VL_RAND_RESET_I(1);
}
