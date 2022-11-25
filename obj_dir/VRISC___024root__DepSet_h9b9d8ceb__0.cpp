// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRISC.h for the primary calling header

#include "verilated.h"

#include "VRISC___024root.h"

VL_INLINE_OPT void VRISC___024root___sequent__TOP__0(VRISC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC___024root___sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__RISC__DOT__RegFile__DOT__reg_array__v0;
    IData/*31:0*/ __Vdlyvval__RISC__DOT__RegFile__DOT__reg_array__v0;
    CData/*0:0*/ __Vdlyvset__RISC__DOT__RegFile__DOT__reg_array__v0;
    // Body
    __Vdlyvset__RISC__DOT__RegFile__DOT__reg_array__v0 = 0U;
    if (vlSelf->RISC__DOT__RegWrite) {
        __Vdlyvval__RISC__DOT__RegFile__DOT__reg_array__v0 
            = vlSelf->RISC__DOT__ALUout;
        __Vdlyvset__RISC__DOT__RegFile__DOT__reg_array__v0 = 1U;
        __Vdlyvdim0__RISC__DOT__RegFile__DOT__reg_array__v0 
            = (0x1fU & (vlSelf->RISC__DOT__Instr >> 7U));
    }
    vlSelf->RISC__DOT__PC = ((IData)(vlSelf->rst) ? 0U
                              : (IData)(vlSelf->RISC__DOT__next_PC));
    if (__Vdlyvset__RISC__DOT__RegFile__DOT__reg_array__v0) {
        vlSelf->RISC__DOT__RegFile__DOT__reg_array[__Vdlyvdim0__RISC__DOT__RegFile__DOT__reg_array__v0] 
            = __Vdlyvval__RISC__DOT__RegFile__DOT__reg_array__v0;
    }
    vlSelf->a0 = vlSelf->RISC__DOT__RegFile__DOT__reg_array
        [0xaU];
    vlSelf->RISC__DOT__Instr = vlSelf->RISC__DOT__Instr_mem__DOT__rom_array
        [vlSelf->RISC__DOT__PC];
    vlSelf->RISC__DOT__ALUop1 = vlSelf->RISC__DOT__RegFile__DOT__reg_array
        [(0x1fU & (vlSelf->RISC__DOT__Instr >> 0xfU))];
}

VL_INLINE_OPT void VRISC___024root___combo__TOP__0(VRISC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->RISC__DOT__EQ = (vlSelf->RISC__DOT__ALUop1 
                             == vlSelf->RISC__DOT__ALUop2);
    if ((0x13U == (0x7fU & vlSelf->RISC__DOT__Instr))) {
        if ((0U == (7U & (vlSelf->RISC__DOT__Instr 
                          >> 0xcU)))) {
            vlSelf->RISC__DOT__RegWrite = 1U;
            vlSelf->RISC__DOT__ALUsrc = 1U;
            vlSelf->RISC__DOT__ALUctrl = 0U;
            vlSelf->RISC__DOT__PCsrc = 0U;
            vlSelf->RISC__DOT__ImmSrc = (vlSelf->RISC__DOT__Instr 
                                         >> 0x14U);
        }
    } else if ((0x63U == (0x7fU & vlSelf->RISC__DOT__Instr))) {
        if ((1U == (7U & (vlSelf->RISC__DOT__Instr 
                          >> 0xcU)))) {
            if ((1U & (~ (IData)(vlSelf->RISC__DOT__EQ)))) {
                vlSelf->RISC__DOT__RegWrite = 1U;
                vlSelf->RISC__DOT__ALUsrc = 0U;
                vlSelf->RISC__DOT__ALUctrl = 7U;
                vlSelf->RISC__DOT__PCsrc = 1U;
                vlSelf->RISC__DOT__ImmSrc = ((0x800U 
                                              & (vlSelf->RISC__DOT__Instr 
                                                 << 4U)) 
                                             | ((0x7e0U 
                                                 & (vlSelf->RISC__DOT__Instr 
                                                    >> 0x14U)) 
                                                | (0x1eU 
                                                   & (vlSelf->RISC__DOT__Instr 
                                                      >> 7U))));
            }
            if (vlSelf->RISC__DOT__EQ) {
                vlSelf->RISC__DOT__RegWrite = 1U;
                vlSelf->RISC__DOT__ALUsrc = 0U;
                vlSelf->RISC__DOT__ALUctrl = 7U;
                vlSelf->RISC__DOT__PCsrc = 0U;
                vlSelf->RISC__DOT__ImmSrc = ((0x800U 
                                              & (vlSelf->RISC__DOT__Instr 
                                                 << 4U)) 
                                             | ((0x7e0U 
                                                 & (vlSelf->RISC__DOT__Instr 
                                                    >> 0x14U)) 
                                                | (0x1eU 
                                                   & (vlSelf->RISC__DOT__Instr 
                                                      >> 7U))));
            }
        }
    }
    if ((0U == (IData)(vlSelf->RISC__DOT__ALUctrl))) {
        vlSelf->RISC__DOT__ALUout = (vlSelf->RISC__DOT__ALUop1 
                                     + vlSelf->RISC__DOT__ALUop2);
    } else if ((1U == (IData)(vlSelf->RISC__DOT__ALUctrl))) {
        vlSelf->RISC__DOT__ALUout = (vlSelf->RISC__DOT__ALUop1 
                                     - vlSelf->RISC__DOT__ALUop2);
    } else if ((2U == (IData)(vlSelf->RISC__DOT__ALUctrl))) {
        vlSelf->RISC__DOT__ALUout = (vlSelf->RISC__DOT__ALUop1 
                                     & vlSelf->RISC__DOT__ALUop2);
    } else if ((3U == (IData)(vlSelf->RISC__DOT__ALUctrl))) {
        vlSelf->RISC__DOT__ALUout = (vlSelf->RISC__DOT__ALUop1 
                                     | vlSelf->RISC__DOT__ALUop2);
    } else if ((5U == (IData)(vlSelf->RISC__DOT__ALUctrl))) {
        vlSelf->RISC__DOT__ALUout = (vlSelf->RISC__DOT__ALUop1 
                                     < vlSelf->RISC__DOT__ALUop2);
    }
    if ((3U == (0x7fU & vlSelf->RISC__DOT__Instr))) {
        if ((2U == (7U & (vlSelf->RISC__DOT__Instr 
                          >> 0xcU)))) {
            vlSelf->RISC__DOT__ImmOp = (((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->RISC__DOT__ImmSrc) 
                                                        >> 0xbU)))) 
                                         << 0xcU) | (IData)(vlSelf->RISC__DOT__ImmSrc));
        }
    } else if ((0x13U == (0x7fU & vlSelf->RISC__DOT__Instr))) {
        if ((0U == (7U & (vlSelf->RISC__DOT__Instr 
                          >> 0xcU)))) {
            vlSelf->RISC__DOT__ImmOp = (((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->RISC__DOT__ImmSrc) 
                                                        >> 0xbU)))) 
                                         << 0xcU) | (IData)(vlSelf->RISC__DOT__ImmSrc));
        }
    } else if ((0x63U == (0x7fU & vlSelf->RISC__DOT__Instr))) {
        if ((1U == (7U & (vlSelf->RISC__DOT__Instr 
                          >> 0xcU)))) {
            vlSelf->RISC__DOT__ImmOp = (((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->RISC__DOT__ImmSrc) 
                                                        >> 0xbU)))) 
                                         << 0xcU) | (IData)(vlSelf->RISC__DOT__ImmSrc));
        }
    }
    vlSelf->RISC__DOT__ALUop2 = ((IData)(vlSelf->RISC__DOT__ALUsrc)
                                  ? vlSelf->RISC__DOT__ImmOp
                                  : vlSelf->RISC__DOT__RegFile__DOT__reg_array
                                 [(0x1fU & (vlSelf->RISC__DOT__Instr 
                                            >> 0x14U))]);
    vlSelf->RISC__DOT__next_PC = (0xffU & ((IData)(vlSelf->RISC__DOT__PCsrc)
                                            ? (vlSelf->RISC__DOT__ImmOp 
                                               + (IData)(vlSelf->RISC__DOT__PC))
                                            : ((IData)(4U) 
                                               + (IData)(vlSelf->RISC__DOT__PC))));
}

void VRISC___024root___eval(VRISC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        VRISC___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    VRISC___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData VRISC___024root___change_request_1(VRISC___024root* vlSelf);

VL_INLINE_OPT QData VRISC___024root___change_request(VRISC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC___024root___change_request\n"); );
    // Body
    return (VRISC___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VRISC___024root___change_request_1(VRISC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->RISC__DOT__ALUop2 ^ vlSelf->__Vchglast__TOP__RISC__DOT__ALUop2));
    VL_DEBUG_IF( if(__req && ((vlSelf->RISC__DOT__ALUop2 ^ vlSelf->__Vchglast__TOP__RISC__DOT__ALUop2))) VL_DBG_MSGF("        CHANGE: RISC.sv:71: RISC.ALUop2\n"); );
    // Final
    vlSelf->__Vchglast__TOP__RISC__DOT__ALUop2 = vlSelf->RISC__DOT__ALUop2;
    return __req;
}

#ifdef VL_DEBUG
void VRISC___024root___eval_debug_assertions(VRISC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
