// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALUtop.h for the primary calling header

#include "verilated.h"

#include "VALUtop___024root.h"

VL_INLINE_OPT void VALUtop___024root___sequent__TOP__0(VALUtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALUtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALUtop___024root___sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__ALUtop__DOT__RegFile__DOT__reg_array__v0;
    IData/*31:0*/ __Vdlyvval__ALUtop__DOT__RegFile__DOT__reg_array__v0;
    CData/*0:0*/ __Vdlyvset__ALUtop__DOT__RegFile__DOT__reg_array__v0;
    // Body
    __Vdlyvset__ALUtop__DOT__RegFile__DOT__reg_array__v0 = 0U;
    if (vlSelf->RegWrite) {
        __Vdlyvval__ALUtop__DOT__RegFile__DOT__reg_array__v0 
            = vlSelf->ALUtop__DOT__ALUout;
        __Vdlyvset__ALUtop__DOT__RegFile__DOT__reg_array__v0 = 1U;
        __Vdlyvdim0__ALUtop__DOT__RegFile__DOT__reg_array__v0 
            = (0x1fU & (vlSelf->Instr >> 7U));
    }
    vlSelf->ALUtop__DOT__ALUop1 = vlSelf->ALUtop__DOT__RegFile__DOT__reg_array
        [(0x1fU & (vlSelf->Instr >> 0xfU))];
    vlSelf->ALUtop__DOT__regOp2 = vlSelf->ALUtop__DOT__RegFile__DOT__reg_array
        [(0x1fU & (vlSelf->Instr >> 0x14U))];
    vlSelf->a0 = vlSelf->ALUtop__DOT__RegFile__DOT__reg_array
        [0U];
    if (__Vdlyvset__ALUtop__DOT__RegFile__DOT__reg_array__v0) {
        vlSelf->ALUtop__DOT__RegFile__DOT__reg_array[__Vdlyvdim0__ALUtop__DOT__RegFile__DOT__reg_array__v0] 
            = __Vdlyvval__ALUtop__DOT__RegFile__DOT__reg_array__v0;
    }
}

VL_INLINE_OPT void VALUtop___024root___combo__TOP__0(VALUtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALUtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALUtop___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->ALUtop__DOT__ALUop2 = ((IData)(vlSelf->ALUsrc)
                                    ? vlSelf->ImmOp
                                    : vlSelf->ALUtop__DOT__regOp2);
    vlSelf->EQ = (vlSelf->ALUtop__DOT__ALUop1 == vlSelf->ALUtop__DOT__ALUop2);
    if (vlSelf->ALUctrl) {
        if (vlSelf->ALUctrl) {
            vlSelf->ALUtop__DOT__ALUout = (vlSelf->ALUtop__DOT__ALUop1 
                                           - vlSelf->ALUtop__DOT__ALUop2);
        }
    } else {
        vlSelf->ALUtop__DOT__ALUout = (vlSelf->ALUtop__DOT__ALUop1 
                                       + vlSelf->ALUtop__DOT__ALUop2);
    }
}

void VALUtop___024root___eval(VALUtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALUtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALUtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        VALUtop___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    VALUtop___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void VALUtop___024root___eval_debug_assertions(VALUtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALUtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALUtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->ALUsrc & 0xfeU))) {
        Verilated::overWidthError("ALUsrc");}
    if (VL_UNLIKELY((vlSelf->ALUctrl & 0xfeU))) {
        Verilated::overWidthError("ALUctrl");}
    if (VL_UNLIKELY((vlSelf->RegWrite & 0xfeU))) {
        Verilated::overWidthError("RegWrite");}
}
#endif  // VL_DEBUG
