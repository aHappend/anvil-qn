// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vanvil_qn1_top.h for the primary calling header

#include "Vanvil_qn1_top__pch.h"
#include "Vanvil_qn1_top___024root.h"

VL_ATTR_COLD void Vanvil_qn1_top___024root___stl_sequent__TOP__30(Vanvil_qn1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_top___024root___stl_sequent__TOP__30\n"); );
    // Body
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__46__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__46__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10985__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__46__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10985__part 
                            = vlSelf->__Vfunc_leading_zero32__10985__value;
                        vlSelf->__Vfunc_leading_zero32__10985__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10985__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10985__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10985__count)));
                            vlSelf->__Vfunc_leading_zero32__10985__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10985__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10985__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10985__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10985__count)));
                            vlSelf->__Vfunc_leading_zero32__10985__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10985__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10985__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10985__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10985__count)));
                            vlSelf->__Vfunc_leading_zero32__10985__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10985__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10985__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10985__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10985__count)));
                            vlSelf->__Vfunc_leading_zero32__10985__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10985__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10985__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10985__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10985__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10985__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10985__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10985__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10985__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__47__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__47__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10997__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__47__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10997__part 
                            = vlSelf->__Vfunc_leading_zero32__10997__value;
                        vlSelf->__Vfunc_leading_zero32__10997__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10997__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10997__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10997__count)));
                            vlSelf->__Vfunc_leading_zero32__10997__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10997__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10997__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10997__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10997__count)));
                            vlSelf->__Vfunc_leading_zero32__10997__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10997__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10997__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10997__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10997__count)));
                            vlSelf->__Vfunc_leading_zero32__10997__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10997__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10997__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10997__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10997__count)));
                            vlSelf->__Vfunc_leading_zero32__10997__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10997__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10997__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10997__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10997__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10997__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10997__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10997__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10997__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__48__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__48__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11009__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__48__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11009__part 
                            = vlSelf->__Vfunc_leading_zero32__11009__value;
                        vlSelf->__Vfunc_leading_zero32__11009__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11009__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11009__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11009__count)));
                            vlSelf->__Vfunc_leading_zero32__11009__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11009__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11009__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11009__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11009__count)));
                            vlSelf->__Vfunc_leading_zero32__11009__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11009__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11009__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11009__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11009__count)));
                            vlSelf->__Vfunc_leading_zero32__11009__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11009__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11009__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11009__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11009__count)));
                            vlSelf->__Vfunc_leading_zero32__11009__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11009__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11009__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11009__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11009__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11009__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11009__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11009__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11009__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__49__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__49__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11021__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__49__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11021__part 
                            = vlSelf->__Vfunc_leading_zero32__11021__value;
                        vlSelf->__Vfunc_leading_zero32__11021__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11021__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11021__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11021__count)));
                            vlSelf->__Vfunc_leading_zero32__11021__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11021__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11021__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11021__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11021__count)));
                            vlSelf->__Vfunc_leading_zero32__11021__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11021__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11021__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11021__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11021__count)));
                            vlSelf->__Vfunc_leading_zero32__11021__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11021__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11021__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11021__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11021__count)));
                            vlSelf->__Vfunc_leading_zero32__11021__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11021__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11021__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11021__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11021__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11021__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11021__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11021__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11021__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__50__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__50__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11033__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__50__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11033__part 
                            = vlSelf->__Vfunc_leading_zero32__11033__value;
                        vlSelf->__Vfunc_leading_zero32__11033__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11033__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11033__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11033__count)));
                            vlSelf->__Vfunc_leading_zero32__11033__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11033__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11033__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11033__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11033__count)));
                            vlSelf->__Vfunc_leading_zero32__11033__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11033__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11033__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11033__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11033__count)));
                            vlSelf->__Vfunc_leading_zero32__11033__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11033__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11033__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11033__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11033__count)));
                            vlSelf->__Vfunc_leading_zero32__11033__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11033__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11033__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11033__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11033__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11033__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11033__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11033__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11033__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__51__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__51__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11045__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__51__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11045__part 
                            = vlSelf->__Vfunc_leading_zero32__11045__value;
                        vlSelf->__Vfunc_leading_zero32__11045__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11045__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11045__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11045__count)));
                            vlSelf->__Vfunc_leading_zero32__11045__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11045__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11045__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11045__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11045__count)));
                            vlSelf->__Vfunc_leading_zero32__11045__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11045__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11045__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11045__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11045__count)));
                            vlSelf->__Vfunc_leading_zero32__11045__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11045__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11045__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11045__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11045__count)));
                            vlSelf->__Vfunc_leading_zero32__11045__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11045__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11045__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11045__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11045__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11045__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11045__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11045__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11045__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__52__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__52__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11057__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__52__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11057__part 
                            = vlSelf->__Vfunc_leading_zero32__11057__value;
                        vlSelf->__Vfunc_leading_zero32__11057__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11057__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11057__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11057__count)));
                            vlSelf->__Vfunc_leading_zero32__11057__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11057__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11057__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11057__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11057__count)));
                            vlSelf->__Vfunc_leading_zero32__11057__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11057__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11057__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11057__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11057__count)));
                            vlSelf->__Vfunc_leading_zero32__11057__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11057__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11057__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11057__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11057__count)));
                            vlSelf->__Vfunc_leading_zero32__11057__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11057__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11057__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11057__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11057__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11057__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11057__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11057__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11057__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__53__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__53__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11069__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__53__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11069__part 
                            = vlSelf->__Vfunc_leading_zero32__11069__value;
                        vlSelf->__Vfunc_leading_zero32__11069__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11069__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11069__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11069__count)));
                            vlSelf->__Vfunc_leading_zero32__11069__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11069__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11069__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11069__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11069__count)));
                            vlSelf->__Vfunc_leading_zero32__11069__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11069__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11069__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11069__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11069__count)));
                            vlSelf->__Vfunc_leading_zero32__11069__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11069__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11069__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11069__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11069__count)));
                            vlSelf->__Vfunc_leading_zero32__11069__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11069__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11069__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11069__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11069__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11069__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11069__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11069__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11069__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__54__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__54__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11081__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__54__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11081__part 
                            = vlSelf->__Vfunc_leading_zero32__11081__value;
                        vlSelf->__Vfunc_leading_zero32__11081__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11081__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11081__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11081__count)));
                            vlSelf->__Vfunc_leading_zero32__11081__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11081__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11081__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11081__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11081__count)));
                            vlSelf->__Vfunc_leading_zero32__11081__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11081__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11081__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11081__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11081__count)));
                            vlSelf->__Vfunc_leading_zero32__11081__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11081__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11081__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11081__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11081__count)));
                            vlSelf->__Vfunc_leading_zero32__11081__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11081__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11081__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11081__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11081__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11081__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11081__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11081__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11081__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__55__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__55__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11093__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__55__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11093__part 
                            = vlSelf->__Vfunc_leading_zero32__11093__value;
                        vlSelf->__Vfunc_leading_zero32__11093__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11093__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11093__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11093__count)));
                            vlSelf->__Vfunc_leading_zero32__11093__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11093__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11093__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11093__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11093__count)));
                            vlSelf->__Vfunc_leading_zero32__11093__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11093__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11093__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11093__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11093__count)));
                            vlSelf->__Vfunc_leading_zero32__11093__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11093__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11093__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11093__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11093__count)));
                            vlSelf->__Vfunc_leading_zero32__11093__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11093__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11093__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11093__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11093__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11093__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11093__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11093__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11093__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__56__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__56__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11105__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__56__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11105__part 
                            = vlSelf->__Vfunc_leading_zero32__11105__value;
                        vlSelf->__Vfunc_leading_zero32__11105__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11105__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11105__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11105__count)));
                            vlSelf->__Vfunc_leading_zero32__11105__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11105__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11105__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11105__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11105__count)));
                            vlSelf->__Vfunc_leading_zero32__11105__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11105__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11105__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11105__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11105__count)));
                            vlSelf->__Vfunc_leading_zero32__11105__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11105__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11105__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11105__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11105__count)));
                            vlSelf->__Vfunc_leading_zero32__11105__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11105__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11105__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11105__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11105__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11105__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11105__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11105__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11105__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__57__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__57__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11117__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__57__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11117__part 
                            = vlSelf->__Vfunc_leading_zero32__11117__value;
                        vlSelf->__Vfunc_leading_zero32__11117__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11117__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11117__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11117__count)));
                            vlSelf->__Vfunc_leading_zero32__11117__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11117__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11117__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11117__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11117__count)));
                            vlSelf->__Vfunc_leading_zero32__11117__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11117__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11117__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11117__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11117__count)));
                            vlSelf->__Vfunc_leading_zero32__11117__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11117__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11117__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11117__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11117__count)));
                            vlSelf->__Vfunc_leading_zero32__11117__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11117__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11117__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11117__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11117__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11117__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11117__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11117__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11117__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__58__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__58__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11129__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__58__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11129__part 
                            = vlSelf->__Vfunc_leading_zero32__11129__value;
                        vlSelf->__Vfunc_leading_zero32__11129__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11129__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11129__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11129__count)));
                            vlSelf->__Vfunc_leading_zero32__11129__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11129__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11129__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11129__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11129__count)));
                            vlSelf->__Vfunc_leading_zero32__11129__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11129__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11129__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11129__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11129__count)));
                            vlSelf->__Vfunc_leading_zero32__11129__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11129__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11129__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11129__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11129__count)));
                            vlSelf->__Vfunc_leading_zero32__11129__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11129__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11129__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11129__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11129__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11129__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11129__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11129__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11129__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__59__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__59__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11141__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__59__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11141__part 
                            = vlSelf->__Vfunc_leading_zero32__11141__value;
                        vlSelf->__Vfunc_leading_zero32__11141__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11141__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11141__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11141__count)));
                            vlSelf->__Vfunc_leading_zero32__11141__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11141__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11141__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11141__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11141__count)));
                            vlSelf->__Vfunc_leading_zero32__11141__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11141__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11141__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11141__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11141__count)));
                            vlSelf->__Vfunc_leading_zero32__11141__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11141__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11141__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11141__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11141__count)));
                            vlSelf->__Vfunc_leading_zero32__11141__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11141__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11141__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11141__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11141__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11141__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11141__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11141__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11141__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__60__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__60__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11153__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__60__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11153__part 
                            = vlSelf->__Vfunc_leading_zero32__11153__value;
                        vlSelf->__Vfunc_leading_zero32__11153__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11153__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11153__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11153__count)));
                            vlSelf->__Vfunc_leading_zero32__11153__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11153__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11153__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11153__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11153__count)));
                            vlSelf->__Vfunc_leading_zero32__11153__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11153__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11153__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11153__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11153__count)));
                            vlSelf->__Vfunc_leading_zero32__11153__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11153__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11153__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11153__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11153__count)));
                            vlSelf->__Vfunc_leading_zero32__11153__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11153__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11153__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11153__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11153__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11153__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11153__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11153__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11153__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__61__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__61__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11165__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__61__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11165__part 
                            = vlSelf->__Vfunc_leading_zero32__11165__value;
                        vlSelf->__Vfunc_leading_zero32__11165__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11165__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11165__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11165__count)));
                            vlSelf->__Vfunc_leading_zero32__11165__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11165__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11165__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11165__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11165__count)));
                            vlSelf->__Vfunc_leading_zero32__11165__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11165__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11165__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11165__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11165__count)));
                            vlSelf->__Vfunc_leading_zero32__11165__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11165__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11165__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11165__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11165__count)));
                            vlSelf->__Vfunc_leading_zero32__11165__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11165__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11165__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11165__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11165__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11165__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11165__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11165__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11165__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__62__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__62__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11177__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__62__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11177__part 
                            = vlSelf->__Vfunc_leading_zero32__11177__value;
                        vlSelf->__Vfunc_leading_zero32__11177__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11177__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11177__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11177__count)));
                            vlSelf->__Vfunc_leading_zero32__11177__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11177__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11177__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11177__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11177__count)));
                            vlSelf->__Vfunc_leading_zero32__11177__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11177__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11177__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11177__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11177__count)));
                            vlSelf->__Vfunc_leading_zero32__11177__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11177__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11177__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11177__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11177__count)));
                            vlSelf->__Vfunc_leading_zero32__11177__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11177__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11177__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11177__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11177__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11177__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11177__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11177__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11177__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__63__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__63__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11189__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__63__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11189__part 
                            = vlSelf->__Vfunc_leading_zero32__11189__value;
                        vlSelf->__Vfunc_leading_zero32__11189__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11189__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11189__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11189__count)));
                            vlSelf->__Vfunc_leading_zero32__11189__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11189__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11189__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11189__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11189__count)));
                            vlSelf->__Vfunc_leading_zero32__11189__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11189__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11189__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11189__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11189__count)));
                            vlSelf->__Vfunc_leading_zero32__11189__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11189__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11189__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11189__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11189__count)));
                            vlSelf->__Vfunc_leading_zero32__11189__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11189__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11189__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11189__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11189__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11189__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11189__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11189__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11189__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__64__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__64__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11201__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__64__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11201__part 
                            = vlSelf->__Vfunc_leading_zero32__11201__value;
                        vlSelf->__Vfunc_leading_zero32__11201__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11201__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11201__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11201__count)));
                            vlSelf->__Vfunc_leading_zero32__11201__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11201__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11201__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11201__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11201__count)));
                            vlSelf->__Vfunc_leading_zero32__11201__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11201__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11201__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11201__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11201__count)));
                            vlSelf->__Vfunc_leading_zero32__11201__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11201__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11201__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11201__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11201__count)));
                            vlSelf->__Vfunc_leading_zero32__11201__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11201__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11201__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11201__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11201__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11201__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11201__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11201__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11201__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__65__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__65__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11213__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__65__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11213__part 
                            = vlSelf->__Vfunc_leading_zero32__11213__value;
                        vlSelf->__Vfunc_leading_zero32__11213__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11213__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11213__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11213__count)));
                            vlSelf->__Vfunc_leading_zero32__11213__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11213__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11213__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11213__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11213__count)));
                            vlSelf->__Vfunc_leading_zero32__11213__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11213__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11213__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11213__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11213__count)));
                            vlSelf->__Vfunc_leading_zero32__11213__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11213__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11213__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11213__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11213__count)));
                            vlSelf->__Vfunc_leading_zero32__11213__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11213__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11213__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11213__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11213__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11213__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11213__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11213__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11213__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__66__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__66__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11225__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__66__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11225__part 
                            = vlSelf->__Vfunc_leading_zero32__11225__value;
                        vlSelf->__Vfunc_leading_zero32__11225__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11225__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11225__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11225__count)));
                            vlSelf->__Vfunc_leading_zero32__11225__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11225__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11225__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11225__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11225__count)));
                            vlSelf->__Vfunc_leading_zero32__11225__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11225__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11225__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11225__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11225__count)));
                            vlSelf->__Vfunc_leading_zero32__11225__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11225__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11225__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11225__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11225__count)));
                            vlSelf->__Vfunc_leading_zero32__11225__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11225__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11225__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11225__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11225__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11225__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11225__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11225__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11225__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__67__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__67__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11237__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__67__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11237__part 
                            = vlSelf->__Vfunc_leading_zero32__11237__value;
                        vlSelf->__Vfunc_leading_zero32__11237__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11237__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11237__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11237__count)));
                            vlSelf->__Vfunc_leading_zero32__11237__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11237__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11237__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11237__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11237__count)));
                            vlSelf->__Vfunc_leading_zero32__11237__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11237__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11237__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11237__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11237__count)));
                            vlSelf->__Vfunc_leading_zero32__11237__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11237__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11237__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11237__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11237__count)));
                            vlSelf->__Vfunc_leading_zero32__11237__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11237__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11237__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11237__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11237__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11237__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11237__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11237__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11237__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__68__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__68__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11249__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__68__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11249__part 
                            = vlSelf->__Vfunc_leading_zero32__11249__value;
                        vlSelf->__Vfunc_leading_zero32__11249__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11249__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11249__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11249__count)));
                            vlSelf->__Vfunc_leading_zero32__11249__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11249__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11249__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11249__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11249__count)));
                            vlSelf->__Vfunc_leading_zero32__11249__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11249__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11249__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11249__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11249__count)));
                            vlSelf->__Vfunc_leading_zero32__11249__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11249__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11249__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11249__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11249__count)));
                            vlSelf->__Vfunc_leading_zero32__11249__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11249__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11249__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11249__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11249__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11249__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11249__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11249__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11249__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__69__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__69__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11261__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__69__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11261__part 
                            = vlSelf->__Vfunc_leading_zero32__11261__value;
                        vlSelf->__Vfunc_leading_zero32__11261__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11261__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11261__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11261__count)));
                            vlSelf->__Vfunc_leading_zero32__11261__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11261__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11261__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11261__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11261__count)));
                            vlSelf->__Vfunc_leading_zero32__11261__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11261__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11261__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11261__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11261__count)));
                            vlSelf->__Vfunc_leading_zero32__11261__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11261__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11261__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11261__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11261__count)));
                            vlSelf->__Vfunc_leading_zero32__11261__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11261__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11261__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11261__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11261__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11261__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11261__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11261__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11261__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__70__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__70__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11273__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__70__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11273__part 
                            = vlSelf->__Vfunc_leading_zero32__11273__value;
                        vlSelf->__Vfunc_leading_zero32__11273__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11273__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11273__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11273__count)));
                            vlSelf->__Vfunc_leading_zero32__11273__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11273__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11273__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11273__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11273__count)));
                            vlSelf->__Vfunc_leading_zero32__11273__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11273__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11273__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11273__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11273__count)));
                            vlSelf->__Vfunc_leading_zero32__11273__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11273__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11273__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11273__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11273__count)));
                            vlSelf->__Vfunc_leading_zero32__11273__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11273__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11273__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11273__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11273__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11273__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11273__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11273__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11273__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__71__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__71__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11285__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__71__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11285__part 
                            = vlSelf->__Vfunc_leading_zero32__11285__value;
                        vlSelf->__Vfunc_leading_zero32__11285__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11285__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11285__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11285__count)));
                            vlSelf->__Vfunc_leading_zero32__11285__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11285__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11285__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11285__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11285__count)));
                            vlSelf->__Vfunc_leading_zero32__11285__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11285__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11285__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11285__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11285__count)));
                            vlSelf->__Vfunc_leading_zero32__11285__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11285__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11285__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11285__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11285__count)));
                            vlSelf->__Vfunc_leading_zero32__11285__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11285__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11285__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11285__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11285__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11285__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11285__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11285__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11285__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__72__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__72__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11297__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__72__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11297__part 
                            = vlSelf->__Vfunc_leading_zero32__11297__value;
                        vlSelf->__Vfunc_leading_zero32__11297__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11297__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11297__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11297__count)));
                            vlSelf->__Vfunc_leading_zero32__11297__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11297__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11297__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11297__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11297__count)));
                            vlSelf->__Vfunc_leading_zero32__11297__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11297__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11297__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11297__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11297__count)));
                            vlSelf->__Vfunc_leading_zero32__11297__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11297__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11297__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11297__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11297__count)));
                            vlSelf->__Vfunc_leading_zero32__11297__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11297__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11297__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11297__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11297__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11297__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11297__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11297__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11297__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__73__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__73__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11309__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__73__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11309__part 
                            = vlSelf->__Vfunc_leading_zero32__11309__value;
                        vlSelf->__Vfunc_leading_zero32__11309__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11309__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11309__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11309__count)));
                            vlSelf->__Vfunc_leading_zero32__11309__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11309__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11309__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11309__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11309__count)));
                            vlSelf->__Vfunc_leading_zero32__11309__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11309__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11309__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11309__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11309__count)));
                            vlSelf->__Vfunc_leading_zero32__11309__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11309__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11309__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11309__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11309__count)));
                            vlSelf->__Vfunc_leading_zero32__11309__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11309__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11309__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11309__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11309__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11309__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11309__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11309__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11309__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__74__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__74__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11321__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__74__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11321__part 
                            = vlSelf->__Vfunc_leading_zero32__11321__value;
                        vlSelf->__Vfunc_leading_zero32__11321__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11321__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11321__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11321__count)));
                            vlSelf->__Vfunc_leading_zero32__11321__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11321__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11321__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11321__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11321__count)));
                            vlSelf->__Vfunc_leading_zero32__11321__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11321__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11321__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11321__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11321__count)));
                            vlSelf->__Vfunc_leading_zero32__11321__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11321__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11321__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11321__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11321__count)));
                            vlSelf->__Vfunc_leading_zero32__11321__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11321__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11321__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11321__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11321__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11321__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11321__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11321__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11321__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__75__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__75__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11333__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__75__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11333__part 
                            = vlSelf->__Vfunc_leading_zero32__11333__value;
                        vlSelf->__Vfunc_leading_zero32__11333__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11333__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11333__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11333__count)));
                            vlSelf->__Vfunc_leading_zero32__11333__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11333__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11333__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11333__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11333__count)));
                            vlSelf->__Vfunc_leading_zero32__11333__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11333__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11333__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11333__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11333__count)));
                            vlSelf->__Vfunc_leading_zero32__11333__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11333__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11333__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11333__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11333__count)));
                            vlSelf->__Vfunc_leading_zero32__11333__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11333__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11333__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11333__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11333__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11333__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11333__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11333__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11333__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__76__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__76__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11345__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__76__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11345__part 
                            = vlSelf->__Vfunc_leading_zero32__11345__value;
                        vlSelf->__Vfunc_leading_zero32__11345__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11345__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11345__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11345__count)));
                            vlSelf->__Vfunc_leading_zero32__11345__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11345__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11345__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11345__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11345__count)));
                            vlSelf->__Vfunc_leading_zero32__11345__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11345__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11345__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11345__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11345__count)));
                            vlSelf->__Vfunc_leading_zero32__11345__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11345__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11345__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11345__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11345__count)));
                            vlSelf->__Vfunc_leading_zero32__11345__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11345__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11345__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11345__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11345__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11345__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11345__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11345__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11345__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__77__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__77__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11357__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__77__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11357__part 
                            = vlSelf->__Vfunc_leading_zero32__11357__value;
                        vlSelf->__Vfunc_leading_zero32__11357__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11357__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11357__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11357__count)));
                            vlSelf->__Vfunc_leading_zero32__11357__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11357__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11357__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11357__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11357__count)));
                            vlSelf->__Vfunc_leading_zero32__11357__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11357__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11357__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11357__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11357__count)));
                            vlSelf->__Vfunc_leading_zero32__11357__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11357__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11357__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11357__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11357__count)));
                            vlSelf->__Vfunc_leading_zero32__11357__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11357__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11357__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11357__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11357__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11357__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11357__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11357__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11357__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__78__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__78__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11369__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__78__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11369__part 
                            = vlSelf->__Vfunc_leading_zero32__11369__value;
                        vlSelf->__Vfunc_leading_zero32__11369__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11369__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11369__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11369__count)));
                            vlSelf->__Vfunc_leading_zero32__11369__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11369__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11369__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11369__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11369__count)));
                            vlSelf->__Vfunc_leading_zero32__11369__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11369__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11369__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11369__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11369__count)));
                            vlSelf->__Vfunc_leading_zero32__11369__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11369__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11369__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11369__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11369__count)));
                            vlSelf->__Vfunc_leading_zero32__11369__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11369__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11369__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11369__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11369__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11369__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11369__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11369__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11369__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__79__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__79__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11381__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__79__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11381__part 
                            = vlSelf->__Vfunc_leading_zero32__11381__value;
                        vlSelf->__Vfunc_leading_zero32__11381__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11381__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11381__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11381__count)));
                            vlSelf->__Vfunc_leading_zero32__11381__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11381__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11381__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11381__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11381__count)));
                            vlSelf->__Vfunc_leading_zero32__11381__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11381__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11381__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11381__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11381__count)));
                            vlSelf->__Vfunc_leading_zero32__11381__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11381__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11381__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11381__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11381__count)));
                            vlSelf->__Vfunc_leading_zero32__11381__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11381__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11381__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11381__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11381__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11381__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11381__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11381__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11381__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__80__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__80__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11393__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__80__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11393__part 
                            = vlSelf->__Vfunc_leading_zero32__11393__value;
                        vlSelf->__Vfunc_leading_zero32__11393__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11393__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11393__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11393__count)));
                            vlSelf->__Vfunc_leading_zero32__11393__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11393__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11393__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11393__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11393__count)));
                            vlSelf->__Vfunc_leading_zero32__11393__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11393__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11393__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11393__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11393__count)));
                            vlSelf->__Vfunc_leading_zero32__11393__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11393__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11393__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11393__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11393__count)));
                            vlSelf->__Vfunc_leading_zero32__11393__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11393__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11393__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11393__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11393__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11393__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11393__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11393__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11393__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__81__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__81__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11405__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__81__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11405__part 
                            = vlSelf->__Vfunc_leading_zero32__11405__value;
                        vlSelf->__Vfunc_leading_zero32__11405__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11405__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11405__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11405__count)));
                            vlSelf->__Vfunc_leading_zero32__11405__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11405__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11405__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11405__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11405__count)));
                            vlSelf->__Vfunc_leading_zero32__11405__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11405__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11405__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11405__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11405__count)));
                            vlSelf->__Vfunc_leading_zero32__11405__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11405__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11405__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11405__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11405__count)));
                            vlSelf->__Vfunc_leading_zero32__11405__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11405__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11405__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11405__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11405__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11405__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11405__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11405__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11405__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__82__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__82__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11417__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__82__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11417__part 
                            = vlSelf->__Vfunc_leading_zero32__11417__value;
                        vlSelf->__Vfunc_leading_zero32__11417__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11417__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11417__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11417__count)));
                            vlSelf->__Vfunc_leading_zero32__11417__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11417__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11417__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11417__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11417__count)));
                            vlSelf->__Vfunc_leading_zero32__11417__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11417__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11417__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11417__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11417__count)));
                            vlSelf->__Vfunc_leading_zero32__11417__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11417__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11417__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11417__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11417__count)));
                            vlSelf->__Vfunc_leading_zero32__11417__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11417__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11417__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11417__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11417__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11417__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11417__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11417__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11417__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__83__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__83__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11429__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__83__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11429__part 
                            = vlSelf->__Vfunc_leading_zero32__11429__value;
                        vlSelf->__Vfunc_leading_zero32__11429__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11429__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11429__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11429__count)));
                            vlSelf->__Vfunc_leading_zero32__11429__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11429__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11429__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11429__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11429__count)));
                            vlSelf->__Vfunc_leading_zero32__11429__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11429__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11429__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11429__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11429__count)));
                            vlSelf->__Vfunc_leading_zero32__11429__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11429__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11429__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11429__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11429__count)));
                            vlSelf->__Vfunc_leading_zero32__11429__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11429__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11429__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11429__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11429__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11429__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11429__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11429__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11429__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__84__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__84__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11441__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__84__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11441__part 
                            = vlSelf->__Vfunc_leading_zero32__11441__value;
                        vlSelf->__Vfunc_leading_zero32__11441__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11441__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11441__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11441__count)));
                            vlSelf->__Vfunc_leading_zero32__11441__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11441__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11441__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11441__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11441__count)));
                            vlSelf->__Vfunc_leading_zero32__11441__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11441__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11441__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11441__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11441__count)));
                            vlSelf->__Vfunc_leading_zero32__11441__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11441__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11441__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11441__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11441__count)));
                            vlSelf->__Vfunc_leading_zero32__11441__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11441__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11441__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11441__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11441__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11441__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11441__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11441__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11441__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__85__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__85__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11453__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__85__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11453__part 
                            = vlSelf->__Vfunc_leading_zero32__11453__value;
                        vlSelf->__Vfunc_leading_zero32__11453__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11453__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11453__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11453__count)));
                            vlSelf->__Vfunc_leading_zero32__11453__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11453__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11453__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11453__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11453__count)));
                            vlSelf->__Vfunc_leading_zero32__11453__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11453__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11453__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11453__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11453__count)));
                            vlSelf->__Vfunc_leading_zero32__11453__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11453__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11453__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11453__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11453__count)));
                            vlSelf->__Vfunc_leading_zero32__11453__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11453__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11453__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11453__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11453__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11453__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11453__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11453__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11453__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__86__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__86__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11465__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__86__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11465__part 
                            = vlSelf->__Vfunc_leading_zero32__11465__value;
                        vlSelf->__Vfunc_leading_zero32__11465__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11465__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11465__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11465__count)));
                            vlSelf->__Vfunc_leading_zero32__11465__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11465__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11465__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11465__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11465__count)));
                            vlSelf->__Vfunc_leading_zero32__11465__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11465__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11465__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11465__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11465__count)));
                            vlSelf->__Vfunc_leading_zero32__11465__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11465__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11465__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11465__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11465__count)));
                            vlSelf->__Vfunc_leading_zero32__11465__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11465__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11465__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11465__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11465__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11465__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11465__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11465__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11465__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__87__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__87__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11477__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__87__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11477__part 
                            = vlSelf->__Vfunc_leading_zero32__11477__value;
                        vlSelf->__Vfunc_leading_zero32__11477__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11477__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11477__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11477__count)));
                            vlSelf->__Vfunc_leading_zero32__11477__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11477__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11477__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11477__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11477__count)));
                            vlSelf->__Vfunc_leading_zero32__11477__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11477__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11477__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11477__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11477__count)));
                            vlSelf->__Vfunc_leading_zero32__11477__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11477__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11477__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11477__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11477__count)));
                            vlSelf->__Vfunc_leading_zero32__11477__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11477__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11477__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11477__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11477__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11477__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11477__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11477__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11477__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__88__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__88__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11489__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__88__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11489__part 
                            = vlSelf->__Vfunc_leading_zero32__11489__value;
                        vlSelf->__Vfunc_leading_zero32__11489__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11489__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11489__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11489__count)));
                            vlSelf->__Vfunc_leading_zero32__11489__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11489__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11489__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11489__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11489__count)));
                            vlSelf->__Vfunc_leading_zero32__11489__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11489__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11489__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11489__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11489__count)));
                            vlSelf->__Vfunc_leading_zero32__11489__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11489__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11489__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11489__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11489__count)));
                            vlSelf->__Vfunc_leading_zero32__11489__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11489__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11489__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11489__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11489__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11489__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11489__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11489__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11489__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__89__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__89__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11501__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__89__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11501__part 
                            = vlSelf->__Vfunc_leading_zero32__11501__value;
                        vlSelf->__Vfunc_leading_zero32__11501__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11501__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11501__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11501__count)));
                            vlSelf->__Vfunc_leading_zero32__11501__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11501__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11501__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11501__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11501__count)));
                            vlSelf->__Vfunc_leading_zero32__11501__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11501__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11501__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11501__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11501__count)));
                            vlSelf->__Vfunc_leading_zero32__11501__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11501__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11501__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11501__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11501__count)));
                            vlSelf->__Vfunc_leading_zero32__11501__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11501__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11501__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11501__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11501__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11501__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11501__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11501__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11501__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__90__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__90__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11513__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__90__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11513__part 
                            = vlSelf->__Vfunc_leading_zero32__11513__value;
                        vlSelf->__Vfunc_leading_zero32__11513__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11513__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11513__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11513__count)));
                            vlSelf->__Vfunc_leading_zero32__11513__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11513__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11513__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11513__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11513__count)));
                            vlSelf->__Vfunc_leading_zero32__11513__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11513__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11513__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11513__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11513__count)));
                            vlSelf->__Vfunc_leading_zero32__11513__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11513__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11513__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11513__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11513__count)));
                            vlSelf->__Vfunc_leading_zero32__11513__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11513__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11513__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11513__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11513__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11513__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11513__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11513__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11513__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__91__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__91__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11525__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__91__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11525__part 
                            = vlSelf->__Vfunc_leading_zero32__11525__value;
                        vlSelf->__Vfunc_leading_zero32__11525__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11525__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11525__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11525__count)));
                            vlSelf->__Vfunc_leading_zero32__11525__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11525__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11525__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11525__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11525__count)));
                            vlSelf->__Vfunc_leading_zero32__11525__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11525__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11525__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11525__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11525__count)));
                            vlSelf->__Vfunc_leading_zero32__11525__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11525__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11525__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11525__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11525__count)));
                            vlSelf->__Vfunc_leading_zero32__11525__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11525__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11525__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11525__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11525__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11525__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11525__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11525__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11525__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__92__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__92__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11537__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__92__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11537__part 
                            = vlSelf->__Vfunc_leading_zero32__11537__value;
                        vlSelf->__Vfunc_leading_zero32__11537__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11537__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11537__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11537__count)));
                            vlSelf->__Vfunc_leading_zero32__11537__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11537__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11537__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11537__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11537__count)));
                            vlSelf->__Vfunc_leading_zero32__11537__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11537__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11537__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11537__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11537__count)));
                            vlSelf->__Vfunc_leading_zero32__11537__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11537__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11537__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11537__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11537__count)));
                            vlSelf->__Vfunc_leading_zero32__11537__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11537__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11537__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11537__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11537__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11537__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11537__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11537__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11537__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__93__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__93__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11549__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__93__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11549__part 
                            = vlSelf->__Vfunc_leading_zero32__11549__value;
                        vlSelf->__Vfunc_leading_zero32__11549__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11549__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11549__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11549__count)));
                            vlSelf->__Vfunc_leading_zero32__11549__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11549__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11549__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11549__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11549__count)));
                            vlSelf->__Vfunc_leading_zero32__11549__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11549__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11549__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11549__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11549__count)));
                            vlSelf->__Vfunc_leading_zero32__11549__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11549__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11549__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11549__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11549__count)));
                            vlSelf->__Vfunc_leading_zero32__11549__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11549__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11549__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11549__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11549__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11549__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11549__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11549__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11549__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__94__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__94__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11561__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__94__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11561__part 
                            = vlSelf->__Vfunc_leading_zero32__11561__value;
                        vlSelf->__Vfunc_leading_zero32__11561__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11561__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11561__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11561__count)));
                            vlSelf->__Vfunc_leading_zero32__11561__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11561__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11561__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11561__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11561__count)));
                            vlSelf->__Vfunc_leading_zero32__11561__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11561__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11561__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11561__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11561__count)));
                            vlSelf->__Vfunc_leading_zero32__11561__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11561__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11561__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11561__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11561__count)));
                            vlSelf->__Vfunc_leading_zero32__11561__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11561__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11561__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11561__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11561__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11561__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11561__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11561__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11561__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__95__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__95__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11573__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__95__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11573__part 
                            = vlSelf->__Vfunc_leading_zero32__11573__value;
                        vlSelf->__Vfunc_leading_zero32__11573__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11573__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11573__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11573__count)));
                            vlSelf->__Vfunc_leading_zero32__11573__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11573__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11573__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11573__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11573__count)));
                            vlSelf->__Vfunc_leading_zero32__11573__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11573__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11573__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11573__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11573__count)));
                            vlSelf->__Vfunc_leading_zero32__11573__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11573__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11573__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11573__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11573__count)));
                            vlSelf->__Vfunc_leading_zero32__11573__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11573__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11573__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11573__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11573__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11573__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11573__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11573__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11573__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__96__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__96__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11585__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__96__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11585__part 
                            = vlSelf->__Vfunc_leading_zero32__11585__value;
                        vlSelf->__Vfunc_leading_zero32__11585__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11585__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11585__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11585__count)));
                            vlSelf->__Vfunc_leading_zero32__11585__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11585__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11585__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11585__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11585__count)));
                            vlSelf->__Vfunc_leading_zero32__11585__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11585__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11585__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11585__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11585__count)));
                            vlSelf->__Vfunc_leading_zero32__11585__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11585__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11585__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11585__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11585__count)));
                            vlSelf->__Vfunc_leading_zero32__11585__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11585__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11585__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11585__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11585__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11585__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11585__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11585__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11585__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__97__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__97__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11597__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__97__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11597__part 
                            = vlSelf->__Vfunc_leading_zero32__11597__value;
                        vlSelf->__Vfunc_leading_zero32__11597__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11597__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11597__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11597__count)));
                            vlSelf->__Vfunc_leading_zero32__11597__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11597__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11597__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11597__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11597__count)));
                            vlSelf->__Vfunc_leading_zero32__11597__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11597__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11597__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11597__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11597__count)));
                            vlSelf->__Vfunc_leading_zero32__11597__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11597__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11597__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11597__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11597__count)));
                            vlSelf->__Vfunc_leading_zero32__11597__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11597__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11597__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11597__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11597__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11597__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11597__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11597__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11597__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__98__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__98__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11609__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__98__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11609__part 
                            = vlSelf->__Vfunc_leading_zero32__11609__value;
                        vlSelf->__Vfunc_leading_zero32__11609__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11609__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11609__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11609__count)));
                            vlSelf->__Vfunc_leading_zero32__11609__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11609__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11609__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11609__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11609__count)));
                            vlSelf->__Vfunc_leading_zero32__11609__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11609__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11609__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11609__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11609__count)));
                            vlSelf->__Vfunc_leading_zero32__11609__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11609__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11609__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11609__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11609__count)));
                            vlSelf->__Vfunc_leading_zero32__11609__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11609__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11609__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11609__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11609__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11609__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11609__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11609__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11609__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__99__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__99__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11621__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__99__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11621__part 
                            = vlSelf->__Vfunc_leading_zero32__11621__value;
                        vlSelf->__Vfunc_leading_zero32__11621__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11621__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11621__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11621__count)));
                            vlSelf->__Vfunc_leading_zero32__11621__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11621__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11621__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11621__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11621__count)));
                            vlSelf->__Vfunc_leading_zero32__11621__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11621__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11621__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11621__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11621__count)));
                            vlSelf->__Vfunc_leading_zero32__11621__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11621__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11621__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11621__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11621__count)));
                            vlSelf->__Vfunc_leading_zero32__11621__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11621__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11621__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11621__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11621__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11621__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11621__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11621__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11621__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__100__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__100__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11633__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__100__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11633__part 
                            = vlSelf->__Vfunc_leading_zero32__11633__value;
                        vlSelf->__Vfunc_leading_zero32__11633__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11633__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11633__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11633__count)));
                            vlSelf->__Vfunc_leading_zero32__11633__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11633__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11633__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11633__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11633__count)));
                            vlSelf->__Vfunc_leading_zero32__11633__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11633__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11633__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11633__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11633__count)));
                            vlSelf->__Vfunc_leading_zero32__11633__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11633__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11633__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11633__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11633__count)));
                            vlSelf->__Vfunc_leading_zero32__11633__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11633__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11633__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11633__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11633__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11633__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11633__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11633__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11633__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__101__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__101__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11645__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__101__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11645__part 
                            = vlSelf->__Vfunc_leading_zero32__11645__value;
                        vlSelf->__Vfunc_leading_zero32__11645__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11645__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11645__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11645__count)));
                            vlSelf->__Vfunc_leading_zero32__11645__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11645__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11645__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11645__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11645__count)));
                            vlSelf->__Vfunc_leading_zero32__11645__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11645__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11645__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11645__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11645__count)));
                            vlSelf->__Vfunc_leading_zero32__11645__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11645__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11645__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11645__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11645__count)));
                            vlSelf->__Vfunc_leading_zero32__11645__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11645__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11645__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11645__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11645__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11645__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11645__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11645__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11645__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__102__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__102__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11657__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__102__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11657__part 
                            = vlSelf->__Vfunc_leading_zero32__11657__value;
                        vlSelf->__Vfunc_leading_zero32__11657__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11657__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11657__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11657__count)));
                            vlSelf->__Vfunc_leading_zero32__11657__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11657__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11657__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11657__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11657__count)));
                            vlSelf->__Vfunc_leading_zero32__11657__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11657__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11657__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11657__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11657__count)));
                            vlSelf->__Vfunc_leading_zero32__11657__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11657__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11657__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11657__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11657__count)));
                            vlSelf->__Vfunc_leading_zero32__11657__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11657__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11657__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11657__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11657__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11657__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11657__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11657__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11657__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__103__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__103__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11669__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__103__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11669__part 
                            = vlSelf->__Vfunc_leading_zero32__11669__value;
                        vlSelf->__Vfunc_leading_zero32__11669__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11669__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11669__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11669__count)));
                            vlSelf->__Vfunc_leading_zero32__11669__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11669__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11669__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11669__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11669__count)));
                            vlSelf->__Vfunc_leading_zero32__11669__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11669__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11669__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11669__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11669__count)));
                            vlSelf->__Vfunc_leading_zero32__11669__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11669__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11669__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11669__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11669__count)));
                            vlSelf->__Vfunc_leading_zero32__11669__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11669__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11669__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11669__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11669__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11669__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11669__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11669__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11669__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__104__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__104__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11681__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__104__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11681__part 
                            = vlSelf->__Vfunc_leading_zero32__11681__value;
                        vlSelf->__Vfunc_leading_zero32__11681__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11681__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11681__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11681__count)));
                            vlSelf->__Vfunc_leading_zero32__11681__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11681__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11681__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11681__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11681__count)));
                            vlSelf->__Vfunc_leading_zero32__11681__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11681__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11681__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11681__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11681__count)));
                            vlSelf->__Vfunc_leading_zero32__11681__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11681__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11681__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11681__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11681__count)));
                            vlSelf->__Vfunc_leading_zero32__11681__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11681__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11681__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11681__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11681__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11681__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11681__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11681__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11681__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__105__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__105__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11693__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__105__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11693__part 
                            = vlSelf->__Vfunc_leading_zero32__11693__value;
                        vlSelf->__Vfunc_leading_zero32__11693__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11693__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11693__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11693__count)));
                            vlSelf->__Vfunc_leading_zero32__11693__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11693__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11693__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11693__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11693__count)));
                            vlSelf->__Vfunc_leading_zero32__11693__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11693__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11693__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11693__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11693__count)));
                            vlSelf->__Vfunc_leading_zero32__11693__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11693__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11693__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11693__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11693__count)));
                            vlSelf->__Vfunc_leading_zero32__11693__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11693__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11693__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11693__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11693__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11693__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11693__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11693__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11693__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__106__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__106__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11705__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__106__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11705__part 
                            = vlSelf->__Vfunc_leading_zero32__11705__value;
                        vlSelf->__Vfunc_leading_zero32__11705__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11705__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11705__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11705__count)));
                            vlSelf->__Vfunc_leading_zero32__11705__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11705__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11705__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11705__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11705__count)));
                            vlSelf->__Vfunc_leading_zero32__11705__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11705__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11705__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11705__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11705__count)));
                            vlSelf->__Vfunc_leading_zero32__11705__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11705__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11705__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11705__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11705__count)));
                            vlSelf->__Vfunc_leading_zero32__11705__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11705__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11705__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11705__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11705__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11705__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11705__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11705__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11705__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__107__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__107__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11717__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__107__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11717__part 
                            = vlSelf->__Vfunc_leading_zero32__11717__value;
                        vlSelf->__Vfunc_leading_zero32__11717__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11717__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11717__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11717__count)));
                            vlSelf->__Vfunc_leading_zero32__11717__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11717__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11717__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11717__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11717__count)));
                            vlSelf->__Vfunc_leading_zero32__11717__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11717__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11717__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11717__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11717__count)));
                            vlSelf->__Vfunc_leading_zero32__11717__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11717__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11717__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11717__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11717__count)));
                            vlSelf->__Vfunc_leading_zero32__11717__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11717__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11717__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11717__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11717__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11717__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11717__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11717__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11717__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__108__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__108__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11729__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__108__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11729__part 
                            = vlSelf->__Vfunc_leading_zero32__11729__value;
                        vlSelf->__Vfunc_leading_zero32__11729__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11729__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11729__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11729__count)));
                            vlSelf->__Vfunc_leading_zero32__11729__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11729__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11729__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11729__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11729__count)));
                            vlSelf->__Vfunc_leading_zero32__11729__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11729__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11729__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11729__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11729__count)));
                            vlSelf->__Vfunc_leading_zero32__11729__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11729__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11729__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11729__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11729__count)));
                            vlSelf->__Vfunc_leading_zero32__11729__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11729__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11729__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11729__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11729__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11729__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11729__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11729__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11729__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__109__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__109__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11741__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__109__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11741__part 
                            = vlSelf->__Vfunc_leading_zero32__11741__value;
                        vlSelf->__Vfunc_leading_zero32__11741__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11741__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11741__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11741__count)));
                            vlSelf->__Vfunc_leading_zero32__11741__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11741__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11741__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11741__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11741__count)));
                            vlSelf->__Vfunc_leading_zero32__11741__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11741__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11741__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11741__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11741__count)));
                            vlSelf->__Vfunc_leading_zero32__11741__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11741__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11741__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11741__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11741__count)));
                            vlSelf->__Vfunc_leading_zero32__11741__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11741__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11741__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11741__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11741__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11741__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11741__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11741__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11741__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__110__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__110__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11753__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__110__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11753__part 
                            = vlSelf->__Vfunc_leading_zero32__11753__value;
                        vlSelf->__Vfunc_leading_zero32__11753__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11753__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11753__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11753__count)));
                            vlSelf->__Vfunc_leading_zero32__11753__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11753__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11753__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11753__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11753__count)));
                            vlSelf->__Vfunc_leading_zero32__11753__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11753__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11753__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11753__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11753__count)));
                            vlSelf->__Vfunc_leading_zero32__11753__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11753__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11753__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11753__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11753__count)));
                            vlSelf->__Vfunc_leading_zero32__11753__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11753__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11753__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11753__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11753__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11753__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11753__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11753__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11753__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__111__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__111__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11765__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__111__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11765__part 
                            = vlSelf->__Vfunc_leading_zero32__11765__value;
                        vlSelf->__Vfunc_leading_zero32__11765__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11765__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11765__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11765__count)));
                            vlSelf->__Vfunc_leading_zero32__11765__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11765__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11765__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11765__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11765__count)));
                            vlSelf->__Vfunc_leading_zero32__11765__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11765__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11765__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11765__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11765__count)));
                            vlSelf->__Vfunc_leading_zero32__11765__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11765__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11765__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11765__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11765__count)));
                            vlSelf->__Vfunc_leading_zero32__11765__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11765__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11765__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11765__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11765__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11765__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11765__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11765__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11765__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__112__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__112__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11777__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__112__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11777__part 
                            = vlSelf->__Vfunc_leading_zero32__11777__value;
                        vlSelf->__Vfunc_leading_zero32__11777__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11777__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11777__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11777__count)));
                            vlSelf->__Vfunc_leading_zero32__11777__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11777__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11777__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11777__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11777__count)));
                            vlSelf->__Vfunc_leading_zero32__11777__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11777__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11777__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11777__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11777__count)));
                            vlSelf->__Vfunc_leading_zero32__11777__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11777__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11777__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11777__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11777__count)));
                            vlSelf->__Vfunc_leading_zero32__11777__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11777__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11777__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11777__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11777__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11777__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11777__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11777__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11777__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__113__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__113__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11789__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__113__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11789__part 
                            = vlSelf->__Vfunc_leading_zero32__11789__value;
                        vlSelf->__Vfunc_leading_zero32__11789__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11789__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11789__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11789__count)));
                            vlSelf->__Vfunc_leading_zero32__11789__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11789__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11789__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11789__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11789__count)));
                            vlSelf->__Vfunc_leading_zero32__11789__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11789__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11789__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11789__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11789__count)));
                            vlSelf->__Vfunc_leading_zero32__11789__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11789__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11789__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11789__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11789__count)));
                            vlSelf->__Vfunc_leading_zero32__11789__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11789__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11789__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11789__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11789__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11789__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11789__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11789__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11789__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__114__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__114__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11801__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__114__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11801__part 
                            = vlSelf->__Vfunc_leading_zero32__11801__value;
                        vlSelf->__Vfunc_leading_zero32__11801__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11801__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11801__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11801__count)));
                            vlSelf->__Vfunc_leading_zero32__11801__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11801__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11801__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11801__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11801__count)));
                            vlSelf->__Vfunc_leading_zero32__11801__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11801__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11801__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11801__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11801__count)));
                            vlSelf->__Vfunc_leading_zero32__11801__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11801__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11801__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11801__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11801__count)));
                            vlSelf->__Vfunc_leading_zero32__11801__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11801__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11801__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11801__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11801__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11801__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11801__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11801__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11801__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__115__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__115__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11813__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__115__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11813__part 
                            = vlSelf->__Vfunc_leading_zero32__11813__value;
                        vlSelf->__Vfunc_leading_zero32__11813__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11813__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11813__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11813__count)));
                            vlSelf->__Vfunc_leading_zero32__11813__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11813__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11813__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11813__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11813__count)));
                            vlSelf->__Vfunc_leading_zero32__11813__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11813__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11813__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11813__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11813__count)));
                            vlSelf->__Vfunc_leading_zero32__11813__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11813__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11813__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11813__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11813__count)));
                            vlSelf->__Vfunc_leading_zero32__11813__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11813__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11813__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11813__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11813__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11813__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11813__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11813__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11813__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__116__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__116__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11825__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__116__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11825__part 
                            = vlSelf->__Vfunc_leading_zero32__11825__value;
                        vlSelf->__Vfunc_leading_zero32__11825__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11825__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11825__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11825__count)));
                            vlSelf->__Vfunc_leading_zero32__11825__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11825__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11825__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11825__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11825__count)));
                            vlSelf->__Vfunc_leading_zero32__11825__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11825__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11825__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11825__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11825__count)));
                            vlSelf->__Vfunc_leading_zero32__11825__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11825__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11825__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11825__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11825__count)));
                            vlSelf->__Vfunc_leading_zero32__11825__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11825__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11825__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11825__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11825__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11825__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11825__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11825__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11825__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__117__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__117__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11837__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__117__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11837__part 
                            = vlSelf->__Vfunc_leading_zero32__11837__value;
                        vlSelf->__Vfunc_leading_zero32__11837__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11837__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11837__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11837__count)));
                            vlSelf->__Vfunc_leading_zero32__11837__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11837__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11837__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11837__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11837__count)));
                            vlSelf->__Vfunc_leading_zero32__11837__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11837__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11837__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11837__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11837__count)));
                            vlSelf->__Vfunc_leading_zero32__11837__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11837__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11837__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11837__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11837__count)));
                            vlSelf->__Vfunc_leading_zero32__11837__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11837__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11837__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11837__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11837__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11837__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11837__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11837__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11837__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__118__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__118__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11849__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__118__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11849__part 
                            = vlSelf->__Vfunc_leading_zero32__11849__value;
                        vlSelf->__Vfunc_leading_zero32__11849__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11849__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11849__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11849__count)));
                            vlSelf->__Vfunc_leading_zero32__11849__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11849__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11849__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11849__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11849__count)));
                            vlSelf->__Vfunc_leading_zero32__11849__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11849__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11849__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11849__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11849__count)));
                            vlSelf->__Vfunc_leading_zero32__11849__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11849__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11849__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11849__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11849__count)));
                            vlSelf->__Vfunc_leading_zero32__11849__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11849__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11849__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11849__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11849__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11849__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11849__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11849__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11849__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__119__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__119__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11861__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__119__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11861__part 
                            = vlSelf->__Vfunc_leading_zero32__11861__value;
                        vlSelf->__Vfunc_leading_zero32__11861__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11861__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11861__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11861__count)));
                            vlSelf->__Vfunc_leading_zero32__11861__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11861__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11861__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11861__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11861__count)));
                            vlSelf->__Vfunc_leading_zero32__11861__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11861__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11861__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11861__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11861__count)));
                            vlSelf->__Vfunc_leading_zero32__11861__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11861__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11861__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11861__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11861__count)));
                            vlSelf->__Vfunc_leading_zero32__11861__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11861__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11861__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11861__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11861__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11861__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11861__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11861__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11861__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__120__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__120__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11873__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__120__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11873__part 
                            = vlSelf->__Vfunc_leading_zero32__11873__value;
                        vlSelf->__Vfunc_leading_zero32__11873__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11873__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11873__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11873__count)));
                            vlSelf->__Vfunc_leading_zero32__11873__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11873__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11873__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11873__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11873__count)));
                            vlSelf->__Vfunc_leading_zero32__11873__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11873__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11873__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11873__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11873__count)));
                            vlSelf->__Vfunc_leading_zero32__11873__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11873__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11873__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11873__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11873__count)));
                            vlSelf->__Vfunc_leading_zero32__11873__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11873__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11873__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11873__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11873__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11873__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11873__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11873__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11873__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__121__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__121__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11885__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__121__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11885__part 
                            = vlSelf->__Vfunc_leading_zero32__11885__value;
                        vlSelf->__Vfunc_leading_zero32__11885__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11885__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11885__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11885__count)));
                            vlSelf->__Vfunc_leading_zero32__11885__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11885__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11885__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11885__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11885__count)));
                            vlSelf->__Vfunc_leading_zero32__11885__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11885__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11885__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11885__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11885__count)));
                            vlSelf->__Vfunc_leading_zero32__11885__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11885__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11885__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11885__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11885__count)));
                            vlSelf->__Vfunc_leading_zero32__11885__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11885__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11885__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11885__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11885__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11885__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11885__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11885__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11885__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__122__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__122__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11897__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__122__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11897__part 
                            = vlSelf->__Vfunc_leading_zero32__11897__value;
                        vlSelf->__Vfunc_leading_zero32__11897__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11897__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11897__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11897__count)));
                            vlSelf->__Vfunc_leading_zero32__11897__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11897__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11897__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11897__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11897__count)));
                            vlSelf->__Vfunc_leading_zero32__11897__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11897__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11897__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11897__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11897__count)));
                            vlSelf->__Vfunc_leading_zero32__11897__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11897__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11897__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11897__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11897__count)));
                            vlSelf->__Vfunc_leading_zero32__11897__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11897__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11897__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11897__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11897__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11897__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11897__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11897__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11897__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__123__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__123__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11909__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__123__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11909__part 
                            = vlSelf->__Vfunc_leading_zero32__11909__value;
                        vlSelf->__Vfunc_leading_zero32__11909__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11909__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11909__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11909__count)));
                            vlSelf->__Vfunc_leading_zero32__11909__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11909__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11909__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11909__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11909__count)));
                            vlSelf->__Vfunc_leading_zero32__11909__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11909__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11909__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11909__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11909__count)));
                            vlSelf->__Vfunc_leading_zero32__11909__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11909__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11909__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11909__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11909__count)));
                            vlSelf->__Vfunc_leading_zero32__11909__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11909__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11909__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11909__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11909__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11909__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11909__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11909__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11909__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__124__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__124__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11921__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__124__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11921__part 
                            = vlSelf->__Vfunc_leading_zero32__11921__value;
                        vlSelf->__Vfunc_leading_zero32__11921__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11921__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11921__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11921__count)));
                            vlSelf->__Vfunc_leading_zero32__11921__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11921__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11921__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11921__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11921__count)));
                            vlSelf->__Vfunc_leading_zero32__11921__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11921__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11921__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11921__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11921__count)));
                            vlSelf->__Vfunc_leading_zero32__11921__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11921__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11921__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11921__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11921__count)));
                            vlSelf->__Vfunc_leading_zero32__11921__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11921__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11921__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11921__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11921__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11921__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11921__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11921__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11921__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__125__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__125__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11933__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__125__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11933__part 
                            = vlSelf->__Vfunc_leading_zero32__11933__value;
                        vlSelf->__Vfunc_leading_zero32__11933__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11933__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11933__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11933__count)));
                            vlSelf->__Vfunc_leading_zero32__11933__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11933__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11933__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11933__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11933__count)));
                            vlSelf->__Vfunc_leading_zero32__11933__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11933__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11933__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11933__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11933__count)));
                            vlSelf->__Vfunc_leading_zero32__11933__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11933__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11933__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11933__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11933__count)));
                            vlSelf->__Vfunc_leading_zero32__11933__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11933__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11933__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11933__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11933__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11933__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11933__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11933__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11933__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__126__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__126__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11945__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__126__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11945__part 
                            = vlSelf->__Vfunc_leading_zero32__11945__value;
                        vlSelf->__Vfunc_leading_zero32__11945__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11945__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11945__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11945__count)));
                            vlSelf->__Vfunc_leading_zero32__11945__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11945__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11945__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11945__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11945__count)));
                            vlSelf->__Vfunc_leading_zero32__11945__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11945__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11945__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11945__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11945__count)));
                            vlSelf->__Vfunc_leading_zero32__11945__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11945__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11945__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11945__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11945__count)));
                            vlSelf->__Vfunc_leading_zero32__11945__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11945__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11945__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11945__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11945__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11945__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11945__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11945__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11945__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__127__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__127__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11957__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__127__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11957__part 
                            = vlSelf->__Vfunc_leading_zero32__11957__value;
                        vlSelf->__Vfunc_leading_zero32__11957__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11957__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11957__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11957__count)));
                            vlSelf->__Vfunc_leading_zero32__11957__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11957__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11957__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11957__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11957__count)));
                            vlSelf->__Vfunc_leading_zero32__11957__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11957__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11957__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11957__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11957__count)));
                            vlSelf->__Vfunc_leading_zero32__11957__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11957__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11957__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11957__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11957__count)));
                            vlSelf->__Vfunc_leading_zero32__11957__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11957__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11957__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11957__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11957__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11957__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11957__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11957__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11957__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__take_bit 
        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__shifted_remainder 
           >= (1U | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__root 
                     << 2U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11964__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11964__part 
                            = vlSelf->__Vfunc_leading_zero32__11964__value;
                        vlSelf->__Vfunc_leading_zero32__11964__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11964__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11964__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11964__count)));
                            vlSelf->__Vfunc_leading_zero32__11964__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11964__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11964__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11964__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11964__count)));
                            vlSelf->__Vfunc_leading_zero32__11964__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11964__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11964__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11964__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11964__count)));
                            vlSelf->__Vfunc_leading_zero32__11964__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11964__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11964__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11964__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11964__count)));
                            vlSelf->__Vfunc_leading_zero32__11964__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11964__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11964__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11964__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11964__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11964__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11964__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11964__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11964__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11982__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11982__part 
                            = vlSelf->__Vfunc_leading_zero32__11982__value;
                        vlSelf->__Vfunc_leading_zero32__11982__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11982__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11982__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11982__count)));
                            vlSelf->__Vfunc_leading_zero32__11982__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11982__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11982__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11982__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11982__count)));
                            vlSelf->__Vfunc_leading_zero32__11982__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11982__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11982__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11982__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11982__count)));
                            vlSelf->__Vfunc_leading_zero32__11982__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11982__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11982__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11982__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11982__count)));
                            vlSelf->__Vfunc_leading_zero32__11982__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11982__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11982__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11982__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11982__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11982__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11982__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11982__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11982__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12000__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12000__part 
                            = vlSelf->__Vfunc_leading_zero32__12000__value;
                        vlSelf->__Vfunc_leading_zero32__12000__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12000__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12000__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12000__count)));
                            vlSelf->__Vfunc_leading_zero32__12000__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12000__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12000__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12000__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12000__count)));
                            vlSelf->__Vfunc_leading_zero32__12000__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12000__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12000__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12000__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12000__count)));
                            vlSelf->__Vfunc_leading_zero32__12000__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12000__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12000__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12000__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12000__count)));
                            vlSelf->__Vfunc_leading_zero32__12000__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12000__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12000__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12000__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12000__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12000__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12000__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12000__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12000__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12018__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12018__part 
                            = vlSelf->__Vfunc_leading_zero32__12018__value;
                        vlSelf->__Vfunc_leading_zero32__12018__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12018__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12018__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12018__count)));
                            vlSelf->__Vfunc_leading_zero32__12018__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12018__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12018__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12018__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12018__count)));
                            vlSelf->__Vfunc_leading_zero32__12018__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12018__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12018__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12018__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12018__count)));
                            vlSelf->__Vfunc_leading_zero32__12018__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12018__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12018__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12018__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12018__count)));
                            vlSelf->__Vfunc_leading_zero32__12018__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12018__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12018__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12018__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12018__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12018__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12018__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12018__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12018__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12036__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12036__part 
                            = vlSelf->__Vfunc_leading_zero32__12036__value;
                        vlSelf->__Vfunc_leading_zero32__12036__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12036__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12036__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12036__count)));
                            vlSelf->__Vfunc_leading_zero32__12036__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12036__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12036__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12036__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12036__count)));
                            vlSelf->__Vfunc_leading_zero32__12036__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12036__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12036__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12036__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12036__count)));
                            vlSelf->__Vfunc_leading_zero32__12036__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12036__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12036__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12036__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12036__count)));
                            vlSelf->__Vfunc_leading_zero32__12036__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12036__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12036__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12036__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12036__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12036__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12036__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12036__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12036__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12054__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12054__part 
                            = vlSelf->__Vfunc_leading_zero32__12054__value;
                        vlSelf->__Vfunc_leading_zero32__12054__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12054__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12054__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12054__count)));
                            vlSelf->__Vfunc_leading_zero32__12054__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12054__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12054__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12054__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12054__count)));
                            vlSelf->__Vfunc_leading_zero32__12054__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12054__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12054__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12054__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12054__count)));
                            vlSelf->__Vfunc_leading_zero32__12054__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12054__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12054__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12054__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12054__count)));
                            vlSelf->__Vfunc_leading_zero32__12054__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12054__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12054__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12054__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12054__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12054__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12054__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12054__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12054__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12072__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12072__part 
                            = vlSelf->__Vfunc_leading_zero32__12072__value;
                        vlSelf->__Vfunc_leading_zero32__12072__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12072__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12072__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12072__count)));
                            vlSelf->__Vfunc_leading_zero32__12072__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12072__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12072__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12072__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12072__count)));
                            vlSelf->__Vfunc_leading_zero32__12072__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12072__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12072__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12072__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12072__count)));
                            vlSelf->__Vfunc_leading_zero32__12072__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12072__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12072__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12072__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12072__count)));
                            vlSelf->__Vfunc_leading_zero32__12072__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12072__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12072__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12072__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12072__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12072__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12072__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12072__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12072__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12090__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12090__part 
                            = vlSelf->__Vfunc_leading_zero32__12090__value;
                        vlSelf->__Vfunc_leading_zero32__12090__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12090__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12090__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12090__count)));
                            vlSelf->__Vfunc_leading_zero32__12090__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12090__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12090__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12090__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12090__count)));
                            vlSelf->__Vfunc_leading_zero32__12090__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12090__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12090__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12090__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12090__count)));
                            vlSelf->__Vfunc_leading_zero32__12090__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12090__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12090__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12090__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12090__count)));
                            vlSelf->__Vfunc_leading_zero32__12090__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12090__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12090__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12090__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12090__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12090__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12090__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12090__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12090__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12108__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12108__part 
                            = vlSelf->__Vfunc_leading_zero32__12108__value;
                        vlSelf->__Vfunc_leading_zero32__12108__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12108__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12108__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12108__count)));
                            vlSelf->__Vfunc_leading_zero32__12108__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12108__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12108__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12108__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12108__count)));
                            vlSelf->__Vfunc_leading_zero32__12108__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12108__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12108__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12108__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12108__count)));
                            vlSelf->__Vfunc_leading_zero32__12108__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12108__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12108__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12108__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12108__count)));
                            vlSelf->__Vfunc_leading_zero32__12108__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12108__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12108__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12108__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12108__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12108__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12108__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12108__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12108__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12126__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12126__part 
                            = vlSelf->__Vfunc_leading_zero32__12126__value;
                        vlSelf->__Vfunc_leading_zero32__12126__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12126__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12126__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12126__count)));
                            vlSelf->__Vfunc_leading_zero32__12126__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12126__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12126__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12126__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12126__count)));
                            vlSelf->__Vfunc_leading_zero32__12126__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12126__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12126__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12126__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12126__count)));
                            vlSelf->__Vfunc_leading_zero32__12126__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12126__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12126__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12126__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12126__count)));
                            vlSelf->__Vfunc_leading_zero32__12126__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12126__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12126__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12126__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12126__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12126__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12126__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12126__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12126__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12144__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12144__part 
                            = vlSelf->__Vfunc_leading_zero32__12144__value;
                        vlSelf->__Vfunc_leading_zero32__12144__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12144__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12144__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12144__count)));
                            vlSelf->__Vfunc_leading_zero32__12144__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12144__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12144__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12144__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12144__count)));
                            vlSelf->__Vfunc_leading_zero32__12144__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12144__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12144__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12144__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12144__count)));
                            vlSelf->__Vfunc_leading_zero32__12144__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12144__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12144__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12144__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12144__count)));
                            vlSelf->__Vfunc_leading_zero32__12144__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12144__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12144__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12144__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12144__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12144__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12144__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12144__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12144__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12162__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12162__part 
                            = vlSelf->__Vfunc_leading_zero32__12162__value;
                        vlSelf->__Vfunc_leading_zero32__12162__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12162__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12162__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12162__count)));
                            vlSelf->__Vfunc_leading_zero32__12162__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12162__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12162__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12162__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12162__count)));
                            vlSelf->__Vfunc_leading_zero32__12162__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12162__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12162__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12162__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12162__count)));
                            vlSelf->__Vfunc_leading_zero32__12162__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12162__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12162__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12162__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12162__count)));
                            vlSelf->__Vfunc_leading_zero32__12162__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12162__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12162__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12162__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12162__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12162__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12162__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12162__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12162__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12180__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12180__part 
                            = vlSelf->__Vfunc_leading_zero32__12180__value;
                        vlSelf->__Vfunc_leading_zero32__12180__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12180__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12180__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12180__count)));
                            vlSelf->__Vfunc_leading_zero32__12180__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12180__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12180__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12180__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12180__count)));
                            vlSelf->__Vfunc_leading_zero32__12180__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12180__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12180__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12180__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12180__count)));
                            vlSelf->__Vfunc_leading_zero32__12180__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12180__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12180__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12180__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12180__count)));
                            vlSelf->__Vfunc_leading_zero32__12180__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12180__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12180__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12180__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12180__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12180__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12180__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12180__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12180__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12198__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12198__part 
                            = vlSelf->__Vfunc_leading_zero32__12198__value;
                        vlSelf->__Vfunc_leading_zero32__12198__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12198__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12198__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12198__count)));
                            vlSelf->__Vfunc_leading_zero32__12198__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12198__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12198__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12198__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12198__count)));
                            vlSelf->__Vfunc_leading_zero32__12198__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12198__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12198__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12198__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12198__count)));
                            vlSelf->__Vfunc_leading_zero32__12198__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12198__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12198__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12198__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12198__count)));
                            vlSelf->__Vfunc_leading_zero32__12198__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12198__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12198__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12198__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12198__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12198__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12198__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12198__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12198__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12216__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12216__part 
                            = vlSelf->__Vfunc_leading_zero32__12216__value;
                        vlSelf->__Vfunc_leading_zero32__12216__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12216__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12216__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12216__count)));
                            vlSelf->__Vfunc_leading_zero32__12216__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12216__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12216__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12216__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12216__count)));
                            vlSelf->__Vfunc_leading_zero32__12216__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12216__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12216__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12216__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12216__count)));
                            vlSelf->__Vfunc_leading_zero32__12216__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12216__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12216__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12216__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12216__count)));
                            vlSelf->__Vfunc_leading_zero32__12216__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12216__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12216__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12216__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12216__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12216__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12216__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12216__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12216__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12234__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12234__part 
                            = vlSelf->__Vfunc_leading_zero32__12234__value;
                        vlSelf->__Vfunc_leading_zero32__12234__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12234__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12234__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12234__count)));
                            vlSelf->__Vfunc_leading_zero32__12234__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12234__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12234__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12234__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12234__count)));
                            vlSelf->__Vfunc_leading_zero32__12234__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12234__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12234__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12234__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12234__count)));
                            vlSelf->__Vfunc_leading_zero32__12234__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12234__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12234__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12234__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12234__count)));
                            vlSelf->__Vfunc_leading_zero32__12234__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12234__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12234__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12234__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12234__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12234__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12234__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12234__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12234__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12252__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12252__part 
                            = vlSelf->__Vfunc_leading_zero32__12252__value;
                        vlSelf->__Vfunc_leading_zero32__12252__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12252__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12252__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12252__count)));
                            vlSelf->__Vfunc_leading_zero32__12252__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12252__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12252__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12252__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12252__count)));
                            vlSelf->__Vfunc_leading_zero32__12252__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12252__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12252__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12252__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12252__count)));
                            vlSelf->__Vfunc_leading_zero32__12252__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12252__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12252__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12252__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12252__count)));
                            vlSelf->__Vfunc_leading_zero32__12252__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12252__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12252__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12252__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12252__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12252__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12252__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12252__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12252__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12270__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12270__part 
                            = vlSelf->__Vfunc_leading_zero32__12270__value;
                        vlSelf->__Vfunc_leading_zero32__12270__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12270__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12270__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12270__count)));
                            vlSelf->__Vfunc_leading_zero32__12270__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12270__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12270__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12270__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12270__count)));
                            vlSelf->__Vfunc_leading_zero32__12270__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12270__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12270__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12270__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12270__count)));
                            vlSelf->__Vfunc_leading_zero32__12270__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12270__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12270__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12270__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12270__count)));
                            vlSelf->__Vfunc_leading_zero32__12270__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12270__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12270__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12270__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12270__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12270__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12270__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12270__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12270__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12288__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12288__part 
                            = vlSelf->__Vfunc_leading_zero32__12288__value;
                        vlSelf->__Vfunc_leading_zero32__12288__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12288__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12288__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12288__count)));
                            vlSelf->__Vfunc_leading_zero32__12288__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12288__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12288__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12288__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12288__count)));
                            vlSelf->__Vfunc_leading_zero32__12288__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12288__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12288__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12288__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12288__count)));
                            vlSelf->__Vfunc_leading_zero32__12288__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12288__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12288__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12288__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12288__count)));
                            vlSelf->__Vfunc_leading_zero32__12288__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12288__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12288__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12288__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12288__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12288__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12288__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12288__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12288__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12306__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12306__part 
                            = vlSelf->__Vfunc_leading_zero32__12306__value;
                        vlSelf->__Vfunc_leading_zero32__12306__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12306__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12306__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12306__count)));
                            vlSelf->__Vfunc_leading_zero32__12306__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12306__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12306__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12306__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12306__count)));
                            vlSelf->__Vfunc_leading_zero32__12306__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12306__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12306__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12306__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12306__count)));
                            vlSelf->__Vfunc_leading_zero32__12306__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12306__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12306__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12306__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12306__count)));
                            vlSelf->__Vfunc_leading_zero32__12306__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12306__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12306__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12306__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12306__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12306__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12306__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12306__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12306__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12324__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12324__part 
                            = vlSelf->__Vfunc_leading_zero32__12324__value;
                        vlSelf->__Vfunc_leading_zero32__12324__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12324__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12324__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12324__count)));
                            vlSelf->__Vfunc_leading_zero32__12324__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12324__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12324__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12324__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12324__count)));
                            vlSelf->__Vfunc_leading_zero32__12324__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12324__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12324__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12324__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12324__count)));
                            vlSelf->__Vfunc_leading_zero32__12324__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12324__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12324__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12324__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12324__count)));
                            vlSelf->__Vfunc_leading_zero32__12324__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12324__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12324__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12324__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12324__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12324__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12324__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12324__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12324__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12342__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12342__part 
                            = vlSelf->__Vfunc_leading_zero32__12342__value;
                        vlSelf->__Vfunc_leading_zero32__12342__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12342__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12342__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12342__count)));
                            vlSelf->__Vfunc_leading_zero32__12342__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12342__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12342__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12342__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12342__count)));
                            vlSelf->__Vfunc_leading_zero32__12342__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12342__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12342__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12342__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12342__count)));
                            vlSelf->__Vfunc_leading_zero32__12342__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12342__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12342__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12342__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12342__count)));
                            vlSelf->__Vfunc_leading_zero32__12342__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12342__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12342__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12342__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12342__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12342__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12342__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12342__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12342__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12360__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12360__part 
                            = vlSelf->__Vfunc_leading_zero32__12360__value;
                        vlSelf->__Vfunc_leading_zero32__12360__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12360__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12360__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12360__count)));
                            vlSelf->__Vfunc_leading_zero32__12360__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12360__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12360__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12360__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12360__count)));
                            vlSelf->__Vfunc_leading_zero32__12360__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12360__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12360__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12360__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12360__count)));
                            vlSelf->__Vfunc_leading_zero32__12360__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12360__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12360__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12360__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12360__count)));
                            vlSelf->__Vfunc_leading_zero32__12360__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12360__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12360__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12360__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12360__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12360__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12360__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12360__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12360__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12378__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12378__part 
                            = vlSelf->__Vfunc_leading_zero32__12378__value;
                        vlSelf->__Vfunc_leading_zero32__12378__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12378__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12378__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12378__count)));
                            vlSelf->__Vfunc_leading_zero32__12378__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12378__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12378__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12378__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12378__count)));
                            vlSelf->__Vfunc_leading_zero32__12378__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12378__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12378__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12378__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12378__count)));
                            vlSelf->__Vfunc_leading_zero32__12378__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12378__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12378__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12378__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12378__count)));
                            vlSelf->__Vfunc_leading_zero32__12378__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12378__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12378__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12378__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12378__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12378__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12378__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12378__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12378__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12396__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12396__part 
                            = vlSelf->__Vfunc_leading_zero32__12396__value;
                        vlSelf->__Vfunc_leading_zero32__12396__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12396__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12396__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12396__count)));
                            vlSelf->__Vfunc_leading_zero32__12396__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12396__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12396__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12396__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12396__count)));
                            vlSelf->__Vfunc_leading_zero32__12396__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12396__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12396__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12396__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12396__count)));
                            vlSelf->__Vfunc_leading_zero32__12396__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12396__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12396__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12396__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12396__count)));
                            vlSelf->__Vfunc_leading_zero32__12396__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12396__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12396__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12396__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12396__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12396__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12396__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12396__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12396__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12414__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12414__part 
                            = vlSelf->__Vfunc_leading_zero32__12414__value;
                        vlSelf->__Vfunc_leading_zero32__12414__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12414__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12414__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12414__count)));
                            vlSelf->__Vfunc_leading_zero32__12414__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12414__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12414__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12414__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12414__count)));
                            vlSelf->__Vfunc_leading_zero32__12414__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12414__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12414__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12414__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12414__count)));
                            vlSelf->__Vfunc_leading_zero32__12414__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12414__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12414__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12414__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12414__count)));
                            vlSelf->__Vfunc_leading_zero32__12414__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12414__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12414__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12414__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12414__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12414__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12414__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12414__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12414__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12432__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12432__part 
                            = vlSelf->__Vfunc_leading_zero32__12432__value;
                        vlSelf->__Vfunc_leading_zero32__12432__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12432__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12432__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12432__count)));
                            vlSelf->__Vfunc_leading_zero32__12432__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12432__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12432__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12432__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12432__count)));
                            vlSelf->__Vfunc_leading_zero32__12432__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12432__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12432__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12432__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12432__count)));
                            vlSelf->__Vfunc_leading_zero32__12432__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12432__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12432__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12432__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12432__count)));
                            vlSelf->__Vfunc_leading_zero32__12432__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12432__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12432__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12432__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12432__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12432__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12432__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12432__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12432__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12450__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12450__part 
                            = vlSelf->__Vfunc_leading_zero32__12450__value;
                        vlSelf->__Vfunc_leading_zero32__12450__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12450__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12450__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12450__count)));
                            vlSelf->__Vfunc_leading_zero32__12450__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12450__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12450__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12450__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12450__count)));
                            vlSelf->__Vfunc_leading_zero32__12450__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12450__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12450__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12450__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12450__count)));
                            vlSelf->__Vfunc_leading_zero32__12450__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12450__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12450__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12450__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12450__count)));
                            vlSelf->__Vfunc_leading_zero32__12450__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12450__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12450__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12450__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12450__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12450__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12450__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12450__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12450__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12468__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12468__part 
                            = vlSelf->__Vfunc_leading_zero32__12468__value;
                        vlSelf->__Vfunc_leading_zero32__12468__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12468__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12468__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12468__count)));
                            vlSelf->__Vfunc_leading_zero32__12468__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12468__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12468__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12468__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12468__count)));
                            vlSelf->__Vfunc_leading_zero32__12468__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12468__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12468__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12468__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12468__count)));
                            vlSelf->__Vfunc_leading_zero32__12468__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12468__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12468__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12468__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12468__count)));
                            vlSelf->__Vfunc_leading_zero32__12468__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12468__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12468__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12468__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12468__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12468__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12468__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12468__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12468__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12486__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12486__part 
                            = vlSelf->__Vfunc_leading_zero32__12486__value;
                        vlSelf->__Vfunc_leading_zero32__12486__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12486__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12486__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12486__count)));
                            vlSelf->__Vfunc_leading_zero32__12486__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12486__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12486__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12486__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12486__count)));
                            vlSelf->__Vfunc_leading_zero32__12486__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12486__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12486__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12486__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12486__count)));
                            vlSelf->__Vfunc_leading_zero32__12486__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12486__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12486__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12486__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12486__count)));
                            vlSelf->__Vfunc_leading_zero32__12486__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12486__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12486__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12486__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12486__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12486__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12486__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12486__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12486__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12504__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12504__part 
                            = vlSelf->__Vfunc_leading_zero32__12504__value;
                        vlSelf->__Vfunc_leading_zero32__12504__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12504__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12504__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12504__count)));
                            vlSelf->__Vfunc_leading_zero32__12504__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12504__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12504__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12504__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12504__count)));
                            vlSelf->__Vfunc_leading_zero32__12504__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12504__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12504__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12504__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12504__count)));
                            vlSelf->__Vfunc_leading_zero32__12504__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12504__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12504__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12504__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12504__count)));
                            vlSelf->__Vfunc_leading_zero32__12504__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12504__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12504__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12504__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12504__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12504__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12504__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12504__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12504__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12522__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12522__part 
                            = vlSelf->__Vfunc_leading_zero32__12522__value;
                        vlSelf->__Vfunc_leading_zero32__12522__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12522__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12522__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12522__count)));
                            vlSelf->__Vfunc_leading_zero32__12522__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12522__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12522__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12522__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12522__count)));
                            vlSelf->__Vfunc_leading_zero32__12522__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12522__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12522__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12522__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12522__count)));
                            vlSelf->__Vfunc_leading_zero32__12522__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12522__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12522__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12522__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12522__count)));
                            vlSelf->__Vfunc_leading_zero32__12522__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12522__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12522__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12522__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12522__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12522__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12522__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12522__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12522__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12540__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12540__part 
                            = vlSelf->__Vfunc_leading_zero32__12540__value;
                        vlSelf->__Vfunc_leading_zero32__12540__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12540__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12540__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12540__count)));
                            vlSelf->__Vfunc_leading_zero32__12540__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12540__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12540__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12540__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12540__count)));
                            vlSelf->__Vfunc_leading_zero32__12540__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12540__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12540__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12540__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12540__count)));
                            vlSelf->__Vfunc_leading_zero32__12540__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12540__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12540__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12540__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12540__count)));
                            vlSelf->__Vfunc_leading_zero32__12540__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12540__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12540__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12540__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12540__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12540__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12540__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12540__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12540__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12558__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12558__part 
                            = vlSelf->__Vfunc_leading_zero32__12558__value;
                        vlSelf->__Vfunc_leading_zero32__12558__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12558__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12558__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12558__count)));
                            vlSelf->__Vfunc_leading_zero32__12558__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12558__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12558__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12558__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12558__count)));
                            vlSelf->__Vfunc_leading_zero32__12558__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12558__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12558__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12558__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12558__count)));
                            vlSelf->__Vfunc_leading_zero32__12558__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12558__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12558__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12558__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12558__count)));
                            vlSelf->__Vfunc_leading_zero32__12558__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12558__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12558__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12558__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12558__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12558__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12558__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12558__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12558__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12576__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12576__part 
                            = vlSelf->__Vfunc_leading_zero32__12576__value;
                        vlSelf->__Vfunc_leading_zero32__12576__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12576__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12576__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12576__count)));
                            vlSelf->__Vfunc_leading_zero32__12576__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12576__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12576__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12576__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12576__count)));
                            vlSelf->__Vfunc_leading_zero32__12576__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12576__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12576__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12576__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12576__count)));
                            vlSelf->__Vfunc_leading_zero32__12576__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12576__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12576__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12576__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12576__count)));
                            vlSelf->__Vfunc_leading_zero32__12576__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12576__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12576__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12576__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12576__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12576__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12576__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12576__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12576__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12594__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12594__part 
                            = vlSelf->__Vfunc_leading_zero32__12594__value;
                        vlSelf->__Vfunc_leading_zero32__12594__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12594__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12594__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12594__count)));
                            vlSelf->__Vfunc_leading_zero32__12594__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12594__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12594__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12594__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12594__count)));
                            vlSelf->__Vfunc_leading_zero32__12594__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12594__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12594__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12594__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12594__count)));
                            vlSelf->__Vfunc_leading_zero32__12594__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12594__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12594__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12594__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12594__count)));
                            vlSelf->__Vfunc_leading_zero32__12594__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12594__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12594__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12594__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12594__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12594__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12594__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12594__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12594__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12612__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12612__part 
                            = vlSelf->__Vfunc_leading_zero32__12612__value;
                        vlSelf->__Vfunc_leading_zero32__12612__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12612__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12612__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12612__count)));
                            vlSelf->__Vfunc_leading_zero32__12612__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12612__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12612__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12612__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12612__count)));
                            vlSelf->__Vfunc_leading_zero32__12612__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12612__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12612__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12612__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12612__count)));
                            vlSelf->__Vfunc_leading_zero32__12612__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12612__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12612__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12612__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12612__count)));
                            vlSelf->__Vfunc_leading_zero32__12612__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12612__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12612__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12612__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12612__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12612__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12612__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12612__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12612__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12630__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12630__part 
                            = vlSelf->__Vfunc_leading_zero32__12630__value;
                        vlSelf->__Vfunc_leading_zero32__12630__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12630__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12630__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12630__count)));
                            vlSelf->__Vfunc_leading_zero32__12630__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12630__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12630__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12630__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12630__count)));
                            vlSelf->__Vfunc_leading_zero32__12630__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12630__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12630__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12630__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12630__count)));
                            vlSelf->__Vfunc_leading_zero32__12630__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12630__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12630__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12630__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12630__count)));
                            vlSelf->__Vfunc_leading_zero32__12630__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12630__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12630__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12630__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12630__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12630__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12630__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12630__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12630__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12648__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12648__part 
                            = vlSelf->__Vfunc_leading_zero32__12648__value;
                        vlSelf->__Vfunc_leading_zero32__12648__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12648__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12648__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12648__count)));
                            vlSelf->__Vfunc_leading_zero32__12648__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12648__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12648__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12648__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12648__count)));
                            vlSelf->__Vfunc_leading_zero32__12648__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12648__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12648__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12648__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12648__count)));
                            vlSelf->__Vfunc_leading_zero32__12648__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12648__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12648__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12648__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12648__count)));
                            vlSelf->__Vfunc_leading_zero32__12648__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12648__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12648__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12648__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12648__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12648__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12648__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12648__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12648__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12666__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12666__part 
                            = vlSelf->__Vfunc_leading_zero32__12666__value;
                        vlSelf->__Vfunc_leading_zero32__12666__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12666__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12666__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12666__count)));
                            vlSelf->__Vfunc_leading_zero32__12666__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12666__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12666__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12666__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12666__count)));
                            vlSelf->__Vfunc_leading_zero32__12666__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12666__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12666__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12666__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12666__count)));
                            vlSelf->__Vfunc_leading_zero32__12666__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12666__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12666__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12666__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12666__count)));
                            vlSelf->__Vfunc_leading_zero32__12666__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12666__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12666__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12666__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12666__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12666__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12666__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12666__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12666__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12684__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12684__part 
                            = vlSelf->__Vfunc_leading_zero32__12684__value;
                        vlSelf->__Vfunc_leading_zero32__12684__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12684__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12684__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12684__count)));
                            vlSelf->__Vfunc_leading_zero32__12684__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12684__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12684__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12684__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12684__count)));
                            vlSelf->__Vfunc_leading_zero32__12684__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12684__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12684__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12684__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12684__count)));
                            vlSelf->__Vfunc_leading_zero32__12684__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12684__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12684__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12684__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12684__count)));
                            vlSelf->__Vfunc_leading_zero32__12684__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12684__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12684__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12684__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12684__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12684__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12684__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12684__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12684__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12702__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12702__part 
                            = vlSelf->__Vfunc_leading_zero32__12702__value;
                        vlSelf->__Vfunc_leading_zero32__12702__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12702__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12702__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12702__count)));
                            vlSelf->__Vfunc_leading_zero32__12702__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12702__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12702__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12702__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12702__count)));
                            vlSelf->__Vfunc_leading_zero32__12702__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12702__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12702__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12702__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12702__count)));
                            vlSelf->__Vfunc_leading_zero32__12702__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12702__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12702__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12702__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12702__count)));
                            vlSelf->__Vfunc_leading_zero32__12702__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12702__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12702__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12702__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12702__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12702__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12702__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12702__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12702__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12720__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12720__part 
                            = vlSelf->__Vfunc_leading_zero32__12720__value;
                        vlSelf->__Vfunc_leading_zero32__12720__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12720__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12720__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12720__count)));
                            vlSelf->__Vfunc_leading_zero32__12720__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12720__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12720__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12720__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12720__count)));
                            vlSelf->__Vfunc_leading_zero32__12720__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12720__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12720__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12720__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12720__count)));
                            vlSelf->__Vfunc_leading_zero32__12720__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12720__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12720__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12720__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12720__count)));
                            vlSelf->__Vfunc_leading_zero32__12720__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12720__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12720__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12720__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12720__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12720__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12720__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12720__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12720__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12738__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12738__part 
                            = vlSelf->__Vfunc_leading_zero32__12738__value;
                        vlSelf->__Vfunc_leading_zero32__12738__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12738__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12738__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12738__count)));
                            vlSelf->__Vfunc_leading_zero32__12738__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12738__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12738__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12738__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12738__count)));
                            vlSelf->__Vfunc_leading_zero32__12738__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12738__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12738__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12738__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12738__count)));
                            vlSelf->__Vfunc_leading_zero32__12738__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12738__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12738__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12738__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12738__count)));
                            vlSelf->__Vfunc_leading_zero32__12738__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12738__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12738__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12738__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12738__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12738__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12738__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12738__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12738__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12756__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12756__part 
                            = vlSelf->__Vfunc_leading_zero32__12756__value;
                        vlSelf->__Vfunc_leading_zero32__12756__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12756__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12756__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12756__count)));
                            vlSelf->__Vfunc_leading_zero32__12756__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12756__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12756__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12756__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12756__count)));
                            vlSelf->__Vfunc_leading_zero32__12756__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12756__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12756__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12756__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12756__count)));
                            vlSelf->__Vfunc_leading_zero32__12756__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12756__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12756__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12756__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12756__count)));
                            vlSelf->__Vfunc_leading_zero32__12756__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12756__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12756__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12756__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12756__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12756__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12756__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12756__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12756__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12774__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12774__part 
                            = vlSelf->__Vfunc_leading_zero32__12774__value;
                        vlSelf->__Vfunc_leading_zero32__12774__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12774__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12774__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12774__count)));
                            vlSelf->__Vfunc_leading_zero32__12774__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12774__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12774__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12774__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12774__count)));
                            vlSelf->__Vfunc_leading_zero32__12774__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12774__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12774__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12774__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12774__count)));
                            vlSelf->__Vfunc_leading_zero32__12774__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12774__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12774__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12774__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12774__count)));
                            vlSelf->__Vfunc_leading_zero32__12774__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12774__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12774__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12774__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12774__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12774__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12774__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12774__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12774__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12792__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12792__part 
                            = vlSelf->__Vfunc_leading_zero32__12792__value;
                        vlSelf->__Vfunc_leading_zero32__12792__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12792__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12792__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12792__count)));
                            vlSelf->__Vfunc_leading_zero32__12792__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12792__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12792__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12792__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12792__count)));
                            vlSelf->__Vfunc_leading_zero32__12792__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12792__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12792__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12792__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12792__count)));
                            vlSelf->__Vfunc_leading_zero32__12792__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12792__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12792__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12792__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12792__count)));
                            vlSelf->__Vfunc_leading_zero32__12792__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12792__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12792__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12792__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12792__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12792__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12792__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12792__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12792__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12810__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12810__part 
                            = vlSelf->__Vfunc_leading_zero32__12810__value;
                        vlSelf->__Vfunc_leading_zero32__12810__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12810__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12810__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12810__count)));
                            vlSelf->__Vfunc_leading_zero32__12810__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12810__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12810__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12810__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12810__count)));
                            vlSelf->__Vfunc_leading_zero32__12810__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12810__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12810__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12810__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12810__count)));
                            vlSelf->__Vfunc_leading_zero32__12810__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12810__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12810__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12810__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12810__count)));
                            vlSelf->__Vfunc_leading_zero32__12810__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12810__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12810__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12810__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12810__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12810__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12810__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12810__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12810__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12828__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12828__part 
                            = vlSelf->__Vfunc_leading_zero32__12828__value;
                        vlSelf->__Vfunc_leading_zero32__12828__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12828__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12828__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12828__count)));
                            vlSelf->__Vfunc_leading_zero32__12828__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12828__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12828__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12828__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12828__count)));
                            vlSelf->__Vfunc_leading_zero32__12828__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12828__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12828__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12828__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12828__count)));
                            vlSelf->__Vfunc_leading_zero32__12828__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12828__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12828__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12828__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12828__count)));
                            vlSelf->__Vfunc_leading_zero32__12828__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12828__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12828__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12828__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12828__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12828__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12828__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12828__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12828__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12846__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12846__part 
                            = vlSelf->__Vfunc_leading_zero32__12846__value;
                        vlSelf->__Vfunc_leading_zero32__12846__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12846__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12846__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12846__count)));
                            vlSelf->__Vfunc_leading_zero32__12846__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12846__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12846__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12846__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12846__count)));
                            vlSelf->__Vfunc_leading_zero32__12846__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12846__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12846__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12846__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12846__count)));
                            vlSelf->__Vfunc_leading_zero32__12846__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12846__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12846__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12846__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12846__count)));
                            vlSelf->__Vfunc_leading_zero32__12846__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12846__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12846__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12846__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12846__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12846__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12846__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12846__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12846__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12864__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12864__part 
                            = vlSelf->__Vfunc_leading_zero32__12864__value;
                        vlSelf->__Vfunc_leading_zero32__12864__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12864__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12864__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12864__count)));
                            vlSelf->__Vfunc_leading_zero32__12864__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12864__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12864__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12864__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12864__count)));
                            vlSelf->__Vfunc_leading_zero32__12864__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12864__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12864__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12864__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12864__count)));
                            vlSelf->__Vfunc_leading_zero32__12864__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12864__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12864__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12864__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12864__count)));
                            vlSelf->__Vfunc_leading_zero32__12864__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12864__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12864__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12864__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12864__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12864__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12864__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12864__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12864__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12882__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12882__part 
                            = vlSelf->__Vfunc_leading_zero32__12882__value;
                        vlSelf->__Vfunc_leading_zero32__12882__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12882__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12882__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12882__count)));
                            vlSelf->__Vfunc_leading_zero32__12882__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12882__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12882__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12882__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12882__count)));
                            vlSelf->__Vfunc_leading_zero32__12882__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12882__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12882__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12882__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12882__count)));
                            vlSelf->__Vfunc_leading_zero32__12882__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12882__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12882__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12882__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12882__count)));
                            vlSelf->__Vfunc_leading_zero32__12882__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12882__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12882__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12882__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12882__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12882__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12882__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12882__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12882__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12900__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12900__part 
                            = vlSelf->__Vfunc_leading_zero32__12900__value;
                        vlSelf->__Vfunc_leading_zero32__12900__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12900__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12900__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12900__count)));
                            vlSelf->__Vfunc_leading_zero32__12900__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12900__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12900__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12900__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12900__count)));
                            vlSelf->__Vfunc_leading_zero32__12900__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12900__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12900__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12900__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12900__count)));
                            vlSelf->__Vfunc_leading_zero32__12900__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12900__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12900__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12900__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12900__count)));
                            vlSelf->__Vfunc_leading_zero32__12900__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12900__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12900__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12900__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12900__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12900__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12900__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12900__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12900__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12918__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12918__part 
                            = vlSelf->__Vfunc_leading_zero32__12918__value;
                        vlSelf->__Vfunc_leading_zero32__12918__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12918__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12918__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12918__count)));
                            vlSelf->__Vfunc_leading_zero32__12918__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12918__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12918__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12918__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12918__count)));
                            vlSelf->__Vfunc_leading_zero32__12918__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12918__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12918__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12918__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12918__count)));
                            vlSelf->__Vfunc_leading_zero32__12918__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12918__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12918__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12918__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12918__count)));
                            vlSelf->__Vfunc_leading_zero32__12918__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12918__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12918__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12918__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12918__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12918__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12918__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12918__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12918__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12936__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12936__part 
                            = vlSelf->__Vfunc_leading_zero32__12936__value;
                        vlSelf->__Vfunc_leading_zero32__12936__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12936__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12936__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12936__count)));
                            vlSelf->__Vfunc_leading_zero32__12936__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12936__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12936__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12936__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12936__count)));
                            vlSelf->__Vfunc_leading_zero32__12936__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12936__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12936__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12936__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12936__count)));
                            vlSelf->__Vfunc_leading_zero32__12936__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12936__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12936__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12936__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12936__count)));
                            vlSelf->__Vfunc_leading_zero32__12936__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12936__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12936__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12936__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12936__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12936__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12936__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12936__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12936__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12954__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12954__part 
                            = vlSelf->__Vfunc_leading_zero32__12954__value;
                        vlSelf->__Vfunc_leading_zero32__12954__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12954__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12954__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12954__count)));
                            vlSelf->__Vfunc_leading_zero32__12954__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12954__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12954__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12954__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12954__count)));
                            vlSelf->__Vfunc_leading_zero32__12954__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12954__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12954__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12954__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12954__count)));
                            vlSelf->__Vfunc_leading_zero32__12954__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12954__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12954__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12954__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12954__count)));
                            vlSelf->__Vfunc_leading_zero32__12954__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12954__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12954__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12954__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12954__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12954__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12954__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12954__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12954__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12972__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12972__part 
                            = vlSelf->__Vfunc_leading_zero32__12972__value;
                        vlSelf->__Vfunc_leading_zero32__12972__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12972__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12972__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12972__count)));
                            vlSelf->__Vfunc_leading_zero32__12972__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12972__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12972__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12972__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12972__count)));
                            vlSelf->__Vfunc_leading_zero32__12972__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12972__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12972__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12972__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12972__count)));
                            vlSelf->__Vfunc_leading_zero32__12972__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12972__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12972__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12972__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12972__count)));
                            vlSelf->__Vfunc_leading_zero32__12972__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12972__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12972__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12972__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12972__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12972__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12972__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12972__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12972__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12990__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12990__part 
                            = vlSelf->__Vfunc_leading_zero32__12990__value;
                        vlSelf->__Vfunc_leading_zero32__12990__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12990__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12990__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12990__count)));
                            vlSelf->__Vfunc_leading_zero32__12990__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12990__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12990__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12990__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12990__count)));
                            vlSelf->__Vfunc_leading_zero32__12990__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12990__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12990__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12990__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12990__count)));
                            vlSelf->__Vfunc_leading_zero32__12990__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12990__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12990__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12990__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12990__count)));
                            vlSelf->__Vfunc_leading_zero32__12990__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12990__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12990__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12990__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12990__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12990__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12990__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12990__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12990__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13008__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13008__part 
                            = vlSelf->__Vfunc_leading_zero32__13008__value;
                        vlSelf->__Vfunc_leading_zero32__13008__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13008__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13008__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13008__count)));
                            vlSelf->__Vfunc_leading_zero32__13008__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13008__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13008__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13008__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13008__count)));
                            vlSelf->__Vfunc_leading_zero32__13008__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13008__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13008__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13008__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13008__count)));
                            vlSelf->__Vfunc_leading_zero32__13008__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13008__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13008__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13008__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13008__count)));
                            vlSelf->__Vfunc_leading_zero32__13008__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13008__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13008__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13008__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13008__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13008__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13008__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13008__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13008__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13026__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13026__part 
                            = vlSelf->__Vfunc_leading_zero32__13026__value;
                        vlSelf->__Vfunc_leading_zero32__13026__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13026__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13026__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13026__count)));
                            vlSelf->__Vfunc_leading_zero32__13026__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13026__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13026__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13026__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13026__count)));
                            vlSelf->__Vfunc_leading_zero32__13026__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13026__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13026__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13026__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13026__count)));
                            vlSelf->__Vfunc_leading_zero32__13026__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13026__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13026__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13026__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13026__count)));
                            vlSelf->__Vfunc_leading_zero32__13026__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13026__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13026__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13026__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13026__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13026__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13026__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13026__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13026__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13044__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13044__part 
                            = vlSelf->__Vfunc_leading_zero32__13044__value;
                        vlSelf->__Vfunc_leading_zero32__13044__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13044__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13044__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13044__count)));
                            vlSelf->__Vfunc_leading_zero32__13044__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13044__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13044__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13044__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13044__count)));
                            vlSelf->__Vfunc_leading_zero32__13044__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13044__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13044__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13044__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13044__count)));
                            vlSelf->__Vfunc_leading_zero32__13044__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13044__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13044__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13044__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13044__count)));
                            vlSelf->__Vfunc_leading_zero32__13044__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13044__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13044__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13044__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13044__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13044__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13044__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13044__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13044__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13062__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13062__part 
                            = vlSelf->__Vfunc_leading_zero32__13062__value;
                        vlSelf->__Vfunc_leading_zero32__13062__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13062__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13062__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13062__count)));
                            vlSelf->__Vfunc_leading_zero32__13062__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13062__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13062__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13062__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13062__count)));
                            vlSelf->__Vfunc_leading_zero32__13062__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13062__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13062__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13062__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13062__count)));
                            vlSelf->__Vfunc_leading_zero32__13062__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13062__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13062__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13062__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13062__count)));
                            vlSelf->__Vfunc_leading_zero32__13062__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13062__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13062__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13062__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13062__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13062__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13062__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13062__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13062__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13080__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13080__part 
                            = vlSelf->__Vfunc_leading_zero32__13080__value;
                        vlSelf->__Vfunc_leading_zero32__13080__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13080__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13080__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13080__count)));
                            vlSelf->__Vfunc_leading_zero32__13080__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13080__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13080__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13080__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13080__count)));
                            vlSelf->__Vfunc_leading_zero32__13080__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13080__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13080__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13080__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13080__count)));
                            vlSelf->__Vfunc_leading_zero32__13080__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13080__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13080__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13080__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13080__count)));
                            vlSelf->__Vfunc_leading_zero32__13080__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13080__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13080__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13080__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13080__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13080__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13080__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13080__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13080__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13098__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13098__part 
                            = vlSelf->__Vfunc_leading_zero32__13098__value;
                        vlSelf->__Vfunc_leading_zero32__13098__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13098__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13098__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13098__count)));
                            vlSelf->__Vfunc_leading_zero32__13098__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13098__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13098__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13098__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13098__count)));
                            vlSelf->__Vfunc_leading_zero32__13098__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13098__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13098__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13098__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13098__count)));
                            vlSelf->__Vfunc_leading_zero32__13098__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13098__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13098__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13098__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13098__count)));
                            vlSelf->__Vfunc_leading_zero32__13098__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13098__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13098__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13098__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13098__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13098__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13098__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13098__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13098__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13116__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13116__part 
                            = vlSelf->__Vfunc_leading_zero32__13116__value;
                        vlSelf->__Vfunc_leading_zero32__13116__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13116__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13116__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13116__count)));
                            vlSelf->__Vfunc_leading_zero32__13116__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13116__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13116__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13116__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13116__count)));
                            vlSelf->__Vfunc_leading_zero32__13116__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13116__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13116__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13116__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13116__count)));
                            vlSelf->__Vfunc_leading_zero32__13116__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13116__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13116__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13116__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13116__count)));
                            vlSelf->__Vfunc_leading_zero32__13116__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13116__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13116__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13116__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13116__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13116__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13116__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13116__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13116__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13134__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13134__part 
                            = vlSelf->__Vfunc_leading_zero32__13134__value;
                        vlSelf->__Vfunc_leading_zero32__13134__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13134__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13134__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13134__count)));
                            vlSelf->__Vfunc_leading_zero32__13134__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13134__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13134__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13134__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13134__count)));
                            vlSelf->__Vfunc_leading_zero32__13134__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13134__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13134__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13134__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13134__count)));
                            vlSelf->__Vfunc_leading_zero32__13134__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13134__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13134__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13134__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13134__count)));
                            vlSelf->__Vfunc_leading_zero32__13134__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13134__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13134__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13134__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13134__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13134__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13134__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13134__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13134__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13152__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13152__part 
                            = vlSelf->__Vfunc_leading_zero32__13152__value;
                        vlSelf->__Vfunc_leading_zero32__13152__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13152__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13152__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13152__count)));
                            vlSelf->__Vfunc_leading_zero32__13152__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13152__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13152__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13152__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13152__count)));
                            vlSelf->__Vfunc_leading_zero32__13152__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13152__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13152__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13152__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13152__count)));
                            vlSelf->__Vfunc_leading_zero32__13152__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13152__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13152__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13152__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13152__count)));
                            vlSelf->__Vfunc_leading_zero32__13152__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13152__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13152__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13152__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13152__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13152__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13152__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13152__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13152__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13170__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13170__part 
                            = vlSelf->__Vfunc_leading_zero32__13170__value;
                        vlSelf->__Vfunc_leading_zero32__13170__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13170__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13170__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13170__count)));
                            vlSelf->__Vfunc_leading_zero32__13170__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13170__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13170__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13170__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13170__count)));
                            vlSelf->__Vfunc_leading_zero32__13170__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13170__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13170__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13170__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13170__count)));
                            vlSelf->__Vfunc_leading_zero32__13170__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13170__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13170__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13170__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13170__count)));
                            vlSelf->__Vfunc_leading_zero32__13170__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13170__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13170__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13170__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13170__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13170__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13170__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13170__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13170__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13188__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13188__part 
                            = vlSelf->__Vfunc_leading_zero32__13188__value;
                        vlSelf->__Vfunc_leading_zero32__13188__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13188__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13188__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13188__count)));
                            vlSelf->__Vfunc_leading_zero32__13188__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13188__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13188__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13188__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13188__count)));
                            vlSelf->__Vfunc_leading_zero32__13188__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13188__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13188__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13188__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13188__count)));
                            vlSelf->__Vfunc_leading_zero32__13188__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13188__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13188__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13188__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13188__count)));
                            vlSelf->__Vfunc_leading_zero32__13188__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13188__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13188__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13188__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13188__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13188__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13188__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13188__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13188__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13206__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13206__part 
                            = vlSelf->__Vfunc_leading_zero32__13206__value;
                        vlSelf->__Vfunc_leading_zero32__13206__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13206__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13206__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13206__count)));
                            vlSelf->__Vfunc_leading_zero32__13206__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13206__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13206__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13206__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13206__count)));
                            vlSelf->__Vfunc_leading_zero32__13206__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13206__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13206__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13206__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13206__count)));
                            vlSelf->__Vfunc_leading_zero32__13206__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13206__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13206__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13206__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13206__count)));
                            vlSelf->__Vfunc_leading_zero32__13206__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13206__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13206__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13206__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13206__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13206__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13206__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13206__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13206__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13224__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13224__part 
                            = vlSelf->__Vfunc_leading_zero32__13224__value;
                        vlSelf->__Vfunc_leading_zero32__13224__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13224__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13224__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13224__count)));
                            vlSelf->__Vfunc_leading_zero32__13224__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13224__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13224__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13224__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13224__count)));
                            vlSelf->__Vfunc_leading_zero32__13224__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13224__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13224__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13224__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13224__count)));
                            vlSelf->__Vfunc_leading_zero32__13224__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13224__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13224__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13224__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13224__count)));
                            vlSelf->__Vfunc_leading_zero32__13224__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13224__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13224__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13224__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13224__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13224__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13224__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13224__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13224__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13242__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13242__part 
                            = vlSelf->__Vfunc_leading_zero32__13242__value;
                        vlSelf->__Vfunc_leading_zero32__13242__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13242__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13242__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13242__count)));
                            vlSelf->__Vfunc_leading_zero32__13242__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13242__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13242__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13242__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13242__count)));
                            vlSelf->__Vfunc_leading_zero32__13242__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13242__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13242__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13242__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13242__count)));
                            vlSelf->__Vfunc_leading_zero32__13242__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13242__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13242__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13242__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13242__count)));
                            vlSelf->__Vfunc_leading_zero32__13242__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13242__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13242__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13242__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13242__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13242__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13242__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13242__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13242__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13260__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13260__part 
                            = vlSelf->__Vfunc_leading_zero32__13260__value;
                        vlSelf->__Vfunc_leading_zero32__13260__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13260__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13260__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13260__count)));
                            vlSelf->__Vfunc_leading_zero32__13260__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13260__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13260__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13260__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13260__count)));
                            vlSelf->__Vfunc_leading_zero32__13260__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13260__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13260__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13260__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13260__count)));
                            vlSelf->__Vfunc_leading_zero32__13260__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13260__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13260__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13260__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13260__count)));
                            vlSelf->__Vfunc_leading_zero32__13260__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13260__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13260__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13260__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13260__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13260__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13260__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13260__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13260__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13278__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13278__part 
                            = vlSelf->__Vfunc_leading_zero32__13278__value;
                        vlSelf->__Vfunc_leading_zero32__13278__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13278__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13278__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13278__count)));
                            vlSelf->__Vfunc_leading_zero32__13278__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13278__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13278__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13278__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13278__count)));
                            vlSelf->__Vfunc_leading_zero32__13278__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13278__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13278__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13278__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13278__count)));
                            vlSelf->__Vfunc_leading_zero32__13278__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13278__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13278__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13278__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13278__count)));
                            vlSelf->__Vfunc_leading_zero32__13278__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13278__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13278__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13278__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13278__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13278__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13278__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13278__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13278__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13296__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13296__part 
                            = vlSelf->__Vfunc_leading_zero32__13296__value;
                        vlSelf->__Vfunc_leading_zero32__13296__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13296__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13296__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13296__count)));
                            vlSelf->__Vfunc_leading_zero32__13296__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13296__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13296__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13296__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13296__count)));
                            vlSelf->__Vfunc_leading_zero32__13296__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13296__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13296__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13296__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13296__count)));
                            vlSelf->__Vfunc_leading_zero32__13296__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13296__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13296__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13296__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13296__count)));
                            vlSelf->__Vfunc_leading_zero32__13296__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13296__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13296__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13296__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13296__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13296__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13296__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13296__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13296__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13314__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13314__part 
                            = vlSelf->__Vfunc_leading_zero32__13314__value;
                        vlSelf->__Vfunc_leading_zero32__13314__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13314__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13314__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13314__count)));
                            vlSelf->__Vfunc_leading_zero32__13314__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13314__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13314__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13314__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13314__count)));
                            vlSelf->__Vfunc_leading_zero32__13314__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13314__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13314__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13314__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13314__count)));
                            vlSelf->__Vfunc_leading_zero32__13314__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13314__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13314__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13314__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13314__count)));
                            vlSelf->__Vfunc_leading_zero32__13314__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13314__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13314__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13314__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13314__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13314__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13314__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13314__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13314__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13332__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13332__part 
                            = vlSelf->__Vfunc_leading_zero32__13332__value;
                        vlSelf->__Vfunc_leading_zero32__13332__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13332__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13332__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13332__count)));
                            vlSelf->__Vfunc_leading_zero32__13332__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13332__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13332__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13332__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13332__count)));
                            vlSelf->__Vfunc_leading_zero32__13332__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13332__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13332__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13332__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13332__count)));
                            vlSelf->__Vfunc_leading_zero32__13332__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13332__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13332__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13332__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13332__count)));
                            vlSelf->__Vfunc_leading_zero32__13332__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13332__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13332__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13332__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13332__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13332__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13332__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13332__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13332__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13350__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13350__part 
                            = vlSelf->__Vfunc_leading_zero32__13350__value;
                        vlSelf->__Vfunc_leading_zero32__13350__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13350__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13350__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13350__count)));
                            vlSelf->__Vfunc_leading_zero32__13350__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13350__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13350__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13350__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13350__count)));
                            vlSelf->__Vfunc_leading_zero32__13350__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13350__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13350__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13350__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13350__count)));
                            vlSelf->__Vfunc_leading_zero32__13350__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13350__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13350__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13350__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13350__count)));
                            vlSelf->__Vfunc_leading_zero32__13350__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13350__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13350__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13350__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13350__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13350__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13350__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13350__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13350__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13368__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13368__part 
                            = vlSelf->__Vfunc_leading_zero32__13368__value;
                        vlSelf->__Vfunc_leading_zero32__13368__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13368__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13368__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13368__count)));
                            vlSelf->__Vfunc_leading_zero32__13368__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13368__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13368__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13368__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13368__count)));
                            vlSelf->__Vfunc_leading_zero32__13368__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13368__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13368__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13368__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13368__count)));
                            vlSelf->__Vfunc_leading_zero32__13368__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13368__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13368__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13368__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13368__count)));
                            vlSelf->__Vfunc_leading_zero32__13368__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13368__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13368__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13368__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13368__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13368__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13368__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13368__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13368__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13386__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13386__part 
                            = vlSelf->__Vfunc_leading_zero32__13386__value;
                        vlSelf->__Vfunc_leading_zero32__13386__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13386__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13386__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13386__count)));
                            vlSelf->__Vfunc_leading_zero32__13386__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13386__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13386__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13386__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13386__count)));
                            vlSelf->__Vfunc_leading_zero32__13386__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13386__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13386__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13386__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13386__count)));
                            vlSelf->__Vfunc_leading_zero32__13386__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13386__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13386__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13386__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13386__count)));
                            vlSelf->__Vfunc_leading_zero32__13386__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13386__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13386__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13386__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13386__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13386__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13386__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13386__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13386__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13404__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13404__part 
                            = vlSelf->__Vfunc_leading_zero32__13404__value;
                        vlSelf->__Vfunc_leading_zero32__13404__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13404__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13404__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13404__count)));
                            vlSelf->__Vfunc_leading_zero32__13404__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13404__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13404__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13404__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13404__count)));
                            vlSelf->__Vfunc_leading_zero32__13404__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13404__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13404__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13404__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13404__count)));
                            vlSelf->__Vfunc_leading_zero32__13404__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13404__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13404__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13404__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13404__count)));
                            vlSelf->__Vfunc_leading_zero32__13404__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13404__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13404__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13404__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13404__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13404__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13404__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13404__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13404__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13422__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13422__part 
                            = vlSelf->__Vfunc_leading_zero32__13422__value;
                        vlSelf->__Vfunc_leading_zero32__13422__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13422__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13422__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13422__count)));
                            vlSelf->__Vfunc_leading_zero32__13422__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13422__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13422__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13422__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13422__count)));
                            vlSelf->__Vfunc_leading_zero32__13422__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13422__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13422__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13422__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13422__count)));
                            vlSelf->__Vfunc_leading_zero32__13422__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13422__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13422__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13422__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13422__count)));
                            vlSelf->__Vfunc_leading_zero32__13422__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13422__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13422__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13422__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13422__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13422__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13422__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13422__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13422__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13440__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13440__part 
                            = vlSelf->__Vfunc_leading_zero32__13440__value;
                        vlSelf->__Vfunc_leading_zero32__13440__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13440__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13440__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13440__count)));
                            vlSelf->__Vfunc_leading_zero32__13440__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13440__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13440__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13440__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13440__count)));
                            vlSelf->__Vfunc_leading_zero32__13440__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13440__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13440__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13440__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13440__count)));
                            vlSelf->__Vfunc_leading_zero32__13440__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13440__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13440__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13440__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13440__count)));
                            vlSelf->__Vfunc_leading_zero32__13440__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13440__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13440__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13440__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13440__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13440__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13440__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13440__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13440__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13458__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13458__part 
                            = vlSelf->__Vfunc_leading_zero32__13458__value;
                        vlSelf->__Vfunc_leading_zero32__13458__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13458__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13458__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13458__count)));
                            vlSelf->__Vfunc_leading_zero32__13458__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13458__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13458__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13458__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13458__count)));
                            vlSelf->__Vfunc_leading_zero32__13458__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13458__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13458__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13458__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13458__count)));
                            vlSelf->__Vfunc_leading_zero32__13458__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13458__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13458__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13458__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13458__count)));
                            vlSelf->__Vfunc_leading_zero32__13458__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13458__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13458__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13458__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13458__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13458__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13458__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13458__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13458__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13476__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13476__part 
                            = vlSelf->__Vfunc_leading_zero32__13476__value;
                        vlSelf->__Vfunc_leading_zero32__13476__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13476__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13476__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13476__count)));
                            vlSelf->__Vfunc_leading_zero32__13476__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13476__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13476__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13476__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13476__count)));
                            vlSelf->__Vfunc_leading_zero32__13476__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13476__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13476__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13476__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13476__count)));
                            vlSelf->__Vfunc_leading_zero32__13476__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13476__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13476__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13476__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13476__count)));
                            vlSelf->__Vfunc_leading_zero32__13476__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13476__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13476__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13476__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13476__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13476__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13476__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13476__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13476__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13494__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13494__part 
                            = vlSelf->__Vfunc_leading_zero32__13494__value;
                        vlSelf->__Vfunc_leading_zero32__13494__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13494__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13494__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13494__count)));
                            vlSelf->__Vfunc_leading_zero32__13494__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13494__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13494__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13494__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13494__count)));
                            vlSelf->__Vfunc_leading_zero32__13494__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13494__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13494__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13494__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13494__count)));
                            vlSelf->__Vfunc_leading_zero32__13494__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13494__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13494__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13494__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13494__count)));
                            vlSelf->__Vfunc_leading_zero32__13494__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13494__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13494__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13494__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13494__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13494__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13494__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13494__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13494__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13512__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13512__part 
                            = vlSelf->__Vfunc_leading_zero32__13512__value;
                        vlSelf->__Vfunc_leading_zero32__13512__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13512__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13512__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13512__count)));
                            vlSelf->__Vfunc_leading_zero32__13512__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13512__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13512__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13512__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13512__count)));
                            vlSelf->__Vfunc_leading_zero32__13512__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13512__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13512__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13512__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13512__count)));
                            vlSelf->__Vfunc_leading_zero32__13512__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13512__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13512__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13512__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13512__count)));
                            vlSelf->__Vfunc_leading_zero32__13512__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13512__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13512__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13512__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13512__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13512__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13512__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13512__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13512__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13530__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13530__part 
                            = vlSelf->__Vfunc_leading_zero32__13530__value;
                        vlSelf->__Vfunc_leading_zero32__13530__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13530__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13530__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13530__count)));
                            vlSelf->__Vfunc_leading_zero32__13530__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13530__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13530__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13530__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13530__count)));
                            vlSelf->__Vfunc_leading_zero32__13530__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13530__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13530__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13530__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13530__count)));
                            vlSelf->__Vfunc_leading_zero32__13530__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13530__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13530__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13530__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13530__count)));
                            vlSelf->__Vfunc_leading_zero32__13530__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13530__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13530__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13530__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13530__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13530__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13530__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13530__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13530__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13548__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13548__part 
                            = vlSelf->__Vfunc_leading_zero32__13548__value;
                        vlSelf->__Vfunc_leading_zero32__13548__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13548__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13548__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13548__count)));
                            vlSelf->__Vfunc_leading_zero32__13548__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13548__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13548__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13548__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13548__count)));
                            vlSelf->__Vfunc_leading_zero32__13548__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13548__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13548__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13548__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13548__count)));
                            vlSelf->__Vfunc_leading_zero32__13548__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13548__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13548__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13548__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13548__count)));
                            vlSelf->__Vfunc_leading_zero32__13548__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13548__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13548__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13548__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13548__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13548__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13548__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13548__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13548__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13566__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13566__part 
                            = vlSelf->__Vfunc_leading_zero32__13566__value;
                        vlSelf->__Vfunc_leading_zero32__13566__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13566__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13566__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13566__count)));
                            vlSelf->__Vfunc_leading_zero32__13566__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13566__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13566__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13566__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13566__count)));
                            vlSelf->__Vfunc_leading_zero32__13566__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13566__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13566__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13566__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13566__count)));
                            vlSelf->__Vfunc_leading_zero32__13566__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13566__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13566__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13566__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13566__count)));
                            vlSelf->__Vfunc_leading_zero32__13566__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13566__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13566__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13566__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13566__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13566__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13566__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13566__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13566__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13584__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13584__part 
                            = vlSelf->__Vfunc_leading_zero32__13584__value;
                        vlSelf->__Vfunc_leading_zero32__13584__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13584__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13584__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13584__count)));
                            vlSelf->__Vfunc_leading_zero32__13584__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13584__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13584__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13584__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13584__count)));
                            vlSelf->__Vfunc_leading_zero32__13584__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13584__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13584__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13584__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13584__count)));
                            vlSelf->__Vfunc_leading_zero32__13584__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13584__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13584__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13584__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13584__count)));
                            vlSelf->__Vfunc_leading_zero32__13584__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13584__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13584__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13584__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13584__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13584__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13584__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13584__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13584__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13602__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13602__part 
                            = vlSelf->__Vfunc_leading_zero32__13602__value;
                        vlSelf->__Vfunc_leading_zero32__13602__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13602__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13602__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13602__count)));
                            vlSelf->__Vfunc_leading_zero32__13602__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13602__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13602__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13602__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13602__count)));
                            vlSelf->__Vfunc_leading_zero32__13602__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13602__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13602__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13602__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13602__count)));
                            vlSelf->__Vfunc_leading_zero32__13602__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13602__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13602__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13602__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13602__count)));
                            vlSelf->__Vfunc_leading_zero32__13602__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13602__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13602__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13602__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13602__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13602__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13602__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13602__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13602__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13620__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13620__part 
                            = vlSelf->__Vfunc_leading_zero32__13620__value;
                        vlSelf->__Vfunc_leading_zero32__13620__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13620__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13620__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13620__count)));
                            vlSelf->__Vfunc_leading_zero32__13620__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13620__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13620__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13620__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13620__count)));
                            vlSelf->__Vfunc_leading_zero32__13620__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13620__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13620__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13620__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13620__count)));
                            vlSelf->__Vfunc_leading_zero32__13620__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13620__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13620__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13620__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13620__count)));
                            vlSelf->__Vfunc_leading_zero32__13620__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13620__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13620__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13620__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13620__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13620__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13620__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13620__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13620__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13638__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13638__part 
                            = vlSelf->__Vfunc_leading_zero32__13638__value;
                        vlSelf->__Vfunc_leading_zero32__13638__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13638__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13638__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13638__count)));
                            vlSelf->__Vfunc_leading_zero32__13638__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13638__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13638__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13638__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13638__count)));
                            vlSelf->__Vfunc_leading_zero32__13638__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13638__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13638__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13638__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13638__count)));
                            vlSelf->__Vfunc_leading_zero32__13638__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13638__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13638__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13638__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13638__count)));
                            vlSelf->__Vfunc_leading_zero32__13638__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13638__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13638__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13638__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13638__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13638__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13638__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13638__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13638__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13656__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13656__part 
                            = vlSelf->__Vfunc_leading_zero32__13656__value;
                        vlSelf->__Vfunc_leading_zero32__13656__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13656__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13656__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13656__count)));
                            vlSelf->__Vfunc_leading_zero32__13656__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13656__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13656__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13656__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13656__count)));
                            vlSelf->__Vfunc_leading_zero32__13656__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13656__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13656__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13656__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13656__count)));
                            vlSelf->__Vfunc_leading_zero32__13656__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13656__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13656__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13656__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13656__count)));
                            vlSelf->__Vfunc_leading_zero32__13656__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13656__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13656__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13656__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13656__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13656__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13656__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13656__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13656__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13674__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13674__part 
                            = vlSelf->__Vfunc_leading_zero32__13674__value;
                        vlSelf->__Vfunc_leading_zero32__13674__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13674__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13674__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13674__count)));
                            vlSelf->__Vfunc_leading_zero32__13674__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13674__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13674__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13674__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13674__count)));
                            vlSelf->__Vfunc_leading_zero32__13674__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13674__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13674__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13674__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13674__count)));
                            vlSelf->__Vfunc_leading_zero32__13674__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13674__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13674__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13674__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13674__count)));
                            vlSelf->__Vfunc_leading_zero32__13674__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13674__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13674__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13674__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13674__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13674__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13674__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13674__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13674__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13692__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13692__part 
                            = vlSelf->__Vfunc_leading_zero32__13692__value;
                        vlSelf->__Vfunc_leading_zero32__13692__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13692__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13692__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13692__count)));
                            vlSelf->__Vfunc_leading_zero32__13692__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13692__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13692__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13692__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13692__count)));
                            vlSelf->__Vfunc_leading_zero32__13692__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13692__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13692__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13692__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13692__count)));
                            vlSelf->__Vfunc_leading_zero32__13692__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13692__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13692__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13692__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13692__count)));
                            vlSelf->__Vfunc_leading_zero32__13692__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13692__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13692__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13692__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13692__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13692__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13692__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13692__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13692__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13710__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13710__part 
                            = vlSelf->__Vfunc_leading_zero32__13710__value;
                        vlSelf->__Vfunc_leading_zero32__13710__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13710__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13710__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13710__count)));
                            vlSelf->__Vfunc_leading_zero32__13710__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13710__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13710__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13710__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13710__count)));
                            vlSelf->__Vfunc_leading_zero32__13710__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13710__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13710__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13710__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13710__count)));
                            vlSelf->__Vfunc_leading_zero32__13710__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13710__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13710__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13710__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13710__count)));
                            vlSelf->__Vfunc_leading_zero32__13710__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13710__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13710__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13710__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13710__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13710__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13710__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13710__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13710__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13728__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13728__part 
                            = vlSelf->__Vfunc_leading_zero32__13728__value;
                        vlSelf->__Vfunc_leading_zero32__13728__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13728__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13728__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13728__count)));
                            vlSelf->__Vfunc_leading_zero32__13728__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13728__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13728__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13728__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13728__count)));
                            vlSelf->__Vfunc_leading_zero32__13728__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13728__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13728__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13728__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13728__count)));
                            vlSelf->__Vfunc_leading_zero32__13728__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13728__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13728__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13728__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13728__count)));
                            vlSelf->__Vfunc_leading_zero32__13728__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13728__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13728__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13728__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13728__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13728__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13728__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13728__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13728__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13746__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13746__part 
                            = vlSelf->__Vfunc_leading_zero32__13746__value;
                        vlSelf->__Vfunc_leading_zero32__13746__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13746__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13746__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13746__count)));
                            vlSelf->__Vfunc_leading_zero32__13746__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13746__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13746__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13746__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13746__count)));
                            vlSelf->__Vfunc_leading_zero32__13746__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13746__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13746__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13746__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13746__count)));
                            vlSelf->__Vfunc_leading_zero32__13746__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13746__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13746__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13746__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13746__count)));
                            vlSelf->__Vfunc_leading_zero32__13746__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13746__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13746__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13746__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13746__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13746__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13746__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13746__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13746__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13764__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13764__part 
                            = vlSelf->__Vfunc_leading_zero32__13764__value;
                        vlSelf->__Vfunc_leading_zero32__13764__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13764__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13764__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13764__count)));
                            vlSelf->__Vfunc_leading_zero32__13764__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13764__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13764__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13764__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13764__count)));
                            vlSelf->__Vfunc_leading_zero32__13764__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13764__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13764__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13764__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13764__count)));
                            vlSelf->__Vfunc_leading_zero32__13764__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13764__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13764__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13764__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13764__count)));
                            vlSelf->__Vfunc_leading_zero32__13764__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13764__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13764__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13764__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13764__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13764__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13764__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13764__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13764__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13782__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13782__part 
                            = vlSelf->__Vfunc_leading_zero32__13782__value;
                        vlSelf->__Vfunc_leading_zero32__13782__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13782__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13782__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13782__count)));
                            vlSelf->__Vfunc_leading_zero32__13782__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13782__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13782__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13782__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13782__count)));
                            vlSelf->__Vfunc_leading_zero32__13782__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13782__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13782__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13782__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13782__count)));
                            vlSelf->__Vfunc_leading_zero32__13782__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13782__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13782__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13782__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13782__count)));
                            vlSelf->__Vfunc_leading_zero32__13782__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13782__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13782__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13782__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13782__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13782__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13782__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13782__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13782__Vfuncout)) 
                             - (IData)(8U))));
}
