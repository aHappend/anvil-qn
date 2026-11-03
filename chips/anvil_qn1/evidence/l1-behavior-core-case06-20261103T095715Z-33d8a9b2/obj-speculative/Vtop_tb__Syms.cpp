// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop_tb__pch.h"
#include "Vtop_tb.h"
#include "Vtop_tb___024root.h"
#include "Vtop_tb_anvil_qn1_scalar.h"

// FUNCTIONS
Vtop_tb__Syms::~Vtop_tb__Syms()
{
}

Vtop_tb__Syms::Vtop_tb__Syms(VerilatedContext* contextp, const char* namep, Vtop_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__arithmetic{this, Verilated::catName(namep, "top_tb.dut.native.decoder.attention.legal.arithmetic")}
    , TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic{this, Verilated::catName(namep, "top_tb.dut.native.decoder.attention.legal.exponential_unit.arithmetic")}
    , TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__multiply{this, Verilated::catName(namep, "top_tb.dut.native.decoder.mlp.legal.multiply")}
    , TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic{this, Verilated::catName(namep, "top_tb.dut.native.decoder.mlp.legal.silu.arithmetic")}
    , TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic{this, Verilated::catName(namep, "top_tb.dut.native.decoder.mlp.legal.silu.exponential_unit.arithmetic")}
    , TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic{this, Verilated::catName(namep, "top_tb.dut.native.decoder.normalization.norm.legal.arithmetic")}
    , TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator_add{this, Verilated::catName(namep, "top_tb.dut.native.decoder.projections.legal.accumulator_add")}
    , TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__addition{this, Verilated::catName(namep, "top_tb.dut.native.decoder.residuals.legal.addition")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__arithmetic = &TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__arithmetic;
    TOP.__PVT__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic = &TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic;
    TOP.__PVT__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__multiply = &TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__multiply;
    TOP.__PVT__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic = &TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic;
    TOP.__PVT__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic = &TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic;
    TOP.__PVT__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic = &TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic;
    TOP.__PVT__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator_add = &TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator_add;
    TOP.__PVT__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__addition = &TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__addition;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__arithmetic.__Vconfigure(true);
    TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic.__Vconfigure(false);
    TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__multiply.__Vconfigure(false);
    TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic.__Vconfigure(false);
    TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__arithmetic.__Vconfigure(false);
    TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic.__Vconfigure(false);
    TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator_add.__Vconfigure(false);
    TOP__top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__addition.__Vconfigure(false);
    // Setup scopes
    __Vscope_top_tb.configure(this, name(), "top_tb", "top_tb", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_tb__reset_outputs.configure(this, name(), "top_tb.reset_outputs", "reset_outputs", -12, VerilatedScope::SCOPE_OTHER);
}
