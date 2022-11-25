// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VSignExtend.h"
#include "VSignExtend__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VSignExtend::VSignExtend(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VSignExtend__Syms(contextp(), _vcname__, this)}
    , ImmSrc{vlSymsp->TOP.ImmSrc}
    , Instr{vlSymsp->TOP.Instr}
    , ImmOp{vlSymsp->TOP.ImmOp}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VSignExtend::VSignExtend(const char* _vcname__)
    : VSignExtend(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VSignExtend::~VSignExtend() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VSignExtend___024root___eval_initial(VSignExtend___024root* vlSelf);
void VSignExtend___024root___eval_settle(VSignExtend___024root* vlSelf);
void VSignExtend___024root___eval(VSignExtend___024root* vlSelf);
#ifdef VL_DEBUG
void VSignExtend___024root___eval_debug_assertions(VSignExtend___024root* vlSelf);
#endif  // VL_DEBUG
void VSignExtend___024root___final(VSignExtend___024root* vlSelf);

static void _eval_initial_loop(VSignExtend__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VSignExtend___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VSignExtend___024root___eval_settle(&(vlSymsp->TOP));
        VSignExtend___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VSignExtend::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSignExtend::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VSignExtend___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VSignExtend___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* VSignExtend::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VSignExtend::final() {
    VSignExtend___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VSignExtend::hierName() const { return vlSymsp->name(); }
const char* VSignExtend::modelName() const { return "VSignExtend"; }
unsigned VSignExtend::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VSignExtend::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VSignExtend___024root__trace_init_top(VSignExtend___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VSignExtend___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSignExtend___024root*>(voidSelf);
    VSignExtend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VSignExtend___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VSignExtend___024root__trace_register(VSignExtend___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VSignExtend::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VSignExtend___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
