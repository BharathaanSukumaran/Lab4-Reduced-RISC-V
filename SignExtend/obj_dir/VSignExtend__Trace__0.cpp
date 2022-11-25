// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSignExtend__Syms.h"


void VSignExtend___024root__trace_chg_sub_0(VSignExtend___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VSignExtend___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSignExtend___024root__trace_chg_top_0\n"); );
    // Init
    VSignExtend___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSignExtend___024root*>(voidSelf);
    VSignExtend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VSignExtend___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VSignExtend___024root__trace_chg_sub_0(VSignExtend___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VSignExtend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSignExtend___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgIData(oldp+0,(vlSelf->Instr),32);
    bufp->chgSData(oldp+1,(vlSelf->ImmSrc),12);
    bufp->chgIData(oldp+2,(vlSelf->ImmOp),32);
    bufp->chgCData(oldp+3,((0x7fU & vlSelf->Instr)),7);
    bufp->chgCData(oldp+4,((7U & (vlSelf->Instr >> 0xcU))),3);
}

void VSignExtend___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSignExtend___024root__trace_cleanup\n"); );
    // Init
    VSignExtend___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSignExtend___024root*>(voidSelf);
    VSignExtend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
