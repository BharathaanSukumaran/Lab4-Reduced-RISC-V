// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VALUtop.h"
#include "VALUtop__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VALUtop::VALUtop(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VALUtop__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , ALUsrc{vlSymsp->TOP.ALUsrc}
    , ALUctrl{vlSymsp->TOP.ALUctrl}
    , RegWrite{vlSymsp->TOP.RegWrite}
    , EQ{vlSymsp->TOP.EQ}
    , Instr{vlSymsp->TOP.Instr}
    , ImmOp{vlSymsp->TOP.ImmOp}
    , a0{vlSymsp->TOP.a0}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VALUtop::VALUtop(const char* _vcname__)
    : VALUtop(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VALUtop::~VALUtop() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VALUtop___024root___eval_initial(VALUtop___024root* vlSelf);
void VALUtop___024root___eval_settle(VALUtop___024root* vlSelf);
void VALUtop___024root___eval(VALUtop___024root* vlSelf);
#ifdef VL_DEBUG
void VALUtop___024root___eval_debug_assertions(VALUtop___024root* vlSelf);
#endif  // VL_DEBUG
void VALUtop___024root___final(VALUtop___024root* vlSelf);

static void _eval_initial_loop(VALUtop__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VALUtop___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VALUtop___024root___eval_settle(&(vlSymsp->TOP));
        VALUtop___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VALUtop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VALUtop::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VALUtop___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VALUtop___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* VALUtop::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VALUtop::final() {
    VALUtop___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VALUtop::hierName() const { return vlSymsp->name(); }
const char* VALUtop::modelName() const { return "VALUtop"; }
unsigned VALUtop::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VALUtop::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VALUtop___024root__trace_init_top(VALUtop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VALUtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VALUtop___024root*>(voidSelf);
    VALUtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VALUtop___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VALUtop___024root__trace_register(VALUtop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VALUtop::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VALUtop___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
