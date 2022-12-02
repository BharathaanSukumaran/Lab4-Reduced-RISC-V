// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRISC__Syms.h"


VL_ATTR_COLD void VRISC___024root__trace_init_sub__TOP__0(VRISC___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+56,"clk", false,-1);
    tracep->declBit(c+57,"rst", false,-1);
    tracep->declBus(c+58,"a0", false,-1, 31,0);
    tracep->pushNamePrefix("RISC ");
    tracep->declBus(c+62,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+56,"clk", false,-1);
    tracep->declBit(c+57,"rst", false,-1);
    tracep->declBus(c+58,"a0", false,-1, 31,0);
    tracep->declBus(c+59,"next_PC", false,-1, 7,0);
    tracep->declBus(c+46,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+47,"PCsrc", false,-1);
    tracep->declBus(c+1,"PC", false,-1, 7,0);
    tracep->declBus(c+2,"Instr", false,-1, 31,0);
    tracep->declBit(c+48,"RegWrite", false,-1);
    tracep->declBit(c+49,"EQ", false,-1);
    tracep->declBus(c+50,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+51,"ALUsrc", false,-1);
    tracep->declBus(c+52,"ImmSrc", false,-1, 12,0);
    tracep->declBit(c+3,"MemWrite", false,-1);
    tracep->declBit(c+53,"ResultSrc", false,-1);
    tracep->declBus(c+54,"ALUout", false,-1, 31,0);
    tracep->declBus(c+4,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+55,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+5,"regOp2", false,-1, 31,0);
    tracep->declBus(c+63,"WD3", false,-1, 31,0);
    tracep->declBus(c+6,"ReadData", false,-1, 31,0);
    tracep->declBus(c+60,"Result", false,-1, 31,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+62,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+50,"ALUctrl", false,-1, 2,0);
    tracep->declBus(c+4,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+55,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+54,"SUM", false,-1, 31,0);
    tracep->declBit(c+49,"EQ", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALUmux ");
    tracep->declBus(c+62,"ALUop2_width", false,-1, 31,0);
    tracep->declBit(c+51,"ALUsrc", false,-1);
    tracep->declBus(c+5,"regOp2", false,-1, 31,0);
    tracep->declBus(c+46,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+55,"ALUop2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ControlUnit ");
    tracep->declBus(c+62,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2,"Instr", false,-1, 31,0);
    tracep->declBit(c+49,"EQ", false,-1);
    tracep->declBit(c+48,"RegWrite", false,-1);
    tracep->declBus(c+50,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+51,"ALUsrc", false,-1);
    tracep->declBus(c+52,"ImmSrc", false,-1, 12,0);
    tracep->declBit(c+47,"PCsrc", false,-1);
    tracep->declBit(c+3,"MemWrite", false,-1);
    tracep->declBit(c+53,"ResultSrc", false,-1);
    tracep->declBus(c+7,"op", false,-1, 6,0);
    tracep->declBus(c+8,"func3", false,-1, 2,0);
    tracep->declBus(c+9,"func7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DataMemory ");
    tracep->declBus(c+64,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+62,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+56,"clk", false,-1);
    tracep->declBit(c+3,"MemWrite", false,-1);
    tracep->declBus(c+54,"A", false,-1, 31,0);
    tracep->declBus(c+5,"WD", false,-1, 31,0);
    tracep->declBus(c+6,"RD", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Instr_mem ");
    tracep->declBus(c+65,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+62,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1,"A", false,-1, 7,0);
    tracep->declBus(c+2,"RD", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCMux ");
    tracep->declBus(c+65,"next_PC_width", false,-1, 31,0);
    tracep->declBit(c+47,"PCsrc", false,-1);
    tracep->declBus(c+61,"branch_PC", false,-1, 7,0);
    tracep->declBus(c+10,"inc_PC", false,-1, 7,0);
    tracep->declBus(c+59,"next_PC", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCReg ");
    tracep->declBus(c+65,"PC_WIDTH", false,-1, 31,0);
    tracep->declBit(c+56,"clk", false,-1);
    tracep->declBit(c+57,"rst", false,-1);
    tracep->declBus(c+59,"next_PC", false,-1, 7,0);
    tracep->declBus(c+1,"PC", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RegFile ");
    tracep->declBus(c+66,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+62,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+56,"clk", false,-1);
    tracep->declBus(c+2,"Instr", false,-1, 31,0);
    tracep->declBit(c+48,"WE3", false,-1);
    tracep->declBus(c+60,"WD3", false,-1, 31,0);
    tracep->declBus(c+4,"RD1", false,-1, 31,0);
    tracep->declBus(c+5,"RD2", false,-1, 31,0);
    tracep->declBus(c+58,"a0", false,-1, 31,0);
    tracep->declBus(c+11,"rs2", false,-1, 4,0);
    tracep->declBus(c+12,"rs1", false,-1, 4,0);
    tracep->declBus(c+13,"rd", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+14+i*1,"reg_array", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SignExtend ");
    tracep->declBus(c+62,"INSTR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+67,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2,"Instr", false,-1, 31,0);
    tracep->declBus(c+52,"ImmSrc", false,-1, 12,0);
    tracep->declBus(c+46,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+7,"op", false,-1, 6,0);
    tracep->declBus(c+8,"func3", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("result_mux ");
    tracep->declBus(c+62,"RESULT_WIDTH", false,-1, 31,0);
    tracep->declBit(c+53,"ResultSrc", false,-1);
    tracep->declBus(c+54,"ALUResult", false,-1, 31,0);
    tracep->declBus(c+6,"ReadData", false,-1, 31,0);
    tracep->declBus(c+60,"Result", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VRISC___024root__trace_init_top(VRISC___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC___024root__trace_init_top\n"); );
    // Body
    VRISC___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VRISC___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VRISC___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VRISC___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VRISC___024root__trace_register(VRISC___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VRISC___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VRISC___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VRISC___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VRISC___024root__trace_full_sub_0(VRISC___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VRISC___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC___024root__trace_full_top_0\n"); );
    // Init
    VRISC___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRISC___024root*>(voidSelf);
    VRISC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VRISC___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VRISC___024root__trace_full_sub_0(VRISC___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->RISC__DOT__PC),8);
    bufp->fullIData(oldp+2,(vlSelf->RISC__DOT__Instr),32);
    bufp->fullBit(oldp+3,(vlSelf->RISC__DOT__MemWrite));
    bufp->fullIData(oldp+4,(vlSelf->RISC__DOT__ALUop1),32);
    bufp->fullIData(oldp+5,(vlSelf->RISC__DOT__regOp2),32);
    bufp->fullIData(oldp+6,(vlSelf->RISC__DOT__ReadData),32);
    bufp->fullCData(oldp+7,((0x7fU & vlSelf->RISC__DOT__Instr)),7);
    bufp->fullCData(oldp+8,((7U & (vlSelf->RISC__DOT__Instr 
                                   >> 0xcU))),3);
    bufp->fullCData(oldp+9,((vlSelf->RISC__DOT__Instr 
                             >> 0x19U)),7);
    bufp->fullCData(oldp+10,((0xffU & ((IData)(4U) 
                                       + (IData)(vlSelf->RISC__DOT__PC)))),8);
    bufp->fullCData(oldp+11,((0x1fU & (vlSelf->RISC__DOT__Instr 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+12,((0x1fU & (vlSelf->RISC__DOT__Instr 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+13,((0x1fU & (vlSelf->RISC__DOT__Instr 
                                       >> 7U))),5);
    bufp->fullIData(oldp+14,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[0]),32);
    bufp->fullIData(oldp+15,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[1]),32);
    bufp->fullIData(oldp+16,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[2]),32);
    bufp->fullIData(oldp+17,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[3]),32);
    bufp->fullIData(oldp+18,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[4]),32);
    bufp->fullIData(oldp+19,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[5]),32);
    bufp->fullIData(oldp+20,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[6]),32);
    bufp->fullIData(oldp+21,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[7]),32);
    bufp->fullIData(oldp+22,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[8]),32);
    bufp->fullIData(oldp+23,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[9]),32);
    bufp->fullIData(oldp+24,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[10]),32);
    bufp->fullIData(oldp+25,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[11]),32);
    bufp->fullIData(oldp+26,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[12]),32);
    bufp->fullIData(oldp+27,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[13]),32);
    bufp->fullIData(oldp+28,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[14]),32);
    bufp->fullIData(oldp+29,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[15]),32);
    bufp->fullIData(oldp+30,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[16]),32);
    bufp->fullIData(oldp+31,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[17]),32);
    bufp->fullIData(oldp+32,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[18]),32);
    bufp->fullIData(oldp+33,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[19]),32);
    bufp->fullIData(oldp+34,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[20]),32);
    bufp->fullIData(oldp+35,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[21]),32);
    bufp->fullIData(oldp+36,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[22]),32);
    bufp->fullIData(oldp+37,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[23]),32);
    bufp->fullIData(oldp+38,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[24]),32);
    bufp->fullIData(oldp+39,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[25]),32);
    bufp->fullIData(oldp+40,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[26]),32);
    bufp->fullIData(oldp+41,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[27]),32);
    bufp->fullIData(oldp+42,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[28]),32);
    bufp->fullIData(oldp+43,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[29]),32);
    bufp->fullIData(oldp+44,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[30]),32);
    bufp->fullIData(oldp+45,(vlSelf->RISC__DOT__RegFile__DOT__reg_array[31]),32);
    bufp->fullIData(oldp+46,(vlSelf->RISC__DOT__ImmOp),32);
    bufp->fullBit(oldp+47,(vlSelf->RISC__DOT__PCsrc));
    bufp->fullBit(oldp+48,(vlSelf->RISC__DOT__RegWrite));
    bufp->fullBit(oldp+49,(vlSelf->RISC__DOT__EQ));
    bufp->fullCData(oldp+50,(vlSelf->RISC__DOT__ALUctrl),3);
    bufp->fullBit(oldp+51,(vlSelf->RISC__DOT__ALUsrc));
    bufp->fullSData(oldp+52,(vlSelf->RISC__DOT__ImmSrc),13);
    bufp->fullBit(oldp+53,(vlSelf->RISC__DOT__ResultSrc));
    bufp->fullIData(oldp+54,(vlSelf->RISC__DOT__ALUout),32);
    bufp->fullIData(oldp+55,(vlSelf->RISC__DOT__ALUop2),32);
    bufp->fullBit(oldp+56,(vlSelf->clk));
    bufp->fullBit(oldp+57,(vlSelf->rst));
    bufp->fullIData(oldp+58,(vlSelf->a0),32);
    bufp->fullCData(oldp+59,((0xffU & ((IData)(vlSelf->RISC__DOT__PCsrc)
                                        ? (vlSelf->RISC__DOT__ImmOp 
                                           + (IData)(vlSelf->RISC__DOT__PC))
                                        : ((IData)(4U) 
                                           + (IData)(vlSelf->RISC__DOT__PC))))),8);
    bufp->fullIData(oldp+60,(((IData)(vlSelf->RISC__DOT__ResultSrc)
                               ? vlSelf->RISC__DOT__ReadData
                               : vlSelf->RISC__DOT__ALUout)),32);
    bufp->fullCData(oldp+61,((0xffU & (vlSelf->RISC__DOT__ImmOp 
                                       + (IData)(vlSelf->RISC__DOT__PC)))),8);
    bufp->fullIData(oldp+62,(0x20U),32);
    bufp->fullIData(oldp+63,(vlSelf->RISC__DOT__WD3),32);
    bufp->fullIData(oldp+64,(0xcU),32);
    bufp->fullIData(oldp+65,(8U),32);
    bufp->fullIData(oldp+66,(5U),32);
    bufp->fullIData(oldp+67,(0xdU),32);
}
