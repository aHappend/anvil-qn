// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vstartup_tb__pch.h"
#include "Vstartup_tb.h"
#include "Vstartup_tb___024root.h"
#include "Vstartup_tb_anvil_qn1_scalar.h"

// FUNCTIONS
Vstartup_tb__Syms::~Vstartup_tb__Syms()
{
}

Vstartup_tb__Syms::Vstartup_tb__Syms(VerilatedContext* contextp, const char* namep, Vstartup_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__arithmetic{this, Verilated::catName(namep, "startup_tb.dut.native.decoder.attention.legal.arithmetic")}
    , TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic{this, Verilated::catName(namep, "startup_tb.dut.native.decoder.attention.legal.exponential_unit.arithmetic")}
    , TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__multiply{this, Verilated::catName(namep, "startup_tb.dut.native.decoder.mlp.legal.multiply")}
    , TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic{this, Verilated::catName(namep, "startup_tb.dut.native.decoder.mlp.legal.silu.arithmetic")}
    , TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic{this, Verilated::catName(namep, "startup_tb.dut.native.decoder.mlp.legal.silu.exponential_unit.arithmetic")}
    , TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic{this, Verilated::catName(namep, "startup_tb.dut.native.decoder.normalization.norm.legal.arithmetic")}
    , TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator_add{this, Verilated::catName(namep, "startup_tb.dut.native.decoder.projections.legal.accumulator_add")}
    , TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__addition{this, Verilated::catName(namep, "startup_tb.dut.native.decoder.residuals.legal.addition")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__arithmetic = &TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__arithmetic;
    TOP.__PVT__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic = &TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic;
    TOP.__PVT__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__multiply = &TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__multiply;
    TOP.__PVT__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic = &TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic;
    TOP.__PVT__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic = &TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic;
    TOP.__PVT__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic = &TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic;
    TOP.__PVT__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator_add = &TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator_add;
    TOP.__PVT__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__addition = &TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__addition;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__arithmetic.__Vconfigure(true);
    TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic.__Vconfigure(false);
    TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__multiply.__Vconfigure(false);
    TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic.__Vconfigure(false);
    TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic.__Vconfigure(false);
    TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic.__Vconfigure(false);
    TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator_add.__Vconfigure(false);
    TOP__startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__addition.__Vconfigure(false);
    // Setup scopes
    __Vscope_startup_tb.configure(this, name(), "startup_tb", "startup_tb", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_startup_tb__accept_request.configure(this, name(), "startup_tb.accept_request", "accept_request", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_startup_tb__no_publication.configure(this, name(), "startup_tb.no_publication", "no_publication", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_startup_tb__reset_outputs.configure(this, name(), "startup_tb.reset_outputs", "reset_outputs", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_startup_tb__start.configure(this, name(), "startup_tb.start", "start", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_startup_tb__wait_cancel.configure(this, name(), "startup_tb.wait_cancel", "wait_cancel", -12, VerilatedScope::SCOPE_OTHER);
}
