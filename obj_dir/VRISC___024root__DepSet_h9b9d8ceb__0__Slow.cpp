// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRISC.h for the primary calling header

#include "verilated.h"

#include "VRISC___024root.h"

VL_ATTR_COLD void VRISC___024root___initial__TOP__0(VRISC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC___024root___initial__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h550577ed__0;
    // Body
    VL_WRITEF("Loading data to ROM\n");
    __Vtemp_h550577ed__0[0U] = 0x2e6d656dU;
    __Vtemp_h550577ed__0[1U] = 0x5f696e73U;
    __Vtemp_h550577ed__0[2U] = 0x637075U;
    VL_READMEM_N(true, 32, 256, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_h550577ed__0)
                 ,  &(vlSelf->RISC__DOT__Instr_mem__DOT__rom_array)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void VRISC___024root___settle__TOP__0(VRISC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->a0 = vlSelf->RISC__DOT__RegFile__DOT__reg_array
        [0xaU];
    vlSelf->RISC__DOT__Instr = vlSelf->RISC__DOT__Instr_mem__DOT__rom_array
        [vlSelf->RISC__DOT__PC];
    vlSelf->RISC__DOT__ALUop1 = vlSelf->RISC__DOT__RegFile__DOT__reg_array
        [(0x1fU & (vlSelf->RISC__DOT__Instr >> 0xfU))];
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

VL_ATTR_COLD void VRISC___024root___eval_initial(VRISC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC___024root___eval_initial\n"); );
    // Body
    VRISC___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void VRISC___024root___eval_settle(VRISC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC___024root___eval_settle\n"); );
    // Body
    VRISC___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VRISC___024root___final(VRISC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC___024root___final\n"); );
}

VL_ATTR_COLD void VRISC___024root___ctor_var_reset(VRISC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->a0 = VL_RAND_RESET_I(32);
    vlSelf->a1 = VL_RAND_RESET_I(32);
    vlSelf->t1 = VL_RAND_RESET_I(32);
    vlSelf->RISC__DOT__next_PC = VL_RAND_RESET_I(8);
    vlSelf->RISC__DOT__ImmOp = VL_RAND_RESET_I(32);
    vlSelf->RISC__DOT__PCsrc = VL_RAND_RESET_I(1);
    vlSelf->RISC__DOT__PC = VL_RAND_RESET_I(8);
    vlSelf->RISC__DOT__Instr = VL_RAND_RESET_I(32);
    vlSelf->RISC__DOT__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->RISC__DOT__EQ = VL_RAND_RESET_I(1);
    vlSelf->RISC__DOT__ALUctrl = VL_RAND_RESET_I(3);
    vlSelf->RISC__DOT__ALUsrc = VL_RAND_RESET_I(1);
    vlSelf->RISC__DOT__ImmSrc = VL_RAND_RESET_I(12);
    vlSelf->RISC__DOT__ALUout = VL_RAND_RESET_I(32);
    vlSelf->RISC__DOT__ALUop1 = VL_RAND_RESET_I(32);
    vlSelf->RISC__DOT__ALUop2 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->RISC__DOT__Instr_mem__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->RISC__DOT__RegFile__DOT__reg_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vchglast__TOP__RISC__DOT__ALUop2 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
