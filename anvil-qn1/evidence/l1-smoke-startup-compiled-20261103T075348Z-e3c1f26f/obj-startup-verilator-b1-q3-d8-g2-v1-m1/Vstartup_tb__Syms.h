// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSTARTUP_TB__SYMS_H_
#define VERILATED_VSTARTUP_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vstartup_tb.h"

// INCLUDE MODULE CLASSES
#include "Vstartup_tb___024root.h"
#include "Vstartup_tb_anvil_qn1_scalar.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vstartup_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vstartup_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vstartup_tb___024root          TOP;
    Vstartup_tb_anvil_qn1_scalar   TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__arithmetic;
    Vstartup_tb_anvil_qn1_scalar   TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic;
    Vstartup_tb_anvil_qn1_scalar   TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__multiply;
    Vstartup_tb_anvil_qn1_scalar   TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic;
    Vstartup_tb_anvil_qn1_scalar   TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic;
    Vstartup_tb_anvil_qn1_scalar   TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic;
    Vstartup_tb_anvil_qn1_scalar   TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator_add;
    Vstartup_tb_anvil_qn1_scalar   TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__addition;

    // SCOPE NAMES
    VerilatedScope __Vscope_startup_tb;
    VerilatedScope __Vscope_startup_tb__accept_request;
    VerilatedScope __Vscope_startup_tb__no_publication;
    VerilatedScope __Vscope_startup_tb__reset_outputs;
    VerilatedScope __Vscope_startup_tb__start;
    VerilatedScope __Vscope_startup_tb__wait_cancel;

    // CONSTRUCTORS
    Vstartup_tb__Syms(VerilatedContext* contextp, const char* namep, Vstartup_tb* modelp);
    ~Vstartup_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
