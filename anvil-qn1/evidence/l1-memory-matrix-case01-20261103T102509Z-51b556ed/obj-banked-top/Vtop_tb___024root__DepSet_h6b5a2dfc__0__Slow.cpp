// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"
#include "Vtop_tb___024root.h"

VL_ATTR_COLD void Vtop_tb___024root___eval_static__TOP(Vtop_tb___024root* vlSelf);

VL_ATTR_COLD void Vtop_tb___024root___eval_static(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_static\n"); );
    // Body
    Vtop_tb___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vtop_tb___024root___eval_static__TOP(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->top_tb__DOT__clk = 0U;
    vlSelf->top_tb__DOT__token_valid = 0U;
    vlSelf->top_tb__DOT__new_sequence = 0U;
    vlSelf->top_tb__DOT__token_phase = 0U;
    vlSelf->top_tb__DOT__token_id = 0U;
    vlSelf->top_tb__DOT__token_pos = 0U;
    vlSelf->top_tb__DOT__logit_ready = 0U;
    vlSelf->top_tb__DOT__mem_req_ready = 0U;
    vlSelf->top_tb__DOT__mem_rsp_valid = 0U;
    vlSelf->top_tb__DOT__mem_rsp_rdata = 0U;
    vlSelf->top_tb__DOT__mem_rsp_tag = 0ULL;
    vlSelf->top_tb__DOT__commit_ready = 0U;
    vlSelf->top_tb__DOT__cycle = 0U;
    vlSelf->top_tb__DOT__active_case = 0U;
    vlSelf->top_tb__DOT__logit_count = 0U;
    vlSelf->top_tb__DOT__commit_seen = 0U;
    vlSelf->top_tb__DOT__completed = 0U;
    vlSelf->top_tb__DOT__req_count = 0U;
    vlSelf->top_tb__DOT__write_count = 0U;
    vlSelf->top_tb__DOT__key_count = 0U;
    vlSelf->top_tb__DOT__value_count = 0U;
    vlSelf->top_tb__DOT__bias_count = 0U;
    vlSelf->top_tb__DOT__tail = 0U;
    vlSelf->top_tb__DOT__front = 0U;
    vlSelf->top_tb__DOT__queued = 0U;
    vlSelf->top_tb__DOT__held_request = 0U;
    vlSelf->top_tb__DOT__held_logit = 0U;
    vlSelf->top_tb__DOT__held_commit = 0U;
    vlSelf->top_tb__DOT__last_logit_cycle = 0xffffffffU;
    vlSelf->top_tb__DOT__last_commit_cycle = 0xffffffffU;
    vlSelf->top_tb__DOT__request_bank = 0U;
    vlSelf->top_tb__DOT__response_bank = 0U;
    vlSelf->top_tb__DOT__response_slot = 0U;
    vlSelf->top_tb__DOT__reordered = 0U;
    vlSelf->top_tb__DOT__held_banks = 0U;
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__serial = 1ULL;
}

VL_ATTR_COLD void Vtop_tb___024root___eval_initial__TOP(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_initial__TOP\n"); );
    // Init
    CData/*5:0*/ __Vfunc_leading_zero32__6373__Vfuncout;
    __Vfunc_leading_zero32__6373__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_leading_zero32__6373__part;
    __Vfunc_leading_zero32__6373__part = 0;
    CData/*5:0*/ __Vfunc_leading_zero32__6373__count;
    __Vfunc_leading_zero32__6373__count = 0;
    // Body
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__inverse_root__DOT__shift_a 
        = (0x3fU & (([&]() {
                    __Vfunc_leading_zero32__6373__part = 0x800000U;
                    __Vfunc_leading_zero32__6373__count = 0U;
                    __Vfunc_leading_zero32__6373__count 
                        = (0x3fU & ((IData)(8U) + (IData)(__Vfunc_leading_zero32__6373__count)));
                    __Vfunc_leading_zero32__6373__part 
                        = VL_SHIFTL_III(32,32,32, __Vfunc_leading_zero32__6373__part, 8U);
                    if ((0U == (__Vfunc_leading_zero32__6373__part 
                                >> 0x1cU))) {
                        __Vfunc_leading_zero32__6373__count 
                            = (0x3fU & ((IData)(4U) 
                                        + (IData)(__Vfunc_leading_zero32__6373__count)));
                        __Vfunc_leading_zero32__6373__part 
                            = VL_SHIFTL_III(32,32,32, __Vfunc_leading_zero32__6373__part, 4U);
                    }
                    if ((0U == (__Vfunc_leading_zero32__6373__part 
                                >> 0x1eU))) {
                        __Vfunc_leading_zero32__6373__count 
                            = (0x3fU & ((IData)(2U) 
                                        + (IData)(__Vfunc_leading_zero32__6373__count)));
                        __Vfunc_leading_zero32__6373__part 
                            = VL_SHIFTL_III(32,32,32, __Vfunc_leading_zero32__6373__part, 2U);
                    }
                    if ((1U & (~ (__Vfunc_leading_zero32__6373__part 
                                  >> 0x1fU)))) {
                        __Vfunc_leading_zero32__6373__count 
                            = (0x3fU & ((IData)(1U) 
                                        + (IData)(__Vfunc_leading_zero32__6373__count)));
                    }
                    __Vfunc_leading_zero32__6373__Vfuncout 
                        = __Vfunc_leading_zero32__6373__count;
                }(), (IData)(__Vfunc_leading_zero32__6373__Vfuncout)) 
                    - (IData)(8U)));
}

VL_ATTR_COLD void Vtop_tb___024root___eval_final(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__stl(Vtop_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop_tb___024root___eval_phase__stl(Vtop_tb___024root* vlSelf);

VL_ATTR_COLD void Vtop_tb___024root___eval_settle(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_settle\n"); );
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
            Vtop_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("evidence/l1-memory-matrix-case01-20261103T102509Z-51b556ed/banked_top_tb.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__stl(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] top_tb.dut.native.decoder.memory_router.__VdfgTmp_h756fb8b6__0 or [hybrid] top_tb.dut.native.drsp_error)\n");
    }
    if ((4ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 2 is active: @([hybrid] top_tb.dut.native.decoder.memory_router.__VdfgTmp_h756fb8b6__0 or [hybrid] top_tb.dut.native.decoder.__Vcellinp__residuals__rsp_valid or [hybrid] top_tb.dut.native.decoder.__Vcellinp__mlp__rsp_valid or [hybrid] top_tb.dut.native.decoder.__Vcellinp__attention__rsp_valid or [hybrid] top_tb.dut.native.decoder.memory_router.__VdfgTmp_h77905d4e__0 or [hybrid] top_tb.dut.native.decoder.memory_router.__VdfgTmp_h7797dd60__0 or [hybrid] top_tb.dut.native.decoder.__Vcellinp__projections__rsp_valid)\n");
    }
    if ((8ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 3 is active: @([hybrid] top_tb.dut.native.decoder.memory_router.__VdfgTmp_h756fb8b6__0 or [hybrid] top_tb.dut.native.decoder.memory_router.__VdfgTmp_h77905d4e__0 or [hybrid] top_tb.dut.native.decoder.memory_router.__VdfgTmp_h7797dd60__0)\n");
    }
    if ((0x10ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 4 is active: @([hybrid] top_tb.dut.native.drsp_error)\n");
    }
    if ((0x20ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 5 is active: @([hybrid] top_tb.dut.native.drsp_error or [hybrid] top_tb.dut.native.decoder.__Vcellinp__residuals__rsp_valid)\n");
    }
    if ((0x40ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 6 is active: @([hybrid] top_tb.dut.native.drsp_error or [hybrid] top_tb.dut.native.decoder.__Vcellinp__mlp__rsp_valid)\n");
    }
    if ((0x80ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 7 is active: @([hybrid] top_tb.dut.native.drsp_error or [hybrid] top_tb.dut.native.decoder.__Vcellinp__attention__rsp_valid)\n");
    }
    if ((0x100ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 8 is active: @([hybrid] top_tb.dut.native.drsp_error or [hybrid] top_tb.dut.native.decoder.__Vcellinp__projections__rsp_valid)\n");
    }
    if ((0x200ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 9 is active: @([hybrid] top_tb.dut.native.drsp_error or [hybrid] top_tb.dut.native.decoder.memory_router.__VdfgTmp_h77905d4e__0)\n");
    }
    if ((0x400ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 10 is active: @([hybrid] top_tb.dut.native.drsp_error or [hybrid] top_tb.dut.native.decoder.memory_router.__VdfgTmp_h7797dd60__0)\n");
    }
    if ((0x800ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 11 is active: @([hybrid] top_tb.dut.native.decoder.__Vcellinp__residuals__rsp_valid)\n");
    }
    if ((0x1000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 12 is active: @([hybrid] top_tb.dut.native.decoder.__Vcellinp__mlp__rsp_valid)\n");
    }
    if ((0x2000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 13 is active: @([hybrid] top_tb.dut.native.decoder.__Vcellinp__attention__rsp_valid)\n");
    }
    if ((0x4000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 14 is active: @([hybrid] top_tb.dut.native.decoder.memory_router.bad_response)\n");
    }
    if ((0x8000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 15 is active: @([hybrid] top_tb.dut.native.decoder.memory_router.bad_response or [hybrid] top_tb.dut.native.decoder.memory_router.__VdfgTmp_h77905d4e__0 or [hybrid] top_tb.dut.native.decoder.memory_router.__VdfgTmp_h7797dd60__0)\n");
    }
    if ((0x10000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 16 is active: @([hybrid] top_tb.dut.native.decoder.memory_router.bad_response or [hybrid] top_tb.dut.native.drsp_valid)\n");
    }
    if ((0x20000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 17 is active: @([hybrid] top_tb.dut.native.drsp_valid)\n");
    }
    if ((0x40000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 18 is active: @([hybrid] top_tb.dut.native.drsp_valid or [hybrid] top_tb.dut.native.decoder.memory_router.__VdfgTmp_h8649b870__0)\n");
    }
    if ((0x80000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 19 is active: @([hybrid] top_tb.dut.native.drsp_valid or [hybrid] top_tb.dut.native.decoder.__Vcellinp__projections__rsp_valid)\n");
    }
    if ((0x100000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 20 is active: @([hybrid] top_tb.dut.native.decoder.memory_router.__VdfgTmp_h77905d4e__0)\n");
    }
    if ((0x200000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 21 is active: @([hybrid] top_tb.dut.native.decoder.memory_router.__VdfgTmp_h7797dd60__0)\n");
    }
    if ((0x400000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 22 is active: @([hybrid] top_tb.dut.native.decoder.__Vcellinp__projections__rsp_valid)\n");
    }
    if ((0x800000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 23 is active: @([hybrid] top_tb.dut.native.decoder.projections.__VdfgTmp_h7552aa46__0)\n");
    }
    if ((0x1000000ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 24 is active: @([hybrid] top_tb.dut.native.decoder.memory_router.__VdfgTmp_hc7ea6d20__0 or [hybrid] top_tb.dut.native.decoder.memory_router.__VdfgTmp_h8649b870__0)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop_tb___024root___stl_sequent__TOP__1(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___stl_sequent__TOP__1\n"); );
    // Init
    CData/*4:0*/ __Vfunc_awq_lane_shift__405__Vfuncout;
    __Vfunc_awq_lane_shift__405__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__405__lane;
    __Vfunc_awq_lane_shift__405__lane = 0;
    VlWide<8>/*255:0*/ __Vtemp_1;
    // Body
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__op = 0U;
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__op 
        = ((2U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state))
            ? 2U : ((3U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state))
                     ? 0U : ((4U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state))
                              ? 2U : ((5U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__exponential_unit__DOT__state))
                                       ? 3U : 0U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__alu_op = 0U;
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__op 
        = ((2U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state))
            ? 2U : ((3U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state))
                     ? 0U : ((4U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state))
                              ? 2U : ((5U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state))
                                       ? 3U : 0U))));
    vlSelf->top_tb__DOT__bank_mem_rsp_ready = (0xffU 
                                               & (- (IData)((IData)(vlSelf->top_tb__DOT__rst_n))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__normalization__start_gamma_kind 
        = ((5U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))
            ? 5U : ((0x1bU == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state))
                     ? 6U : 7U));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__arithmetic_state 
        = ((4U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state)) 
           | ((6U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state)) 
              | ((7U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state)) 
                 | ((8U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state)) 
                    | ((9U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state)) 
                       | ((0xaU == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state)) 
                          | ((0xcU == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state)) 
                             | (0xeU == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state)))))))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__projection_wait 
        = ((2U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state)) 
           | ((4U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state)) 
              | (0x10U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__arithmetic_state 
        = ((3U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state)) 
           | ((4U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state)) 
              | (5U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__silu__DOT__state))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__arithmetic_state 
        = ((5U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state)) 
           | ((6U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state)) 
              | ((9U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state)) 
                 | ((0xcU == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state)) 
                    | ((0xdU == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state)) 
                       | (0x10U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state)))))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__first_coordinate 
        = (0U == (7U & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__expected_index));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__final_coordinate 
        = (7U == (7U & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__expected_index));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__pair_failed 
        = (IData)((0U != (0x11U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalized_failed))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__pair_failed 
        = (IData)((0U != (0x22U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalized_failed))));
    if ((0x358637bdU <= (0x7fffffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__mean))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_add__DOT__large_value 
            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__mean;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_add__DOT__small_value = 0x358637bdU;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_add__DOT____VdfgTmp_hdff701da__0 = 0x6bU;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_add__DOT____VdfgTmp_h2fb2bceb__0 
            = (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__mean 
                        >> 0x17U));
    } else {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_add__DOT__large_value = 0x358637bdU;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_add__DOT__small_value 
            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__mean;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_add__DOT____VdfgTmp_hdff701da__0 
            = (0xffU & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__mean 
                        >> 0x17U));
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_add__DOT____VdfgTmp_h2fb2bceb__0 = 0x6bU;
    }
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__pair_failed 
        = (IData)((0U != (0x44U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalized_failed))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__pair_failed 
        = (IData)((0U != (0x88U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalized_failed))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__target_marker 
        = ((0x25073U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__target) 
           | (0x25074U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__target));
    vlSelf->__VdfgTmp_hf5c31c79__0 = ((0U == (0xffU 
                                              & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__captured[0U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__captured[0U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h05ec971e__0 = ((0U == (0xffU 
                                              & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__captured[0U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__captured[0U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h0741d7a6__0 = ((0U == (0xffU 
                                              & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__captured[1U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__captured[1U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hfeef2b84__0 = ((0U == (0xffU 
                                              & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__captured[1U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__captured[1U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h90ce2436__0 = ((0U == (0xffU 
                                              & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__captured[2U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__captured[2U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hd3519c3e__0 = ((0U == (0xffU 
                                              & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__captured[2U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__captured[2U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h4a14740e__0 = ((0U == (0xffU 
                                              & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__captured[3U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__captured[3U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hc979ac00__0 = ((0U == (0xffU 
                                              & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__captured[3U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__captured[3U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hf4e8a5ac__0 = ((0U == (0xffU 
                                              & (IData)(
                                                        (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__cosine 
                                                         >> 7U))))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (IData)(
                                                                 (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__cosine 
                                                                  >> 7U))) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h67c21c18__0 = ((0U == (0xffU 
                                              & (IData)(
                                                        (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__cosine 
                                                         >> 0x17U))))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (IData)(
                                                                 (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__cosine 
                                                                  >> 0x17U))) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_ha5d2ae1b__0 = ((0U == (0xffU 
                                              & (IData)(
                                                        (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__cosine 
                                                         >> 0x27U))))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (IData)(
                                                                 (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__cosine 
                                                                  >> 0x27U))) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h37190e22__0 = ((0U == (0xffU 
                                              & (IData)(
                                                        (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__cosine 
                                                         >> 0x37U))))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (IData)(
                                                                 (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__cosine 
                                                                  >> 0x37U))) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_he873874e__0 = ((0U == (0xffU 
                                              & (IData)(
                                                        (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sine 
                                                         >> 7U))))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (IData)(
                                                                 (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sine 
                                                                  >> 7U))) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h2d8f1224__0 = ((0U == (0xffU 
                                              & (IData)(
                                                        (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sine 
                                                         >> 0x17U))))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (IData)(
                                                                 (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sine 
                                                                  >> 0x17U))) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h21862aca__0 = ((0U == (0xffU 
                                              & (IData)(
                                                        (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sine 
                                                         >> 0x27U))))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (IData)(
                                                                 (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sine 
                                                                  >> 0x27U))) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h89c3e924__0 = ((0U == (0xffU 
                                              & (IData)(
                                                        (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sine 
                                                         >> 0x37U))))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (IData)(
                                                                 (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sine 
                                                                  >> 0x37U))) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h838ae77c__0 = ((0U == (0xffU 
                                              & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalized_head[0U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalized_head[0U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hc13a2d20__0 = ((0U == (0xffU 
                                              & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalized_head[2U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalized_head[2U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hcb61036c__0 = ((0U == (0xffU 
                                              & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalized_head[0U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalized_head[0U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h9890e9bb__0 = ((0U == (0xffU 
                                              & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalized_head[2U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalized_head[2U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h6875f01a__0 = ((0U == (0xffU 
                                              & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalized_head[1U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalized_head[1U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h35ff351b__0 = ((0U == (0xffU 
                                              & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalized_head[3U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalized_head[3U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hec05a137__0 = ((0U == (0xffU 
                                              & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalized_head[1U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalized_head[1U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hfba225cf__0 = ((0U == (0xffU 
                                              & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalized_head[3U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalized_head[3U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->top_tb__DOT__done = ((IData)(vlSelf->top_tb__DOT__rst_n) 
                                 & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__done_reg));
    vlSelf->top_tb__DOT__error = ((IData)(vlSelf->top_tb__DOT__rst_n) 
                                  & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__error_reg));
    vlSelf->top_tb__DOT__cancel_done = ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__cancel_done_reg) 
                                        & (IData)(vlSelf->top_tb__DOT__rst_n));
    vlSelf->top_tb__DOT__mem_rsp_ready = (1U & ((0xffU 
                                                 & (- (IData)((IData)(vlSelf->top_tb__DOT__rst_n)))) 
                                                >> 
                                                (7U 
                                                 & vlSelf->top_tb__DOT__response_bank)));
    __Vtemp_1[0U] = vlSelf->top_tb__DOT__mem_rsp_rdata;
    __Vtemp_1[1U] = 0U;
    __Vtemp_1[2U] = 0U;
    __Vtemp_1[3U] = 0U;
    __Vtemp_1[4U] = 0U;
    __Vtemp_1[5U] = 0U;
    __Vtemp_1[6U] = 0U;
    __Vtemp_1[7U] = 0U;
    VL_SHIFTL_WWI(256,256,32, vlSelf->top_tb__DOT__bank_mem_rsp_rdata, __Vtemp_1, 
                  VL_MULS_III(32, (IData)(0x20U), vlSelf->top_tb__DOT__response_bank));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__mlp__gemv_done 
        = ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projection_done) 
           & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projection_owner_mlp));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__final_head 
        = (VL_SHIFTR_III(32,32,32, vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__expected_index, 3U) 
           == ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projected_heads__DOT__legal__DOT__heads) 
               - (IData)(1U)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated_position 
        = (0x1ffffffffULL & (1ULL + ((QData)((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__position)) 
                                     + (QData)((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated_count)))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete = 0U;
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__complete_slot = 0U;
    if ((3U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
         [0U])) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete = 1U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__complete_slot = 0U;
    }
    if (((~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete)) 
         & (3U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
            [1U]))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete = 1U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__complete_slot = 1U;
    }
    if (((~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete)) 
         & (3U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
            [2U]))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete = 1U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__complete_slot = 2U;
    }
    if (((~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete)) 
         & (3U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
            [3U]))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete = 1U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__complete_slot = 3U;
    }
    if (((~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete)) 
         & (3U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
            [4U]))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete = 1U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__complete_slot = 4U;
    }
    if (((~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete)) 
         & (3U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
            [5U]))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete = 1U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__complete_slot = 5U;
    }
    if (((~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete)) 
         & (3U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
            [6U]))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete = 1U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__complete_slot = 6U;
    }
    if (((~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete)) 
         & (3U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
            [7U]))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete = 1U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__complete_slot = 7U;
    }
    if (((~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete)) 
         & (3U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
            [8U]))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete = 1U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__complete_slot = 8U;
    }
    if (((~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete)) 
         & (3U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
            [9U]))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete = 1U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__complete_slot = 9U;
    }
    if (((~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete)) 
         & (3U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
            [0xaU]))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete = 1U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__complete_slot = 0xaU;
    }
    if (((~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete)) 
         & (3U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
            [0xbU]))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete = 1U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__complete_slot = 0xbU;
    }
    if (((~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete)) 
         & (3U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
            [0xcU]))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete = 1U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__complete_slot = 0xcU;
    }
    if (((~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete)) 
         & (3U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
            [0xdU]))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete = 1U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__complete_slot = 0xdU;
    }
    if (((~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete)) 
         & (3U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
            [0xeU]))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete = 1U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__complete_slot = 0xeU;
    }
    if (((~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete)) 
         & (3U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
            [0xfU]))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete = 1U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__complete_slot = 0xfU;
    }
    if (((~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete)) 
         & (3U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
            [0x10U]))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete = 1U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__complete_slot = 0x10U;
    }
    if (((~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete)) 
         & (3U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
            [0x11U]))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete = 1U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__complete_slot = 0x11U;
    }
    if (((~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete)) 
         & (3U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
            [0x12U]))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete = 1U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__complete_slot = 0x12U;
    }
    if (((~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete)) 
         & (3U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
            [0x13U]))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete = 1U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__complete_slot = 0x13U;
    }
    if (((~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete)) 
         & (3U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
            [0x14U]))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete = 1U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__complete_slot = 0x14U;
    }
    if (((~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete)) 
         & (3U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
            [0x15U]))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete = 1U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__complete_slot = 0x15U;
    }
    if (((~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete)) 
         & (3U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
            [0x16U]))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete = 1U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__complete_slot = 0x16U;
    }
    if (((~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete)) 
         & (3U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
            [0x17U]))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_complete = 1U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__complete_slot = 0x17U;
    }
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request = 0U;
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[0U] = 0U;
    if ((1U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
         [0U])) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[0U] = 0U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request 
            = (1U | (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request));
    }
    if (((~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request)) 
         & (1U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
            [1U]))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[0U] = 1U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request 
            = (1U | (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request));
    }
    if (((~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request)) 
         & (1U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
            [2U]))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[0U] = 2U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request 
            = (1U | (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request));
    }
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[1U] = 0U;
    if (((~ ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request) 
             >> 1U)) & (1U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                        [3U]))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[1U] = 3U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request 
            = (2U | (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request));
    }
    if (((~ ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request) 
             >> 1U)) & (1U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                        [4U]))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[1U] = 4U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request 
            = (2U | (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request));
    }
    if (((~ ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request) 
             >> 1U)) & (1U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                        [5U]))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[1U] = 5U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request 
            = (2U | (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request));
    }
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[2U] = 0U;
    if (((~ ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request) 
             >> 2U)) & (1U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                        [6U]))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[2U] = 6U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request 
            = (4U | (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request));
    }
    if (((~ ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request) 
             >> 2U)) & (1U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                        [7U]))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[2U] = 7U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request 
            = (4U | (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request));
    }
    if (((~ ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request) 
             >> 2U)) & (1U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                        [8U]))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[2U] = 8U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request 
            = (4U | (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request));
    }
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[3U] = 0U;
    if (((~ ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request) 
             >> 3U)) & (1U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                        [9U]))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[3U] = 9U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request 
            = (8U | (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request));
    }
    if (((~ ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request) 
             >> 3U)) & (1U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                        [0xaU]))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[3U] = 0xaU;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request 
            = (8U | (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request));
    }
    if (((~ ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request) 
             >> 3U)) & (1U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                        [0xbU]))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[3U] = 0xbU;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request 
            = (8U | (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request));
    }
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[4U] = 0U;
    if (((~ ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request) 
             >> 4U)) & (1U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                        [0xcU]))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[4U] = 0xcU;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request 
            = (0x10U | (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request));
    }
    if (((~ ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request) 
             >> 4U)) & (1U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                        [0xdU]))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[4U] = 0xdU;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request 
            = (0x10U | (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request));
    }
    if (((~ ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request) 
             >> 4U)) & (1U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                        [0xeU]))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[4U] = 0xeU;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request 
            = (0x10U | (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request));
    }
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[5U] = 0U;
    if (((~ ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request) 
             >> 5U)) & (1U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                        [0xfU]))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[5U] = 0xfU;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request 
            = (0x20U | (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request));
    }
    if (((~ ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request) 
             >> 5U)) & (1U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                        [0x10U]))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[5U] = 0x10U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request 
            = (0x20U | (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request));
    }
    if (((~ ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request) 
             >> 5U)) & (1U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                        [0x11U]))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[5U] = 0x11U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request 
            = (0x20U | (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request));
    }
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[6U] = 0U;
    if (((~ ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request) 
             >> 6U)) & (1U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                        [0x12U]))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[6U] = 0x12U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request 
            = (0x40U | (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request));
    }
    if (((~ ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request) 
             >> 6U)) & (1U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                        [0x13U]))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[6U] = 0x13U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request 
            = (0x40U | (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request));
    }
    if (((~ ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request) 
             >> 6U)) & (1U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                        [0x14U]))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[6U] = 0x14U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request 
            = (0x40U | (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request));
    }
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[7U] = 0U;
    if (((~ ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request) 
             >> 7U)) & (1U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                        [0x15U]))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[7U] = 0x15U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request 
            = (0x80U | (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request));
    }
    if (((~ ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request) 
             >> 7U)) & (1U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                        [0x16U]))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[7U] = 0x16U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request 
            = (0x80U | (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request));
    }
    if (((~ ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request) 
             >> 7U)) & (1U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
                        [0x17U]))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_slot[7U] = 0x17U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request 
            = (0x80U | (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__waiting_request));
    }
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__2__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__2__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__2__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__2__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__2__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__2__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__3__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__3__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__3__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__3__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__3__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__3__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__64__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__64__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__64__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__64__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__64__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__64__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__65__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__65__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__65__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__65__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__65__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__65__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__66__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__66__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__66__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__66__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__66__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__66__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__67__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__67__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__67__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__67__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__67__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__67__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__68__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__68__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__68__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__68__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__68__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__68__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__69__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__69__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__69__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__69__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__69__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__69__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__70__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__70__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__70__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__70__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__70__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__70__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__71__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__71__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__71__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__71__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__71__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__71__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__72__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__72__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__72__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__72__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__72__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__72__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__73__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__73__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__73__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__73__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__73__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__73__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__74__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__74__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__74__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__74__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__74__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__74__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__75__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__75__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__75__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__75__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__75__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__75__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__76__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__76__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__76__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__76__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__76__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__76__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__77__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__77__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__77__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__77__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__77__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__77__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__78__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__78__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__78__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__78__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__78__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__78__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__79__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__79__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__79__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__79__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__79__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__79__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__80__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__80__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__80__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__80__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__80__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__80__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__81__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__81__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__81__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__81__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__81__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__81__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__82__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__82__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__82__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__82__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__82__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__82__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__83__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__83__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__83__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__83__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__83__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__83__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__84__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__84__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__84__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__84__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__84__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__84__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__85__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__85__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__85__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__85__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__85__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__85__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__86__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__86__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__86__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__86__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__86__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__86__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__87__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__87__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__87__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__87__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__87__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__87__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__88__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__88__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__88__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__88__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__88__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__88__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__89__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__89__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__89__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__89__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__89__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__89__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__90__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__90__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__90__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__90__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__90__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__90__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__91__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__91__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__91__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__91__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__91__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__91__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__92__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__92__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__92__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__92__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__92__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__92__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__93__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__93__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__93__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__93__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__93__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__93__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__94__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__94__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__94__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__94__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__94__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__94__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__95__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__95__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__95__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__95__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__95__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__95__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__96__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__96__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__96__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__96__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__96__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__96__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__97__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__97__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__97__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__97__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__97__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__97__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__98__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__98__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__98__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__98__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__98__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__98__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__99__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__99__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__99__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__99__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__99__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__99__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__100__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__100__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__100__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__100__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__100__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__100__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__101__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__101__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__101__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__101__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__101__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__101__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__102__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__102__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__102__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__102__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__102__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__102__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__103__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__103__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__103__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__103__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__103__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__103__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__104__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__104__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__104__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__104__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__104__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__104__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__105__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__105__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__105__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__105__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__105__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__105__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__106__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__106__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__106__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__106__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__106__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__106__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__107__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__107__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__107__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__107__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__107__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__107__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__108__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__108__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__108__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__108__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__108__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__108__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__109__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__109__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__109__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__109__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__109__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__109__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__110__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__110__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__110__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__110__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__110__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__110__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__111__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__111__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__111__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__111__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__111__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__111__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__112__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__112__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__112__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__112__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__112__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__112__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__113__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__113__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__113__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__113__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__113__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__113__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__114__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__114__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__114__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__114__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__114__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__114__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__115__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__115__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__115__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__115__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__115__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__115__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__116__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__116__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__116__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__116__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__116__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__116__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__117__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__117__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__117__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__117__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__117__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__117__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__118__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__118__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__118__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__118__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__118__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__118__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__119__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__119__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__119__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__119__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__119__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__119__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__120__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__120__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__120__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__120__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__120__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__120__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__121__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__121__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__121__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__121__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__121__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__121__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__122__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__122__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__122__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__122__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__122__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__122__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__123__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__123__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__123__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__123__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__123__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__123__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__124__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__124__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__124__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__124__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__124__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__124__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__125__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__125__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__125__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__125__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__125__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__125__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__126__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__126__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__126__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__126__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__126__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__126__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__127__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__127__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__127__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__127__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__127__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__127__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__7__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__7__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__7__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__7__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__7__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__7__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_add__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_add__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_add__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_add__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_add__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query_bad = 0U;
    if (((((((((4U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state)) 
               | (6U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) 
              | (7U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) 
             | (8U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) 
            | (9U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) 
           | (0xaU == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) 
          | (0xcU == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) 
         | (0xeU == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state)))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__op 
            = ((4U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))
                ? 2U : ((6U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))
                         ? 0U : ((7U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))
                                  ? 3U : ((8U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))
                                           ? 0U : (
                                                   (9U 
                                                    == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))
                                                    ? 4U
                                                    : 
                                                   ((0xaU 
                                                     == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))
                                                     ? 3U
                                                     : 2U))))));
    }
    if ((5U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__alu_op = 2U;
    } else if ((6U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__alu_op = 1U;
    } else if ((9U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__alu_op = 0U;
    } else if ((0xcU == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__alu_op = 2U;
    } else if ((0xdU == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__alu_op = 0U;
    } else if ((0x10U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__alu_op = 3U;
    }
    if (([&]() {
                vlSelf->__Vfunc_bf16_invalid__34__value 
                    = (0xffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__query[0U]);
                vlSelf->__Vfunc_bf16_invalid__34__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__34__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__34__Vfuncout))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query_bad = 1U;
    }
    if (([&]() {
                vlSelf->__Vfunc_bf16_invalid__34__value 
                    = (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__query[0U] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_invalid__34__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__34__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__34__Vfuncout))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query_bad = 1U;
    }
    if (([&]() {
                vlSelf->__Vfunc_bf16_invalid__34__value 
                    = (0xffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__query[1U]);
                vlSelf->__Vfunc_bf16_invalid__34__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__34__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__34__Vfuncout))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query_bad = 1U;
    }
    if (([&]() {
                vlSelf->__Vfunc_bf16_invalid__34__value 
                    = (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__query[1U] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_invalid__34__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__34__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__34__Vfuncout))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query_bad = 1U;
    }
    if (([&]() {
                vlSelf->__Vfunc_bf16_invalid__34__value 
                    = (0xffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__query[2U]);
                vlSelf->__Vfunc_bf16_invalid__34__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__34__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__34__Vfuncout))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query_bad = 1U;
    }
    if (([&]() {
                vlSelf->__Vfunc_bf16_invalid__34__value 
                    = (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__query[2U] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_invalid__34__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__34__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__34__Vfuncout))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query_bad = 1U;
    }
    if (([&]() {
                vlSelf->__Vfunc_bf16_invalid__34__value 
                    = (0xffffU & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__query[3U]);
                vlSelf->__Vfunc_bf16_invalid__34__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__34__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__34__Vfuncout))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query_bad = 1U;
    }
    if (([&]() {
                vlSelf->__Vfunc_bf16_invalid__34__value 
                    = (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__query[3U] 
                       >> 0x10U);
                vlSelf->__Vfunc_bf16_invalid__34__Vfuncout 
                    = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__34__value) 
                                          >> 7U)));
            }(), (IData)(vlSelf->__Vfunc_bf16_invalid__34__Vfuncout))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query_bad = 1U;
    }
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__alu_b = 0U;
    __Vfunc_awq_lane_shift__405__lane = (7U & vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__405__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__405__lane))
                                              ? 0U : 
                                             ((1U == (IData)(__Vfunc_awq_lane_shift__405__lane))
                                               ? 0x10U
                                               : ((2U 
                                                   == (IData)(__Vfunc_awq_lane_shift__405__lane))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(__Vfunc_awq_lane_shift__405__lane))
                                                    ? 0x14U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_awq_lane_shift__405__lane))
                                                     ? 8U
                                                     : 
                                                    ((5U 
                                                      == (IData)(__Vfunc_awq_lane_shift__405__lane))
                                                      ? 0x18U
                                                      : 
                                                     ((6U 
                                                       == (IData)(__Vfunc_awq_lane_shift__405__lane))
                                                       ? 0xcU
                                                       : 0x1cU)))))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__nibble_shift 
        = __Vfunc_awq_lane_shift__405__Vfuncout;
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__b = 0U;
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__matching_child = 0U;
    if (((((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__tree_active) 
           & (0U < (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__node_count))) 
          & ((7U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__parents)) 
             == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__current_parent))) 
         & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__nodes[0U] 
            == vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__target))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__matching_child = 0U;
    }
    if (((((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__tree_active) 
           & (1U < (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__node_count))) 
          & ((7U & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__parents) 
                    >> 3U)) == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__current_parent))) 
         & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__nodes[1U] 
            == vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__target))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__matching_child = 1U;
    }
    if (((((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__tree_active) 
           & (2U < (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__node_count))) 
          & ((7U & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__parents) 
                    >> 6U)) == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__current_parent))) 
         & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__nodes[2U] 
            == vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__target))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__matching_child = 2U;
    }
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__child_found = 0U;
    if (((((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__tree_active) 
           & (0U < (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__node_count))) 
          & ((7U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__parents)) 
             == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__current_parent))) 
         & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__nodes[0U] 
            == vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__target))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__child_found = 1U;
    }
    if (((((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__tree_active) 
           & (1U < (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__node_count))) 
          & ((7U & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__parents) 
                    >> 3U)) == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__current_parent))) 
         & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__nodes[1U] 
            == vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__target))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__child_found = 1U;
    }
    if (((((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__tree_active) 
           & (2U < (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__node_count))) 
          & ((7U & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__parents) 
                    >> 6U)) == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__current_parent))) 
         & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__nodes[2U] 
            == vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__target))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__child_found = 1U;
    }
    if (((((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__tree_active) 
           & (3U < (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__node_count))) 
          & ((7U & ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__parents) 
                    >> 9U)) == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__current_parent))) 
         & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__nodes[3U] 
            == vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__target))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__matching_child = 3U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__child_found = 1U;
    }
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__write_reference_cycles_low = 0U;
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__write_reference_cycles_high = 0U;
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__write_reference_tokens_low = 0U;
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__write_reference_tokens_high = 0U;
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__a = 0U;
    if (((((((((4U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state)) 
               | (6U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) 
              | (7U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) 
             | (8U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) 
            | (9U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) 
           | (0xaU == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) 
          | (0xcU == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) 
         | (0xeU == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state)))) {
        if ((4U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) {
            vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__b 
                = ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__raw_q) 
                   << 0x10U);
            vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__a 
                = ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__raw_q) 
                   << 0x10U);
        } else if ((6U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) {
            vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__b 
                = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__right_q;
            vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__a 
                = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__left_q;
        } else if ((7U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) {
            vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__b = 0x41000000U;
            vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__a 
                = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__sum;
        } else if ((8U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) {
            vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__b = 0x358637bdU;
            vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__a 
                = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__mean;
        } else {
            if ((9U != (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) {
                vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__b 
                    = ((0xaU == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))
                        ? vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__root
                        : ((0xcU == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))
                            ? vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__reciprocal
                            : ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__gamma_q) 
                               << 0x10U)));
            }
            vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__a 
                = ((9U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))
                    ? vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__variance
                    : ((0xaU == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))
                        ? 0x3f800000U : ((0xcU == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))
                                          ? ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__raw_q) 
                                             << 0x10U)
                                          : ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__u) 
                                             << 0x10U))));
        }
    }
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__alu_a = 0U;
    if ((5U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__alu_b = 0x3eb504f3U;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__alu_a 
            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__product;
    } else if ((6U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__alu_b 
            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__maximum;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__alu_a 
            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__score;
    } else if ((9U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__alu_b 
            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__alu_a 
            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__denominator;
    } else if ((0xcU == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__alu_b 
            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__alu_a 
            = ((((0U == (0x1fU & VL_SHIFTL_III(7,32,32, vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__cursor, 4U)))
                  ? 0U : (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__value[
                          (((IData)(0xfU) + (0x7fU 
                                             & VL_SHIFTL_III(7,32,32, vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__cursor, 4U))) 
                           >> 5U)] << ((IData)(0x20U) 
                                       - (0x1fU & VL_SHIFTL_III(7,32,32, vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__cursor, 4U))))) 
                | (vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__value[
                   (3U & (VL_SHIFTL_III(7,32,32, vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__cursor, 4U) 
                          >> 5U))] >> (0x1fU & VL_SHIFTL_III(7,32,32, vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__cursor, 4U)))) 
               << 0x10U);
    } else if ((0xdU == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__alu_b 
            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__product;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__alu_a 
            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__numerator_q;
    } else if ((0x10U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state))) {
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__alu_b 
            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__denominator;
        vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__alu_a 
            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__numerator_q;
    }
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__write_reference_valid = 0U;
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__write_reference_profile = 0U;
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__inverse_root__DOT__take_bit 
        = ((vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__inverse_root__DOT__remainder 
            << 1U) >= vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__inverse_root__DOT__divisor);
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__write_mode = 0U;
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__take_snapshot = 0U;
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 0U;
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__clear_counters = 0U;
    if (((IData)(vlSelf->top_tb__DOT__rst_n) & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__pending))) {
        if ((1U & (~ ((0U != (3U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) 
                      | ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_write) 
                         & (0xfU != (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_strobes))))))) {
            if (vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_write) {
                if ((8U != (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                    if ((0x84U != (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                        if ((0x88U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                            if ((1U & (~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_busy)))) {
                                vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__write_reference_cycles_low = 1U;
                            }
                        }
                        if ((0x88U != (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                            if ((0x8cU == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                                if ((1U & (~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_busy)))) {
                                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__write_reference_cycles_high = 1U;
                                }
                            }
                            if ((0x8cU != (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                                if ((0x90U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                                    if ((1U & (~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_busy)))) {
                                        vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__write_reference_tokens_low = 1U;
                                    }
                                }
                                if ((0x90U != (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                                    if ((0x94U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                                        if ((1U & (~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_busy)))) {
                                            vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__write_reference_tokens_high = 1U;
                                        }
                                    }
                                    if ((0x94U != (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                                        if ((0x98U 
                                             == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                                            if ((1U 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_busy) 
                                                      | (1U 
                                                         > vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_data)) 
                                                     | (3U 
                                                        < vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_data))))) {
                                                vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__write_reference_profile = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((0x84U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                        if ((1U & (~ ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_busy) 
                                      | (0U != (vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_data 
                                                >> 1U)))))) {
                            vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__write_reference_valid = 1U;
                        }
                    }
                }
                if ((8U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                    if ((1U & (~ ((0U != (vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_data 
                                          >> 3U)) | 
                                  ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_busy) 
                                   & (((1U & vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_data) 
                                       != (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_mode)) 
                                      | (0U == (3U 
                                                & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_data 
                                                   >> 1U))))))))) {
                        vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__write_mode 
                            = (1U & (~ (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_busy)));
                        vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__take_snapshot 
                            = (1U & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_data 
                                     >> 1U));
                        vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__clear_counters 
                            = (1U & (vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_data 
                                     >> 2U));
                    }
                }
            }
        }
        if (((0U != (3U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) 
             | ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_write) 
                & (0xfU != (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_strobes))))) {
            vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
        } else if (vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_write) {
            if ((8U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                if (((0U != (vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_data 
                             >> 3U)) | ((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_busy) 
                                        & (((1U & vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_data) 
                                            != (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_mode)) 
                                           | (0U == 
                                              (3U & 
                                               (vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_data 
                                                >> 1U))))))) {
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                }
            } else if ((0x84U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                if (((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_busy) 
                     | (0U != (vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_data 
                               >> 1U)))) {
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                }
            } else if ((0x88U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                if (vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_busy) {
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                }
            } else if ((0x8cU == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                if (vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_busy) {
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                }
            } else if ((0x90U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                if (vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_busy) {
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                }
            } else if ((0x94U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                if (vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_busy) {
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                }
            } else if ((0x98U == (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                if ((((IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_busy) 
                      | (1U > vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_data)) 
                     | (3U < vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_data))) {
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                }
            } else {
                vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
            }
        } else if ((0x800U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
            vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
        } else if ((0x400U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
            vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
        } else if ((0x200U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
            vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
        } else if ((0x100U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
            vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
        } else if ((0x80U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
            if ((0x40U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
            } else if ((0x20U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
            } else if ((0x10U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                if ((8U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                    if ((4U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                        vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                    } else if ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                        vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                    } else if ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                        vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                    }
                } else if ((4U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                    if ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                        vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                    } else if ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                        vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                    }
                } else if ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                } else if ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                }
            } else if ((8U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                if ((4U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                    if ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                        vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                    } else if ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                        vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                    }
                } else if ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                } else if ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                }
            } else if ((4U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                if ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                } else if ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                }
            } else if ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
            } else if ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
            }
        } else if ((0x40U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
            if ((0x20U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                if ((0x10U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                    if ((8U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                        if ((4U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                            if ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                                vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                            } else if ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                                vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                            }
                        } else if ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                            vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                        } else if ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                            vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                        }
                    } else if ((4U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                        if ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                            vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                        } else if ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                            vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                        }
                    } else if ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                        vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                    } else if ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                        vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                    }
                } else if ((8U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                    if ((4U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                        if ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                            vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                        } else if ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                            vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                        }
                    } else if ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                        vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                    } else if ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                        vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                    }
                } else if ((4U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                    if ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                        vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                    } else if ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                        vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                    }
                } else if ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                } else if ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                }
            } else if ((0x10U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                if ((8U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                    if ((4U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                        if ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                            vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                        } else if ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                            vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                        }
                    } else if ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                        vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                    } else if ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                        vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                    }
                } else if ((4U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                    if ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                        vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                    } else if ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                        vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                    }
                } else if ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                } else if ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                }
            } else if ((8U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                if ((4U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                    if ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                        vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                    } else if ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                        vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                    }
                } else if ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                } else if ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                }
            } else if ((4U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                if ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                } else if ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                }
            } else if ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
            } else if ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
            }
        } else if ((0x20U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
            if ((0x10U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                if ((8U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                    if ((4U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                        if ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                            vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                        } else if ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                            vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                        }
                    } else if ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                        vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                    } else if ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                        vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                    }
                } else if ((4U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                    if ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                        vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                    } else if ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                        vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                    }
                } else if ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                } else if ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                }
            } else if ((8U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                if ((4U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                    if ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                        vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                    } else if ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                        vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                    }
                } else if ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                } else if ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                }
            } else if ((4U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                if ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                } else if ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                }
            } else if ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
            } else if ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
            }
        } else if ((0x10U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
            if ((8U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                if ((4U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                    if ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                        vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                    } else if ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                        vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                    }
                } else if ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                } else if ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                }
            } else if ((4U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                if ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                } else if ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                }
            } else if ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
            } else if ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
            }
        } else if ((8U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
            if ((4U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                if ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                } else if ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                    vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
                }
            } else if ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
            } else if ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
            }
        } else if ((4U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
            if ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
            } else if ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
                vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
            }
        } else if ((2U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
            vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
        } else if ((1U & (IData)(vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__request_addr))) {
            vlSelf->top_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__access_error = 1U;
        }
    }
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__86__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__86__part 
                            = vlSelf->__Vfunc_leading_zero32__86__value;
                        vlSelf->__Vfunc_leading_zero32__86__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__86__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__86__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__86__count)));
                            vlSelf->__Vfunc_leading_zero32__86__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__86__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__86__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__86__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__86__count)));
                            vlSelf->__Vfunc_leading_zero32__86__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__86__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__86__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__86__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__86__count)));
                            vlSelf->__Vfunc_leading_zero32__86__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__86__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__86__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__86__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__86__count)));
                            vlSelf->__Vfunc_leading_zero32__86__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__86__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__86__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__86__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__86__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__86__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__86__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__86__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__86__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__92__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__92__part 
                            = vlSelf->__Vfunc_leading_zero32__92__value;
                        vlSelf->__Vfunc_leading_zero32__92__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__92__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__92__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__92__count)));
                            vlSelf->__Vfunc_leading_zero32__92__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__92__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__92__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__92__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__92__count)));
                            vlSelf->__Vfunc_leading_zero32__92__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__92__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__92__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__92__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__92__count)));
                            vlSelf->__Vfunc_leading_zero32__92__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__92__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__92__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__92__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__92__count)));
                            vlSelf->__Vfunc_leading_zero32__92__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__92__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__92__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__92__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__92__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__92__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__92__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__92__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__92__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__2__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__2__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__98__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__2__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__98__part 
                            = vlSelf->__Vfunc_leading_zero32__98__value;
                        vlSelf->__Vfunc_leading_zero32__98__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__98__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__98__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__98__count)));
                            vlSelf->__Vfunc_leading_zero32__98__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__98__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__98__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__98__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__98__count)));
                            vlSelf->__Vfunc_leading_zero32__98__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__98__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__98__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__98__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__98__count)));
                            vlSelf->__Vfunc_leading_zero32__98__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__98__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__98__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__98__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__98__count)));
                            vlSelf->__Vfunc_leading_zero32__98__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__98__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__98__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__98__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__98__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__98__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__98__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__98__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__98__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__3__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__3__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__104__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__3__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__104__part 
                            = vlSelf->__Vfunc_leading_zero32__104__value;
                        vlSelf->__Vfunc_leading_zero32__104__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__104__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__104__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__104__count)));
                            vlSelf->__Vfunc_leading_zero32__104__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__104__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__104__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__104__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__104__count)));
                            vlSelf->__Vfunc_leading_zero32__104__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__104__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__104__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__104__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__104__count)));
                            vlSelf->__Vfunc_leading_zero32__104__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__104__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__104__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__104__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__104__count)));
                            vlSelf->__Vfunc_leading_zero32__104__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__104__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__104__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__104__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__104__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__104__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__104__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__104__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__104__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__110__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__110__part 
                            = vlSelf->__Vfunc_leading_zero32__110__value;
                        vlSelf->__Vfunc_leading_zero32__110__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__110__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__110__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__110__count)));
                            vlSelf->__Vfunc_leading_zero32__110__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__110__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__110__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__110__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__110__count)));
                            vlSelf->__Vfunc_leading_zero32__110__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__110__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__110__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__110__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__110__count)));
                            vlSelf->__Vfunc_leading_zero32__110__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__110__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__110__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__110__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__110__count)));
                            vlSelf->__Vfunc_leading_zero32__110__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__110__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__110__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__110__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__110__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__110__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__110__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__110__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__110__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__116__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__116__part 
                            = vlSelf->__Vfunc_leading_zero32__116__value;
                        vlSelf->__Vfunc_leading_zero32__116__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__116__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__116__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__116__count)));
                            vlSelf->__Vfunc_leading_zero32__116__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__116__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__116__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__116__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__116__count)));
                            vlSelf->__Vfunc_leading_zero32__116__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__116__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__116__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__116__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__116__count)));
                            vlSelf->__Vfunc_leading_zero32__116__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__116__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__116__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__116__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__116__count)));
                            vlSelf->__Vfunc_leading_zero32__116__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__116__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__116__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__116__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__116__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__116__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__116__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__116__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__116__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__122__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__122__part 
                            = vlSelf->__Vfunc_leading_zero32__122__value;
                        vlSelf->__Vfunc_leading_zero32__122__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__122__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__122__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__122__count)));
                            vlSelf->__Vfunc_leading_zero32__122__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__122__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__122__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__122__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__122__count)));
                            vlSelf->__Vfunc_leading_zero32__122__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__122__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__122__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__122__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__122__count)));
                            vlSelf->__Vfunc_leading_zero32__122__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__122__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__122__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__122__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__122__count)));
                            vlSelf->__Vfunc_leading_zero32__122__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__122__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__122__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__122__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__122__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__122__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__122__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__122__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__122__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4758__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4758__part 
                            = vlSelf->__Vfunc_leading_zero32__4758__value;
                        vlSelf->__Vfunc_leading_zero32__4758__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4758__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4758__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4758__count)));
                            vlSelf->__Vfunc_leading_zero32__4758__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4758__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4758__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4758__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4758__count)));
                            vlSelf->__Vfunc_leading_zero32__4758__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4758__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4758__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4758__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4758__count)));
                            vlSelf->__Vfunc_leading_zero32__4758__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4758__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4758__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4758__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4758__count)));
                            vlSelf->__Vfunc_leading_zero32__4758__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4758__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4758__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4758__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4758__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4758__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4758__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4758__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4758__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4764__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4764__part 
                            = vlSelf->__Vfunc_leading_zero32__4764__value;
                        vlSelf->__Vfunc_leading_zero32__4764__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4764__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4764__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4764__count)));
                            vlSelf->__Vfunc_leading_zero32__4764__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4764__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4764__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4764__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4764__count)));
                            vlSelf->__Vfunc_leading_zero32__4764__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4764__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4764__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4764__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4764__count)));
                            vlSelf->__Vfunc_leading_zero32__4764__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4764__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4764__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4764__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4764__count)));
                            vlSelf->__Vfunc_leading_zero32__4764__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4764__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4764__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4764__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4764__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4764__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4764__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4764__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4764__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4770__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4770__part 
                            = vlSelf->__Vfunc_leading_zero32__4770__value;
                        vlSelf->__Vfunc_leading_zero32__4770__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4770__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4770__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4770__count)));
                            vlSelf->__Vfunc_leading_zero32__4770__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4770__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4770__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4770__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4770__count)));
                            vlSelf->__Vfunc_leading_zero32__4770__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4770__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4770__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4770__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4770__count)));
                            vlSelf->__Vfunc_leading_zero32__4770__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4770__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4770__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4770__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4770__count)));
                            vlSelf->__Vfunc_leading_zero32__4770__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4770__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4770__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4770__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4770__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4770__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4770__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4770__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4770__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4776__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4776__part 
                            = vlSelf->__Vfunc_leading_zero32__4776__value;
                        vlSelf->__Vfunc_leading_zero32__4776__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4776__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4776__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4776__count)));
                            vlSelf->__Vfunc_leading_zero32__4776__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4776__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4776__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4776__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4776__count)));
                            vlSelf->__Vfunc_leading_zero32__4776__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4776__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4776__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4776__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4776__count)));
                            vlSelf->__Vfunc_leading_zero32__4776__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4776__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4776__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4776__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4776__count)));
                            vlSelf->__Vfunc_leading_zero32__4776__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4776__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4776__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4776__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4776__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4776__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4776__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4776__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4776__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4782__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4782__part 
                            = vlSelf->__Vfunc_leading_zero32__4782__value;
                        vlSelf->__Vfunc_leading_zero32__4782__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4782__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4782__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4782__count)));
                            vlSelf->__Vfunc_leading_zero32__4782__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4782__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4782__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4782__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4782__count)));
                            vlSelf->__Vfunc_leading_zero32__4782__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4782__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4782__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4782__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4782__count)));
                            vlSelf->__Vfunc_leading_zero32__4782__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4782__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4782__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4782__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4782__count)));
                            vlSelf->__Vfunc_leading_zero32__4782__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4782__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4782__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4782__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4782__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4782__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4782__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4782__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4782__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4788__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4788__part 
                            = vlSelf->__Vfunc_leading_zero32__4788__value;
                        vlSelf->__Vfunc_leading_zero32__4788__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4788__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4788__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4788__count)));
                            vlSelf->__Vfunc_leading_zero32__4788__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4788__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4788__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4788__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4788__count)));
                            vlSelf->__Vfunc_leading_zero32__4788__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4788__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4788__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4788__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4788__count)));
                            vlSelf->__Vfunc_leading_zero32__4788__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4788__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4788__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4788__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4788__count)));
                            vlSelf->__Vfunc_leading_zero32__4788__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4788__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4788__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4788__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4788__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4788__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4788__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4788__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4788__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4794__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4794__part 
                            = vlSelf->__Vfunc_leading_zero32__4794__value;
                        vlSelf->__Vfunc_leading_zero32__4794__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4794__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4794__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4794__count)));
                            vlSelf->__Vfunc_leading_zero32__4794__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4794__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4794__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4794__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4794__count)));
                            vlSelf->__Vfunc_leading_zero32__4794__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4794__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4794__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4794__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4794__count)));
                            vlSelf->__Vfunc_leading_zero32__4794__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4794__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4794__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4794__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4794__count)));
                            vlSelf->__Vfunc_leading_zero32__4794__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4794__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4794__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4794__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4794__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4794__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4794__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4794__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4794__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4800__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4800__part 
                            = vlSelf->__Vfunc_leading_zero32__4800__value;
                        vlSelf->__Vfunc_leading_zero32__4800__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4800__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4800__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4800__count)));
                            vlSelf->__Vfunc_leading_zero32__4800__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4800__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4800__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4800__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4800__count)));
                            vlSelf->__Vfunc_leading_zero32__4800__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4800__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4800__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4800__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4800__count)));
                            vlSelf->__Vfunc_leading_zero32__4800__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4800__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4800__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4800__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4800__count)));
                            vlSelf->__Vfunc_leading_zero32__4800__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4800__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4800__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4800__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4800__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4800__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4800__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4800__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4800__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4806__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4806__part 
                            = vlSelf->__Vfunc_leading_zero32__4806__value;
                        vlSelf->__Vfunc_leading_zero32__4806__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4806__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4806__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4806__count)));
                            vlSelf->__Vfunc_leading_zero32__4806__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4806__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4806__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4806__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4806__count)));
                            vlSelf->__Vfunc_leading_zero32__4806__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4806__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4806__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4806__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4806__count)));
                            vlSelf->__Vfunc_leading_zero32__4806__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4806__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4806__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4806__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4806__count)));
                            vlSelf->__Vfunc_leading_zero32__4806__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4806__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4806__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4806__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4806__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4806__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4806__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4806__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4806__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4812__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4812__part 
                            = vlSelf->__Vfunc_leading_zero32__4812__value;
                        vlSelf->__Vfunc_leading_zero32__4812__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4812__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4812__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4812__count)));
                            vlSelf->__Vfunc_leading_zero32__4812__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4812__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4812__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4812__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4812__count)));
                            vlSelf->__Vfunc_leading_zero32__4812__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4812__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4812__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4812__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4812__count)));
                            vlSelf->__Vfunc_leading_zero32__4812__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4812__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4812__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4812__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4812__count)));
                            vlSelf->__Vfunc_leading_zero32__4812__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4812__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4812__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4812__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4812__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4812__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4812__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4812__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4812__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4818__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4818__part 
                            = vlSelf->__Vfunc_leading_zero32__4818__value;
                        vlSelf->__Vfunc_leading_zero32__4818__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4818__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4818__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4818__count)));
                            vlSelf->__Vfunc_leading_zero32__4818__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4818__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4818__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4818__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4818__count)));
                            vlSelf->__Vfunc_leading_zero32__4818__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4818__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4818__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4818__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4818__count)));
                            vlSelf->__Vfunc_leading_zero32__4818__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4818__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4818__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4818__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4818__count)));
                            vlSelf->__Vfunc_leading_zero32__4818__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4818__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4818__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4818__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4818__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4818__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4818__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4818__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4818__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4824__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4824__part 
                            = vlSelf->__Vfunc_leading_zero32__4824__value;
                        vlSelf->__Vfunc_leading_zero32__4824__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4824__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4824__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4824__count)));
                            vlSelf->__Vfunc_leading_zero32__4824__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4824__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4824__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4824__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4824__count)));
                            vlSelf->__Vfunc_leading_zero32__4824__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4824__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4824__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4824__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4824__count)));
                            vlSelf->__Vfunc_leading_zero32__4824__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4824__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4824__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4824__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4824__count)));
                            vlSelf->__Vfunc_leading_zero32__4824__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4824__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4824__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4824__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4824__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4824__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4824__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4824__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4824__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4830__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4830__part 
                            = vlSelf->__Vfunc_leading_zero32__4830__value;
                        vlSelf->__Vfunc_leading_zero32__4830__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4830__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4830__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4830__count)));
                            vlSelf->__Vfunc_leading_zero32__4830__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4830__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4830__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4830__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4830__count)));
                            vlSelf->__Vfunc_leading_zero32__4830__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4830__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4830__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4830__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4830__count)));
                            vlSelf->__Vfunc_leading_zero32__4830__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4830__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4830__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4830__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4830__count)));
                            vlSelf->__Vfunc_leading_zero32__4830__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4830__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4830__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4830__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4830__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4830__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4830__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4830__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4830__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4836__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4836__part 
                            = vlSelf->__Vfunc_leading_zero32__4836__value;
                        vlSelf->__Vfunc_leading_zero32__4836__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4836__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4836__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4836__count)));
                            vlSelf->__Vfunc_leading_zero32__4836__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4836__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4836__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4836__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4836__count)));
                            vlSelf->__Vfunc_leading_zero32__4836__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4836__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4836__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4836__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4836__count)));
                            vlSelf->__Vfunc_leading_zero32__4836__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4836__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4836__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4836__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4836__count)));
                            vlSelf->__Vfunc_leading_zero32__4836__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4836__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4836__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4836__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4836__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4836__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4836__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4836__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4836__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4842__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4842__part 
                            = vlSelf->__Vfunc_leading_zero32__4842__value;
                        vlSelf->__Vfunc_leading_zero32__4842__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4842__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4842__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4842__count)));
                            vlSelf->__Vfunc_leading_zero32__4842__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4842__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4842__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4842__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4842__count)));
                            vlSelf->__Vfunc_leading_zero32__4842__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4842__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4842__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4842__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4842__count)));
                            vlSelf->__Vfunc_leading_zero32__4842__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4842__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4842__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4842__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4842__count)));
                            vlSelf->__Vfunc_leading_zero32__4842__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4842__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4842__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4842__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4842__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4842__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4842__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4842__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4842__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4848__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4848__part 
                            = vlSelf->__Vfunc_leading_zero32__4848__value;
                        vlSelf->__Vfunc_leading_zero32__4848__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4848__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4848__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4848__count)));
                            vlSelf->__Vfunc_leading_zero32__4848__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4848__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4848__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4848__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4848__count)));
                            vlSelf->__Vfunc_leading_zero32__4848__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4848__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4848__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4848__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4848__count)));
                            vlSelf->__Vfunc_leading_zero32__4848__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4848__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4848__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4848__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4848__count)));
                            vlSelf->__Vfunc_leading_zero32__4848__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4848__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4848__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4848__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4848__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4848__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4848__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4848__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4848__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4854__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4854__part 
                            = vlSelf->__Vfunc_leading_zero32__4854__value;
                        vlSelf->__Vfunc_leading_zero32__4854__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4854__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4854__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4854__count)));
                            vlSelf->__Vfunc_leading_zero32__4854__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4854__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4854__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4854__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4854__count)));
                            vlSelf->__Vfunc_leading_zero32__4854__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4854__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4854__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4854__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4854__count)));
                            vlSelf->__Vfunc_leading_zero32__4854__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4854__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4854__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4854__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4854__count)));
                            vlSelf->__Vfunc_leading_zero32__4854__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4854__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4854__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4854__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4854__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4854__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4854__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4854__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4854__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4860__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4860__part 
                            = vlSelf->__Vfunc_leading_zero32__4860__value;
                        vlSelf->__Vfunc_leading_zero32__4860__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4860__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4860__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4860__count)));
                            vlSelf->__Vfunc_leading_zero32__4860__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4860__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4860__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4860__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4860__count)));
                            vlSelf->__Vfunc_leading_zero32__4860__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4860__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4860__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4860__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4860__count)));
                            vlSelf->__Vfunc_leading_zero32__4860__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4860__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4860__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4860__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4860__count)));
                            vlSelf->__Vfunc_leading_zero32__4860__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4860__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4860__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4860__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4860__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4860__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4860__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4860__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4860__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4866__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4866__part 
                            = vlSelf->__Vfunc_leading_zero32__4866__value;
                        vlSelf->__Vfunc_leading_zero32__4866__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4866__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4866__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4866__count)));
                            vlSelf->__Vfunc_leading_zero32__4866__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4866__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4866__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4866__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4866__count)));
                            vlSelf->__Vfunc_leading_zero32__4866__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4866__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4866__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4866__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4866__count)));
                            vlSelf->__Vfunc_leading_zero32__4866__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4866__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4866__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4866__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4866__count)));
                            vlSelf->__Vfunc_leading_zero32__4866__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4866__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4866__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4866__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4866__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4866__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4866__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4866__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4866__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4872__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4872__part 
                            = vlSelf->__Vfunc_leading_zero32__4872__value;
                        vlSelf->__Vfunc_leading_zero32__4872__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4872__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4872__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4872__count)));
                            vlSelf->__Vfunc_leading_zero32__4872__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4872__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4872__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4872__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4872__count)));
                            vlSelf->__Vfunc_leading_zero32__4872__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4872__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4872__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4872__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4872__count)));
                            vlSelf->__Vfunc_leading_zero32__4872__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4872__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4872__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4872__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4872__count)));
                            vlSelf->__Vfunc_leading_zero32__4872__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4872__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4872__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4872__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4872__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4872__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4872__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4872__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4872__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4878__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4878__part 
                            = vlSelf->__Vfunc_leading_zero32__4878__value;
                        vlSelf->__Vfunc_leading_zero32__4878__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4878__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4878__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4878__count)));
                            vlSelf->__Vfunc_leading_zero32__4878__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4878__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4878__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4878__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4878__count)));
                            vlSelf->__Vfunc_leading_zero32__4878__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4878__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4878__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4878__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4878__count)));
                            vlSelf->__Vfunc_leading_zero32__4878__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4878__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4878__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4878__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4878__count)));
                            vlSelf->__Vfunc_leading_zero32__4878__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4878__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4878__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4878__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4878__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4878__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4878__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4878__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4878__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4884__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4884__part 
                            = vlSelf->__Vfunc_leading_zero32__4884__value;
                        vlSelf->__Vfunc_leading_zero32__4884__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4884__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4884__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4884__count)));
                            vlSelf->__Vfunc_leading_zero32__4884__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4884__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4884__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4884__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4884__count)));
                            vlSelf->__Vfunc_leading_zero32__4884__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4884__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4884__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4884__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4884__count)));
                            vlSelf->__Vfunc_leading_zero32__4884__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4884__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4884__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4884__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4884__count)));
                            vlSelf->__Vfunc_leading_zero32__4884__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4884__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4884__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4884__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4884__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4884__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4884__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4884__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4884__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4890__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4890__part 
                            = vlSelf->__Vfunc_leading_zero32__4890__value;
                        vlSelf->__Vfunc_leading_zero32__4890__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4890__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4890__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4890__count)));
                            vlSelf->__Vfunc_leading_zero32__4890__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4890__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4890__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4890__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4890__count)));
                            vlSelf->__Vfunc_leading_zero32__4890__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4890__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4890__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4890__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4890__count)));
                            vlSelf->__Vfunc_leading_zero32__4890__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4890__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4890__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4890__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4890__count)));
                            vlSelf->__Vfunc_leading_zero32__4890__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4890__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4890__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4890__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4890__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4890__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4890__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4890__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4890__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4896__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4896__part 
                            = vlSelf->__Vfunc_leading_zero32__4896__value;
                        vlSelf->__Vfunc_leading_zero32__4896__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4896__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4896__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4896__count)));
                            vlSelf->__Vfunc_leading_zero32__4896__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4896__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4896__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4896__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4896__count)));
                            vlSelf->__Vfunc_leading_zero32__4896__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4896__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4896__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4896__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4896__count)));
                            vlSelf->__Vfunc_leading_zero32__4896__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4896__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4896__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4896__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4896__count)));
                            vlSelf->__Vfunc_leading_zero32__4896__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4896__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4896__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4896__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4896__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4896__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4896__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4896__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4896__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4902__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4902__part 
                            = vlSelf->__Vfunc_leading_zero32__4902__value;
                        vlSelf->__Vfunc_leading_zero32__4902__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4902__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4902__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4902__count)));
                            vlSelf->__Vfunc_leading_zero32__4902__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4902__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4902__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4902__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4902__count)));
                            vlSelf->__Vfunc_leading_zero32__4902__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4902__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4902__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4902__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4902__count)));
                            vlSelf->__Vfunc_leading_zero32__4902__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4902__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4902__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4902__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4902__count)));
                            vlSelf->__Vfunc_leading_zero32__4902__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4902__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4902__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4902__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4902__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4902__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4902__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4902__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4902__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4908__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4908__part 
                            = vlSelf->__Vfunc_leading_zero32__4908__value;
                        vlSelf->__Vfunc_leading_zero32__4908__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4908__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4908__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4908__count)));
                            vlSelf->__Vfunc_leading_zero32__4908__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4908__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4908__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4908__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4908__count)));
                            vlSelf->__Vfunc_leading_zero32__4908__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4908__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4908__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4908__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4908__count)));
                            vlSelf->__Vfunc_leading_zero32__4908__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4908__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4908__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4908__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4908__count)));
                            vlSelf->__Vfunc_leading_zero32__4908__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4908__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4908__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4908__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4908__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4908__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4908__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4908__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4908__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4914__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4914__part 
                            = vlSelf->__Vfunc_leading_zero32__4914__value;
                        vlSelf->__Vfunc_leading_zero32__4914__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4914__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4914__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4914__count)));
                            vlSelf->__Vfunc_leading_zero32__4914__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4914__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4914__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4914__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4914__count)));
                            vlSelf->__Vfunc_leading_zero32__4914__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4914__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4914__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4914__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4914__count)));
                            vlSelf->__Vfunc_leading_zero32__4914__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4914__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4914__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4914__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4914__count)));
                            vlSelf->__Vfunc_leading_zero32__4914__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4914__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4914__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4914__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4914__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4914__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4914__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4914__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4914__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4920__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4920__part 
                            = vlSelf->__Vfunc_leading_zero32__4920__value;
                        vlSelf->__Vfunc_leading_zero32__4920__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4920__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4920__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4920__count)));
                            vlSelf->__Vfunc_leading_zero32__4920__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4920__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4920__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4920__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4920__count)));
                            vlSelf->__Vfunc_leading_zero32__4920__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4920__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4920__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4920__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4920__count)));
                            vlSelf->__Vfunc_leading_zero32__4920__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4920__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4920__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4920__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4920__count)));
                            vlSelf->__Vfunc_leading_zero32__4920__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4920__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4920__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4920__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4920__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4920__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4920__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4920__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4920__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4926__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4926__part 
                            = vlSelf->__Vfunc_leading_zero32__4926__value;
                        vlSelf->__Vfunc_leading_zero32__4926__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4926__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4926__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4926__count)));
                            vlSelf->__Vfunc_leading_zero32__4926__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4926__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4926__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4926__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4926__count)));
                            vlSelf->__Vfunc_leading_zero32__4926__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4926__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4926__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4926__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4926__count)));
                            vlSelf->__Vfunc_leading_zero32__4926__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4926__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4926__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4926__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4926__count)));
                            vlSelf->__Vfunc_leading_zero32__4926__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4926__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4926__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4926__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4926__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4926__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4926__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4926__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4926__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4932__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4932__part 
                            = vlSelf->__Vfunc_leading_zero32__4932__value;
                        vlSelf->__Vfunc_leading_zero32__4932__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4932__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4932__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4932__count)));
                            vlSelf->__Vfunc_leading_zero32__4932__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4932__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4932__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4932__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4932__count)));
                            vlSelf->__Vfunc_leading_zero32__4932__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4932__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4932__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4932__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4932__count)));
                            vlSelf->__Vfunc_leading_zero32__4932__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4932__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4932__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4932__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4932__count)));
                            vlSelf->__Vfunc_leading_zero32__4932__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4932__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4932__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4932__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4932__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4932__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4932__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4932__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4932__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4938__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4938__part 
                            = vlSelf->__Vfunc_leading_zero32__4938__value;
                        vlSelf->__Vfunc_leading_zero32__4938__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4938__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4938__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4938__count)));
                            vlSelf->__Vfunc_leading_zero32__4938__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4938__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4938__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4938__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4938__count)));
                            vlSelf->__Vfunc_leading_zero32__4938__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4938__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4938__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4938__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4938__count)));
                            vlSelf->__Vfunc_leading_zero32__4938__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4938__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4938__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4938__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4938__count)));
                            vlSelf->__Vfunc_leading_zero32__4938__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4938__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4938__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4938__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4938__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4938__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4938__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4938__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4938__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4944__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4944__part 
                            = vlSelf->__Vfunc_leading_zero32__4944__value;
                        vlSelf->__Vfunc_leading_zero32__4944__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4944__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4944__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4944__count)));
                            vlSelf->__Vfunc_leading_zero32__4944__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4944__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4944__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4944__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4944__count)));
                            vlSelf->__Vfunc_leading_zero32__4944__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4944__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4944__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4944__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4944__count)));
                            vlSelf->__Vfunc_leading_zero32__4944__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4944__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4944__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4944__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4944__count)));
                            vlSelf->__Vfunc_leading_zero32__4944__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4944__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4944__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4944__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4944__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4944__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4944__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4944__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4944__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4950__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4950__part 
                            = vlSelf->__Vfunc_leading_zero32__4950__value;
                        vlSelf->__Vfunc_leading_zero32__4950__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4950__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4950__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4950__count)));
                            vlSelf->__Vfunc_leading_zero32__4950__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4950__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4950__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4950__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4950__count)));
                            vlSelf->__Vfunc_leading_zero32__4950__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4950__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4950__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4950__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4950__count)));
                            vlSelf->__Vfunc_leading_zero32__4950__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4950__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4950__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4950__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4950__count)));
                            vlSelf->__Vfunc_leading_zero32__4950__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4950__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4950__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4950__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4950__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4950__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4950__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4950__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4950__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4956__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4956__part 
                            = vlSelf->__Vfunc_leading_zero32__4956__value;
                        vlSelf->__Vfunc_leading_zero32__4956__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4956__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4956__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4956__count)));
                            vlSelf->__Vfunc_leading_zero32__4956__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4956__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4956__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4956__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4956__count)));
                            vlSelf->__Vfunc_leading_zero32__4956__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4956__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4956__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4956__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4956__count)));
                            vlSelf->__Vfunc_leading_zero32__4956__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4956__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4956__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4956__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4956__count)));
                            vlSelf->__Vfunc_leading_zero32__4956__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4956__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4956__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4956__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4956__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4956__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4956__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4956__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4956__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4962__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4962__part 
                            = vlSelf->__Vfunc_leading_zero32__4962__value;
                        vlSelf->__Vfunc_leading_zero32__4962__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4962__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4962__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4962__count)));
                            vlSelf->__Vfunc_leading_zero32__4962__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4962__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4962__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4962__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4962__count)));
                            vlSelf->__Vfunc_leading_zero32__4962__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4962__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4962__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4962__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4962__count)));
                            vlSelf->__Vfunc_leading_zero32__4962__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4962__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4962__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4962__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4962__count)));
                            vlSelf->__Vfunc_leading_zero32__4962__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4962__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4962__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4962__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4962__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4962__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4962__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4962__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4962__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4968__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4968__part 
                            = vlSelf->__Vfunc_leading_zero32__4968__value;
                        vlSelf->__Vfunc_leading_zero32__4968__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4968__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4968__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4968__count)));
                            vlSelf->__Vfunc_leading_zero32__4968__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4968__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4968__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4968__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4968__count)));
                            vlSelf->__Vfunc_leading_zero32__4968__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4968__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4968__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4968__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4968__count)));
                            vlSelf->__Vfunc_leading_zero32__4968__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4968__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4968__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4968__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4968__count)));
                            vlSelf->__Vfunc_leading_zero32__4968__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4968__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4968__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4968__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4968__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4968__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4968__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4968__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4968__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4974__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4974__part 
                            = vlSelf->__Vfunc_leading_zero32__4974__value;
                        vlSelf->__Vfunc_leading_zero32__4974__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4974__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4974__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4974__count)));
                            vlSelf->__Vfunc_leading_zero32__4974__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4974__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4974__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4974__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4974__count)));
                            vlSelf->__Vfunc_leading_zero32__4974__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4974__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4974__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4974__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4974__count)));
                            vlSelf->__Vfunc_leading_zero32__4974__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4974__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4974__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4974__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4974__count)));
                            vlSelf->__Vfunc_leading_zero32__4974__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4974__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4974__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4974__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4974__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4974__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4974__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4974__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4974__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4980__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4980__part 
                            = vlSelf->__Vfunc_leading_zero32__4980__value;
                        vlSelf->__Vfunc_leading_zero32__4980__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4980__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4980__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4980__count)));
                            vlSelf->__Vfunc_leading_zero32__4980__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4980__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4980__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4980__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4980__count)));
                            vlSelf->__Vfunc_leading_zero32__4980__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4980__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4980__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4980__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4980__count)));
                            vlSelf->__Vfunc_leading_zero32__4980__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4980__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4980__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4980__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4980__count)));
                            vlSelf->__Vfunc_leading_zero32__4980__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4980__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4980__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4980__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4980__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4980__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4980__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4980__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4980__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4986__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4986__part 
                            = vlSelf->__Vfunc_leading_zero32__4986__value;
                        vlSelf->__Vfunc_leading_zero32__4986__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4986__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4986__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4986__count)));
                            vlSelf->__Vfunc_leading_zero32__4986__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4986__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4986__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4986__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4986__count)));
                            vlSelf->__Vfunc_leading_zero32__4986__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4986__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4986__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4986__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4986__count)));
                            vlSelf->__Vfunc_leading_zero32__4986__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4986__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4986__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4986__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4986__count)));
                            vlSelf->__Vfunc_leading_zero32__4986__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4986__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4986__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4986__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4986__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4986__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4986__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4986__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4986__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4992__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4992__part 
                            = vlSelf->__Vfunc_leading_zero32__4992__value;
                        vlSelf->__Vfunc_leading_zero32__4992__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4992__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4992__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4992__count)));
                            vlSelf->__Vfunc_leading_zero32__4992__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4992__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4992__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4992__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4992__count)));
                            vlSelf->__Vfunc_leading_zero32__4992__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4992__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4992__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4992__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4992__count)));
                            vlSelf->__Vfunc_leading_zero32__4992__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4992__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4992__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4992__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4992__count)));
                            vlSelf->__Vfunc_leading_zero32__4992__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4992__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4992__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4992__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4992__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4992__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4992__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4992__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4992__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4998__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4998__part 
                            = vlSelf->__Vfunc_leading_zero32__4998__value;
                        vlSelf->__Vfunc_leading_zero32__4998__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4998__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4998__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4998__count)));
                            vlSelf->__Vfunc_leading_zero32__4998__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4998__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4998__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4998__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4998__count)));
                            vlSelf->__Vfunc_leading_zero32__4998__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4998__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4998__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4998__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4998__count)));
                            vlSelf->__Vfunc_leading_zero32__4998__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4998__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4998__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4998__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4998__count)));
                            vlSelf->__Vfunc_leading_zero32__4998__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4998__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4998__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4998__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4998__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4998__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4998__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4998__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4998__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5004__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5004__part 
                            = vlSelf->__Vfunc_leading_zero32__5004__value;
                        vlSelf->__Vfunc_leading_zero32__5004__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5004__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5004__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5004__count)));
                            vlSelf->__Vfunc_leading_zero32__5004__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5004__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5004__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5004__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5004__count)));
                            vlSelf->__Vfunc_leading_zero32__5004__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5004__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5004__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5004__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5004__count)));
                            vlSelf->__Vfunc_leading_zero32__5004__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5004__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5004__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5004__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5004__count)));
                            vlSelf->__Vfunc_leading_zero32__5004__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5004__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5004__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5004__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5004__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5004__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5004__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5004__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5004__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5010__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5010__part 
                            = vlSelf->__Vfunc_leading_zero32__5010__value;
                        vlSelf->__Vfunc_leading_zero32__5010__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5010__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5010__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5010__count)));
                            vlSelf->__Vfunc_leading_zero32__5010__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5010__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5010__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5010__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5010__count)));
                            vlSelf->__Vfunc_leading_zero32__5010__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5010__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5010__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5010__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5010__count)));
                            vlSelf->__Vfunc_leading_zero32__5010__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5010__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5010__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5010__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5010__count)));
                            vlSelf->__Vfunc_leading_zero32__5010__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5010__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5010__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5010__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5010__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5010__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5010__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5010__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5010__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5016__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5016__part 
                            = vlSelf->__Vfunc_leading_zero32__5016__value;
                        vlSelf->__Vfunc_leading_zero32__5016__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5016__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5016__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5016__count)));
                            vlSelf->__Vfunc_leading_zero32__5016__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5016__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5016__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5016__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5016__count)));
                            vlSelf->__Vfunc_leading_zero32__5016__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5016__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5016__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5016__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5016__count)));
                            vlSelf->__Vfunc_leading_zero32__5016__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5016__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5016__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5016__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5016__count)));
                            vlSelf->__Vfunc_leading_zero32__5016__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5016__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5016__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5016__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5016__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5016__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5016__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5016__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5016__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5022__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5022__part 
                            = vlSelf->__Vfunc_leading_zero32__5022__value;
                        vlSelf->__Vfunc_leading_zero32__5022__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5022__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5022__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5022__count)));
                            vlSelf->__Vfunc_leading_zero32__5022__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5022__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5022__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5022__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5022__count)));
                            vlSelf->__Vfunc_leading_zero32__5022__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5022__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5022__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5022__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5022__count)));
                            vlSelf->__Vfunc_leading_zero32__5022__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5022__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5022__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5022__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5022__count)));
                            vlSelf->__Vfunc_leading_zero32__5022__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5022__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5022__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5022__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5022__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5022__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5022__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5022__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5022__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5028__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5028__part 
                            = vlSelf->__Vfunc_leading_zero32__5028__value;
                        vlSelf->__Vfunc_leading_zero32__5028__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5028__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5028__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5028__count)));
                            vlSelf->__Vfunc_leading_zero32__5028__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5028__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5028__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5028__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5028__count)));
                            vlSelf->__Vfunc_leading_zero32__5028__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5028__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5028__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5028__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5028__count)));
                            vlSelf->__Vfunc_leading_zero32__5028__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5028__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5028__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5028__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5028__count)));
                            vlSelf->__Vfunc_leading_zero32__5028__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5028__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5028__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5028__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5028__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5028__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5028__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5028__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5028__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5034__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5034__part 
                            = vlSelf->__Vfunc_leading_zero32__5034__value;
                        vlSelf->__Vfunc_leading_zero32__5034__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5034__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5034__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5034__count)));
                            vlSelf->__Vfunc_leading_zero32__5034__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5034__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5034__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5034__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5034__count)));
                            vlSelf->__Vfunc_leading_zero32__5034__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5034__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5034__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5034__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5034__count)));
                            vlSelf->__Vfunc_leading_zero32__5034__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5034__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5034__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5034__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5034__count)));
                            vlSelf->__Vfunc_leading_zero32__5034__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5034__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5034__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5034__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5034__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5034__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5034__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5034__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5034__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5040__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5040__part 
                            = vlSelf->__Vfunc_leading_zero32__5040__value;
                        vlSelf->__Vfunc_leading_zero32__5040__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5040__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5040__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5040__count)));
                            vlSelf->__Vfunc_leading_zero32__5040__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5040__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5040__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5040__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5040__count)));
                            vlSelf->__Vfunc_leading_zero32__5040__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5040__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5040__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5040__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5040__count)));
                            vlSelf->__Vfunc_leading_zero32__5040__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5040__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5040__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5040__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5040__count)));
                            vlSelf->__Vfunc_leading_zero32__5040__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5040__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5040__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5040__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5040__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5040__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5040__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5040__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5040__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5046__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5046__part 
                            = vlSelf->__Vfunc_leading_zero32__5046__value;
                        vlSelf->__Vfunc_leading_zero32__5046__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5046__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5046__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5046__count)));
                            vlSelf->__Vfunc_leading_zero32__5046__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5046__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5046__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5046__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5046__count)));
                            vlSelf->__Vfunc_leading_zero32__5046__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5046__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5046__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5046__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5046__count)));
                            vlSelf->__Vfunc_leading_zero32__5046__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5046__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5046__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5046__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5046__count)));
                            vlSelf->__Vfunc_leading_zero32__5046__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5046__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5046__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5046__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5046__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5046__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5046__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5046__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5046__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5052__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5052__part 
                            = vlSelf->__Vfunc_leading_zero32__5052__value;
                        vlSelf->__Vfunc_leading_zero32__5052__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5052__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5052__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5052__count)));
                            vlSelf->__Vfunc_leading_zero32__5052__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5052__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5052__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5052__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5052__count)));
                            vlSelf->__Vfunc_leading_zero32__5052__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5052__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5052__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5052__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5052__count)));
                            vlSelf->__Vfunc_leading_zero32__5052__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5052__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5052__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5052__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5052__count)));
                            vlSelf->__Vfunc_leading_zero32__5052__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5052__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5052__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5052__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5052__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5052__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5052__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5052__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5052__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5058__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5058__part 
                            = vlSelf->__Vfunc_leading_zero32__5058__value;
                        vlSelf->__Vfunc_leading_zero32__5058__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5058__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5058__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5058__count)));
                            vlSelf->__Vfunc_leading_zero32__5058__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5058__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5058__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5058__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5058__count)));
                            vlSelf->__Vfunc_leading_zero32__5058__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5058__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5058__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5058__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5058__count)));
                            vlSelf->__Vfunc_leading_zero32__5058__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5058__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5058__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5058__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5058__count)));
                            vlSelf->__Vfunc_leading_zero32__5058__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5058__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5058__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5058__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5058__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5058__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5058__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5058__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5058__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5064__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5064__part 
                            = vlSelf->__Vfunc_leading_zero32__5064__value;
                        vlSelf->__Vfunc_leading_zero32__5064__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5064__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5064__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5064__count)));
                            vlSelf->__Vfunc_leading_zero32__5064__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5064__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5064__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5064__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5064__count)));
                            vlSelf->__Vfunc_leading_zero32__5064__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5064__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5064__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5064__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5064__count)));
                            vlSelf->__Vfunc_leading_zero32__5064__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5064__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5064__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5064__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5064__count)));
                            vlSelf->__Vfunc_leading_zero32__5064__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5064__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5064__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5064__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5064__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5064__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5064__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5064__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5064__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5070__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5070__part 
                            = vlSelf->__Vfunc_leading_zero32__5070__value;
                        vlSelf->__Vfunc_leading_zero32__5070__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5070__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5070__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5070__count)));
                            vlSelf->__Vfunc_leading_zero32__5070__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5070__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5070__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5070__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5070__count)));
                            vlSelf->__Vfunc_leading_zero32__5070__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5070__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5070__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5070__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5070__count)));
                            vlSelf->__Vfunc_leading_zero32__5070__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5070__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5070__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5070__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5070__count)));
                            vlSelf->__Vfunc_leading_zero32__5070__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5070__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5070__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5070__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5070__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5070__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5070__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5070__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5070__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5076__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5076__part 
                            = vlSelf->__Vfunc_leading_zero32__5076__value;
                        vlSelf->__Vfunc_leading_zero32__5076__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5076__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5076__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5076__count)));
                            vlSelf->__Vfunc_leading_zero32__5076__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5076__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5076__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5076__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5076__count)));
                            vlSelf->__Vfunc_leading_zero32__5076__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5076__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5076__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5076__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5076__count)));
                            vlSelf->__Vfunc_leading_zero32__5076__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5076__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5076__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5076__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5076__count)));
                            vlSelf->__Vfunc_leading_zero32__5076__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5076__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5076__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5076__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5076__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5076__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5076__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5076__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5076__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5082__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5082__part 
                            = vlSelf->__Vfunc_leading_zero32__5082__value;
                        vlSelf->__Vfunc_leading_zero32__5082__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5082__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5082__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5082__count)));
                            vlSelf->__Vfunc_leading_zero32__5082__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5082__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5082__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5082__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5082__count)));
                            vlSelf->__Vfunc_leading_zero32__5082__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5082__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5082__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5082__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5082__count)));
                            vlSelf->__Vfunc_leading_zero32__5082__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5082__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5082__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5082__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5082__count)));
                            vlSelf->__Vfunc_leading_zero32__5082__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5082__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5082__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5082__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5082__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5082__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5082__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5082__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5082__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5088__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5088__part 
                            = vlSelf->__Vfunc_leading_zero32__5088__value;
                        vlSelf->__Vfunc_leading_zero32__5088__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5088__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5088__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5088__count)));
                            vlSelf->__Vfunc_leading_zero32__5088__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5088__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5088__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5088__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5088__count)));
                            vlSelf->__Vfunc_leading_zero32__5088__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5088__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5088__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5088__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5088__count)));
                            vlSelf->__Vfunc_leading_zero32__5088__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5088__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5088__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5088__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5088__count)));
                            vlSelf->__Vfunc_leading_zero32__5088__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5088__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5088__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5088__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5088__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5088__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5088__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5088__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5088__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5094__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5094__part 
                            = vlSelf->__Vfunc_leading_zero32__5094__value;
                        vlSelf->__Vfunc_leading_zero32__5094__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5094__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5094__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5094__count)));
                            vlSelf->__Vfunc_leading_zero32__5094__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5094__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5094__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5094__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5094__count)));
                            vlSelf->__Vfunc_leading_zero32__5094__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5094__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5094__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5094__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5094__count)));
                            vlSelf->__Vfunc_leading_zero32__5094__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5094__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5094__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5094__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5094__count)));
                            vlSelf->__Vfunc_leading_zero32__5094__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5094__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5094__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5094__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5094__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5094__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5094__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5094__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5094__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5100__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5100__part 
                            = vlSelf->__Vfunc_leading_zero32__5100__value;
                        vlSelf->__Vfunc_leading_zero32__5100__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5100__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5100__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5100__count)));
                            vlSelf->__Vfunc_leading_zero32__5100__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5100__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5100__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5100__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5100__count)));
                            vlSelf->__Vfunc_leading_zero32__5100__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5100__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5100__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5100__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5100__count)));
                            vlSelf->__Vfunc_leading_zero32__5100__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5100__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5100__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5100__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5100__count)));
                            vlSelf->__Vfunc_leading_zero32__5100__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5100__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5100__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5100__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5100__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5100__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5100__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5100__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5100__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5106__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5106__part 
                            = vlSelf->__Vfunc_leading_zero32__5106__value;
                        vlSelf->__Vfunc_leading_zero32__5106__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5106__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5106__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5106__count)));
                            vlSelf->__Vfunc_leading_zero32__5106__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5106__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5106__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5106__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5106__count)));
                            vlSelf->__Vfunc_leading_zero32__5106__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5106__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5106__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5106__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5106__count)));
                            vlSelf->__Vfunc_leading_zero32__5106__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5106__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5106__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5106__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5106__count)));
                            vlSelf->__Vfunc_leading_zero32__5106__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5106__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5106__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5106__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5106__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5106__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5106__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5106__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5106__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5112__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5112__part 
                            = vlSelf->__Vfunc_leading_zero32__5112__value;
                        vlSelf->__Vfunc_leading_zero32__5112__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5112__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5112__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5112__count)));
                            vlSelf->__Vfunc_leading_zero32__5112__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5112__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5112__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5112__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5112__count)));
                            vlSelf->__Vfunc_leading_zero32__5112__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5112__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5112__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5112__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5112__count)));
                            vlSelf->__Vfunc_leading_zero32__5112__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5112__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5112__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5112__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5112__count)));
                            vlSelf->__Vfunc_leading_zero32__5112__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5112__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5112__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5112__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5112__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5112__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5112__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5112__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5112__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5118__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5118__part 
                            = vlSelf->__Vfunc_leading_zero32__5118__value;
                        vlSelf->__Vfunc_leading_zero32__5118__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5118__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5118__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5118__count)));
                            vlSelf->__Vfunc_leading_zero32__5118__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5118__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5118__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5118__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5118__count)));
                            vlSelf->__Vfunc_leading_zero32__5118__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5118__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5118__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5118__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5118__count)));
                            vlSelf->__Vfunc_leading_zero32__5118__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5118__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5118__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5118__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5118__count)));
                            vlSelf->__Vfunc_leading_zero32__5118__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5118__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5118__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5118__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5118__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5118__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5118__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5118__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5118__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5124__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5124__part 
                            = vlSelf->__Vfunc_leading_zero32__5124__value;
                        vlSelf->__Vfunc_leading_zero32__5124__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5124__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5124__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5124__count)));
                            vlSelf->__Vfunc_leading_zero32__5124__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5124__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5124__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5124__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5124__count)));
                            vlSelf->__Vfunc_leading_zero32__5124__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5124__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5124__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5124__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5124__count)));
                            vlSelf->__Vfunc_leading_zero32__5124__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5124__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5124__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5124__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5124__count)));
                            vlSelf->__Vfunc_leading_zero32__5124__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5124__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5124__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5124__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5124__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5124__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5124__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5124__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5124__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5130__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5130__part 
                            = vlSelf->__Vfunc_leading_zero32__5130__value;
                        vlSelf->__Vfunc_leading_zero32__5130__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5130__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5130__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5130__count)));
                            vlSelf->__Vfunc_leading_zero32__5130__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5130__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5130__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5130__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5130__count)));
                            vlSelf->__Vfunc_leading_zero32__5130__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5130__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5130__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5130__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5130__count)));
                            vlSelf->__Vfunc_leading_zero32__5130__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5130__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5130__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5130__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5130__count)));
                            vlSelf->__Vfunc_leading_zero32__5130__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5130__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5130__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5130__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5130__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5130__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5130__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5130__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5130__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5136__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5136__part 
                            = vlSelf->__Vfunc_leading_zero32__5136__value;
                        vlSelf->__Vfunc_leading_zero32__5136__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5136__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5136__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5136__count)));
                            vlSelf->__Vfunc_leading_zero32__5136__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5136__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5136__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5136__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5136__count)));
                            vlSelf->__Vfunc_leading_zero32__5136__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5136__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5136__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5136__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5136__count)));
                            vlSelf->__Vfunc_leading_zero32__5136__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5136__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5136__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5136__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5136__count)));
                            vlSelf->__Vfunc_leading_zero32__5136__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5136__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5136__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5136__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5136__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5136__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5136__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5136__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5136__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__64__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__64__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5142__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__64__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5142__part 
                            = vlSelf->__Vfunc_leading_zero32__5142__value;
                        vlSelf->__Vfunc_leading_zero32__5142__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5142__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5142__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5142__count)));
                            vlSelf->__Vfunc_leading_zero32__5142__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5142__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5142__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5142__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5142__count)));
                            vlSelf->__Vfunc_leading_zero32__5142__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5142__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5142__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5142__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5142__count)));
                            vlSelf->__Vfunc_leading_zero32__5142__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5142__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5142__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5142__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5142__count)));
                            vlSelf->__Vfunc_leading_zero32__5142__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5142__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5142__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5142__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5142__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5142__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5142__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5142__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5142__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__65__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__65__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5148__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__65__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5148__part 
                            = vlSelf->__Vfunc_leading_zero32__5148__value;
                        vlSelf->__Vfunc_leading_zero32__5148__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5148__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5148__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5148__count)));
                            vlSelf->__Vfunc_leading_zero32__5148__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5148__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5148__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5148__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5148__count)));
                            vlSelf->__Vfunc_leading_zero32__5148__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5148__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5148__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5148__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5148__count)));
                            vlSelf->__Vfunc_leading_zero32__5148__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5148__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5148__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5148__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5148__count)));
                            vlSelf->__Vfunc_leading_zero32__5148__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5148__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5148__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5148__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5148__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5148__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5148__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5148__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5148__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__66__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__66__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5154__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__66__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5154__part 
                            = vlSelf->__Vfunc_leading_zero32__5154__value;
                        vlSelf->__Vfunc_leading_zero32__5154__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5154__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5154__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5154__count)));
                            vlSelf->__Vfunc_leading_zero32__5154__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5154__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5154__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5154__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5154__count)));
                            vlSelf->__Vfunc_leading_zero32__5154__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5154__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5154__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5154__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5154__count)));
                            vlSelf->__Vfunc_leading_zero32__5154__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5154__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5154__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5154__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5154__count)));
                            vlSelf->__Vfunc_leading_zero32__5154__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5154__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5154__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5154__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5154__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5154__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5154__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5154__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5154__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__67__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__67__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5160__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__67__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5160__part 
                            = vlSelf->__Vfunc_leading_zero32__5160__value;
                        vlSelf->__Vfunc_leading_zero32__5160__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5160__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5160__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5160__count)));
                            vlSelf->__Vfunc_leading_zero32__5160__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5160__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5160__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5160__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5160__count)));
                            vlSelf->__Vfunc_leading_zero32__5160__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5160__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5160__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5160__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5160__count)));
                            vlSelf->__Vfunc_leading_zero32__5160__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5160__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5160__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5160__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5160__count)));
                            vlSelf->__Vfunc_leading_zero32__5160__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5160__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5160__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5160__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5160__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5160__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5160__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5160__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5160__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__68__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__68__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5166__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__68__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5166__part 
                            = vlSelf->__Vfunc_leading_zero32__5166__value;
                        vlSelf->__Vfunc_leading_zero32__5166__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5166__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5166__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5166__count)));
                            vlSelf->__Vfunc_leading_zero32__5166__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5166__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5166__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5166__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5166__count)));
                            vlSelf->__Vfunc_leading_zero32__5166__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5166__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5166__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5166__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5166__count)));
                            vlSelf->__Vfunc_leading_zero32__5166__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5166__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5166__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5166__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5166__count)));
                            vlSelf->__Vfunc_leading_zero32__5166__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5166__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5166__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5166__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5166__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5166__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5166__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5166__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5166__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__69__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__69__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5172__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__69__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5172__part 
                            = vlSelf->__Vfunc_leading_zero32__5172__value;
                        vlSelf->__Vfunc_leading_zero32__5172__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5172__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5172__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5172__count)));
                            vlSelf->__Vfunc_leading_zero32__5172__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5172__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5172__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5172__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5172__count)));
                            vlSelf->__Vfunc_leading_zero32__5172__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5172__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5172__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5172__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5172__count)));
                            vlSelf->__Vfunc_leading_zero32__5172__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5172__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5172__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5172__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5172__count)));
                            vlSelf->__Vfunc_leading_zero32__5172__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5172__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5172__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5172__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5172__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5172__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5172__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5172__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5172__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__70__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__70__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5178__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__70__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5178__part 
                            = vlSelf->__Vfunc_leading_zero32__5178__value;
                        vlSelf->__Vfunc_leading_zero32__5178__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5178__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5178__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5178__count)));
                            vlSelf->__Vfunc_leading_zero32__5178__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5178__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5178__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5178__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5178__count)));
                            vlSelf->__Vfunc_leading_zero32__5178__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5178__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5178__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5178__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5178__count)));
                            vlSelf->__Vfunc_leading_zero32__5178__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5178__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5178__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5178__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5178__count)));
                            vlSelf->__Vfunc_leading_zero32__5178__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5178__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5178__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5178__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5178__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5178__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5178__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5178__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5178__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__71__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__71__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5184__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__71__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5184__part 
                            = vlSelf->__Vfunc_leading_zero32__5184__value;
                        vlSelf->__Vfunc_leading_zero32__5184__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5184__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5184__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5184__count)));
                            vlSelf->__Vfunc_leading_zero32__5184__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5184__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5184__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5184__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5184__count)));
                            vlSelf->__Vfunc_leading_zero32__5184__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5184__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5184__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5184__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5184__count)));
                            vlSelf->__Vfunc_leading_zero32__5184__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5184__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5184__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5184__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5184__count)));
                            vlSelf->__Vfunc_leading_zero32__5184__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5184__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5184__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5184__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5184__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5184__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5184__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5184__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5184__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__72__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__72__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5190__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__72__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5190__part 
                            = vlSelf->__Vfunc_leading_zero32__5190__value;
                        vlSelf->__Vfunc_leading_zero32__5190__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5190__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5190__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5190__count)));
                            vlSelf->__Vfunc_leading_zero32__5190__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5190__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5190__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5190__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5190__count)));
                            vlSelf->__Vfunc_leading_zero32__5190__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5190__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5190__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5190__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5190__count)));
                            vlSelf->__Vfunc_leading_zero32__5190__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5190__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5190__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5190__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5190__count)));
                            vlSelf->__Vfunc_leading_zero32__5190__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5190__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5190__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5190__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5190__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5190__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5190__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5190__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5190__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__73__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__73__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5196__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__73__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5196__part 
                            = vlSelf->__Vfunc_leading_zero32__5196__value;
                        vlSelf->__Vfunc_leading_zero32__5196__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5196__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5196__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5196__count)));
                            vlSelf->__Vfunc_leading_zero32__5196__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5196__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5196__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5196__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5196__count)));
                            vlSelf->__Vfunc_leading_zero32__5196__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5196__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5196__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5196__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5196__count)));
                            vlSelf->__Vfunc_leading_zero32__5196__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5196__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5196__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5196__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5196__count)));
                            vlSelf->__Vfunc_leading_zero32__5196__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5196__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5196__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5196__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5196__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5196__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5196__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5196__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5196__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__74__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__74__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5202__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__74__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5202__part 
                            = vlSelf->__Vfunc_leading_zero32__5202__value;
                        vlSelf->__Vfunc_leading_zero32__5202__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5202__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5202__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5202__count)));
                            vlSelf->__Vfunc_leading_zero32__5202__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5202__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5202__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5202__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5202__count)));
                            vlSelf->__Vfunc_leading_zero32__5202__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5202__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5202__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5202__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5202__count)));
                            vlSelf->__Vfunc_leading_zero32__5202__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5202__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5202__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5202__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5202__count)));
                            vlSelf->__Vfunc_leading_zero32__5202__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5202__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5202__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5202__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5202__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5202__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5202__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5202__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5202__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__75__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__75__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5208__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__75__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5208__part 
                            = vlSelf->__Vfunc_leading_zero32__5208__value;
                        vlSelf->__Vfunc_leading_zero32__5208__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5208__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5208__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5208__count)));
                            vlSelf->__Vfunc_leading_zero32__5208__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5208__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5208__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5208__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5208__count)));
                            vlSelf->__Vfunc_leading_zero32__5208__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5208__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5208__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5208__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5208__count)));
                            vlSelf->__Vfunc_leading_zero32__5208__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5208__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5208__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5208__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5208__count)));
                            vlSelf->__Vfunc_leading_zero32__5208__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5208__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5208__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5208__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5208__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5208__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5208__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5208__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5208__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__76__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__76__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5214__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__76__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5214__part 
                            = vlSelf->__Vfunc_leading_zero32__5214__value;
                        vlSelf->__Vfunc_leading_zero32__5214__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5214__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5214__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5214__count)));
                            vlSelf->__Vfunc_leading_zero32__5214__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5214__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5214__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5214__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5214__count)));
                            vlSelf->__Vfunc_leading_zero32__5214__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5214__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5214__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5214__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5214__count)));
                            vlSelf->__Vfunc_leading_zero32__5214__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5214__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5214__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5214__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5214__count)));
                            vlSelf->__Vfunc_leading_zero32__5214__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5214__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5214__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5214__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5214__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5214__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5214__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5214__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5214__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__77__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__77__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5220__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__77__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5220__part 
                            = vlSelf->__Vfunc_leading_zero32__5220__value;
                        vlSelf->__Vfunc_leading_zero32__5220__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5220__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5220__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5220__count)));
                            vlSelf->__Vfunc_leading_zero32__5220__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5220__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5220__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5220__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5220__count)));
                            vlSelf->__Vfunc_leading_zero32__5220__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5220__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5220__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5220__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5220__count)));
                            vlSelf->__Vfunc_leading_zero32__5220__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5220__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5220__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5220__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5220__count)));
                            vlSelf->__Vfunc_leading_zero32__5220__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5220__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5220__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5220__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5220__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5220__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5220__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5220__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5220__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__78__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__78__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5226__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__78__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5226__part 
                            = vlSelf->__Vfunc_leading_zero32__5226__value;
                        vlSelf->__Vfunc_leading_zero32__5226__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5226__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5226__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5226__count)));
                            vlSelf->__Vfunc_leading_zero32__5226__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5226__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5226__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5226__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5226__count)));
                            vlSelf->__Vfunc_leading_zero32__5226__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5226__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5226__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5226__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5226__count)));
                            vlSelf->__Vfunc_leading_zero32__5226__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5226__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5226__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5226__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5226__count)));
                            vlSelf->__Vfunc_leading_zero32__5226__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5226__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5226__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5226__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5226__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5226__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5226__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5226__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5226__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__79__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__79__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5232__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__79__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5232__part 
                            = vlSelf->__Vfunc_leading_zero32__5232__value;
                        vlSelf->__Vfunc_leading_zero32__5232__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5232__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5232__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5232__count)));
                            vlSelf->__Vfunc_leading_zero32__5232__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5232__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5232__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5232__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5232__count)));
                            vlSelf->__Vfunc_leading_zero32__5232__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5232__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5232__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5232__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5232__count)));
                            vlSelf->__Vfunc_leading_zero32__5232__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5232__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5232__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5232__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5232__count)));
                            vlSelf->__Vfunc_leading_zero32__5232__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5232__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5232__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5232__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5232__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5232__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5232__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5232__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5232__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__80__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__80__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5238__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__80__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5238__part 
                            = vlSelf->__Vfunc_leading_zero32__5238__value;
                        vlSelf->__Vfunc_leading_zero32__5238__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5238__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5238__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5238__count)));
                            vlSelf->__Vfunc_leading_zero32__5238__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5238__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5238__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5238__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5238__count)));
                            vlSelf->__Vfunc_leading_zero32__5238__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5238__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5238__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5238__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5238__count)));
                            vlSelf->__Vfunc_leading_zero32__5238__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5238__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5238__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5238__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5238__count)));
                            vlSelf->__Vfunc_leading_zero32__5238__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5238__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5238__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5238__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5238__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5238__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5238__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5238__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5238__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__81__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__81__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5244__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__81__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5244__part 
                            = vlSelf->__Vfunc_leading_zero32__5244__value;
                        vlSelf->__Vfunc_leading_zero32__5244__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5244__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5244__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5244__count)));
                            vlSelf->__Vfunc_leading_zero32__5244__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5244__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5244__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5244__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5244__count)));
                            vlSelf->__Vfunc_leading_zero32__5244__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5244__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5244__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5244__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5244__count)));
                            vlSelf->__Vfunc_leading_zero32__5244__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5244__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5244__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5244__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5244__count)));
                            vlSelf->__Vfunc_leading_zero32__5244__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5244__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5244__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5244__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5244__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5244__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5244__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5244__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5244__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__82__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__82__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5250__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__82__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5250__part 
                            = vlSelf->__Vfunc_leading_zero32__5250__value;
                        vlSelf->__Vfunc_leading_zero32__5250__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5250__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5250__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5250__count)));
                            vlSelf->__Vfunc_leading_zero32__5250__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5250__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5250__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5250__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5250__count)));
                            vlSelf->__Vfunc_leading_zero32__5250__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5250__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5250__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5250__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5250__count)));
                            vlSelf->__Vfunc_leading_zero32__5250__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5250__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5250__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5250__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5250__count)));
                            vlSelf->__Vfunc_leading_zero32__5250__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5250__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5250__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5250__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5250__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5250__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5250__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5250__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5250__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__83__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__83__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5256__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__83__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5256__part 
                            = vlSelf->__Vfunc_leading_zero32__5256__value;
                        vlSelf->__Vfunc_leading_zero32__5256__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5256__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5256__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5256__count)));
                            vlSelf->__Vfunc_leading_zero32__5256__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5256__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5256__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5256__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5256__count)));
                            vlSelf->__Vfunc_leading_zero32__5256__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5256__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5256__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5256__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5256__count)));
                            vlSelf->__Vfunc_leading_zero32__5256__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5256__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5256__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5256__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5256__count)));
                            vlSelf->__Vfunc_leading_zero32__5256__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5256__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5256__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5256__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5256__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5256__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5256__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5256__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5256__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__84__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__84__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5262__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__84__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5262__part 
                            = vlSelf->__Vfunc_leading_zero32__5262__value;
                        vlSelf->__Vfunc_leading_zero32__5262__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5262__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5262__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5262__count)));
                            vlSelf->__Vfunc_leading_zero32__5262__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5262__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5262__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5262__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5262__count)));
                            vlSelf->__Vfunc_leading_zero32__5262__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5262__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5262__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5262__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5262__count)));
                            vlSelf->__Vfunc_leading_zero32__5262__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5262__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5262__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5262__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5262__count)));
                            vlSelf->__Vfunc_leading_zero32__5262__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5262__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5262__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5262__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5262__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5262__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5262__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5262__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5262__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__85__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__85__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5268__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__85__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5268__part 
                            = vlSelf->__Vfunc_leading_zero32__5268__value;
                        vlSelf->__Vfunc_leading_zero32__5268__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5268__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5268__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5268__count)));
                            vlSelf->__Vfunc_leading_zero32__5268__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5268__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5268__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5268__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5268__count)));
                            vlSelf->__Vfunc_leading_zero32__5268__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5268__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5268__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5268__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5268__count)));
                            vlSelf->__Vfunc_leading_zero32__5268__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5268__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5268__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5268__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5268__count)));
                            vlSelf->__Vfunc_leading_zero32__5268__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5268__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5268__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5268__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5268__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5268__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5268__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5268__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5268__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__86__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__86__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5274__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__86__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5274__part 
                            = vlSelf->__Vfunc_leading_zero32__5274__value;
                        vlSelf->__Vfunc_leading_zero32__5274__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5274__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5274__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5274__count)));
                            vlSelf->__Vfunc_leading_zero32__5274__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5274__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5274__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5274__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5274__count)));
                            vlSelf->__Vfunc_leading_zero32__5274__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5274__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5274__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5274__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5274__count)));
                            vlSelf->__Vfunc_leading_zero32__5274__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5274__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5274__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5274__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5274__count)));
                            vlSelf->__Vfunc_leading_zero32__5274__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5274__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5274__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5274__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5274__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5274__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5274__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5274__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5274__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__87__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__87__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5280__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__87__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5280__part 
                            = vlSelf->__Vfunc_leading_zero32__5280__value;
                        vlSelf->__Vfunc_leading_zero32__5280__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5280__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5280__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5280__count)));
                            vlSelf->__Vfunc_leading_zero32__5280__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5280__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5280__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5280__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5280__count)));
                            vlSelf->__Vfunc_leading_zero32__5280__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5280__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5280__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5280__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5280__count)));
                            vlSelf->__Vfunc_leading_zero32__5280__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5280__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5280__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5280__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5280__count)));
                            vlSelf->__Vfunc_leading_zero32__5280__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5280__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5280__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5280__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5280__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5280__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5280__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5280__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5280__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__88__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__88__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5286__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__88__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5286__part 
                            = vlSelf->__Vfunc_leading_zero32__5286__value;
                        vlSelf->__Vfunc_leading_zero32__5286__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5286__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5286__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5286__count)));
                            vlSelf->__Vfunc_leading_zero32__5286__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5286__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5286__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5286__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5286__count)));
                            vlSelf->__Vfunc_leading_zero32__5286__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5286__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5286__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5286__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5286__count)));
                            vlSelf->__Vfunc_leading_zero32__5286__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5286__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5286__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5286__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5286__count)));
                            vlSelf->__Vfunc_leading_zero32__5286__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5286__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5286__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5286__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5286__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5286__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5286__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5286__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5286__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__89__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__89__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5292__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__89__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5292__part 
                            = vlSelf->__Vfunc_leading_zero32__5292__value;
                        vlSelf->__Vfunc_leading_zero32__5292__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5292__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5292__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5292__count)));
                            vlSelf->__Vfunc_leading_zero32__5292__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5292__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5292__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5292__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5292__count)));
                            vlSelf->__Vfunc_leading_zero32__5292__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5292__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5292__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5292__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5292__count)));
                            vlSelf->__Vfunc_leading_zero32__5292__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5292__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5292__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5292__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5292__count)));
                            vlSelf->__Vfunc_leading_zero32__5292__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5292__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5292__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5292__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5292__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5292__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5292__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5292__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5292__Vfuncout)) 
                             - (IData)(5U))));
}
