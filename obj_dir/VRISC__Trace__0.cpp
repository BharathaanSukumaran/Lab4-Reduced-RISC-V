// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRISC__Syms.h"


void VRISC___024root__trace_chg_sub_0(VRISC___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VRISC___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC___024root__trace_chg_top_0\n"); );
    // Init
    VRISC___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRISC___024root*>(voidSelf);
    VRISC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VRISC___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VRISC___024root__trace_chg_sub_0(VRISC___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->RISC__DOT__PC),8);
        bufp->chgIData(oldp+1,(vlSelf->RISC__DOT__Instr),32);
        bufp->chgBit(oldp+2,(vlSelf->RISC__DOT__MemWrite));
        bufp->chgIData(oldp+3,(vlSelf->RISC__DOT__ALUop1),32);
        bufp->chgIData(oldp+4,(vlSelf->RISC__DOT__regOp2),32);
        bufp->chgIData(oldp+5,(vlSelf->RISC__DOT__ReadData),32);
        bufp->chgCData(oldp+6,((0x7fU & vlSelf->RISC__DOT__Instr)),7);
        bufp->chgCData(oldp+7,((7U & (vlSelf->RISC__DOT__Instr 
                                      >> 0xcU))),3);
        bufp->chgCData(oldp+8,((vlSelf->RISC__DOT__Instr 
                                >> 0x19U)),7);
        bufp->chgCData(oldp+9,((0xffU & ((IData)(4U) 
                                         + (IData)(vlSelf->RISC__DOT__PC)))),8);
        bufp->chgCData(oldp+10,((0x1fU & (vlSelf->RISC__DOT__Instr 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+11,((0x1fU & (vlSelf->RISC__DOT__Instr 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+12,((0x1fU & (vlSelf->RISC__DOT__Instr 
                                          >> 7U))),5);
        bufp->chgIData(oldp+13,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[0]),32);
        bufp->chgIData(oldp+14,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[1]),32);
        bufp->chgIData(oldp+15,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[2]),32);
        bufp->chgIData(oldp+16,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[3]),32);
        bufp->chgIData(oldp+17,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[4]),32);
        bufp->chgIData(oldp+18,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[5]),32);
        bufp->chgIData(oldp+19,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[6]),32);
        bufp->chgIData(oldp+20,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[7]),32);
        bufp->chgIData(oldp+21,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[8]),32);
        bufp->chgIData(oldp+22,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[9]),32);
        bufp->chgIData(oldp+23,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[10]),32);
        bufp->chgIData(oldp+24,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[11]),32);
        bufp->chgIData(oldp+25,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[12]),32);
        bufp->chgIData(oldp+26,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[13]),32);
        bufp->chgIData(oldp+27,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[14]),32);
        bufp->chgIData(oldp+28,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[15]),32);
        bufp->chgIData(oldp+29,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[16]),32);
        bufp->chgIData(oldp+30,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[17]),32);
        bufp->chgIData(oldp+31,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[18]),32);
        bufp->chgIData(oldp+32,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[19]),32);
        bufp->chgIData(oldp+33,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[20]),32);
        bufp->chgIData(oldp+34,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[21]),32);
        bufp->chgIData(oldp+35,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[22]),32);
        bufp->chgIData(oldp+36,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[23]),32);
        bufp->chgIData(oldp+37,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[24]),32);
        bufp->chgIData(oldp+38,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[25]),32);
        bufp->chgIData(oldp+39,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[26]),32);
        bufp->chgIData(oldp+40,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[27]),32);
        bufp->chgIData(oldp+41,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[28]),32);
        bufp->chgIData(oldp+42,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[29]),32);
        bufp->chgIData(oldp+43,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[30]),32);
        bufp->chgIData(oldp+44,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+45,(vlSelf->RISC__DOT__ImmOp),32);
        bufp->chgBit(oldp+46,(vlSelf->RISC__DOT__PCsrc));
        bufp->chgBit(oldp+47,(vlSelf->RISC__DOT__RegWrite));
        bufp->chgBit(oldp+48,(vlSelf->RISC__DOT__EQ));
        bufp->chgCData(oldp+49,(vlSelf->RISC__DOT__ALUctrl),3);
        bufp->chgBit(oldp+50,(vlSelf->RISC__DOT__ALUsrc));
        bufp->chgSData(oldp+51,(vlSelf->RISC__DOT__ImmSrc),13);
        bufp->chgBit(oldp+52,(vlSelf->RISC__DOT__ResultSrc));
        bufp->chgIData(oldp+53,(vlSelf->RISC__DOT__ALUout),32);
        bufp->chgIData(oldp+54,(vlSelf->RISC__DOT__ALUop2),32);
    }
    bufp->chgBit(oldp+55,(vlSelf->clk));
    bufp->chgBit(oldp+56,(vlSelf->rst));
    bufp->chgIData(oldp+57,(vlSelf->a0),32);
    bufp->chgCData(oldp+58,((0xffU & ((IData)(vlSelf->RISC__DOT__PCsrc)
                                       ? (vlSelf->RISC__DOT__ImmOp 
                                          + (IData)(vlSelf->RISC__DOT__PC))
                                       : ((IData)(4U) 
                                          + (IData)(vlSelf->RISC__DOT__PC))))),8);
    bufp->chgIData(oldp+59,(((IData)(vlSelf->RISC__DOT__ResultSrc)
                              ? vlSelf->RISC__DOT__ReadData
                              : vlSelf->RISC__DOT__ALUout)),32);
    bufp->chgCData(oldp+60,((0xffU & (vlSelf->RISC__DOT__ImmOp 
                                      + (IData)(vlSelf->RISC__DOT__PC)))),8);
}

void VRISC___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC___024root__trace_cleanup\n"); );
    // Init
    VRISC___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRISC___024root*>(voidSelf);
    VRISC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
