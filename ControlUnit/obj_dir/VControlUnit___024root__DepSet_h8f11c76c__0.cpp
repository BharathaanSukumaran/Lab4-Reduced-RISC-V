// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VControlUnit.h for the primary calling header

#include "verilated.h"

#include "VControlUnit___024root.h"

VL_INLINE_OPT void VControlUnit___024root___combo__TOP__0(VControlUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root___combo__TOP__0\n"); );
    // Body
    if ((3U == (0x7fU & vlSelf->Instr))) {
        if ((2U == (7U & (vlSelf->Instr >> 0xcU)))) {
            vlSelf->RegWrite = 1U;
            vlSelf->ALUctrl = 0U;
            vlSelf->ALUsrc = 1U;
            vlSelf->PCsrc = 0U;
            vlSelf->ImmSrc = (0xfffU & vlSelf->Instr);
        }
    } else if ((0x13U == (0x7fU & vlSelf->Instr))) {
        if ((0U == (7U & (vlSelf->Instr >> 0xcU)))) {
            vlSelf->RegWrite = 1U;
            vlSelf->ALUctrl = 0U;
            vlSelf->ALUsrc = 1U;
            vlSelf->PCsrc = 0U;
            vlSelf->ImmSrc = (0xfffU & vlSelf->Instr);
        }
    } else if ((0x63U == (0x7fU & vlSelf->Instr))) {
        if ((1U == (7U & (vlSelf->Instr >> 0xcU)))) {
            if ((1U & (~ (IData)(vlSelf->EQ)))) {
                vlSelf->RegWrite = 0U;
                vlSelf->ALUctrl = 7U;
                vlSelf->ALUsrc = 1U;
                vlSelf->PCsrc = 1U;
                vlSelf->ImmSrc = ((0x800U & (vlSelf->Instr 
                                             >> 0x14U)) 
                                  | ((0x400U & (vlSelf->Instr 
                                                << 3U)) 
                                     | ((0x3f0U & (vlSelf->Instr 
                                                   >> 0x15U)) 
                                        | (0xfU & (vlSelf->Instr 
                                                   >> 8U)))));
            }
        }
    }
}

void VControlUnit___024root___eval(VControlUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root___eval\n"); );
    // Body
    VControlUnit___024root___combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void VControlUnit___024root___eval_debug_assertions(VControlUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->EQ & 0xfeU))) {
        Verilated::overWidthError("EQ");}
}
#endif  // VL_DEBUG
