// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VControlUnit.h"
#include "VControlUnit__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VControlUnit::VControlUnit(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VControlUnit__Syms(contextp(), _vcname__, this)}
    , EQ{vlSymsp->TOP.EQ}
    , RegWrite{vlSymsp->TOP.RegWrite}
    , ALUctrl{vlSymsp->TOP.ALUctrl}
    , ALUsrc{vlSymsp->TOP.ALUsrc}
    , PCsrc{vlSymsp->TOP.PCsrc}
    , ImmSrc{vlSymsp->TOP.ImmSrc}
    , Instr{vlSymsp->TOP.Instr}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VControlUnit::VControlUnit(const char* _vcname__)
    : VControlUnit(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VControlUnit::~VControlUnit() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VControlUnit___024root___eval_initial(VControlUnit___024root* vlSelf);
void VControlUnit___024root___eval_settle(VControlUnit___024root* vlSelf);
void VControlUnit___024root___eval(VControlUnit___024root* vlSelf);
#ifdef VL_DEBUG
void VControlUnit___024root___eval_debug_assertions(VControlUnit___024root* vlSelf);
#endif  // VL_DEBUG
void VControlUnit___024root___final(VControlUnit___024root* vlSelf);

static void _eval_initial_loop(VControlUnit__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VControlUnit___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VControlUnit___024root___eval_settle(&(vlSymsp->TOP));
        VControlUnit___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VControlUnit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VControlUnit::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VControlUnit___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VControlUnit___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* VControlUnit::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VControlUnit::final() {
    VControlUnit___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VControlUnit::hierName() const { return vlSymsp->name(); }
const char* VControlUnit::modelName() const { return "VControlUnit"; }
unsigned VControlUnit::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VControlUnit::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VControlUnit___024root__trace_init_top(VControlUnit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VControlUnit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VControlUnit___024root*>(voidSelf);
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VControlUnit___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VControlUnit___024root__trace_register(VControlUnit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VControlUnit::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VControlUnit___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
