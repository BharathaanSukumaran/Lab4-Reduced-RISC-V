// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSignExtend.h for the primary calling header

#include "verilated.h"

#include "VSignExtend___024root.h"

VL_INLINE_OPT void VSignExtend___024root___combo__TOP__0(VSignExtend___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSignExtend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSignExtend___024root___combo__TOP__0\n"); );
    // Body
    if ((3U == (0x7fU & vlSelf->Instr))) {
        if ((2U == (7U & (vlSelf->Instr >> 0xcU)))) {
            vlSelf->ImmOp = (((- (IData)((1U & ((IData)(vlSelf->ImmSrc) 
                                                >> 0xbU)))) 
                              << 0xcU) | (IData)(vlSelf->ImmSrc));
        }
    } else if ((0x13U == (0x7fU & vlSelf->Instr))) {
        if ((0U == (7U & (vlSelf->Instr >> 0xcU)))) {
            vlSelf->ImmOp = (((- (IData)((1U & ((IData)(vlSelf->ImmSrc) 
                                                >> 0xbU)))) 
                              << 0xcU) | (IData)(vlSelf->ImmSrc));
        }
    } else if ((0x63U == (0x7fU & vlSelf->Instr))) {
        if ((1U == (7U & (vlSelf->Instr >> 0xcU)))) {
            vlSelf->ImmOp = (((- (IData)((1U & ((IData)(vlSelf->ImmSrc) 
                                                >> 0xbU)))) 
                              << 0xcU) | (IData)(vlSelf->ImmSrc));
        }
    }
}

void VSignExtend___024root___eval(VSignExtend___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSignExtend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSignExtend___024root___eval\n"); );
    // Body
    VSignExtend___024root___combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void VSignExtend___024root___eval_debug_assertions(VSignExtend___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSignExtend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSignExtend___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->ImmSrc & 0xf000U))) {
        Verilated::overWidthError("ImmSrc");}
}
#endif  // VL_DEBUG
