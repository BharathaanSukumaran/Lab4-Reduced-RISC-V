// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VControlUnit__Syms.h"


VL_ATTR_COLD void VControlUnit___024root__trace_init_sub__TOP__0(VControlUnit___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,"Instr", false,-1, 31,0);
    tracep->declBit(c+2,"EQ", false,-1);
    tracep->declBit(c+3,"RegWrite", false,-1);
    tracep->declBus(c+4,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+5,"ALUsrc", false,-1);
    tracep->declBus(c+6,"ImmSrc", false,-1, 11,0);
    tracep->declBit(c+7,"PCsrc", false,-1);
    tracep->pushNamePrefix("ControlUnit ");
    tracep->declBus(c+11,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1,"Instr", false,-1, 31,0);
    tracep->declBit(c+2,"EQ", false,-1);
    tracep->declBit(c+3,"RegWrite", false,-1);
    tracep->declBus(c+4,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+5,"ALUsrc", false,-1);
    tracep->declBus(c+6,"ImmSrc", false,-1, 11,0);
    tracep->declBit(c+7,"PCsrc", false,-1);
    tracep->declBus(c+8,"op", false,-1, 6,0);
    tracep->declBus(c+9,"func3", false,-1, 2,0);
    tracep->declBus(c+10,"func7", false,-1, 6,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VControlUnit___024root__trace_init_top(VControlUnit___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root__trace_init_top\n"); );
    // Body
    VControlUnit___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VControlUnit___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VControlUnit___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VControlUnit___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VControlUnit___024root__trace_register(VControlUnit___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VControlUnit___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VControlUnit___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VControlUnit___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VControlUnit___024root__trace_full_sub_0(VControlUnit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VControlUnit___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root__trace_full_top_0\n"); );
    // Init
    VControlUnit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VControlUnit___024root*>(voidSelf);
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VControlUnit___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VControlUnit___024root__trace_full_sub_0(VControlUnit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->Instr),32);
    bufp->fullBit(oldp+2,(vlSelf->EQ));
    bufp->fullBit(oldp+3,(vlSelf->RegWrite));
    bufp->fullCData(oldp+4,(vlSelf->ALUctrl),3);
    bufp->fullBit(oldp+5,(vlSelf->ALUsrc));
    bufp->fullSData(oldp+6,(vlSelf->ImmSrc),12);
    bufp->fullBit(oldp+7,(vlSelf->PCsrc));
    bufp->fullCData(oldp+8,((0x7fU & vlSelf->Instr)),7);
    bufp->fullCData(oldp+9,((7U & (vlSelf->Instr >> 0xcU))),3);
    bufp->fullCData(oldp+10,((vlSelf->Instr >> 0x19U)),7);
    bufp->fullIData(oldp+11,(0x20U),32);
}
