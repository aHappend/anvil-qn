// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vleaf_tb.h for the primary calling header

#include "Vleaf_tb__pch.h"
#include "Vleaf_tb___024root.h"

VL_ATTR_COLD void Vleaf_tb___024root___eval_static__TOP(Vleaf_tb___024root* vlSelf);

VL_ATTR_COLD void Vleaf_tb___024root___eval_static(Vleaf_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleaf_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleaf_tb___024root___eval_static\n"); );
    // Body
    Vleaf_tb___024root___eval_static__TOP(vlSelf);
}

extern const VlWide<64>/*2047:0*/ Vleaf_tb__ConstPool__CONST_h6be9aa18_0;
extern const VlWide<32>/*1023:0*/ Vleaf_tb__ConstPool__CONST_hd6b7ba52_0;

VL_ATTR_COLD void Vleaf_tb___024root___eval_static__TOP(Vleaf_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleaf_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleaf_tb___024root___eval_static__TOP\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    vlSelf->leaf_tb__DOT__clk = 0U;
    vlSelf->leaf_tb__DOT__flush = 0U;
    vlSelf->leaf_tb__DOT__in_valid = 0U;
    vlSelf->leaf_tb__DOT__in_is_key = 0U;
    vlSelf->leaf_tb__DOT__out_ready = 0U;
    vlSelf->leaf_tb__DOT__in_head = 0U;
    vlSelf->leaf_tb__DOT__in_layer = 0U;
    vlSelf->leaf_tb__DOT__in_pos = 0U;
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->leaf_tb__DOT__in_data[__Vilp] = Vleaf_tb__ConstPool__CONST_h6be9aa18_0[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->leaf_tb__DOT__in_gamma[__Vilp] = Vleaf_tb__ConstPool__CONST_h6be9aa18_0[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->leaf_tb__DOT__in_cos[0U] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[0U];
    vlSelf->leaf_tb__DOT__in_cos[1U] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[1U];
    vlSelf->leaf_tb__DOT__in_cos[2U] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[2U];
    vlSelf->leaf_tb__DOT__in_cos[3U] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[3U];
    vlSelf->leaf_tb__DOT__in_cos[4U] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[4U];
    vlSelf->leaf_tb__DOT__in_cos[5U] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[5U];
    vlSelf->leaf_tb__DOT__in_cos[6U] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[6U];
    vlSelf->leaf_tb__DOT__in_cos[7U] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[7U];
    vlSelf->leaf_tb__DOT__in_cos[8U] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[8U];
    vlSelf->leaf_tb__DOT__in_cos[9U] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[9U];
    vlSelf->leaf_tb__DOT__in_cos[0xaU] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[0xaU];
    vlSelf->leaf_tb__DOT__in_cos[0xbU] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[0xbU];
    vlSelf->leaf_tb__DOT__in_cos[0xcU] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[0xcU];
    vlSelf->leaf_tb__DOT__in_cos[0xdU] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[0xdU];
    vlSelf->leaf_tb__DOT__in_cos[0xeU] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[0xeU];
    vlSelf->leaf_tb__DOT__in_cos[0xfU] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[0xfU];
    vlSelf->leaf_tb__DOT__in_cos[0x10U] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[0x10U];
    vlSelf->leaf_tb__DOT__in_cos[0x11U] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[0x11U];
    vlSelf->leaf_tb__DOT__in_cos[0x12U] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[0x12U];
    vlSelf->leaf_tb__DOT__in_cos[0x13U] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[0x13U];
    vlSelf->leaf_tb__DOT__in_cos[0x14U] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[0x14U];
    vlSelf->leaf_tb__DOT__in_cos[0x15U] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[0x15U];
    vlSelf->leaf_tb__DOT__in_cos[0x16U] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[0x16U];
    vlSelf->leaf_tb__DOT__in_cos[0x17U] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[0x17U];
    vlSelf->leaf_tb__DOT__in_cos[0x18U] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[0x18U];
    vlSelf->leaf_tb__DOT__in_cos[0x19U] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[0x19U];
    vlSelf->leaf_tb__DOT__in_cos[0x1aU] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[0x1aU];
    vlSelf->leaf_tb__DOT__in_cos[0x1bU] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[0x1bU];
    vlSelf->leaf_tb__DOT__in_cos[0x1cU] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[0x1cU];
    vlSelf->leaf_tb__DOT__in_cos[0x1dU] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[0x1dU];
    vlSelf->leaf_tb__DOT__in_cos[0x1eU] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[0x1eU];
    vlSelf->leaf_tb__DOT__in_cos[0x1fU] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[0x1fU];
    vlSelf->leaf_tb__DOT__in_sin[0U] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[0U];
    vlSelf->leaf_tb__DOT__in_sin[1U] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[1U];
    vlSelf->leaf_tb__DOT__in_sin[2U] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[2U];
    vlSelf->leaf_tb__DOT__in_sin[3U] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[3U];
    vlSelf->leaf_tb__DOT__in_sin[4U] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[4U];
    vlSelf->leaf_tb__DOT__in_sin[5U] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[5U];
    vlSelf->leaf_tb__DOT__in_sin[6U] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[6U];
    vlSelf->leaf_tb__DOT__in_sin[7U] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[7U];
    vlSelf->leaf_tb__DOT__in_sin[8U] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[8U];
    vlSelf->leaf_tb__DOT__in_sin[9U] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[9U];
    vlSelf->leaf_tb__DOT__in_sin[0xaU] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[0xaU];
    vlSelf->leaf_tb__DOT__in_sin[0xbU] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[0xbU];
    vlSelf->leaf_tb__DOT__in_sin[0xcU] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[0xcU];
    vlSelf->leaf_tb__DOT__in_sin[0xdU] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[0xdU];
    vlSelf->leaf_tb__DOT__in_sin[0xeU] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[0xeU];
    vlSelf->leaf_tb__DOT__in_sin[0xfU] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[0xfU];
    vlSelf->leaf_tb__DOT__in_sin[0x10U] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[0x10U];
    vlSelf->leaf_tb__DOT__in_sin[0x11U] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[0x11U];
    vlSelf->leaf_tb__DOT__in_sin[0x12U] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[0x12U];
    vlSelf->leaf_tb__DOT__in_sin[0x13U] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[0x13U];
    vlSelf->leaf_tb__DOT__in_sin[0x14U] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[0x14U];
    vlSelf->leaf_tb__DOT__in_sin[0x15U] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[0x15U];
    vlSelf->leaf_tb__DOT__in_sin[0x16U] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[0x16U];
    vlSelf->leaf_tb__DOT__in_sin[0x17U] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[0x17U];
    vlSelf->leaf_tb__DOT__in_sin[0x18U] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[0x18U];
    vlSelf->leaf_tb__DOT__in_sin[0x19U] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[0x19U];
    vlSelf->leaf_tb__DOT__in_sin[0x1aU] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[0x1aU];
    vlSelf->leaf_tb__DOT__in_sin[0x1bU] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[0x1bU];
    vlSelf->leaf_tb__DOT__in_sin[0x1cU] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[0x1cU];
    vlSelf->leaf_tb__DOT__in_sin[0x1dU] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[0x1dU];
    vlSelf->leaf_tb__DOT__in_sin[0x1eU] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[0x1eU];
    vlSelf->leaf_tb__DOT__in_sin[0x1fU] = Vleaf_tb__ConstPool__CONST_hd6b7ba52_0[0x1fU];
    vlSelf->leaf_tb__DOT__case_id = 0U;
}

VL_ATTR_COLD void Vleaf_tb___024root___eval_initial__TOP(Vleaf_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleaf_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleaf_tb___024root___eval_initial__TOP\n"); );
    // Init
    CData/*5:0*/ __Vfunc_leading_zero32__1169__Vfuncout;
    __Vfunc_leading_zero32__1169__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_leading_zero32__1169__part;
    __Vfunc_leading_zero32__1169__part = 0;
    CData/*5:0*/ __Vfunc_leading_zero32__1169__count;
    __Vfunc_leading_zero32__1169__count = 0;
    // Body
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__inverse_root__DOT__shift_a 
        = (0x3fU & (([&]() {
                    __Vfunc_leading_zero32__1169__part = 0x800000U;
                    __Vfunc_leading_zero32__1169__count = 0U;
                    __Vfunc_leading_zero32__1169__count 
                        = (0x3fU & ((IData)(8U) + (IData)(__Vfunc_leading_zero32__1169__count)));
                    __Vfunc_leading_zero32__1169__part 
                        = VL_SHIFTL_III(32,32,32, __Vfunc_leading_zero32__1169__part, 8U);
                    if ((0U == (__Vfunc_leading_zero32__1169__part 
                                >> 0x1cU))) {
                        __Vfunc_leading_zero32__1169__count 
                            = (0x3fU & ((IData)(4U) 
                                        + (IData)(__Vfunc_leading_zero32__1169__count)));
                        __Vfunc_leading_zero32__1169__part 
                            = VL_SHIFTL_III(32,32,32, __Vfunc_leading_zero32__1169__part, 4U);
                    }
                    if ((0U == (__Vfunc_leading_zero32__1169__part 
                                >> 0x1eU))) {
                        __Vfunc_leading_zero32__1169__count 
                            = (0x3fU & ((IData)(2U) 
                                        + (IData)(__Vfunc_leading_zero32__1169__count)));
                        __Vfunc_leading_zero32__1169__part 
                            = VL_SHIFTL_III(32,32,32, __Vfunc_leading_zero32__1169__part, 2U);
                    }
                    if ((1U & (~ (__Vfunc_leading_zero32__1169__part 
                                  >> 0x1fU)))) {
                        __Vfunc_leading_zero32__1169__count 
                            = (0x3fU & ((IData)(1U) 
                                        + (IData)(__Vfunc_leading_zero32__1169__count)));
                    }
                    __Vfunc_leading_zero32__1169__Vfuncout 
                        = __Vfunc_leading_zero32__1169__count;
                }(), (IData)(__Vfunc_leading_zero32__1169__Vfuncout)) 
                    - (IData)(8U)));
}

VL_ATTR_COLD void Vleaf_tb___024root___eval_final(Vleaf_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleaf_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleaf_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vleaf_tb___024root___dump_triggers__stl(Vleaf_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vleaf_tb___024root___eval_phase__stl(Vleaf_tb___024root* vlSelf);

VL_ATTR_COLD void Vleaf_tb___024root___eval_settle(Vleaf_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleaf_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleaf_tb___024root___eval_settle\n"); );
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
            Vleaf_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("evidence/l1-numerical-qk-20261103T080908Z-c36ef4fc/qk_tb.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vleaf_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vleaf_tb___024root___dump_triggers__stl(Vleaf_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleaf_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleaf_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vleaf_tb___024root___stl_sequent__TOP__0(Vleaf_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleaf_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleaf_tb___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__pair_failed 
        = (1U & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[0U] 
                 | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[2U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__pair_failed 
        = (1U & ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[0U] 
                  | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[2U]) 
                 >> 1U));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__pair_failed 
        = (1U & ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[0U] 
                  | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[2U]) 
                 >> 2U));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__pair_failed 
        = (1U & ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[0U] 
                  | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[2U]) 
                 >> 3U));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__pair_failed 
        = (1U & ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[0U] 
                  | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[2U]) 
                 >> 4U));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__pair_failed 
        = (1U & ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[0U] 
                  | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[2U]) 
                 >> 5U));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__pair_failed 
        = (1U & ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[0U] 
                  | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[2U]) 
                 >> 6U));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__pair_failed 
        = (1U & ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[0U] 
                  | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[2U]) 
                 >> 7U));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__pair_failed 
        = (1U & ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[0U] 
                  | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[2U]) 
                 >> 8U));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__pair_failed 
        = (1U & ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[0U] 
                  | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[2U]) 
                 >> 9U));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__pair_failed 
        = (1U & ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[0U] 
                  | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[2U]) 
                 >> 0xaU));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__pair_failed 
        = (1U & ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[0U] 
                  | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[2U]) 
                 >> 0xbU));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__pair_failed 
        = (1U & ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[0U] 
                  | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[2U]) 
                 >> 0xcU));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__pair_failed 
        = (1U & ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[0U] 
                  | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[2U]) 
                 >> 0xdU));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__pair_failed 
        = (1U & ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[0U] 
                  | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[2U]) 
                 >> 0xeU));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__pair_failed 
        = (1U & ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[0U] 
                  | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[2U]) 
                 >> 0xfU));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__pair_failed 
        = (1U & ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[0U] 
                  | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[2U]) 
                 >> 0x10U));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__pair_failed 
        = (1U & ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[0U] 
                  | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[2U]) 
                 >> 0x11U));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__pair_failed 
        = (1U & ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[0U] 
                  | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[2U]) 
                 >> 0x12U));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__pair_failed 
        = (1U & ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[0U] 
                  | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[2U]) 
                 >> 0x13U));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__pair_failed 
        = (1U & ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[0U] 
                  | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[2U]) 
                 >> 0x14U));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__pair_failed 
        = (1U & ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[0U] 
                  | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[2U]) 
                 >> 0x15U));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__pair_failed 
        = (1U & ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[0U] 
                  | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[2U]) 
                 >> 0x16U));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__pair_failed 
        = (1U & ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[0U] 
                  | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[2U]) 
                 >> 0x17U));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__pair_failed 
        = (1U & ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[0U] 
                  | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[2U]) 
                 >> 0x18U));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__pair_failed 
        = (1U & ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[0U] 
                  | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[2U]) 
                 >> 0x19U));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__pair_failed 
        = (1U & ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[0U] 
                  | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[2U]) 
                 >> 0x1aU));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__pair_failed 
        = (1U & ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[0U] 
                  | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[2U]) 
                 >> 0x1bU));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__pair_failed 
        = (1U & ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[0U] 
                  | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[2U]) 
                 >> 0x1cU));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__pair_failed 
        = (1U & ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[0U] 
                  | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[2U]) 
                 >> 0x1dU));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__pair_failed 
        = (1U & ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[0U] 
                  | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[2U]) 
                 >> 0x1eU));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__pair_failed 
        = ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[0U] 
            | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[2U]) 
           >> 0x1fU);
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__pair_failed 
        = (1U & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[1U] 
                 | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[3U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__pair_failed 
        = (1U & ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[1U] 
                  | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[3U]) 
                 >> 1U));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__pair_failed 
        = (1U & ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[1U] 
                  | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[3U]) 
                 >> 2U));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__pair_failed 
        = (1U & ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[1U] 
                  | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[3U]) 
                 >> 3U));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__pair_failed 
        = (1U & ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[1U] 
                  | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[3U]) 
                 >> 4U));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__pair_failed 
        = (1U & ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[1U] 
                  | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[3U]) 
                 >> 5U));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__pair_failed 
        = (1U & ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[1U] 
                  | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[3U]) 
                 >> 6U));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__pair_failed 
        = (1U & ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[1U] 
                  | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[3U]) 
                 >> 7U));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__pair_failed 
        = (1U & ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[1U] 
                  | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[3U]) 
                 >> 8U));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__pair_failed 
        = (1U & ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[1U] 
                  | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[3U]) 
                 >> 9U));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__pair_failed 
        = (1U & ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[1U] 
                  | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[3U]) 
                 >> 0xaU));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__pair_failed 
        = (1U & ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[1U] 
                  | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[3U]) 
                 >> 0xbU));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__pair_failed 
        = (1U & ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[1U] 
                  | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[3U]) 
                 >> 0xcU));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__pair_failed 
        = (1U & ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[1U] 
                  | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[3U]) 
                 >> 0xdU));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__pair_failed 
        = (1U & ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[1U] 
                  | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[3U]) 
                 >> 0xeU));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__pair_failed 
        = (1U & ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[1U] 
                  | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[3U]) 
                 >> 0xfU));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__pair_failed 
        = (1U & ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[1U] 
                  | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[3U]) 
                 >> 0x10U));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__pair_failed 
        = (1U & ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[1U] 
                  | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[3U]) 
                 >> 0x11U));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__pair_failed 
        = (1U & ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[1U] 
                  | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[3U]) 
                 >> 0x12U));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__pair_failed 
        = (1U & ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[1U] 
                  | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[3U]) 
                 >> 0x13U));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__pair_failed 
        = (1U & ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[1U] 
                  | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[3U]) 
                 >> 0x14U));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__pair_failed 
        = (1U & ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[1U] 
                  | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[3U]) 
                 >> 0x15U));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__pair_failed 
        = (1U & ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[1U] 
                  | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[3U]) 
                 >> 0x16U));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__pair_failed 
        = (1U & ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[1U] 
                  | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[3U]) 
                 >> 0x17U));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__pair_failed 
        = (1U & ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[1U] 
                  | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[3U]) 
                 >> 0x18U));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__pair_failed 
        = (1U & ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[1U] 
                  | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[3U]) 
                 >> 0x19U));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__pair_failed 
        = (1U & ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[1U] 
                  | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[3U]) 
                 >> 0x1aU));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__pair_failed 
        = (1U & ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[1U] 
                  | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[3U]) 
                 >> 0x1bU));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__pair_failed 
        = (1U & ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[1U] 
                  | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[3U]) 
                 >> 0x1cU));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__pair_failed 
        = (1U & ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[1U] 
                  | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[3U]) 
                 >> 0x1dU));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__pair_failed 
        = (1U & ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[1U] 
                  | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[3U]) 
                 >> 0x1eU));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__pair_failed 
        = ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[1U] 
            | vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_failed[3U]) 
           >> 0x1fU);
    vlSelf->__VdfgTmp_h817ebf30__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h82c5b7b3__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h1fd61e76__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[1U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[1U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h9cb924e4__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[1U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[1U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hcda41025__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[2U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[2U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_ha4abb9be__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[2U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[2U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h12b1b04d__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[3U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[3U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h11aa6129__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[3U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[3U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h156226ac__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[4U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[4U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_he706736d__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[4U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[4U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h5c4e1a85__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[5U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[5U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_he1bd2177__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[5U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[5U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h4c8d569d__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[6U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[6U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h8828f228__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[6U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[6U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h20b0ce15__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[7U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[7U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h1dcf911a__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[7U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[7U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h58e36b6c__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[8U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[8U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h15632684__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[8U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[8U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h2cc4ea87__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[9U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[9U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h34d17b10__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[9U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[9U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hcb4a6ec6__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0xaU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0xaU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hdeecd929__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0xaU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0xaU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h82fe4251__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0xbU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0xbU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h5f07a0e3__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0xbU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0xbU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h828303df__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0xcU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0xcU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h5437ab61__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0xcU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0xcU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h7fadca17__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0xdU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0xdU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hbfbe143d__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0xdU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0xdU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h3a560dca__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0xeU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0xeU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hd63ed87c__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0xeU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0xeU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h43673c1d__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0xfU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0xfU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hb21ce7d2__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0xfU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0xfU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h9c7e4765__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x10U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x10U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h0e6ef6b9__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x10U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x10U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h4758f5aa__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x11U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x11U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hadaa1dc4__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x11U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x11U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h0f13d66c__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x12U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x12U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h49a59780__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x12U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x12U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h731d2514__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x13U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x13U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h3bda13e8__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x13U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x13U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h5b3ca3a1__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x14U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x14U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h73a7a660__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x14U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x14U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h708e4fd8__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x15U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x15U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h3d2a1c26__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x15U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x15U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hb43bca34__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x16U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x16U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h72f52c05__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x16U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x16U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h2dad3acc__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x17U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x17U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_ha900e6f2__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x17U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x17U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h4835c6f3__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x18U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x18U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_ha4daae40__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x18U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x18U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hc8ba4234__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x19U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x19U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h8b0ca038__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x19U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x19U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h16116284__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x1aU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x1aU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h3f8c0b78__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x1aU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x1aU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hb432464f__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x1bU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x1bU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hfe6b8934__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x1bU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x1bU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h3841b520__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x1cU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x1cU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h92451fda__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x1cU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x1cU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hebf4a1f9__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x1dU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x1dU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h3d080cf7__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x1dU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x1dU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h0934d342__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x1eU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x1eU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h006e01b1__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x1eU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x1eU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h5292e989__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x1fU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x1fU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h4b172d00__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x1fU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x1fU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h5cd92caf__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x20U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x20U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h05e172a8__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x20U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x20U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h0277f2a9__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x21U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x21U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hf32c9e93__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x21U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x21U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_ha1a8b310__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x22U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x22U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h24347767__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x22U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x22U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h293fe19c__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x23U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x23U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h12cb99d4__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x23U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x23U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hadeb1c57__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x24U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x24U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h6ff8b1b8__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x24U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x24U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h20fa281c__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x25U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x25U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h2e7c2826__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x25U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x25U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h31b1308c__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x26U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x26U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h77d82885__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x26U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x26U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h72af7300__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x27U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x27U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_ha24ed339__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x27U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x27U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_haa649ebd__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x28U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x28U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h6ab98c1b__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x28U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x28U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h7c3ee204__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x29U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x29U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h31f9e1f5__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x29U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x29U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h0e4d8a97__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x2aU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x2aU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hf6e8ad04__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x2aU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x2aU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hb96ca1fe__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x2bU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x2bU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h8b66b248__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x2bU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x2bU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h62654e28__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x2cU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x2cU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h308880ce__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x2cU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x2cU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h3f19f7f4__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x2dU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x2dU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h232275ca__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x2dU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x2dU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h6a9580d3__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x2eU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x2eU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hca0d343f__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x2eU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x2eU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_ha569e5d6__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x2fU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x2fU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hcf91d4bb__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x2fU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x2fU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h2bffe32c__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x30U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x30U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h65cb1566__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x30U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x30U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hdf843ad1__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x31U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x31U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h6596f47f__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x31U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x31U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h0ac48fcf__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x32U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x32U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h5f633fd1__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x32U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x32U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hdd12679b__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x33U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x33U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h75a9387b__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x33U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x33U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h40916094__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x34U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x34U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h459d7283__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x34U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x34U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h7166def3__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x35U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x35U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h18377a9d__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x35U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x35U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hdf5adf5b__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x36U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x36U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hcf5531de__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x36U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x36U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h52abcb8f__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x37U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x37U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_heeb7d16d__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x37U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x37U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_he7f1c078__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x38U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x38U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h64d5a053__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x38U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x38U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hcb7d2721__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x39U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x39U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hf0d14f15__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x39U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x39U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hea7d9731__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x3aU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x3aU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h1e499e97__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x3aU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x3aU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_he7d8d724__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x3bU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x3bU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hc1eab9f5__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x3bU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x3bU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hea16a8bd__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x3cU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x3cU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hfcd40c7b__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x3cU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x3cU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h742eac82__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x3dU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x3dU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h02b510cc__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x3dU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x3dU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h5c87044b__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x3eU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x3eU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h6fef414c__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x3eU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x3eU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h578d3d3e__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x3fU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x3fU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h2047c5b9__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x3fU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__captured[0x3fU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hf4eab645__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hd4053547__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h85e0c953__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[1U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[1U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h922851d8__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[1U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[1U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h981f814b__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[2U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[2U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h7abc3068__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[2U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[2U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hd8c0af3e__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[3U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[3U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hc0559376__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[3U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[3U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h7a507b03__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[4U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[4U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h5f2d3dce__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[4U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[4U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h68de4455__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[5U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[5U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h247b2b44__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[5U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[5U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    if ((0x358637bdU <= (0x7fffffffU & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__mean))) {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__large_value 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__mean;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__small_value = 0x358637bdU;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT____VdfgTmp_hdff701da__0 = 0x6bU;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT____VdfgTmp_h2fb2bceb__0 
            = (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__mean 
                        >> 0x17U));
    } else {
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__large_value = 0x358637bdU;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__small_value 
            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__mean;
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT____VdfgTmp_hdff701da__0 
            = (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__mean 
                        >> 0x17U));
        vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT____VdfgTmp_h2fb2bceb__0 = 0x6bU;
    }
    vlSelf->__VdfgTmp_hd79189ce__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[6U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[6U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h880c700e__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[6U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[6U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h5fb6d79b__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[7U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[7U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h886907dd__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[7U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[7U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h8cb730ec__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[8U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[8U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h3e066138__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[8U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[8U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h32a5e267__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[9U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[9U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h2ff3cac6__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[9U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[9U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hb573f6d0__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xaU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xaU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h5f687479__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xaU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xaU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h11786b1a__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xbU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xbU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hec4db751__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xbU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xbU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h28a44474__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xcU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xcU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h430d38f6__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xcU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xcU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hea4c22a7__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xdU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xdU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h601ea6ae__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xdU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xdU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h5ddcd699__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xeU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xeU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hc4ef5efa__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xeU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xeU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h13bbfc45__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xfU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xfU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hedfa9609__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xfU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0xfU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h2ee59946__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x10U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x10U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h2edefea1__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x10U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x10U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h76f3d4ea__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x11U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x11U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hd12a0cab__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x11U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x11U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h25971c93__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x12U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x12U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h7efff09e__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x12U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x12U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h816224f9__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x13U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x13U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hf6cf27b5__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x13U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x13U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h4da4248a__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x14U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x14U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h1e404ffd__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x14U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x14U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h60bd99a6__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x15U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x15U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h2530967f__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x15U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x15U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h6f2de519__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x16U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x16U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h598890bb__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x16U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x16U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hcf0cc6f3__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x17U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x17U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h40329486__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x17U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x17U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hbfe27bec__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x18U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x18U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h9a6232b7__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x18U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x18U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h436f54f9__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x19U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x19U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h0c4b91ca__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x19U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x19U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h7130744e__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1aU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1aU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h324dcc8e__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1aU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1aU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hbe09f3d8__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1bU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1bU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h36194999__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1bU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1bU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h3de20bd4__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1cU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1cU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h12e48d91__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1cU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1cU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h563b1129__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1dU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1dU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h66f75808__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1dU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1dU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h3bbcedbd__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1eU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1eU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h83a6b049__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1eU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1eU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h33f6d3c1__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1fU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1fU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hf44755ab__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1fU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__cosine[0x1fU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h9cae445e__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_ha96271f0__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hb3169a5e__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[1U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[1U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_he4d8cc52__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[1U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[1U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h89cb6941__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[2U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[2U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h49315833__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[2U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[2U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h164b37d7__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[3U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[3U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h30f0d8db__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[3U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[3U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hb323fa59__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[4U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[4U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h2de74cc7__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[4U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[4U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h3b53c06f__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[5U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[5U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hc324e0e5__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[5U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[5U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hd8375777__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[6U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[6U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h20d4f84e__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[6U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[6U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h25f46121__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[7U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[7U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h39192405__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[7U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[7U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h4f97a210__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[8U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[8U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h4406c766__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[8U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[8U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hda86cc06__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[9U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[9U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hc31e1784__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[9U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[9U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_he3d06b83__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xaU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xaU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hf12a9271__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xaU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xaU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h3a024a3b__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xbU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xbU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h18491dd7__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xbU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xbU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h1a07cac0__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xcU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xcU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hf6bc6507__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xcU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xcU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h380ea269__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xdU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xdU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h3b4ff34b__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xdU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xdU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h78f0fc9b__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xeU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xeU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h3fb2f1b4__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xeU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xeU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h9a686063__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xfU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xfU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h541488f2__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xfU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0xfU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h0d069e7e__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x10U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x10U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hdf74c868__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x10U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x10U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hc4fbc23e__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x11U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x11U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hd1d2a555__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x11U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x11U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h4a96adf2__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x12U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x12U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h479fbaca__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x12U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x12U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hf280a01e__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x13U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x13U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h3f9d3627__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x13U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x13U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h40ae0d3d__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x14U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x14U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h484227ac__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x14U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x14U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_ha16e1ef0__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x15U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x15U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h8ffa5a86__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x15U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x15U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hd16fb46e__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x16U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x16U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h974140db__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x16U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x16U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h330c5c22__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x17U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x17U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h677fa228__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x17U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x17U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h09303461__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x18U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x18U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hba60878d__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x18U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x18U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h6d0d5d1e__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x19U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x19U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h4aabe340__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x19U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x19U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h48bb092a__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1aU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1aU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h462f6fb6__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1aU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1aU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hccf85aa2__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1bU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1bU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_he58a4bc6__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1bU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1bU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hc624b4a1__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1cU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1cU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hb698f069__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1cU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1cU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hb8e55088__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1dU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1dU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h58ec20f6__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1dU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1dU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h42b08632__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1eU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1eU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h1ebf7930__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1eU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1eU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h078cac1a__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1fU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1fU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hd0d5d094__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1fU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sine[0x1fU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h45e627dd__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h199d5006__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x20U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x20U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hdcfe23de__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hc53311ed__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x20U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x20U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_he7e1c4f5__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[1U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[1U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hb9fdfdf2__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x21U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x21U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hb63c1596__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[1U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[1U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h02aaa12f__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x21U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x21U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hf157bcc7__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[2U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[2U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h52c2a9b4__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x22U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x22U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h5a759a1d__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[2U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[2U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hef7fb168__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x22U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x22U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hed2d9fd6__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[3U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[3U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h43b15443__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x23U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x23U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hba05e26a__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[3U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[3U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hd7b32533__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x23U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x23U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h5a9b23d5__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[4U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[4U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h64f1224e__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x24U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x24U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hcdfceece__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[4U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[4U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h3d5e1e9b__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x24U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x24U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hea0a3b7d__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[5U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[5U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_haf21ca5a__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x25U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x25U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h294c191c__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[5U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[5U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h88132c01__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x25U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x25U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hb384eb02__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[6U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[6U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hadba17d3__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x26U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x26U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h0d732baa__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[6U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[6U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hd4af4551__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x26U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x26U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h49dc1c03__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[7U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[7U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h0f9db724__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x27U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x27U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h42d2f5fc__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[7U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[7U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hbdb887a1__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x27U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x27U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h2610196f__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[8U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[8U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_he38da782__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x28U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x28U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h0513c3f6__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[8U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[8U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h6cc115c3__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x28U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x28U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h2322b9dd__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[9U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[9U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h720f1220__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x29U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x29U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h8c9c477e__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[9U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[9U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h76482409__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x29U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x29U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hc4ec060b__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xaU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xaU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hb8425786__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2aU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2aU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hfc423fb3__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xaU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xaU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_he9413068__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2aU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2aU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h777444ee__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xbU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xbU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h257835a9__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2bU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2bU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h5d8da6b6__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xbU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xbU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h28222199__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2bU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2bU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_he8f8ae7d__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xcU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xcU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hceefd11c__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2cU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2cU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hac2ca728__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xcU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xcU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h222b9b37__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2cU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2cU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hfa076fcf__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xdU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xdU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h7d721446__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2dU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2dU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hb589ad3a__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xdU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xdU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h5443e14d__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2dU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2dU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h3003894a__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xeU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xeU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h1eddd8a9__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2eU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2eU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h9b27437c__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xeU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xeU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hd1c7c535__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2eU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2eU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h39dc2f2f__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xfU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xfU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hf69ed806__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2fU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2fU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h3ea387c7__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xfU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0xfU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h04b5e3ce__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2fU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x2fU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hbfd05aac__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x10U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x10U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h65624cf1__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x30U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x30U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h81d8596d__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x10U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x10U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hb399c408__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x30U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x30U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h5023a094__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x11U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x11U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hbe8ef6cd__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x31U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x31U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h48a28907__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x11U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x11U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h96f95ed8__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x31U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x31U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h8aec2bfe__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x12U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x12U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h3b10b2f7__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x32U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x32U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h52f6e2a6__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x12U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x12U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h6d824d59__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x32U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x32U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hf95a92cf__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x13U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x13U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_ha7bc620c__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x33U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x33U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h546530c3__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x13U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x13U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h91c86028__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x33U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x33U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h69489174__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x14U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x14U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hb77f6951__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x34U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x34U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hf5840f59__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x14U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x14U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h1e5cdbfe__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x34U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x34U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h99c7934c__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x15U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x15U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h0258d4fd__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x35U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x35U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_ha1240043__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x15U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x15U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h84b38828__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x35U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x35U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hbb98ede3__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x16U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x16U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hda5fb14c__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x36U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x36U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h79ad4db5__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x16U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x16U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h83e4fe90__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x36U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x36U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_ha9be69c2__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x17U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x17U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h017bbd37__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x37U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x37U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h152da7d1__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x17U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x17U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hb9f38882__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x37U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x37U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hd3c9da28__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x18U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x18U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_ha1162c63__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x38U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x38U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h80ba9c4b__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x18U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x18U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h8b1bc888__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x38U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x38U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h1ea247ec__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x19U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x19U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h64dc9207__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x39U] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x39U] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h6a363a09__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x19U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x19U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_ha1af1a58__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x39U] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x39U] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hdca4c897__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1aU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1aU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h40acd462__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3aU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3aU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_ha9990b0e__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1aU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1aU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h1ffb8caf__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3aU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3aU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_he1e6ad15__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1bU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1bU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h13e2c344__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3bU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3bU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hc8f01dc1__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1bU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1bU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h9231f654__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3bU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3bU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hf05f1afc__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1cU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1cU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hb417905b__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3cU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3cU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hef86f958__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1cU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1cU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hc2cc3da7__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3cU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3cU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h2f3287b8__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1dU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1dU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h9083bb0f__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3dU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3dU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h87a1d905__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1dU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1dU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h259b4ef4__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3dU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3dU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hfb11a759__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1eU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1eU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h6db86ad4__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3eU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3eU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h90ba55c8__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1eU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1eU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h7d732bb9__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3eU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3eU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h9887c683__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1fU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1fU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_h5dc56af2__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3fU] 
                                                 >> 7U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3fU] 
                                                          >> 7U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_hf8bcb846__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1fU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x1fU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->__VdfgTmp_he9af3245__0 = ((0U == (0xffU 
                                              & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3fU] 
                                                 >> 0x17U)))
                                       ? 0xf82U : (0xfffU 
                                                   & ((0xffU 
                                                       & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalized_head[0x3fU] 
                                                          >> 0x17U)) 
                                                      - (IData)(0x7fU))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__rotate_x__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__rotate_x__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__rotate_x__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__rotate_x__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__rotate_x__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__rotate_x__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__inverse_root__DOT__take_bit 
        = ((vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__inverse_root__DOT__remainder 
            << 1U) >= vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__inverse_root__DOT__divisor);
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1159__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__epsilon_add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1159__part 
                            = vlSelf->__Vfunc_leading_zero32__1159__value;
                        vlSelf->__Vfunc_leading_zero32__1159__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1159__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1159__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1159__count)));
                            vlSelf->__Vfunc_leading_zero32__1159__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1159__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1159__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1159__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1159__count)));
                            vlSelf->__Vfunc_leading_zero32__1159__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1159__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1159__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1159__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1159__count)));
                            vlSelf->__Vfunc_leading_zero32__1159__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1159__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1159__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1159__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1159__count)));
                            vlSelf->__Vfunc_leading_zero32__1159__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1159__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1159__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1159__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1159__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1159__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1159__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1159__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1159__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1943__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1943__part 
                            = vlSelf->__Vfunc_leading_zero32__1943__value;
                        vlSelf->__Vfunc_leading_zero32__1943__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1943__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1943__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1943__count)));
                            vlSelf->__Vfunc_leading_zero32__1943__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1943__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1943__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1943__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1943__count)));
                            vlSelf->__Vfunc_leading_zero32__1943__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1943__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1943__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1943__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1943__count)));
                            vlSelf->__Vfunc_leading_zero32__1943__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1943__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1943__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1943__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1943__count)));
                            vlSelf->__Vfunc_leading_zero32__1943__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1943__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1943__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1943__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1943__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1943__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1943__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1943__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1943__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1949__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1949__part 
                            = vlSelf->__Vfunc_leading_zero32__1949__value;
                        vlSelf->__Vfunc_leading_zero32__1949__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1949__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1949__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1949__count)));
                            vlSelf->__Vfunc_leading_zero32__1949__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1949__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1949__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1949__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1949__count)));
                            vlSelf->__Vfunc_leading_zero32__1949__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1949__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1949__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1949__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1949__count)));
                            vlSelf->__Vfunc_leading_zero32__1949__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1949__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1949__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1949__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1949__count)));
                            vlSelf->__Vfunc_leading_zero32__1949__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1949__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1949__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1949__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1949__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1949__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1949__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1949__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1949__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1955__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1955__part 
                            = vlSelf->__Vfunc_leading_zero32__1955__value;
                        vlSelf->__Vfunc_leading_zero32__1955__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1955__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1955__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1955__count)));
                            vlSelf->__Vfunc_leading_zero32__1955__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1955__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1955__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1955__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1955__count)));
                            vlSelf->__Vfunc_leading_zero32__1955__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1955__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1955__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1955__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1955__count)));
                            vlSelf->__Vfunc_leading_zero32__1955__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1955__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1955__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1955__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1955__count)));
                            vlSelf->__Vfunc_leading_zero32__1955__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1955__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1955__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1955__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1955__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1955__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1955__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1955__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1955__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1961__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1961__part 
                            = vlSelf->__Vfunc_leading_zero32__1961__value;
                        vlSelf->__Vfunc_leading_zero32__1961__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1961__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1961__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1961__count)));
                            vlSelf->__Vfunc_leading_zero32__1961__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1961__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1961__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1961__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1961__count)));
                            vlSelf->__Vfunc_leading_zero32__1961__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1961__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1961__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1961__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1961__count)));
                            vlSelf->__Vfunc_leading_zero32__1961__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1961__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1961__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1961__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1961__count)));
                            vlSelf->__Vfunc_leading_zero32__1961__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1961__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1961__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1961__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1961__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1961__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1961__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1961__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1961__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1967__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1967__part 
                            = vlSelf->__Vfunc_leading_zero32__1967__value;
                        vlSelf->__Vfunc_leading_zero32__1967__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1967__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1967__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1967__count)));
                            vlSelf->__Vfunc_leading_zero32__1967__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1967__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1967__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1967__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1967__count)));
                            vlSelf->__Vfunc_leading_zero32__1967__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1967__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1967__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1967__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1967__count)));
                            vlSelf->__Vfunc_leading_zero32__1967__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1967__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1967__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1967__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1967__count)));
                            vlSelf->__Vfunc_leading_zero32__1967__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1967__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1967__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1967__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1967__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1967__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1967__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1967__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1967__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1973__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1973__part 
                            = vlSelf->__Vfunc_leading_zero32__1973__value;
                        vlSelf->__Vfunc_leading_zero32__1973__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1973__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1973__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1973__count)));
                            vlSelf->__Vfunc_leading_zero32__1973__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1973__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1973__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1973__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1973__count)));
                            vlSelf->__Vfunc_leading_zero32__1973__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1973__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1973__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1973__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1973__count)));
                            vlSelf->__Vfunc_leading_zero32__1973__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1973__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1973__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1973__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1973__count)));
                            vlSelf->__Vfunc_leading_zero32__1973__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1973__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1973__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1973__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1973__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1973__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1973__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1973__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1973__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1979__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1979__part 
                            = vlSelf->__Vfunc_leading_zero32__1979__value;
                        vlSelf->__Vfunc_leading_zero32__1979__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1979__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1979__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1979__count)));
                            vlSelf->__Vfunc_leading_zero32__1979__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1979__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1979__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1979__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1979__count)));
                            vlSelf->__Vfunc_leading_zero32__1979__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1979__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1979__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1979__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1979__count)));
                            vlSelf->__Vfunc_leading_zero32__1979__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1979__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1979__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1979__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1979__count)));
                            vlSelf->__Vfunc_leading_zero32__1979__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1979__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1979__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1979__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1979__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1979__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1979__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1979__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1979__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1985__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1985__part 
                            = vlSelf->__Vfunc_leading_zero32__1985__value;
                        vlSelf->__Vfunc_leading_zero32__1985__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1985__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1985__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1985__count)));
                            vlSelf->__Vfunc_leading_zero32__1985__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1985__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1985__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1985__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1985__count)));
                            vlSelf->__Vfunc_leading_zero32__1985__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1985__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1985__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1985__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1985__count)));
                            vlSelf->__Vfunc_leading_zero32__1985__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1985__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1985__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1985__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1985__count)));
                            vlSelf->__Vfunc_leading_zero32__1985__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1985__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1985__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1985__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1985__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1985__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1985__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1985__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1985__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1991__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1991__part 
                            = vlSelf->__Vfunc_leading_zero32__1991__value;
                        vlSelf->__Vfunc_leading_zero32__1991__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1991__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1991__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1991__count)));
                            vlSelf->__Vfunc_leading_zero32__1991__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1991__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1991__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1991__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1991__count)));
                            vlSelf->__Vfunc_leading_zero32__1991__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1991__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1991__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1991__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1991__count)));
                            vlSelf->__Vfunc_leading_zero32__1991__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1991__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1991__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1991__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1991__count)));
                            vlSelf->__Vfunc_leading_zero32__1991__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1991__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1991__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1991__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1991__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1991__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1991__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1991__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1991__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1997__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__1997__part 
                            = vlSelf->__Vfunc_leading_zero32__1997__value;
                        vlSelf->__Vfunc_leading_zero32__1997__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1997__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1997__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1997__count)));
                            vlSelf->__Vfunc_leading_zero32__1997__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1997__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1997__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1997__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1997__count)));
                            vlSelf->__Vfunc_leading_zero32__1997__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1997__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1997__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1997__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1997__count)));
                            vlSelf->__Vfunc_leading_zero32__1997__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1997__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1997__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1997__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1997__count)));
                            vlSelf->__Vfunc_leading_zero32__1997__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1997__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1997__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1997__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1997__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1997__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1997__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1997__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1997__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2003__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2003__part 
                            = vlSelf->__Vfunc_leading_zero32__2003__value;
                        vlSelf->__Vfunc_leading_zero32__2003__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2003__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2003__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2003__count)));
                            vlSelf->__Vfunc_leading_zero32__2003__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2003__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2003__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2003__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2003__count)));
                            vlSelf->__Vfunc_leading_zero32__2003__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2003__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2003__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2003__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2003__count)));
                            vlSelf->__Vfunc_leading_zero32__2003__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2003__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2003__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2003__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2003__count)));
                            vlSelf->__Vfunc_leading_zero32__2003__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2003__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2003__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2003__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2003__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2003__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2003__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2003__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2003__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2009__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2009__part 
                            = vlSelf->__Vfunc_leading_zero32__2009__value;
                        vlSelf->__Vfunc_leading_zero32__2009__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2009__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2009__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2009__count)));
                            vlSelf->__Vfunc_leading_zero32__2009__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2009__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2009__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2009__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2009__count)));
                            vlSelf->__Vfunc_leading_zero32__2009__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2009__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2009__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2009__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2009__count)));
                            vlSelf->__Vfunc_leading_zero32__2009__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2009__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2009__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2009__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2009__count)));
                            vlSelf->__Vfunc_leading_zero32__2009__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2009__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2009__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2009__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2009__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2009__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2009__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2009__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2009__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2015__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2015__part 
                            = vlSelf->__Vfunc_leading_zero32__2015__value;
                        vlSelf->__Vfunc_leading_zero32__2015__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2015__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2015__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2015__count)));
                            vlSelf->__Vfunc_leading_zero32__2015__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2015__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2015__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2015__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2015__count)));
                            vlSelf->__Vfunc_leading_zero32__2015__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2015__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2015__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2015__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2015__count)));
                            vlSelf->__Vfunc_leading_zero32__2015__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2015__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2015__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2015__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2015__count)));
                            vlSelf->__Vfunc_leading_zero32__2015__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2015__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2015__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2015__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2015__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2015__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2015__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2015__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2015__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2021__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2021__part 
                            = vlSelf->__Vfunc_leading_zero32__2021__value;
                        vlSelf->__Vfunc_leading_zero32__2021__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2021__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2021__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2021__count)));
                            vlSelf->__Vfunc_leading_zero32__2021__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2021__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2021__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2021__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2021__count)));
                            vlSelf->__Vfunc_leading_zero32__2021__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2021__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2021__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2021__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2021__count)));
                            vlSelf->__Vfunc_leading_zero32__2021__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2021__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2021__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2021__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2021__count)));
                            vlSelf->__Vfunc_leading_zero32__2021__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2021__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2021__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2021__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2021__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2021__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2021__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2021__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2021__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2027__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2027__part 
                            = vlSelf->__Vfunc_leading_zero32__2027__value;
                        vlSelf->__Vfunc_leading_zero32__2027__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2027__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2027__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2027__count)));
                            vlSelf->__Vfunc_leading_zero32__2027__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2027__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2027__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2027__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2027__count)));
                            vlSelf->__Vfunc_leading_zero32__2027__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2027__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2027__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2027__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2027__count)));
                            vlSelf->__Vfunc_leading_zero32__2027__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2027__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2027__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2027__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2027__count)));
                            vlSelf->__Vfunc_leading_zero32__2027__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2027__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2027__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2027__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2027__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2027__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2027__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2027__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2027__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2033__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2033__part 
                            = vlSelf->__Vfunc_leading_zero32__2033__value;
                        vlSelf->__Vfunc_leading_zero32__2033__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2033__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2033__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2033__count)));
                            vlSelf->__Vfunc_leading_zero32__2033__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2033__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2033__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2033__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2033__count)));
                            vlSelf->__Vfunc_leading_zero32__2033__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2033__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2033__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2033__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2033__count)));
                            vlSelf->__Vfunc_leading_zero32__2033__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2033__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2033__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2033__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2033__count)));
                            vlSelf->__Vfunc_leading_zero32__2033__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2033__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2033__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2033__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2033__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2033__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2033__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2033__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2033__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2039__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2039__part 
                            = vlSelf->__Vfunc_leading_zero32__2039__value;
                        vlSelf->__Vfunc_leading_zero32__2039__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2039__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2039__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2039__count)));
                            vlSelf->__Vfunc_leading_zero32__2039__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2039__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2039__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2039__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2039__count)));
                            vlSelf->__Vfunc_leading_zero32__2039__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2039__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2039__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2039__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2039__count)));
                            vlSelf->__Vfunc_leading_zero32__2039__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2039__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2039__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2039__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2039__count)));
                            vlSelf->__Vfunc_leading_zero32__2039__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2039__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2039__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2039__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2039__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2039__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2039__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2039__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2039__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2045__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2045__part 
                            = vlSelf->__Vfunc_leading_zero32__2045__value;
                        vlSelf->__Vfunc_leading_zero32__2045__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2045__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2045__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2045__count)));
                            vlSelf->__Vfunc_leading_zero32__2045__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2045__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2045__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2045__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2045__count)));
                            vlSelf->__Vfunc_leading_zero32__2045__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2045__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2045__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2045__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2045__count)));
                            vlSelf->__Vfunc_leading_zero32__2045__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2045__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2045__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2045__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2045__count)));
                            vlSelf->__Vfunc_leading_zero32__2045__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2045__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2045__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2045__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2045__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2045__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2045__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2045__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2045__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2051__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2051__part 
                            = vlSelf->__Vfunc_leading_zero32__2051__value;
                        vlSelf->__Vfunc_leading_zero32__2051__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2051__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2051__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2051__count)));
                            vlSelf->__Vfunc_leading_zero32__2051__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2051__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2051__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2051__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2051__count)));
                            vlSelf->__Vfunc_leading_zero32__2051__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2051__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2051__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2051__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2051__count)));
                            vlSelf->__Vfunc_leading_zero32__2051__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2051__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2051__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2051__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2051__count)));
                            vlSelf->__Vfunc_leading_zero32__2051__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2051__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2051__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2051__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2051__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2051__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2051__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2051__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2051__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2057__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2057__part 
                            = vlSelf->__Vfunc_leading_zero32__2057__value;
                        vlSelf->__Vfunc_leading_zero32__2057__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2057__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2057__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2057__count)));
                            vlSelf->__Vfunc_leading_zero32__2057__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2057__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2057__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2057__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2057__count)));
                            vlSelf->__Vfunc_leading_zero32__2057__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2057__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2057__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2057__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2057__count)));
                            vlSelf->__Vfunc_leading_zero32__2057__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2057__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2057__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2057__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2057__count)));
                            vlSelf->__Vfunc_leading_zero32__2057__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2057__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2057__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2057__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2057__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2057__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2057__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2057__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2057__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2063__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2063__part 
                            = vlSelf->__Vfunc_leading_zero32__2063__value;
                        vlSelf->__Vfunc_leading_zero32__2063__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2063__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2063__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2063__count)));
                            vlSelf->__Vfunc_leading_zero32__2063__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2063__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2063__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2063__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2063__count)));
                            vlSelf->__Vfunc_leading_zero32__2063__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2063__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2063__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2063__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2063__count)));
                            vlSelf->__Vfunc_leading_zero32__2063__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2063__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2063__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2063__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2063__count)));
                            vlSelf->__Vfunc_leading_zero32__2063__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2063__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2063__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2063__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2063__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2063__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2063__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2063__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2063__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2069__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2069__part 
                            = vlSelf->__Vfunc_leading_zero32__2069__value;
                        vlSelf->__Vfunc_leading_zero32__2069__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2069__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2069__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2069__count)));
                            vlSelf->__Vfunc_leading_zero32__2069__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2069__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2069__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2069__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2069__count)));
                            vlSelf->__Vfunc_leading_zero32__2069__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2069__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2069__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2069__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2069__count)));
                            vlSelf->__Vfunc_leading_zero32__2069__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2069__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2069__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2069__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2069__count)));
                            vlSelf->__Vfunc_leading_zero32__2069__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2069__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2069__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2069__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2069__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2069__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2069__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2069__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2069__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2075__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2075__part 
                            = vlSelf->__Vfunc_leading_zero32__2075__value;
                        vlSelf->__Vfunc_leading_zero32__2075__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2075__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2075__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2075__count)));
                            vlSelf->__Vfunc_leading_zero32__2075__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2075__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2075__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2075__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2075__count)));
                            vlSelf->__Vfunc_leading_zero32__2075__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2075__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2075__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2075__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2075__count)));
                            vlSelf->__Vfunc_leading_zero32__2075__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2075__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2075__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2075__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2075__count)));
                            vlSelf->__Vfunc_leading_zero32__2075__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2075__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2075__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2075__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2075__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2075__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2075__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2075__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2075__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2081__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2081__part 
                            = vlSelf->__Vfunc_leading_zero32__2081__value;
                        vlSelf->__Vfunc_leading_zero32__2081__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2081__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2081__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2081__count)));
                            vlSelf->__Vfunc_leading_zero32__2081__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2081__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2081__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2081__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2081__count)));
                            vlSelf->__Vfunc_leading_zero32__2081__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2081__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2081__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2081__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2081__count)));
                            vlSelf->__Vfunc_leading_zero32__2081__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2081__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2081__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2081__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2081__count)));
                            vlSelf->__Vfunc_leading_zero32__2081__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2081__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2081__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2081__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2081__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2081__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2081__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2081__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2081__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2087__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2087__part 
                            = vlSelf->__Vfunc_leading_zero32__2087__value;
                        vlSelf->__Vfunc_leading_zero32__2087__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2087__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2087__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2087__count)));
                            vlSelf->__Vfunc_leading_zero32__2087__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2087__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2087__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2087__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2087__count)));
                            vlSelf->__Vfunc_leading_zero32__2087__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2087__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2087__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2087__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2087__count)));
                            vlSelf->__Vfunc_leading_zero32__2087__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2087__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2087__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2087__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2087__count)));
                            vlSelf->__Vfunc_leading_zero32__2087__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2087__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2087__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2087__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2087__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2087__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2087__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2087__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2087__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2093__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2093__part 
                            = vlSelf->__Vfunc_leading_zero32__2093__value;
                        vlSelf->__Vfunc_leading_zero32__2093__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2093__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2093__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2093__count)));
                            vlSelf->__Vfunc_leading_zero32__2093__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2093__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2093__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2093__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2093__count)));
                            vlSelf->__Vfunc_leading_zero32__2093__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2093__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2093__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2093__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2093__count)));
                            vlSelf->__Vfunc_leading_zero32__2093__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2093__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2093__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2093__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2093__count)));
                            vlSelf->__Vfunc_leading_zero32__2093__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2093__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2093__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2093__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2093__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2093__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2093__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2093__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2093__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2099__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2099__part 
                            = vlSelf->__Vfunc_leading_zero32__2099__value;
                        vlSelf->__Vfunc_leading_zero32__2099__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2099__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2099__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2099__count)));
                            vlSelf->__Vfunc_leading_zero32__2099__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2099__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2099__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2099__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2099__count)));
                            vlSelf->__Vfunc_leading_zero32__2099__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2099__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2099__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2099__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2099__count)));
                            vlSelf->__Vfunc_leading_zero32__2099__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2099__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2099__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2099__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2099__count)));
                            vlSelf->__Vfunc_leading_zero32__2099__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2099__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2099__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2099__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2099__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2099__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2099__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2099__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2099__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2105__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2105__part 
                            = vlSelf->__Vfunc_leading_zero32__2105__value;
                        vlSelf->__Vfunc_leading_zero32__2105__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2105__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2105__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2105__count)));
                            vlSelf->__Vfunc_leading_zero32__2105__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2105__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2105__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2105__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2105__count)));
                            vlSelf->__Vfunc_leading_zero32__2105__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2105__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2105__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2105__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2105__count)));
                            vlSelf->__Vfunc_leading_zero32__2105__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2105__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2105__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2105__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2105__count)));
                            vlSelf->__Vfunc_leading_zero32__2105__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2105__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2105__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2105__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2105__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2105__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2105__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2105__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2105__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2111__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2111__part 
                            = vlSelf->__Vfunc_leading_zero32__2111__value;
                        vlSelf->__Vfunc_leading_zero32__2111__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2111__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2111__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2111__count)));
                            vlSelf->__Vfunc_leading_zero32__2111__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2111__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2111__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2111__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2111__count)));
                            vlSelf->__Vfunc_leading_zero32__2111__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2111__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2111__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2111__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2111__count)));
                            vlSelf->__Vfunc_leading_zero32__2111__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2111__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2111__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2111__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2111__count)));
                            vlSelf->__Vfunc_leading_zero32__2111__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2111__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2111__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2111__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2111__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2111__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2111__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2111__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2111__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2117__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2117__part 
                            = vlSelf->__Vfunc_leading_zero32__2117__value;
                        vlSelf->__Vfunc_leading_zero32__2117__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2117__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2117__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2117__count)));
                            vlSelf->__Vfunc_leading_zero32__2117__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2117__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2117__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2117__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2117__count)));
                            vlSelf->__Vfunc_leading_zero32__2117__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2117__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2117__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2117__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2117__count)));
                            vlSelf->__Vfunc_leading_zero32__2117__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2117__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2117__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2117__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2117__count)));
                            vlSelf->__Vfunc_leading_zero32__2117__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2117__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2117__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2117__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2117__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2117__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2117__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2117__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2117__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2123__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2123__part 
                            = vlSelf->__Vfunc_leading_zero32__2123__value;
                        vlSelf->__Vfunc_leading_zero32__2123__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2123__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2123__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2123__count)));
                            vlSelf->__Vfunc_leading_zero32__2123__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2123__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2123__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2123__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2123__count)));
                            vlSelf->__Vfunc_leading_zero32__2123__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2123__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2123__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2123__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2123__count)));
                            vlSelf->__Vfunc_leading_zero32__2123__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2123__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2123__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2123__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2123__count)));
                            vlSelf->__Vfunc_leading_zero32__2123__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2123__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2123__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2123__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2123__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2123__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2123__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2123__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2123__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2129__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2129__part 
                            = vlSelf->__Vfunc_leading_zero32__2129__value;
                        vlSelf->__Vfunc_leading_zero32__2129__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2129__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2129__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2129__count)));
                            vlSelf->__Vfunc_leading_zero32__2129__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2129__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2129__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2129__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2129__count)));
                            vlSelf->__Vfunc_leading_zero32__2129__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2129__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2129__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2129__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2129__count)));
                            vlSelf->__Vfunc_leading_zero32__2129__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2129__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2129__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2129__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2129__count)));
                            vlSelf->__Vfunc_leading_zero32__2129__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2129__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2129__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2129__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2129__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2129__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2129__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2129__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2129__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2135__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2135__part 
                            = vlSelf->__Vfunc_leading_zero32__2135__value;
                        vlSelf->__Vfunc_leading_zero32__2135__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2135__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2135__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2135__count)));
                            vlSelf->__Vfunc_leading_zero32__2135__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2135__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2135__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2135__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2135__count)));
                            vlSelf->__Vfunc_leading_zero32__2135__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2135__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2135__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2135__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2135__count)));
                            vlSelf->__Vfunc_leading_zero32__2135__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2135__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2135__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2135__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2135__count)));
                            vlSelf->__Vfunc_leading_zero32__2135__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2135__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2135__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2135__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2135__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2135__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2135__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2135__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2135__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2141__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2141__part 
                            = vlSelf->__Vfunc_leading_zero32__2141__value;
                        vlSelf->__Vfunc_leading_zero32__2141__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2141__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2141__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2141__count)));
                            vlSelf->__Vfunc_leading_zero32__2141__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2141__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2141__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2141__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2141__count)));
                            vlSelf->__Vfunc_leading_zero32__2141__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2141__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2141__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2141__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2141__count)));
                            vlSelf->__Vfunc_leading_zero32__2141__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2141__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2141__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2141__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2141__count)));
                            vlSelf->__Vfunc_leading_zero32__2141__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2141__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2141__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2141__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2141__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2141__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2141__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2141__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2141__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2147__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2147__part 
                            = vlSelf->__Vfunc_leading_zero32__2147__value;
                        vlSelf->__Vfunc_leading_zero32__2147__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2147__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2147__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2147__count)));
                            vlSelf->__Vfunc_leading_zero32__2147__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2147__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2147__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2147__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2147__count)));
                            vlSelf->__Vfunc_leading_zero32__2147__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2147__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2147__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2147__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2147__count)));
                            vlSelf->__Vfunc_leading_zero32__2147__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2147__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2147__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2147__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2147__count)));
                            vlSelf->__Vfunc_leading_zero32__2147__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2147__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2147__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2147__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2147__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2147__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2147__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2147__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2147__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2153__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2153__part 
                            = vlSelf->__Vfunc_leading_zero32__2153__value;
                        vlSelf->__Vfunc_leading_zero32__2153__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2153__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2153__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2153__count)));
                            vlSelf->__Vfunc_leading_zero32__2153__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2153__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2153__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2153__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2153__count)));
                            vlSelf->__Vfunc_leading_zero32__2153__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2153__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2153__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2153__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2153__count)));
                            vlSelf->__Vfunc_leading_zero32__2153__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2153__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2153__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2153__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2153__count)));
                            vlSelf->__Vfunc_leading_zero32__2153__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2153__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2153__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2153__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2153__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2153__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2153__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2153__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2153__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2159__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2159__part 
                            = vlSelf->__Vfunc_leading_zero32__2159__value;
                        vlSelf->__Vfunc_leading_zero32__2159__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2159__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2159__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2159__count)));
                            vlSelf->__Vfunc_leading_zero32__2159__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2159__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2159__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2159__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2159__count)));
                            vlSelf->__Vfunc_leading_zero32__2159__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2159__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2159__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2159__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2159__count)));
                            vlSelf->__Vfunc_leading_zero32__2159__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2159__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2159__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2159__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2159__count)));
                            vlSelf->__Vfunc_leading_zero32__2159__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2159__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2159__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2159__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2159__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2159__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2159__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2159__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2159__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2165__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2165__part 
                            = vlSelf->__Vfunc_leading_zero32__2165__value;
                        vlSelf->__Vfunc_leading_zero32__2165__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2165__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2165__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2165__count)));
                            vlSelf->__Vfunc_leading_zero32__2165__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2165__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2165__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2165__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2165__count)));
                            vlSelf->__Vfunc_leading_zero32__2165__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2165__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2165__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2165__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2165__count)));
                            vlSelf->__Vfunc_leading_zero32__2165__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2165__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2165__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2165__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2165__count)));
                            vlSelf->__Vfunc_leading_zero32__2165__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2165__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2165__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2165__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2165__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2165__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2165__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2165__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2165__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2171__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2171__part 
                            = vlSelf->__Vfunc_leading_zero32__2171__value;
                        vlSelf->__Vfunc_leading_zero32__2171__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2171__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2171__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2171__count)));
                            vlSelf->__Vfunc_leading_zero32__2171__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2171__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2171__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2171__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2171__count)));
                            vlSelf->__Vfunc_leading_zero32__2171__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2171__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2171__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2171__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2171__count)));
                            vlSelf->__Vfunc_leading_zero32__2171__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2171__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2171__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2171__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2171__count)));
                            vlSelf->__Vfunc_leading_zero32__2171__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2171__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2171__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2171__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2171__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2171__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2171__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2171__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2171__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2177__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2177__part 
                            = vlSelf->__Vfunc_leading_zero32__2177__value;
                        vlSelf->__Vfunc_leading_zero32__2177__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2177__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2177__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2177__count)));
                            vlSelf->__Vfunc_leading_zero32__2177__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2177__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2177__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2177__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2177__count)));
                            vlSelf->__Vfunc_leading_zero32__2177__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2177__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2177__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2177__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2177__count)));
                            vlSelf->__Vfunc_leading_zero32__2177__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2177__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2177__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2177__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2177__count)));
                            vlSelf->__Vfunc_leading_zero32__2177__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2177__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2177__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2177__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2177__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2177__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2177__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2177__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2177__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2183__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2183__part 
                            = vlSelf->__Vfunc_leading_zero32__2183__value;
                        vlSelf->__Vfunc_leading_zero32__2183__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2183__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2183__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2183__count)));
                            vlSelf->__Vfunc_leading_zero32__2183__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2183__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2183__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2183__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2183__count)));
                            vlSelf->__Vfunc_leading_zero32__2183__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2183__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2183__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2183__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2183__count)));
                            vlSelf->__Vfunc_leading_zero32__2183__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2183__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2183__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2183__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2183__count)));
                            vlSelf->__Vfunc_leading_zero32__2183__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2183__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2183__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2183__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2183__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2183__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2183__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2183__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2183__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2189__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2189__part 
                            = vlSelf->__Vfunc_leading_zero32__2189__value;
                        vlSelf->__Vfunc_leading_zero32__2189__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2189__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2189__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2189__count)));
                            vlSelf->__Vfunc_leading_zero32__2189__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2189__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2189__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2189__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2189__count)));
                            vlSelf->__Vfunc_leading_zero32__2189__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2189__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2189__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2189__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2189__count)));
                            vlSelf->__Vfunc_leading_zero32__2189__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2189__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2189__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2189__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2189__count)));
                            vlSelf->__Vfunc_leading_zero32__2189__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2189__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2189__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2189__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2189__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2189__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2189__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2189__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2189__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2195__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2195__part 
                            = vlSelf->__Vfunc_leading_zero32__2195__value;
                        vlSelf->__Vfunc_leading_zero32__2195__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2195__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2195__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2195__count)));
                            vlSelf->__Vfunc_leading_zero32__2195__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2195__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2195__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2195__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2195__count)));
                            vlSelf->__Vfunc_leading_zero32__2195__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2195__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2195__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2195__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2195__count)));
                            vlSelf->__Vfunc_leading_zero32__2195__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2195__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2195__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2195__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2195__count)));
                            vlSelf->__Vfunc_leading_zero32__2195__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2195__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2195__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2195__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2195__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2195__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2195__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2195__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2195__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2201__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2201__part 
                            = vlSelf->__Vfunc_leading_zero32__2201__value;
                        vlSelf->__Vfunc_leading_zero32__2201__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2201__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2201__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2201__count)));
                            vlSelf->__Vfunc_leading_zero32__2201__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2201__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2201__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2201__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2201__count)));
                            vlSelf->__Vfunc_leading_zero32__2201__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2201__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2201__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2201__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2201__count)));
                            vlSelf->__Vfunc_leading_zero32__2201__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2201__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2201__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2201__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2201__count)));
                            vlSelf->__Vfunc_leading_zero32__2201__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2201__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2201__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2201__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2201__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2201__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2201__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2201__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2201__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2207__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2207__part 
                            = vlSelf->__Vfunc_leading_zero32__2207__value;
                        vlSelf->__Vfunc_leading_zero32__2207__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2207__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2207__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2207__count)));
                            vlSelf->__Vfunc_leading_zero32__2207__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2207__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2207__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2207__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2207__count)));
                            vlSelf->__Vfunc_leading_zero32__2207__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2207__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2207__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2207__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2207__count)));
                            vlSelf->__Vfunc_leading_zero32__2207__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2207__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2207__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2207__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2207__count)));
                            vlSelf->__Vfunc_leading_zero32__2207__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2207__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2207__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2207__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2207__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2207__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2207__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2207__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2207__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2213__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2213__part 
                            = vlSelf->__Vfunc_leading_zero32__2213__value;
                        vlSelf->__Vfunc_leading_zero32__2213__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2213__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2213__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2213__count)));
                            vlSelf->__Vfunc_leading_zero32__2213__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2213__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2213__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2213__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2213__count)));
                            vlSelf->__Vfunc_leading_zero32__2213__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2213__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2213__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2213__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2213__count)));
                            vlSelf->__Vfunc_leading_zero32__2213__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2213__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2213__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2213__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2213__count)));
                            vlSelf->__Vfunc_leading_zero32__2213__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2213__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2213__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2213__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2213__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2213__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2213__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2213__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2213__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2219__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2219__part 
                            = vlSelf->__Vfunc_leading_zero32__2219__value;
                        vlSelf->__Vfunc_leading_zero32__2219__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2219__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2219__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2219__count)));
                            vlSelf->__Vfunc_leading_zero32__2219__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2219__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2219__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2219__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2219__count)));
                            vlSelf->__Vfunc_leading_zero32__2219__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2219__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2219__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2219__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2219__count)));
                            vlSelf->__Vfunc_leading_zero32__2219__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2219__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2219__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2219__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2219__count)));
                            vlSelf->__Vfunc_leading_zero32__2219__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2219__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2219__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2219__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2219__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2219__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2219__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2219__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2219__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2225__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2225__part 
                            = vlSelf->__Vfunc_leading_zero32__2225__value;
                        vlSelf->__Vfunc_leading_zero32__2225__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2225__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2225__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2225__count)));
                            vlSelf->__Vfunc_leading_zero32__2225__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2225__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2225__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2225__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2225__count)));
                            vlSelf->__Vfunc_leading_zero32__2225__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2225__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2225__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2225__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2225__count)));
                            vlSelf->__Vfunc_leading_zero32__2225__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2225__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2225__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2225__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2225__count)));
                            vlSelf->__Vfunc_leading_zero32__2225__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2225__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2225__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2225__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2225__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2225__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2225__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2225__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2225__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2231__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2231__part 
                            = vlSelf->__Vfunc_leading_zero32__2231__value;
                        vlSelf->__Vfunc_leading_zero32__2231__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2231__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2231__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2231__count)));
                            vlSelf->__Vfunc_leading_zero32__2231__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2231__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2231__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2231__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2231__count)));
                            vlSelf->__Vfunc_leading_zero32__2231__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2231__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2231__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2231__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2231__count)));
                            vlSelf->__Vfunc_leading_zero32__2231__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2231__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2231__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2231__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2231__count)));
                            vlSelf->__Vfunc_leading_zero32__2231__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2231__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2231__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2231__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2231__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2231__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2231__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2231__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2231__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2237__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2237__part 
                            = vlSelf->__Vfunc_leading_zero32__2237__value;
                        vlSelf->__Vfunc_leading_zero32__2237__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2237__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2237__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2237__count)));
                            vlSelf->__Vfunc_leading_zero32__2237__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2237__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2237__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2237__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2237__count)));
                            vlSelf->__Vfunc_leading_zero32__2237__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2237__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2237__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2237__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2237__count)));
                            vlSelf->__Vfunc_leading_zero32__2237__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2237__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2237__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2237__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2237__count)));
                            vlSelf->__Vfunc_leading_zero32__2237__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2237__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2237__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2237__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2237__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2237__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2237__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2237__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2237__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2243__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2243__part 
                            = vlSelf->__Vfunc_leading_zero32__2243__value;
                        vlSelf->__Vfunc_leading_zero32__2243__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2243__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2243__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2243__count)));
                            vlSelf->__Vfunc_leading_zero32__2243__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2243__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2243__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2243__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2243__count)));
                            vlSelf->__Vfunc_leading_zero32__2243__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2243__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2243__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2243__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2243__count)));
                            vlSelf->__Vfunc_leading_zero32__2243__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2243__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2243__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2243__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2243__count)));
                            vlSelf->__Vfunc_leading_zero32__2243__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2243__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2243__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2243__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2243__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2243__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2243__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2243__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2243__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2249__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2249__part 
                            = vlSelf->__Vfunc_leading_zero32__2249__value;
                        vlSelf->__Vfunc_leading_zero32__2249__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2249__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2249__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2249__count)));
                            vlSelf->__Vfunc_leading_zero32__2249__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2249__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2249__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2249__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2249__count)));
                            vlSelf->__Vfunc_leading_zero32__2249__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2249__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2249__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2249__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2249__count)));
                            vlSelf->__Vfunc_leading_zero32__2249__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2249__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2249__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2249__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2249__count)));
                            vlSelf->__Vfunc_leading_zero32__2249__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2249__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2249__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2249__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2249__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2249__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2249__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2249__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2249__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2255__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2255__part 
                            = vlSelf->__Vfunc_leading_zero32__2255__value;
                        vlSelf->__Vfunc_leading_zero32__2255__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2255__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2255__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2255__count)));
                            vlSelf->__Vfunc_leading_zero32__2255__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2255__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2255__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2255__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2255__count)));
                            vlSelf->__Vfunc_leading_zero32__2255__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2255__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2255__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2255__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2255__count)));
                            vlSelf->__Vfunc_leading_zero32__2255__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2255__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2255__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2255__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2255__count)));
                            vlSelf->__Vfunc_leading_zero32__2255__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2255__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2255__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2255__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2255__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2255__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2255__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2255__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2255__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2261__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2261__part 
                            = vlSelf->__Vfunc_leading_zero32__2261__value;
                        vlSelf->__Vfunc_leading_zero32__2261__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2261__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2261__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2261__count)));
                            vlSelf->__Vfunc_leading_zero32__2261__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2261__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2261__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2261__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2261__count)));
                            vlSelf->__Vfunc_leading_zero32__2261__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2261__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2261__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2261__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2261__count)));
                            vlSelf->__Vfunc_leading_zero32__2261__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2261__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2261__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2261__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2261__count)));
                            vlSelf->__Vfunc_leading_zero32__2261__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2261__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2261__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2261__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2261__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2261__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2261__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2261__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2261__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2267__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2267__part 
                            = vlSelf->__Vfunc_leading_zero32__2267__value;
                        vlSelf->__Vfunc_leading_zero32__2267__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2267__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2267__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2267__count)));
                            vlSelf->__Vfunc_leading_zero32__2267__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2267__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2267__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2267__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2267__count)));
                            vlSelf->__Vfunc_leading_zero32__2267__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2267__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2267__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2267__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2267__count)));
                            vlSelf->__Vfunc_leading_zero32__2267__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2267__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2267__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2267__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2267__count)));
                            vlSelf->__Vfunc_leading_zero32__2267__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2267__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2267__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2267__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2267__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2267__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2267__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2267__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2267__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2273__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2273__part 
                            = vlSelf->__Vfunc_leading_zero32__2273__value;
                        vlSelf->__Vfunc_leading_zero32__2273__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2273__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2273__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2273__count)));
                            vlSelf->__Vfunc_leading_zero32__2273__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2273__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2273__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2273__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2273__count)));
                            vlSelf->__Vfunc_leading_zero32__2273__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2273__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2273__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2273__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2273__count)));
                            vlSelf->__Vfunc_leading_zero32__2273__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2273__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2273__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2273__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2273__count)));
                            vlSelf->__Vfunc_leading_zero32__2273__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2273__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2273__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2273__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2273__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2273__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2273__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2273__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2273__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2279__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2279__part 
                            = vlSelf->__Vfunc_leading_zero32__2279__value;
                        vlSelf->__Vfunc_leading_zero32__2279__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2279__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2279__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2279__count)));
                            vlSelf->__Vfunc_leading_zero32__2279__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2279__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2279__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2279__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2279__count)));
                            vlSelf->__Vfunc_leading_zero32__2279__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2279__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2279__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2279__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2279__count)));
                            vlSelf->__Vfunc_leading_zero32__2279__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2279__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2279__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2279__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2279__count)));
                            vlSelf->__Vfunc_leading_zero32__2279__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2279__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2279__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2279__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2279__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2279__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2279__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2279__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2279__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2285__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2285__part 
                            = vlSelf->__Vfunc_leading_zero32__2285__value;
                        vlSelf->__Vfunc_leading_zero32__2285__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2285__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2285__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2285__count)));
                            vlSelf->__Vfunc_leading_zero32__2285__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2285__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2285__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2285__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2285__count)));
                            vlSelf->__Vfunc_leading_zero32__2285__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2285__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2285__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2285__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2285__count)));
                            vlSelf->__Vfunc_leading_zero32__2285__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2285__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2285__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2285__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2285__count)));
                            vlSelf->__Vfunc_leading_zero32__2285__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2285__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2285__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2285__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2285__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2285__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2285__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2285__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2285__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2291__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2291__part 
                            = vlSelf->__Vfunc_leading_zero32__2291__value;
                        vlSelf->__Vfunc_leading_zero32__2291__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2291__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2291__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2291__count)));
                            vlSelf->__Vfunc_leading_zero32__2291__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2291__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2291__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2291__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2291__count)));
                            vlSelf->__Vfunc_leading_zero32__2291__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2291__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2291__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2291__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2291__count)));
                            vlSelf->__Vfunc_leading_zero32__2291__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2291__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2291__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2291__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2291__count)));
                            vlSelf->__Vfunc_leading_zero32__2291__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2291__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2291__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2291__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2291__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2291__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2291__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2291__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2291__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2297__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2297__part 
                            = vlSelf->__Vfunc_leading_zero32__2297__value;
                        vlSelf->__Vfunc_leading_zero32__2297__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2297__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2297__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2297__count)));
                            vlSelf->__Vfunc_leading_zero32__2297__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2297__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2297__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2297__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2297__count)));
                            vlSelf->__Vfunc_leading_zero32__2297__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2297__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2297__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2297__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2297__count)));
                            vlSelf->__Vfunc_leading_zero32__2297__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2297__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2297__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2297__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2297__count)));
                            vlSelf->__Vfunc_leading_zero32__2297__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2297__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2297__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2297__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2297__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2297__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2297__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2297__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2297__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2303__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2303__part 
                            = vlSelf->__Vfunc_leading_zero32__2303__value;
                        vlSelf->__Vfunc_leading_zero32__2303__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2303__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2303__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2303__count)));
                            vlSelf->__Vfunc_leading_zero32__2303__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2303__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2303__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2303__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2303__count)));
                            vlSelf->__Vfunc_leading_zero32__2303__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2303__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2303__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2303__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2303__count)));
                            vlSelf->__Vfunc_leading_zero32__2303__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2303__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2303__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2303__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2303__count)));
                            vlSelf->__Vfunc_leading_zero32__2303__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2303__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2303__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2303__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2303__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2303__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2303__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2303__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2303__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2309__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2309__part 
                            = vlSelf->__Vfunc_leading_zero32__2309__value;
                        vlSelf->__Vfunc_leading_zero32__2309__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2309__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2309__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2309__count)));
                            vlSelf->__Vfunc_leading_zero32__2309__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2309__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2309__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2309__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2309__count)));
                            vlSelf->__Vfunc_leading_zero32__2309__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2309__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2309__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2309__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2309__count)));
                            vlSelf->__Vfunc_leading_zero32__2309__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2309__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2309__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2309__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2309__count)));
                            vlSelf->__Vfunc_leading_zero32__2309__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2309__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2309__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2309__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2309__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2309__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2309__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2309__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2309__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2315__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2315__part 
                            = vlSelf->__Vfunc_leading_zero32__2315__value;
                        vlSelf->__Vfunc_leading_zero32__2315__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2315__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2315__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2315__count)));
                            vlSelf->__Vfunc_leading_zero32__2315__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2315__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2315__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2315__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2315__count)));
                            vlSelf->__Vfunc_leading_zero32__2315__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2315__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2315__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2315__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2315__count)));
                            vlSelf->__Vfunc_leading_zero32__2315__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2315__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2315__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2315__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2315__count)));
                            vlSelf->__Vfunc_leading_zero32__2315__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2315__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2315__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2315__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2315__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2315__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2315__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2315__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2315__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2321__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2321__part 
                            = vlSelf->__Vfunc_leading_zero32__2321__value;
                        vlSelf->__Vfunc_leading_zero32__2321__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2321__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2321__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2321__count)));
                            vlSelf->__Vfunc_leading_zero32__2321__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2321__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2321__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2321__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2321__count)));
                            vlSelf->__Vfunc_leading_zero32__2321__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2321__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2321__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2321__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2321__count)));
                            vlSelf->__Vfunc_leading_zero32__2321__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2321__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2321__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2321__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2321__count)));
                            vlSelf->__Vfunc_leading_zero32__2321__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2321__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2321__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2321__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2321__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2321__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2321__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2321__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2321__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2327__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2327__part 
                            = vlSelf->__Vfunc_leading_zero32__2327__value;
                        vlSelf->__Vfunc_leading_zero32__2327__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2327__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2327__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2327__count)));
                            vlSelf->__Vfunc_leading_zero32__2327__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2327__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2327__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2327__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2327__count)));
                            vlSelf->__Vfunc_leading_zero32__2327__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2327__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2327__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2327__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2327__count)));
                            vlSelf->__Vfunc_leading_zero32__2327__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2327__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2327__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2327__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2327__count)));
                            vlSelf->__Vfunc_leading_zero32__2327__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2327__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2327__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2327__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2327__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2327__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2327__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2327__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2327__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2333__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2333__part 
                            = vlSelf->__Vfunc_leading_zero32__2333__value;
                        vlSelf->__Vfunc_leading_zero32__2333__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2333__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2333__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2333__count)));
                            vlSelf->__Vfunc_leading_zero32__2333__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2333__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2333__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2333__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2333__count)));
                            vlSelf->__Vfunc_leading_zero32__2333__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2333__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2333__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2333__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2333__count)));
                            vlSelf->__Vfunc_leading_zero32__2333__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2333__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2333__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2333__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2333__count)));
                            vlSelf->__Vfunc_leading_zero32__2333__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2333__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2333__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2333__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2333__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2333__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2333__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2333__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2333__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2339__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2339__part 
                            = vlSelf->__Vfunc_leading_zero32__2339__value;
                        vlSelf->__Vfunc_leading_zero32__2339__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2339__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2339__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2339__count)));
                            vlSelf->__Vfunc_leading_zero32__2339__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2339__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2339__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2339__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2339__count)));
                            vlSelf->__Vfunc_leading_zero32__2339__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2339__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2339__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2339__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2339__count)));
                            vlSelf->__Vfunc_leading_zero32__2339__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2339__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2339__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2339__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2339__count)));
                            vlSelf->__Vfunc_leading_zero32__2339__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2339__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2339__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2339__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2339__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2339__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2339__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2339__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2339__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2345__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2345__part 
                            = vlSelf->__Vfunc_leading_zero32__2345__value;
                        vlSelf->__Vfunc_leading_zero32__2345__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2345__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2345__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2345__count)));
                            vlSelf->__Vfunc_leading_zero32__2345__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2345__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2345__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2345__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2345__count)));
                            vlSelf->__Vfunc_leading_zero32__2345__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2345__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2345__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2345__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2345__count)));
                            vlSelf->__Vfunc_leading_zero32__2345__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2345__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2345__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2345__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2345__count)));
                            vlSelf->__Vfunc_leading_zero32__2345__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2345__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2345__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2345__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2345__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2345__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2345__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2345__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2345__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2351__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2351__part 
                            = vlSelf->__Vfunc_leading_zero32__2351__value;
                        vlSelf->__Vfunc_leading_zero32__2351__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2351__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2351__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2351__count)));
                            vlSelf->__Vfunc_leading_zero32__2351__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2351__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2351__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2351__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2351__count)));
                            vlSelf->__Vfunc_leading_zero32__2351__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2351__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2351__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2351__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2351__count)));
                            vlSelf->__Vfunc_leading_zero32__2351__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2351__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2351__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2351__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2351__count)));
                            vlSelf->__Vfunc_leading_zero32__2351__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2351__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2351__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2351__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2351__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2351__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2351__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2351__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2351__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2357__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2357__part 
                            = vlSelf->__Vfunc_leading_zero32__2357__value;
                        vlSelf->__Vfunc_leading_zero32__2357__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2357__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2357__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2357__count)));
                            vlSelf->__Vfunc_leading_zero32__2357__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2357__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2357__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2357__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2357__count)));
                            vlSelf->__Vfunc_leading_zero32__2357__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2357__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2357__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2357__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2357__count)));
                            vlSelf->__Vfunc_leading_zero32__2357__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2357__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2357__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2357__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2357__count)));
                            vlSelf->__Vfunc_leading_zero32__2357__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2357__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2357__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2357__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2357__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2357__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2357__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2357__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2357__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2363__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2363__part 
                            = vlSelf->__Vfunc_leading_zero32__2363__value;
                        vlSelf->__Vfunc_leading_zero32__2363__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2363__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2363__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2363__count)));
                            vlSelf->__Vfunc_leading_zero32__2363__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2363__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2363__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2363__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2363__count)));
                            vlSelf->__Vfunc_leading_zero32__2363__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2363__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2363__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2363__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2363__count)));
                            vlSelf->__Vfunc_leading_zero32__2363__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2363__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2363__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2363__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2363__count)));
                            vlSelf->__Vfunc_leading_zero32__2363__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2363__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2363__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2363__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2363__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2363__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2363__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2363__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2363__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2369__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2369__part 
                            = vlSelf->__Vfunc_leading_zero32__2369__value;
                        vlSelf->__Vfunc_leading_zero32__2369__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2369__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2369__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2369__count)));
                            vlSelf->__Vfunc_leading_zero32__2369__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2369__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2369__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2369__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2369__count)));
                            vlSelf->__Vfunc_leading_zero32__2369__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2369__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2369__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2369__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2369__count)));
                            vlSelf->__Vfunc_leading_zero32__2369__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2369__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2369__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2369__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2369__count)));
                            vlSelf->__Vfunc_leading_zero32__2369__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2369__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2369__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2369__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2369__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2369__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2369__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2369__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2369__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2375__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2375__part 
                            = vlSelf->__Vfunc_leading_zero32__2375__value;
                        vlSelf->__Vfunc_leading_zero32__2375__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2375__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2375__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2375__count)));
                            vlSelf->__Vfunc_leading_zero32__2375__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2375__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2375__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2375__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2375__count)));
                            vlSelf->__Vfunc_leading_zero32__2375__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2375__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2375__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2375__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2375__count)));
                            vlSelf->__Vfunc_leading_zero32__2375__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2375__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2375__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2375__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2375__count)));
                            vlSelf->__Vfunc_leading_zero32__2375__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2375__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2375__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2375__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2375__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2375__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2375__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2375__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2375__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2381__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2381__part 
                            = vlSelf->__Vfunc_leading_zero32__2381__value;
                        vlSelf->__Vfunc_leading_zero32__2381__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2381__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2381__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2381__count)));
                            vlSelf->__Vfunc_leading_zero32__2381__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2381__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2381__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2381__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2381__count)));
                            vlSelf->__Vfunc_leading_zero32__2381__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2381__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2381__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2381__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2381__count)));
                            vlSelf->__Vfunc_leading_zero32__2381__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2381__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2381__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2381__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2381__count)));
                            vlSelf->__Vfunc_leading_zero32__2381__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2381__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2381__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2381__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2381__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2381__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2381__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2381__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2381__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2387__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2387__part 
                            = vlSelf->__Vfunc_leading_zero32__2387__value;
                        vlSelf->__Vfunc_leading_zero32__2387__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2387__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2387__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2387__count)));
                            vlSelf->__Vfunc_leading_zero32__2387__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2387__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2387__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2387__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2387__count)));
                            vlSelf->__Vfunc_leading_zero32__2387__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2387__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2387__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2387__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2387__count)));
                            vlSelf->__Vfunc_leading_zero32__2387__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2387__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2387__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2387__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2387__count)));
                            vlSelf->__Vfunc_leading_zero32__2387__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2387__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2387__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2387__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2387__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2387__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2387__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2387__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2387__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2393__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2393__part 
                            = vlSelf->__Vfunc_leading_zero32__2393__value;
                        vlSelf->__Vfunc_leading_zero32__2393__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2393__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2393__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2393__count)));
                            vlSelf->__Vfunc_leading_zero32__2393__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2393__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2393__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2393__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2393__count)));
                            vlSelf->__Vfunc_leading_zero32__2393__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2393__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2393__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2393__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2393__count)));
                            vlSelf->__Vfunc_leading_zero32__2393__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2393__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2393__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2393__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2393__count)));
                            vlSelf->__Vfunc_leading_zero32__2393__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2393__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2393__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2393__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2393__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2393__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2393__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2393__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2393__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2399__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2399__part 
                            = vlSelf->__Vfunc_leading_zero32__2399__value;
                        vlSelf->__Vfunc_leading_zero32__2399__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2399__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2399__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2399__count)));
                            vlSelf->__Vfunc_leading_zero32__2399__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2399__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2399__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2399__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2399__count)));
                            vlSelf->__Vfunc_leading_zero32__2399__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2399__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2399__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2399__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2399__count)));
                            vlSelf->__Vfunc_leading_zero32__2399__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2399__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2399__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2399__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2399__count)));
                            vlSelf->__Vfunc_leading_zero32__2399__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2399__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2399__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2399__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2399__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2399__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2399__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2399__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2399__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2405__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2405__part 
                            = vlSelf->__Vfunc_leading_zero32__2405__value;
                        vlSelf->__Vfunc_leading_zero32__2405__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2405__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2405__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2405__count)));
                            vlSelf->__Vfunc_leading_zero32__2405__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2405__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2405__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2405__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2405__count)));
                            vlSelf->__Vfunc_leading_zero32__2405__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2405__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2405__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2405__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2405__count)));
                            vlSelf->__Vfunc_leading_zero32__2405__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2405__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2405__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2405__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2405__count)));
                            vlSelf->__Vfunc_leading_zero32__2405__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2405__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2405__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2405__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2405__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2405__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2405__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2405__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2405__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2411__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2411__part 
                            = vlSelf->__Vfunc_leading_zero32__2411__value;
                        vlSelf->__Vfunc_leading_zero32__2411__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2411__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2411__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2411__count)));
                            vlSelf->__Vfunc_leading_zero32__2411__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2411__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2411__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2411__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2411__count)));
                            vlSelf->__Vfunc_leading_zero32__2411__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2411__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2411__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2411__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2411__count)));
                            vlSelf->__Vfunc_leading_zero32__2411__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2411__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2411__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2411__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2411__count)));
                            vlSelf->__Vfunc_leading_zero32__2411__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2411__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2411__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2411__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2411__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2411__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2411__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2411__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2411__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2417__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2417__part 
                            = vlSelf->__Vfunc_leading_zero32__2417__value;
                        vlSelf->__Vfunc_leading_zero32__2417__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2417__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2417__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2417__count)));
                            vlSelf->__Vfunc_leading_zero32__2417__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2417__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2417__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2417__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2417__count)));
                            vlSelf->__Vfunc_leading_zero32__2417__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2417__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2417__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2417__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2417__count)));
                            vlSelf->__Vfunc_leading_zero32__2417__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2417__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2417__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2417__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2417__count)));
                            vlSelf->__Vfunc_leading_zero32__2417__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2417__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2417__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2417__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2417__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2417__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2417__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2417__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2417__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2423__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2423__part 
                            = vlSelf->__Vfunc_leading_zero32__2423__value;
                        vlSelf->__Vfunc_leading_zero32__2423__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2423__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2423__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2423__count)));
                            vlSelf->__Vfunc_leading_zero32__2423__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2423__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2423__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2423__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2423__count)));
                            vlSelf->__Vfunc_leading_zero32__2423__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2423__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2423__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2423__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2423__count)));
                            vlSelf->__Vfunc_leading_zero32__2423__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2423__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2423__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2423__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2423__count)));
                            vlSelf->__Vfunc_leading_zero32__2423__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2423__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2423__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2423__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2423__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2423__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2423__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2423__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2423__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2429__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2429__part 
                            = vlSelf->__Vfunc_leading_zero32__2429__value;
                        vlSelf->__Vfunc_leading_zero32__2429__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2429__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2429__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2429__count)));
                            vlSelf->__Vfunc_leading_zero32__2429__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2429__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2429__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2429__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2429__count)));
                            vlSelf->__Vfunc_leading_zero32__2429__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2429__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2429__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2429__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2429__count)));
                            vlSelf->__Vfunc_leading_zero32__2429__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2429__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2429__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2429__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2429__count)));
                            vlSelf->__Vfunc_leading_zero32__2429__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2429__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2429__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2429__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2429__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2429__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2429__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2429__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2429__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2435__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2435__part 
                            = vlSelf->__Vfunc_leading_zero32__2435__value;
                        vlSelf->__Vfunc_leading_zero32__2435__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2435__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2435__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2435__count)));
                            vlSelf->__Vfunc_leading_zero32__2435__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2435__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2435__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2435__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2435__count)));
                            vlSelf->__Vfunc_leading_zero32__2435__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2435__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2435__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2435__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2435__count)));
                            vlSelf->__Vfunc_leading_zero32__2435__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2435__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2435__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2435__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2435__count)));
                            vlSelf->__Vfunc_leading_zero32__2435__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2435__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2435__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2435__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2435__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2435__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2435__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2435__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2435__Vfuncout)) 
                             - (IData)(5U))));
}
