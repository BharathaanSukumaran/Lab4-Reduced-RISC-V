// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VALUtop__Syms.h"


void VALUtop___024root__trace_chg_sub_0(VALUtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VALUtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALUtop___024root__trace_chg_top_0\n"); );
    // Init
    VALUtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VALUtop___024root*>(voidSelf);
    VALUtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VALUtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VALUtop___024root__trace_chg_sub_0(VALUtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VALUtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALUtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->ALUtop__DOT__ALUop1),32);
        bufp->chgIData(oldp+1,(vlSelf->ALUtop__DOT__regOp2),32);
        bufp->chgIData(oldp+2,(vlSelf->ALUtop__DOT__RegFile__DOT__reg_array[0]),32);
        bufp->chgIData(oldp+3,(vlSelf->ALUtop__DOT__RegFile__DOT__reg_array[1]),32);
        bufp->chgIData(oldp+4,(vlSelf->ALUtop__DOT__RegFile__DOT__reg_array[2]),32);
        bufp->chgIData(oldp+5,(vlSelf->ALUtop__DOT__RegFile__DOT__reg_array[3]),32);
        bufp->chgIData(oldp+6,(vlSelf->ALUtop__DOT__RegFile__DOT__reg_array[4]),32);
        bufp->chgIData(oldp+7,(vlSelf->ALUtop__DOT__RegFile__DOT__reg_array[5]),32);
        bufp->chgIData(oldp+8,(vlSelf->ALUtop__DOT__RegFile__DOT__reg_array[6]),32);
        bufp->chgIData(oldp+9,(vlSelf->ALUtop__DOT__RegFile__DOT__reg_array[7]),32);
        bufp->chgIData(oldp+10,(vlSelf->ALUtop__DOT__RegFile__DOT__reg_array[8]),32);
        bufp->chgIData(oldp+11,(vlSelf->ALUtop__DOT__RegFile__DOT__reg_array[9]),32);
        bufp->chgIData(oldp+12,(vlSelf->ALUtop__DOT__RegFile__DOT__reg_array[10]),32);
        bufp->chgIData(oldp+13,(vlSelf->ALUtop__DOT__RegFile__DOT__reg_array[11]),32);
        bufp->chgIData(oldp+14,(vlSelf->ALUtop__DOT__RegFile__DOT__reg_array[12]),32);
        bufp->chgIData(oldp+15,(vlSelf->ALUtop__DOT__RegFile__DOT__reg_array[13]),32);
        bufp->chgIData(oldp+16,(vlSelf->ALUtop__DOT__RegFile__DOT__reg_array[14]),32);
        bufp->chgIData(oldp+17,(vlSelf->ALUtop__DOT__RegFile__DOT__reg_array[15]),32);
        bufp->chgIData(oldp+18,(vlSelf->ALUtop__DOT__RegFile__DOT__reg_array[16]),32);
        bufp->chgIData(oldp+19,(vlSelf->ALUtop__DOT__RegFile__DOT__reg_array[17]),32);
        bufp->chgIData(oldp+20,(vlSelf->ALUtop__DOT__RegFile__DOT__reg_array[18]),32);
        bufp->chgIData(oldp+21,(vlSelf->ALUtop__DOT__RegFile__DOT__reg_array[19]),32);
        bufp->chgIData(oldp+22,(vlSelf->ALUtop__DOT__RegFile__DOT__reg_array[20]),32);
        bufp->chgIData(oldp+23,(vlSelf->ALUtop__DOT__RegFile__DOT__reg_array[21]),32);
        bufp->chgIData(oldp+24,(vlSelf->ALUtop__DOT__RegFile__DOT__reg_array[22]),32);
        bufp->chgIData(oldp+25,(vlSelf->ALUtop__DOT__RegFile__DOT__reg_array[23]),32);
        bufp->chgIData(oldp+26,(vlSelf->ALUtop__DOT__RegFile__DOT__reg_array[24]),32);
        bufp->chgIData(oldp+27,(vlSelf->ALUtop__DOT__RegFile__DOT__reg_array[25]),32);
        bufp->chgIData(oldp+28,(vlSelf->ALUtop__DOT__RegFile__DOT__reg_array[26]),32);
        bufp->chgIData(oldp+29,(vlSelf->ALUtop__DOT__RegFile__DOT__reg_array[27]),32);
        bufp->chgIData(oldp+30,(vlSelf->ALUtop__DOT__RegFile__DOT__reg_array[28]),32);
        bufp->chgIData(oldp+31,(vlSelf->ALUtop__DOT__RegFile__DOT__reg_array[29]),32);
        bufp->chgIData(oldp+32,(vlSelf->ALUtop__DOT__RegFile__DOT__reg_array[30]),32);
        bufp->chgIData(oldp+33,(vlSelf->ALUtop__DOT__RegFile__DOT__reg_array[31]),32);
    }
    bufp->chgBit(oldp+34,(vlSelf->clk));
    bufp->chgBit(oldp+35,(vlSelf->ALUsrc));
    bufp->chgBit(oldp+36,(vlSelf->ALUctrl));
    bufp->chgIData(oldp+37,(vlSelf->Instr),32);
    bufp->chgBit(oldp+38,(vlSelf->RegWrite));
    bufp->chgIData(oldp+39,(vlSelf->ImmOp),32);
    bufp->chgBit(oldp+40,(vlSelf->EQ));
    bufp->chgIData(oldp+41,(vlSelf->a0),32);
    bufp->chgIData(oldp+42,(vlSelf->ALUtop__DOT__ALUout),32);
    bufp->chgIData(oldp+43,(vlSelf->ALUtop__DOT__ALUop2),32);
    bufp->chgCData(oldp+44,(vlSelf->ALUctrl),3);
    bufp->chgCData(oldp+45,((0x1fU & (vlSelf->Instr 
                                      >> 0x14U))),5);
    bufp->chgCData(oldp+46,((0x1fU & (vlSelf->Instr 
                                      >> 0xfU))),5);
    bufp->chgCData(oldp+47,((0x1fU & (vlSelf->Instr 
                                      >> 7U))),5);
}

void VALUtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALUtop___024root__trace_cleanup\n"); );
    // Init
    VALUtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VALUtop___024root*>(voidSelf);
    VALUtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
