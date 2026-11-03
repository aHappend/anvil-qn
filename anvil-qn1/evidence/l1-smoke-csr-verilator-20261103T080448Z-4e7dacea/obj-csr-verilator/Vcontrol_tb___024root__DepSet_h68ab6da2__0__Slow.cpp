// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcontrol_tb.h for the primary calling header

#include "Vcontrol_tb__pch.h"
#include "Vcontrol_tb___024root.h"

VL_ATTR_COLD void Vcontrol_tb___024root___eval_static__TOP(Vcontrol_tb___024root* vlSelf);

VL_ATTR_COLD void Vcontrol_tb___024root___eval_static(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___eval_static\n"); );
    // Body
    Vcontrol_tb___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vcontrol_tb___024root___eval_static__TOP(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->control_tb__DOT__clk = 0U;
    vlSelf->control_tb__DOT__count = 0U;
    vlSelf->control_tb__DOT__responses = 0U;
    vlSelf->control_tb__DOT__errors = 0U;
    vlSelf->control_tb__DOT__modes = 0U;
    vlSelf->control_tb__DOT__stalls = 0U;
}

VL_ATTR_COLD void Vcontrol_tb___024root___eval_final(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontrol_tb___024root___dump_triggers__stl(Vcontrol_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vcontrol_tb___024root___eval_phase__stl(Vcontrol_tb___024root* vlSelf);

VL_ATTR_COLD void Vcontrol_tb___024root___eval_settle(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vcontrol_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("evidence/l1-smoke-csr-verilator-20261103T080448Z-4e7dacea/csr-verilator_tb.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vcontrol_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontrol_tb___024root___dump_triggers__stl(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vcontrol_tb___024root___act_comb__TOP__0(Vcontrol_tb___024root* vlSelf);

VL_ATTR_COLD void Vcontrol_tb___024root___eval_stl(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vcontrol_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vcontrol_tb___024root___eval_triggers__stl(Vcontrol_tb___024root* vlSelf);

VL_ATTR_COLD bool Vcontrol_tb___024root___eval_phase__stl(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vcontrol_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vcontrol_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontrol_tb___024root___dump_triggers__act(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(edge control_tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge control_tb.clk or negedge control_tb.rst_n)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(negedge control_tb.clk)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge control_tb.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontrol_tb___024root___dump_triggers__nba(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(edge control_tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge control_tb.clk or negedge control_tb.rst_n)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(negedge control_tb.clk)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge control_tb.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcontrol_tb___024root___ctor_var_reset(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->control_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->control_tb__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->control_tb__DOT__csr_valid = VL_RAND_RESET_I(1);
    vlSelf->control_tb__DOT__csr_write = VL_RAND_RESET_I(1);
    vlSelf->control_tb__DOT__csr_addr = VL_RAND_RESET_I(12);
    vlSelf->control_tb__DOT__csr_wdata = VL_RAND_RESET_I(32);
    vlSelf->control_tb__DOT__csr_wstrb = VL_RAND_RESET_I(4);
    vlSelf->control_tb__DOT__csr_rsp_ready = VL_RAND_RESET_I(1);
    vlSelf->control_tb__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->control_tb__DOT__think_active = VL_RAND_RESET_I(1);
    vlSelf->control_tb__DOT__qk_busy = VL_RAND_RESET_I(1);
    vlSelf->control_tb__DOT__qk_blocked = VL_RAND_RESET_I(1);
    vlSelf->control_tb__DOT__arith_error = VL_RAND_RESET_I(1);
    vlSelf->control_tb__DOT__mem_error = VL_RAND_RESET_I(1);
    vlSelf->control_tb__DOT__sequence_done = VL_RAND_RESET_I(1);
    vlSelf->control_tb__DOT__direct_tokens = VL_RAND_RESET_I(3);
    vlSelf->control_tb__DOT__think_tokens = VL_RAND_RESET_I(3);
    vlSelf->control_tb__DOT__draft_nodes = VL_RAND_RESET_I(3);
    vlSelf->control_tb__DOT__verified_nodes = VL_RAND_RESET_I(3);
    vlSelf->control_tb__DOT__accepted_nodes = VL_RAND_RESET_I(3);
    vlSelf->control_tb__DOT__rejected_nodes = VL_RAND_RESET_I(3);
    vlSelf->control_tb__DOT__score_valid = VL_RAND_RESET_I(1);
    vlSelf->control_tb__DOT__score_fp32 = VL_RAND_RESET_I(32);
    vlSelf->control_tb__DOT__csr_ready = VL_RAND_RESET_I(1);
    vlSelf->control_tb__DOT__csr_rsp_valid = VL_RAND_RESET_I(1);
    vlSelf->control_tb__DOT__mode_valid = VL_RAND_RESET_I(1);
    vlSelf->control_tb__DOT__mode_value = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(110, vlSelf->control_tb__DOT__stimulus);
    vlSelf->control_tb__DOT__expected_before = VL_RAND_RESET_Q(37);
    vlSelf->control_tb__DOT__expected_after = VL_RAND_RESET_Q(37);
    VL_RAND_RESET_W(4096, vlSelf->control_tb__DOT__filename);
    vlSelf->control_tb__DOT__count = VL_RAND_RESET_I(32);
    vlSelf->control_tb__DOT__responses = VL_RAND_RESET_I(32);
    vlSelf->control_tb__DOT__errors = VL_RAND_RESET_I(32);
    vlSelf->control_tb__DOT__modes = VL_RAND_RESET_I(32);
    vlSelf->control_tb__DOT__stalls = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 13; ++__Vi0) {
        vlSelf->control_tb__DOT__dut__DOT__live[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 13; ++__Vi0) {
        vlSelf->control_tb__DOT__dut__DOT__snapshot[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 13; ++__Vi0) {
        vlSelf->control_tb__DOT__dut__DOT__incremented[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 13; ++__Vi0) {
        vlSelf->control_tb__DOT__dut__DOT__increment[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->control_tb__DOT__dut__DOT__max_score = VL_RAND_RESET_I(32);
    vlSelf->control_tb__DOT__dut__DOT__snapshot_max_score = VL_RAND_RESET_I(32);
    vlSelf->control_tb__DOT__dut__DOT__arithmetic_errors = VL_RAND_RESET_I(32);
    vlSelf->control_tb__DOT__dut__DOT__snapshot_arithmetic_errors = VL_RAND_RESET_I(32);
    vlSelf->control_tb__DOT__dut__DOT__snapshot_sequence = VL_RAND_RESET_I(32);
    vlSelf->control_tb__DOT__dut__DOT__sticky_error = VL_RAND_RESET_I(1);
    vlSelf->control_tb__DOT__dut__DOT__desired_mode = VL_RAND_RESET_I(1);
    vlSelf->control_tb__DOT__dut__DOT__reference_valid = VL_RAND_RESET_I(1);
    vlSelf->control_tb__DOT__dut__DOT__reference_cycles = VL_RAND_RESET_Q(64);
    vlSelf->control_tb__DOT__dut__DOT__reference_tokens = VL_RAND_RESET_Q(64);
    vlSelf->control_tb__DOT__dut__DOT__reference_profile = VL_RAND_RESET_I(32);
    vlSelf->control_tb__DOT__dut__DOT__pending = VL_RAND_RESET_I(1);
    vlSelf->control_tb__DOT__dut__DOT__response_valid = VL_RAND_RESET_I(1);
    vlSelf->control_tb__DOT__dut__DOT__response_error = VL_RAND_RESET_I(1);
    vlSelf->control_tb__DOT__dut__DOT__mode_pulse = VL_RAND_RESET_I(1);
    vlSelf->control_tb__DOT__dut__DOT__mode_bit = VL_RAND_RESET_I(1);
    vlSelf->control_tb__DOT__dut__DOT__request_write = VL_RAND_RESET_I(1);
    vlSelf->control_tb__DOT__dut__DOT__request_busy = VL_RAND_RESET_I(1);
    vlSelf->control_tb__DOT__dut__DOT__request_mode = VL_RAND_RESET_I(1);
    vlSelf->control_tb__DOT__dut__DOT__request_addr = VL_RAND_RESET_I(12);
    vlSelf->control_tb__DOT__dut__DOT__request_data = VL_RAND_RESET_I(32);
    vlSelf->control_tb__DOT__dut__DOT__response_data = VL_RAND_RESET_I(32);
    vlSelf->control_tb__DOT__dut__DOT__request_strobes = VL_RAND_RESET_I(4);
    vlSelf->control_tb__DOT__dut__DOT__access_error = VL_RAND_RESET_I(1);
    vlSelf->control_tb__DOT__dut__DOT__take_snapshot = VL_RAND_RESET_I(1);
    vlSelf->control_tb__DOT__dut__DOT__clear_counters = VL_RAND_RESET_I(1);
    vlSelf->control_tb__DOT__dut__DOT__write_mode = VL_RAND_RESET_I(1);
    vlSelf->control_tb__DOT__dut__DOT__write_reference_valid = VL_RAND_RESET_I(1);
    vlSelf->control_tb__DOT__dut__DOT__write_reference_cycles_low = VL_RAND_RESET_I(1);
    vlSelf->control_tb__DOT__dut__DOT__write_reference_cycles_high = VL_RAND_RESET_I(1);
    vlSelf->control_tb__DOT__dut__DOT__write_reference_tokens_low = VL_RAND_RESET_I(1);
    vlSelf->control_tb__DOT__dut__DOT__write_reference_tokens_high = VL_RAND_RESET_I(1);
    vlSelf->control_tb__DOT__dut__DOT__write_reference_profile = VL_RAND_RESET_I(1);
    vlSelf->control_tb__DOT__dut__DOT__read_value = VL_RAND_RESET_I(32);
    vlSelf->control_tb__DOT__dut__DOT__incremented_errors = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__control_tb__DOT__dut__DOT__max_score = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__control_tb__DOT__dut__DOT__pending = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__control_tb__DOT__dut__DOT__request_write = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__control_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__control_tb__DOT__rst_n__0 = VL_RAND_RESET_I(1);
}
