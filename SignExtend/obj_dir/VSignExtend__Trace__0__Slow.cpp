// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSignExtend__Syms.h"


VL_ATTR_COLD void VSignExtend___024root__trace_init_sub__TOP__0(VSignExtend___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSignExtend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSignExtend___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,"Instr", false,-1, 31,0);
    tracep->declBus(c+2,"ImmSrc", false,-1, 11,0);
    tracep->declBus(c+3,"ImmOp", false,-1, 31,0);
    tracep->pushNamePrefix("SignExtend ");
    tracep->declBus(c+6,"INSTR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+7,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1,"Instr", false,-1, 31,0);
    tracep->declBus(c+2,"ImmSrc", false,-1, 11,0);
    tracep->declBus(c+3,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+4,"op", false,-1, 6,0);
    tracep->declBus(c+5,"func3", false,-1, 2,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VSignExtend___024root__trace_init_top(VSignExtend___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSignExtend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSignExtend___024root__trace_init_top\n"); );
    // Body
    VSignExtend___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VSignExtend___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VSignExtend___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VSignExtend___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VSignExtend___024root__trace_register(VSignExtend___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSignExtend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSignExtend___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VSignExtend___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VSignExtend___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VSignExtend___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VSignExtend___024root__trace_full_sub_0(VSignExtend___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VSignExtend___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSignExtend___024root__trace_full_top_0\n"); );
    // Init
    VSignExtend___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSignExtend___024root*>(voidSelf);
    VSignExtend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VSignExtend___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VSignExtend___024root__trace_full_sub_0(VSignExtend___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VSignExtend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSignExtend___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->Instr),32);
    bufp->fullSData(oldp+2,(vlSelf->ImmSrc),12);
    bufp->fullIData(oldp+3,(vlSelf->ImmOp),32);
    bufp->fullCData(oldp+4,((0x7fU & vlSelf->Instr)),7);
    bufp->fullCData(oldp+5,((7U & (vlSelf->Instr >> 0xcU))),3);
    bufp->fullIData(oldp+6,(0x20U),32);
    bufp->fullIData(oldp+7,(0xcU),32);
}
