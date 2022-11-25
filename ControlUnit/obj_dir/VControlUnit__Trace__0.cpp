// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VControlUnit__Syms.h"


void VControlUnit___024root__trace_chg_sub_0(VControlUnit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VControlUnit___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root__trace_chg_top_0\n"); );
    // Init
    VControlUnit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VControlUnit___024root*>(voidSelf);
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VControlUnit___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VControlUnit___024root__trace_chg_sub_0(VControlUnit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgIData(oldp+0,(vlSelf->Instr),32);
    bufp->chgBit(oldp+1,(vlSelf->EQ));
    bufp->chgBit(oldp+2,(vlSelf->RegWrite));
    bufp->chgCData(oldp+3,(vlSelf->ALUctrl),3);
    bufp->chgBit(oldp+4,(vlSelf->ALUsrc));
    bufp->chgSData(oldp+5,(vlSelf->ImmSrc),12);
    bufp->chgBit(oldp+6,(vlSelf->PCsrc));
    bufp->chgCData(oldp+7,((0x7fU & vlSelf->Instr)),7);
    bufp->chgCData(oldp+8,((7U & (vlSelf->Instr >> 0xcU))),3);
    bufp->chgCData(oldp+9,((vlSelf->Instr >> 0x19U)),7);
}

void VControlUnit___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root__trace_cleanup\n"); );
    // Init
    VControlUnit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VControlUnit___024root*>(voidSelf);
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
