// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcontrol_tb.h for the primary calling header

#ifndef VERILATED_VCONTROL_TB___024ROOT_H_
#define VERILATED_VCONTROL_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vcontrol_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcontrol_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ control_tb__DOT__clk;
        CData/*0:0*/ control_tb__DOT__rst_n;
        CData/*0:0*/ control_tb__DOT__csr_valid;
        CData/*0:0*/ control_tb__DOT__csr_write;
        CData/*3:0*/ control_tb__DOT__csr_wstrb;
        CData/*0:0*/ control_tb__DOT__csr_rsp_ready;
        CData/*0:0*/ control_tb__DOT__busy;
        CData/*0:0*/ control_tb__DOT__think_active;
        CData/*0:0*/ control_tb__DOT__qk_busy;
        CData/*0:0*/ control_tb__DOT__qk_blocked;
        CData/*0:0*/ control_tb__DOT__arith_error;
        CData/*0:0*/ control_tb__DOT__mem_error;
        CData/*0:0*/ control_tb__DOT__sequence_done;
        CData/*2:0*/ control_tb__DOT__direct_tokens;
        CData/*2:0*/ control_tb__DOT__think_tokens;
        CData/*2:0*/ control_tb__DOT__draft_nodes;
        CData/*2:0*/ control_tb__DOT__verified_nodes;
        CData/*2:0*/ control_tb__DOT__accepted_nodes;
        CData/*2:0*/ control_tb__DOT__rejected_nodes;
        CData/*0:0*/ control_tb__DOT__score_valid;
        CData/*0:0*/ control_tb__DOT__csr_ready;
        CData/*0:0*/ control_tb__DOT__csr_rsp_valid;
        CData/*0:0*/ control_tb__DOT__mode_valid;
        CData/*0:0*/ control_tb__DOT__mode_value;
        CData/*0:0*/ control_tb__DOT__dut__DOT__sticky_error;
        CData/*0:0*/ control_tb__DOT__dut__DOT__desired_mode;
        CData/*0:0*/ control_tb__DOT__dut__DOT__reference_valid;
        CData/*0:0*/ control_tb__DOT__dut__DOT__pending;
        CData/*0:0*/ control_tb__DOT__dut__DOT__response_valid;
        CData/*0:0*/ control_tb__DOT__dut__DOT__response_error;
        CData/*0:0*/ control_tb__DOT__dut__DOT__mode_pulse;
        CData/*0:0*/ control_tb__DOT__dut__DOT__mode_bit;
        CData/*0:0*/ control_tb__DOT__dut__DOT__request_write;
        CData/*0:0*/ control_tb__DOT__dut__DOT__request_busy;
        CData/*0:0*/ control_tb__DOT__dut__DOT__request_mode;
        CData/*3:0*/ control_tb__DOT__dut__DOT__request_strobes;
        CData/*0:0*/ control_tb__DOT__dut__DOT__access_error;
        CData/*0:0*/ control_tb__DOT__dut__DOT__take_snapshot;
        CData/*0:0*/ control_tb__DOT__dut__DOT__clear_counters;
        CData/*0:0*/ control_tb__DOT__dut__DOT__write_mode;
        CData/*0:0*/ control_tb__DOT__dut__DOT__write_reference_valid;
        CData/*0:0*/ control_tb__DOT__dut__DOT__write_reference_cycles_low;
        CData/*0:0*/ control_tb__DOT__dut__DOT__write_reference_cycles_high;
        CData/*0:0*/ control_tb__DOT__dut__DOT__write_reference_tokens_low;
        CData/*0:0*/ control_tb__DOT__dut__DOT__write_reference_tokens_high;
        CData/*0:0*/ control_tb__DOT__dut__DOT__write_reference_profile;
        CData/*0:0*/ __Vdly__control_tb__DOT__dut__DOT__pending;
        CData/*0:0*/ __Vdly__control_tb__DOT__dut__DOT__request_write;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__control_tb__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__control_tb__DOT__rst_n__0;
        CData/*0:0*/ __VactContinue;
        SData/*11:0*/ control_tb__DOT__csr_addr;
        SData/*11:0*/ control_tb__DOT__dut__DOT__request_addr;
        IData/*31:0*/ control_tb__DOT__csr_wdata;
        IData/*31:0*/ control_tb__DOT__score_fp32;
        VlWide<4>/*109:0*/ control_tb__DOT__stimulus;
        VlWide<128>/*4095:0*/ control_tb__DOT__filename;
        IData/*31:0*/ control_tb__DOT__count;
        IData/*31:0*/ control_tb__DOT__responses;
        IData/*31:0*/ control_tb__DOT__errors;
        IData/*31:0*/ control_tb__DOT__modes;
        IData/*31:0*/ control_tb__DOT__stalls;
        IData/*31:0*/ control_tb__DOT__dut__DOT__max_score;
    };
    struct {
        IData/*31:0*/ control_tb__DOT__dut__DOT__snapshot_max_score;
        IData/*31:0*/ control_tb__DOT__dut__DOT__arithmetic_errors;
        IData/*31:0*/ control_tb__DOT__dut__DOT__snapshot_arithmetic_errors;
        IData/*31:0*/ control_tb__DOT__dut__DOT__snapshot_sequence;
        IData/*31:0*/ control_tb__DOT__dut__DOT__reference_profile;
        IData/*31:0*/ control_tb__DOT__dut__DOT__request_data;
        IData/*31:0*/ control_tb__DOT__dut__DOT__response_data;
        IData/*31:0*/ control_tb__DOT__dut__DOT__read_value;
        IData/*31:0*/ __Vdly__control_tb__DOT__dut__DOT__max_score;
        IData/*31:0*/ __VactIterCount;
        QData/*36:0*/ control_tb__DOT__expected_before;
        QData/*36:0*/ control_tb__DOT__expected_after;
        QData/*63:0*/ control_tb__DOT__dut__DOT__reference_cycles;
        QData/*63:0*/ control_tb__DOT__dut__DOT__reference_tokens;
        QData/*63:0*/ control_tb__DOT__dut__DOT__incremented_errors;
        VlUnpacked<QData/*63:0*/, 13> control_tb__DOT__dut__DOT__live;
        VlUnpacked<QData/*63:0*/, 13> control_tb__DOT__dut__DOT__snapshot;
        VlUnpacked<QData/*63:0*/, 13> control_tb__DOT__dut__DOT__incremented;
        VlUnpacked<CData/*2:0*/, 13> control_tb__DOT__dut__DOT__increment;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h9e28a70d__0;
    VlTriggerScheduler __VtrigSched_h9e28a54c__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcontrol_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcontrol_tb___024root(Vcontrol_tb__Syms* symsp, const char* v__name);
    ~Vcontrol_tb___024root();
    VL_UNCOPYABLE(Vcontrol_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
