// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSignExtend.h for the primary calling header

#include "verilated.h"

#include "VSignExtend___024root.h"

VL_ATTR_COLD void VSignExtend___024root___eval_initial(VSignExtend___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSignExtend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSignExtend___024root___eval_initial\n"); );
}

void VSignExtend___024root___combo__TOP__0(VSignExtend___024root* vlSelf);

VL_ATTR_COLD void VSignExtend___024root___eval_settle(VSignExtend___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSignExtend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSignExtend___024root___eval_settle\n"); );
    // Body
    VSignExtend___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void VSignExtend___024root___final(VSignExtend___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSignExtend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSignExtend___024root___final\n"); );
}

VL_ATTR_COLD void VSignExtend___024root___ctor_var_reset(VSignExtend___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSignExtend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSignExtend___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->Instr = VL_RAND_RESET_I(32);
    vlSelf->ImmSrc = VL_RAND_RESET_I(12);
    vlSelf->ImmOp = VL_RAND_RESET_I(32);
}
