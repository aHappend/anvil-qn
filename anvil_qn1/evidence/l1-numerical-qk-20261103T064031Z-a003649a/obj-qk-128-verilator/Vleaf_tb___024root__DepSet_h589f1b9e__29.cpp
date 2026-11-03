// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vleaf_tb.h for the primary calling header

#include "Vleaf_tb__pch.h"
#include "Vleaf_tb___024root.h"

VL_INLINE_OPT void Vleaf_tb___024root___nba_sequent__TOP__29(Vleaf_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleaf_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleaf_tb___024root___nba_sequent__TOP__29\n"); );
    // Body
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__29__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__29__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3060__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__29__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3060__part 
                            = vlSelf->__Vfunc_leading_zero32__3060__value;
                        vlSelf->__Vfunc_leading_zero32__3060__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3060__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3060__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3060__count)));
                            vlSelf->__Vfunc_leading_zero32__3060__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3060__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3060__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3060__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3060__count)));
                            vlSelf->__Vfunc_leading_zero32__3060__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3060__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3060__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3060__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3060__count)));
                            vlSelf->__Vfunc_leading_zero32__3060__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3060__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3060__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3060__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3060__count)));
                            vlSelf->__Vfunc_leading_zero32__3060__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3060__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3060__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3060__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3060__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3060__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3060__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3060__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3060__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__30__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__30__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3072__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__30__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3072__part 
                            = vlSelf->__Vfunc_leading_zero32__3072__value;
                        vlSelf->__Vfunc_leading_zero32__3072__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3072__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3072__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3072__count)));
                            vlSelf->__Vfunc_leading_zero32__3072__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3072__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3072__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3072__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3072__count)));
                            vlSelf->__Vfunc_leading_zero32__3072__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3072__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3072__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3072__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3072__count)));
                            vlSelf->__Vfunc_leading_zero32__3072__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3072__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3072__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3072__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3072__count)));
                            vlSelf->__Vfunc_leading_zero32__3072__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3072__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3072__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3072__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3072__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3072__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3072__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3072__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3072__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__31__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__31__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3084__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__31__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3084__part 
                            = vlSelf->__Vfunc_leading_zero32__3084__value;
                        vlSelf->__Vfunc_leading_zero32__3084__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3084__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3084__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3084__count)));
                            vlSelf->__Vfunc_leading_zero32__3084__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3084__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3084__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3084__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3084__count)));
                            vlSelf->__Vfunc_leading_zero32__3084__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3084__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3084__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3084__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3084__count)));
                            vlSelf->__Vfunc_leading_zero32__3084__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3084__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3084__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3084__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3084__count)));
                            vlSelf->__Vfunc_leading_zero32__3084__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3084__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3084__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3084__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3084__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3084__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3084__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3084__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3084__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__32__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__32__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3096__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__32__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3096__part 
                            = vlSelf->__Vfunc_leading_zero32__3096__value;
                        vlSelf->__Vfunc_leading_zero32__3096__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3096__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3096__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3096__count)));
                            vlSelf->__Vfunc_leading_zero32__3096__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3096__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3096__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3096__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3096__count)));
                            vlSelf->__Vfunc_leading_zero32__3096__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3096__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3096__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3096__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3096__count)));
                            vlSelf->__Vfunc_leading_zero32__3096__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3096__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3096__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3096__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3096__count)));
                            vlSelf->__Vfunc_leading_zero32__3096__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3096__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3096__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3096__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3096__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3096__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3096__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3096__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3096__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__33__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__33__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3108__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__33__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3108__part 
                            = vlSelf->__Vfunc_leading_zero32__3108__value;
                        vlSelf->__Vfunc_leading_zero32__3108__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3108__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3108__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3108__count)));
                            vlSelf->__Vfunc_leading_zero32__3108__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3108__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3108__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3108__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3108__count)));
                            vlSelf->__Vfunc_leading_zero32__3108__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3108__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3108__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3108__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3108__count)));
                            vlSelf->__Vfunc_leading_zero32__3108__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3108__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3108__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3108__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3108__count)));
                            vlSelf->__Vfunc_leading_zero32__3108__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3108__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3108__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3108__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3108__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3108__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3108__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3108__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3108__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__34__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__34__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3120__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__34__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3120__part 
                            = vlSelf->__Vfunc_leading_zero32__3120__value;
                        vlSelf->__Vfunc_leading_zero32__3120__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3120__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3120__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3120__count)));
                            vlSelf->__Vfunc_leading_zero32__3120__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3120__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3120__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3120__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3120__count)));
                            vlSelf->__Vfunc_leading_zero32__3120__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3120__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3120__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3120__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3120__count)));
                            vlSelf->__Vfunc_leading_zero32__3120__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3120__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3120__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3120__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3120__count)));
                            vlSelf->__Vfunc_leading_zero32__3120__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3120__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3120__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3120__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3120__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3120__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3120__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3120__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3120__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__35__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__35__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3132__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__35__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3132__part 
                            = vlSelf->__Vfunc_leading_zero32__3132__value;
                        vlSelf->__Vfunc_leading_zero32__3132__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3132__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3132__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3132__count)));
                            vlSelf->__Vfunc_leading_zero32__3132__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3132__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3132__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3132__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3132__count)));
                            vlSelf->__Vfunc_leading_zero32__3132__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3132__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3132__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3132__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3132__count)));
                            vlSelf->__Vfunc_leading_zero32__3132__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3132__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3132__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3132__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3132__count)));
                            vlSelf->__Vfunc_leading_zero32__3132__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3132__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3132__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3132__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3132__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3132__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3132__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3132__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3132__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__36__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__36__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3144__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__36__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3144__part 
                            = vlSelf->__Vfunc_leading_zero32__3144__value;
                        vlSelf->__Vfunc_leading_zero32__3144__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3144__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3144__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3144__count)));
                            vlSelf->__Vfunc_leading_zero32__3144__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3144__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3144__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3144__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3144__count)));
                            vlSelf->__Vfunc_leading_zero32__3144__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3144__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3144__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3144__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3144__count)));
                            vlSelf->__Vfunc_leading_zero32__3144__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3144__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3144__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3144__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3144__count)));
                            vlSelf->__Vfunc_leading_zero32__3144__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3144__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3144__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3144__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3144__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3144__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3144__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3144__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3144__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__37__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__37__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3156__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__37__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3156__part 
                            = vlSelf->__Vfunc_leading_zero32__3156__value;
                        vlSelf->__Vfunc_leading_zero32__3156__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3156__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3156__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3156__count)));
                            vlSelf->__Vfunc_leading_zero32__3156__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3156__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3156__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3156__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3156__count)));
                            vlSelf->__Vfunc_leading_zero32__3156__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3156__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3156__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3156__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3156__count)));
                            vlSelf->__Vfunc_leading_zero32__3156__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3156__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3156__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3156__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3156__count)));
                            vlSelf->__Vfunc_leading_zero32__3156__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3156__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3156__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3156__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3156__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3156__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3156__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3156__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3156__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__38__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__38__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3168__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__38__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3168__part 
                            = vlSelf->__Vfunc_leading_zero32__3168__value;
                        vlSelf->__Vfunc_leading_zero32__3168__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3168__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3168__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3168__count)));
                            vlSelf->__Vfunc_leading_zero32__3168__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3168__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3168__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3168__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3168__count)));
                            vlSelf->__Vfunc_leading_zero32__3168__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3168__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3168__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3168__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3168__count)));
                            vlSelf->__Vfunc_leading_zero32__3168__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3168__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3168__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3168__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3168__count)));
                            vlSelf->__Vfunc_leading_zero32__3168__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3168__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3168__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3168__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3168__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3168__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3168__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3168__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3168__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__39__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__39__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3180__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__39__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3180__part 
                            = vlSelf->__Vfunc_leading_zero32__3180__value;
                        vlSelf->__Vfunc_leading_zero32__3180__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3180__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3180__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3180__count)));
                            vlSelf->__Vfunc_leading_zero32__3180__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3180__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3180__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3180__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3180__count)));
                            vlSelf->__Vfunc_leading_zero32__3180__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3180__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3180__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3180__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3180__count)));
                            vlSelf->__Vfunc_leading_zero32__3180__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3180__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3180__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3180__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3180__count)));
                            vlSelf->__Vfunc_leading_zero32__3180__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3180__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3180__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3180__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3180__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3180__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3180__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3180__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3180__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__40__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__40__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3192__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__40__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3192__part 
                            = vlSelf->__Vfunc_leading_zero32__3192__value;
                        vlSelf->__Vfunc_leading_zero32__3192__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3192__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3192__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3192__count)));
                            vlSelf->__Vfunc_leading_zero32__3192__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3192__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3192__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3192__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3192__count)));
                            vlSelf->__Vfunc_leading_zero32__3192__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3192__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3192__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3192__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3192__count)));
                            vlSelf->__Vfunc_leading_zero32__3192__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3192__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3192__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3192__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3192__count)));
                            vlSelf->__Vfunc_leading_zero32__3192__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3192__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3192__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3192__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3192__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3192__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3192__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3192__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3192__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__41__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__41__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3204__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__41__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3204__part 
                            = vlSelf->__Vfunc_leading_zero32__3204__value;
                        vlSelf->__Vfunc_leading_zero32__3204__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3204__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3204__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3204__count)));
                            vlSelf->__Vfunc_leading_zero32__3204__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3204__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3204__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3204__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3204__count)));
                            vlSelf->__Vfunc_leading_zero32__3204__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3204__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3204__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3204__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3204__count)));
                            vlSelf->__Vfunc_leading_zero32__3204__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3204__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3204__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3204__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3204__count)));
                            vlSelf->__Vfunc_leading_zero32__3204__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3204__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3204__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3204__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3204__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3204__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3204__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3204__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3204__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__42__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__42__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3216__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__42__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3216__part 
                            = vlSelf->__Vfunc_leading_zero32__3216__value;
                        vlSelf->__Vfunc_leading_zero32__3216__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3216__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3216__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3216__count)));
                            vlSelf->__Vfunc_leading_zero32__3216__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3216__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3216__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3216__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3216__count)));
                            vlSelf->__Vfunc_leading_zero32__3216__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3216__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3216__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3216__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3216__count)));
                            vlSelf->__Vfunc_leading_zero32__3216__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3216__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3216__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3216__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3216__count)));
                            vlSelf->__Vfunc_leading_zero32__3216__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3216__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3216__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3216__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3216__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3216__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3216__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3216__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3216__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__43__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__43__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3228__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__43__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3228__part 
                            = vlSelf->__Vfunc_leading_zero32__3228__value;
                        vlSelf->__Vfunc_leading_zero32__3228__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3228__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3228__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3228__count)));
                            vlSelf->__Vfunc_leading_zero32__3228__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3228__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3228__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3228__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3228__count)));
                            vlSelf->__Vfunc_leading_zero32__3228__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3228__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3228__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3228__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3228__count)));
                            vlSelf->__Vfunc_leading_zero32__3228__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3228__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3228__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3228__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3228__count)));
                            vlSelf->__Vfunc_leading_zero32__3228__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3228__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3228__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3228__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3228__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3228__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3228__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3228__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3228__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__44__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__44__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3240__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__44__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3240__part 
                            = vlSelf->__Vfunc_leading_zero32__3240__value;
                        vlSelf->__Vfunc_leading_zero32__3240__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3240__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3240__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3240__count)));
                            vlSelf->__Vfunc_leading_zero32__3240__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3240__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3240__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3240__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3240__count)));
                            vlSelf->__Vfunc_leading_zero32__3240__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3240__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3240__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3240__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3240__count)));
                            vlSelf->__Vfunc_leading_zero32__3240__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3240__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3240__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3240__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3240__count)));
                            vlSelf->__Vfunc_leading_zero32__3240__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3240__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3240__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3240__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3240__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3240__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3240__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3240__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3240__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__45__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__45__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3252__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__45__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3252__part 
                            = vlSelf->__Vfunc_leading_zero32__3252__value;
                        vlSelf->__Vfunc_leading_zero32__3252__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3252__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3252__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3252__count)));
                            vlSelf->__Vfunc_leading_zero32__3252__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3252__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3252__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3252__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3252__count)));
                            vlSelf->__Vfunc_leading_zero32__3252__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3252__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3252__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3252__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3252__count)));
                            vlSelf->__Vfunc_leading_zero32__3252__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3252__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3252__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3252__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3252__count)));
                            vlSelf->__Vfunc_leading_zero32__3252__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3252__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3252__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3252__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3252__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3252__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3252__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3252__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3252__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__46__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__46__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3264__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__46__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3264__part 
                            = vlSelf->__Vfunc_leading_zero32__3264__value;
                        vlSelf->__Vfunc_leading_zero32__3264__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3264__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3264__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3264__count)));
                            vlSelf->__Vfunc_leading_zero32__3264__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3264__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3264__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3264__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3264__count)));
                            vlSelf->__Vfunc_leading_zero32__3264__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3264__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3264__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3264__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3264__count)));
                            vlSelf->__Vfunc_leading_zero32__3264__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3264__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3264__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3264__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3264__count)));
                            vlSelf->__Vfunc_leading_zero32__3264__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3264__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3264__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3264__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3264__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3264__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3264__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3264__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3264__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__47__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__47__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3276__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__47__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3276__part 
                            = vlSelf->__Vfunc_leading_zero32__3276__value;
                        vlSelf->__Vfunc_leading_zero32__3276__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3276__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3276__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3276__count)));
                            vlSelf->__Vfunc_leading_zero32__3276__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3276__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3276__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3276__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3276__count)));
                            vlSelf->__Vfunc_leading_zero32__3276__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3276__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3276__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3276__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3276__count)));
                            vlSelf->__Vfunc_leading_zero32__3276__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3276__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3276__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3276__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3276__count)));
                            vlSelf->__Vfunc_leading_zero32__3276__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3276__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3276__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3276__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3276__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3276__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3276__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3276__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3276__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__48__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__48__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3288__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__48__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3288__part 
                            = vlSelf->__Vfunc_leading_zero32__3288__value;
                        vlSelf->__Vfunc_leading_zero32__3288__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3288__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3288__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3288__count)));
                            vlSelf->__Vfunc_leading_zero32__3288__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3288__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3288__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3288__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3288__count)));
                            vlSelf->__Vfunc_leading_zero32__3288__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3288__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3288__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3288__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3288__count)));
                            vlSelf->__Vfunc_leading_zero32__3288__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3288__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3288__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3288__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3288__count)));
                            vlSelf->__Vfunc_leading_zero32__3288__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3288__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3288__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3288__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3288__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3288__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3288__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3288__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3288__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__49__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__49__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3300__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__49__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3300__part 
                            = vlSelf->__Vfunc_leading_zero32__3300__value;
                        vlSelf->__Vfunc_leading_zero32__3300__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3300__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3300__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3300__count)));
                            vlSelf->__Vfunc_leading_zero32__3300__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3300__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3300__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3300__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3300__count)));
                            vlSelf->__Vfunc_leading_zero32__3300__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3300__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3300__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3300__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3300__count)));
                            vlSelf->__Vfunc_leading_zero32__3300__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3300__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3300__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3300__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3300__count)));
                            vlSelf->__Vfunc_leading_zero32__3300__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3300__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3300__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3300__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3300__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3300__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3300__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3300__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3300__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__50__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__50__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3312__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__50__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3312__part 
                            = vlSelf->__Vfunc_leading_zero32__3312__value;
                        vlSelf->__Vfunc_leading_zero32__3312__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3312__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3312__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3312__count)));
                            vlSelf->__Vfunc_leading_zero32__3312__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3312__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3312__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3312__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3312__count)));
                            vlSelf->__Vfunc_leading_zero32__3312__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3312__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3312__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3312__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3312__count)));
                            vlSelf->__Vfunc_leading_zero32__3312__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3312__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3312__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3312__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3312__count)));
                            vlSelf->__Vfunc_leading_zero32__3312__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3312__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3312__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3312__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3312__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3312__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3312__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3312__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3312__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__51__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__51__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3324__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__51__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3324__part 
                            = vlSelf->__Vfunc_leading_zero32__3324__value;
                        vlSelf->__Vfunc_leading_zero32__3324__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3324__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3324__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3324__count)));
                            vlSelf->__Vfunc_leading_zero32__3324__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3324__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3324__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3324__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3324__count)));
                            vlSelf->__Vfunc_leading_zero32__3324__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3324__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3324__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3324__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3324__count)));
                            vlSelf->__Vfunc_leading_zero32__3324__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3324__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3324__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3324__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3324__count)));
                            vlSelf->__Vfunc_leading_zero32__3324__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3324__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3324__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3324__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3324__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3324__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3324__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3324__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3324__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__52__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__52__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3336__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__52__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3336__part 
                            = vlSelf->__Vfunc_leading_zero32__3336__value;
                        vlSelf->__Vfunc_leading_zero32__3336__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3336__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3336__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3336__count)));
                            vlSelf->__Vfunc_leading_zero32__3336__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3336__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3336__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3336__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3336__count)));
                            vlSelf->__Vfunc_leading_zero32__3336__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3336__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3336__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3336__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3336__count)));
                            vlSelf->__Vfunc_leading_zero32__3336__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3336__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3336__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3336__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3336__count)));
                            vlSelf->__Vfunc_leading_zero32__3336__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3336__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3336__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3336__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3336__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3336__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3336__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3336__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3336__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__53__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__53__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3348__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__53__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3348__part 
                            = vlSelf->__Vfunc_leading_zero32__3348__value;
                        vlSelf->__Vfunc_leading_zero32__3348__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3348__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3348__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3348__count)));
                            vlSelf->__Vfunc_leading_zero32__3348__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3348__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3348__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3348__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3348__count)));
                            vlSelf->__Vfunc_leading_zero32__3348__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3348__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3348__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3348__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3348__count)));
                            vlSelf->__Vfunc_leading_zero32__3348__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3348__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3348__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3348__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3348__count)));
                            vlSelf->__Vfunc_leading_zero32__3348__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3348__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3348__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3348__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3348__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3348__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3348__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3348__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3348__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__54__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__54__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3360__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__54__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3360__part 
                            = vlSelf->__Vfunc_leading_zero32__3360__value;
                        vlSelf->__Vfunc_leading_zero32__3360__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3360__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3360__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3360__count)));
                            vlSelf->__Vfunc_leading_zero32__3360__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3360__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3360__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3360__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3360__count)));
                            vlSelf->__Vfunc_leading_zero32__3360__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3360__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3360__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3360__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3360__count)));
                            vlSelf->__Vfunc_leading_zero32__3360__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3360__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3360__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3360__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3360__count)));
                            vlSelf->__Vfunc_leading_zero32__3360__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3360__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3360__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3360__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3360__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3360__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3360__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3360__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3360__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__55__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__55__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3372__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__55__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3372__part 
                            = vlSelf->__Vfunc_leading_zero32__3372__value;
                        vlSelf->__Vfunc_leading_zero32__3372__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3372__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3372__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3372__count)));
                            vlSelf->__Vfunc_leading_zero32__3372__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3372__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3372__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3372__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3372__count)));
                            vlSelf->__Vfunc_leading_zero32__3372__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3372__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3372__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3372__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3372__count)));
                            vlSelf->__Vfunc_leading_zero32__3372__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3372__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3372__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3372__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3372__count)));
                            vlSelf->__Vfunc_leading_zero32__3372__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3372__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3372__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3372__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3372__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3372__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3372__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3372__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3372__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__56__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__56__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3384__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__56__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3384__part 
                            = vlSelf->__Vfunc_leading_zero32__3384__value;
                        vlSelf->__Vfunc_leading_zero32__3384__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3384__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3384__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3384__count)));
                            vlSelf->__Vfunc_leading_zero32__3384__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3384__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3384__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3384__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3384__count)));
                            vlSelf->__Vfunc_leading_zero32__3384__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3384__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3384__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3384__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3384__count)));
                            vlSelf->__Vfunc_leading_zero32__3384__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3384__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3384__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3384__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3384__count)));
                            vlSelf->__Vfunc_leading_zero32__3384__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3384__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3384__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3384__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3384__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3384__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3384__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3384__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3384__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__57__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__57__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3396__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__57__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3396__part 
                            = vlSelf->__Vfunc_leading_zero32__3396__value;
                        vlSelf->__Vfunc_leading_zero32__3396__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3396__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3396__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3396__count)));
                            vlSelf->__Vfunc_leading_zero32__3396__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3396__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3396__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3396__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3396__count)));
                            vlSelf->__Vfunc_leading_zero32__3396__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3396__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3396__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3396__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3396__count)));
                            vlSelf->__Vfunc_leading_zero32__3396__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3396__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3396__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3396__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3396__count)));
                            vlSelf->__Vfunc_leading_zero32__3396__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3396__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3396__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3396__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3396__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3396__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3396__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3396__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3396__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__58__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__58__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3408__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__58__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3408__part 
                            = vlSelf->__Vfunc_leading_zero32__3408__value;
                        vlSelf->__Vfunc_leading_zero32__3408__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3408__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3408__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3408__count)));
                            vlSelf->__Vfunc_leading_zero32__3408__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3408__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3408__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3408__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3408__count)));
                            vlSelf->__Vfunc_leading_zero32__3408__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3408__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3408__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3408__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3408__count)));
                            vlSelf->__Vfunc_leading_zero32__3408__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3408__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3408__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3408__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3408__count)));
                            vlSelf->__Vfunc_leading_zero32__3408__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3408__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3408__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3408__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3408__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3408__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3408__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3408__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3408__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__59__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__59__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3420__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__59__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3420__part 
                            = vlSelf->__Vfunc_leading_zero32__3420__value;
                        vlSelf->__Vfunc_leading_zero32__3420__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3420__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3420__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3420__count)));
                            vlSelf->__Vfunc_leading_zero32__3420__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3420__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3420__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3420__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3420__count)));
                            vlSelf->__Vfunc_leading_zero32__3420__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3420__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3420__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3420__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3420__count)));
                            vlSelf->__Vfunc_leading_zero32__3420__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3420__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3420__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3420__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3420__count)));
                            vlSelf->__Vfunc_leading_zero32__3420__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3420__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3420__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3420__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3420__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3420__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3420__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3420__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3420__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__60__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__60__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3432__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__60__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3432__part 
                            = vlSelf->__Vfunc_leading_zero32__3432__value;
                        vlSelf->__Vfunc_leading_zero32__3432__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3432__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3432__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3432__count)));
                            vlSelf->__Vfunc_leading_zero32__3432__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3432__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3432__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3432__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3432__count)));
                            vlSelf->__Vfunc_leading_zero32__3432__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3432__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3432__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3432__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3432__count)));
                            vlSelf->__Vfunc_leading_zero32__3432__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3432__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3432__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3432__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3432__count)));
                            vlSelf->__Vfunc_leading_zero32__3432__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3432__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3432__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3432__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3432__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3432__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3432__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3432__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3432__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__61__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__61__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3444__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__61__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3444__part 
                            = vlSelf->__Vfunc_leading_zero32__3444__value;
                        vlSelf->__Vfunc_leading_zero32__3444__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3444__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3444__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3444__count)));
                            vlSelf->__Vfunc_leading_zero32__3444__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3444__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3444__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3444__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3444__count)));
                            vlSelf->__Vfunc_leading_zero32__3444__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3444__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3444__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3444__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3444__count)));
                            vlSelf->__Vfunc_leading_zero32__3444__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3444__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3444__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3444__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3444__count)));
                            vlSelf->__Vfunc_leading_zero32__3444__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3444__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3444__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3444__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3444__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3444__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3444__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3444__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3444__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__62__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__62__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3456__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__62__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3456__part 
                            = vlSelf->__Vfunc_leading_zero32__3456__value;
                        vlSelf->__Vfunc_leading_zero32__3456__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3456__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3456__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3456__count)));
                            vlSelf->__Vfunc_leading_zero32__3456__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3456__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3456__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3456__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3456__count)));
                            vlSelf->__Vfunc_leading_zero32__3456__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3456__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3456__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3456__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3456__count)));
                            vlSelf->__Vfunc_leading_zero32__3456__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3456__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3456__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3456__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3456__count)));
                            vlSelf->__Vfunc_leading_zero32__3456__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3456__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3456__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3456__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3456__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3456__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3456__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3456__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3456__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__63__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__63__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3468__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__63__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3468__part 
                            = vlSelf->__Vfunc_leading_zero32__3468__value;
                        vlSelf->__Vfunc_leading_zero32__3468__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3468__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3468__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3468__count)));
                            vlSelf->__Vfunc_leading_zero32__3468__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3468__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3468__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3468__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3468__count)));
                            vlSelf->__Vfunc_leading_zero32__3468__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3468__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3468__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3468__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3468__count)));
                            vlSelf->__Vfunc_leading_zero32__3468__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3468__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3468__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3468__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3468__count)));
                            vlSelf->__Vfunc_leading_zero32__3468__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3468__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3468__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3468__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3468__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3468__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3468__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3468__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3468__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__64__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__64__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3480__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__64__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3480__part 
                            = vlSelf->__Vfunc_leading_zero32__3480__value;
                        vlSelf->__Vfunc_leading_zero32__3480__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3480__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3480__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3480__count)));
                            vlSelf->__Vfunc_leading_zero32__3480__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3480__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3480__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3480__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3480__count)));
                            vlSelf->__Vfunc_leading_zero32__3480__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3480__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3480__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3480__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3480__count)));
                            vlSelf->__Vfunc_leading_zero32__3480__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3480__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3480__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3480__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3480__count)));
                            vlSelf->__Vfunc_leading_zero32__3480__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3480__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3480__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3480__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3480__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3480__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3480__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3480__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3480__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__65__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__65__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3492__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__65__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3492__part 
                            = vlSelf->__Vfunc_leading_zero32__3492__value;
                        vlSelf->__Vfunc_leading_zero32__3492__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3492__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3492__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3492__count)));
                            vlSelf->__Vfunc_leading_zero32__3492__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3492__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3492__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3492__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3492__count)));
                            vlSelf->__Vfunc_leading_zero32__3492__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3492__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3492__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3492__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3492__count)));
                            vlSelf->__Vfunc_leading_zero32__3492__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3492__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3492__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3492__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3492__count)));
                            vlSelf->__Vfunc_leading_zero32__3492__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3492__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3492__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3492__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3492__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3492__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3492__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3492__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3492__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__66__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__66__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3504__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__66__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3504__part 
                            = vlSelf->__Vfunc_leading_zero32__3504__value;
                        vlSelf->__Vfunc_leading_zero32__3504__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3504__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3504__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3504__count)));
                            vlSelf->__Vfunc_leading_zero32__3504__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3504__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3504__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3504__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3504__count)));
                            vlSelf->__Vfunc_leading_zero32__3504__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3504__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3504__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3504__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3504__count)));
                            vlSelf->__Vfunc_leading_zero32__3504__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3504__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3504__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3504__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3504__count)));
                            vlSelf->__Vfunc_leading_zero32__3504__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3504__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3504__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3504__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3504__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3504__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3504__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3504__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3504__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__67__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__67__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3516__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__67__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3516__part 
                            = vlSelf->__Vfunc_leading_zero32__3516__value;
                        vlSelf->__Vfunc_leading_zero32__3516__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3516__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3516__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3516__count)));
                            vlSelf->__Vfunc_leading_zero32__3516__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3516__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3516__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3516__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3516__count)));
                            vlSelf->__Vfunc_leading_zero32__3516__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3516__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3516__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3516__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3516__count)));
                            vlSelf->__Vfunc_leading_zero32__3516__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3516__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3516__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3516__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3516__count)));
                            vlSelf->__Vfunc_leading_zero32__3516__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3516__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3516__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3516__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3516__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3516__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3516__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3516__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3516__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__68__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__68__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3528__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__68__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3528__part 
                            = vlSelf->__Vfunc_leading_zero32__3528__value;
                        vlSelf->__Vfunc_leading_zero32__3528__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3528__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3528__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3528__count)));
                            vlSelf->__Vfunc_leading_zero32__3528__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3528__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3528__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3528__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3528__count)));
                            vlSelf->__Vfunc_leading_zero32__3528__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3528__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3528__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3528__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3528__count)));
                            vlSelf->__Vfunc_leading_zero32__3528__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3528__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3528__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3528__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3528__count)));
                            vlSelf->__Vfunc_leading_zero32__3528__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3528__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3528__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3528__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3528__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3528__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3528__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3528__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3528__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__69__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__69__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3540__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__69__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3540__part 
                            = vlSelf->__Vfunc_leading_zero32__3540__value;
                        vlSelf->__Vfunc_leading_zero32__3540__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3540__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3540__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3540__count)));
                            vlSelf->__Vfunc_leading_zero32__3540__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3540__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3540__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3540__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3540__count)));
                            vlSelf->__Vfunc_leading_zero32__3540__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3540__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3540__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3540__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3540__count)));
                            vlSelf->__Vfunc_leading_zero32__3540__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3540__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3540__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3540__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3540__count)));
                            vlSelf->__Vfunc_leading_zero32__3540__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3540__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3540__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3540__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3540__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3540__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3540__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3540__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3540__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__70__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__70__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3552__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__70__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3552__part 
                            = vlSelf->__Vfunc_leading_zero32__3552__value;
                        vlSelf->__Vfunc_leading_zero32__3552__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3552__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3552__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3552__count)));
                            vlSelf->__Vfunc_leading_zero32__3552__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3552__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3552__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3552__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3552__count)));
                            vlSelf->__Vfunc_leading_zero32__3552__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3552__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3552__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3552__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3552__count)));
                            vlSelf->__Vfunc_leading_zero32__3552__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3552__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3552__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3552__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3552__count)));
                            vlSelf->__Vfunc_leading_zero32__3552__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3552__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3552__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3552__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3552__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3552__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3552__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3552__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3552__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__71__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__71__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3564__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__71__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3564__part 
                            = vlSelf->__Vfunc_leading_zero32__3564__value;
                        vlSelf->__Vfunc_leading_zero32__3564__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3564__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3564__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3564__count)));
                            vlSelf->__Vfunc_leading_zero32__3564__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3564__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3564__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3564__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3564__count)));
                            vlSelf->__Vfunc_leading_zero32__3564__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3564__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3564__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3564__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3564__count)));
                            vlSelf->__Vfunc_leading_zero32__3564__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3564__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3564__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3564__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3564__count)));
                            vlSelf->__Vfunc_leading_zero32__3564__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3564__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3564__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3564__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3564__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3564__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3564__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3564__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3564__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__72__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__72__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3576__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__72__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3576__part 
                            = vlSelf->__Vfunc_leading_zero32__3576__value;
                        vlSelf->__Vfunc_leading_zero32__3576__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3576__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3576__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3576__count)));
                            vlSelf->__Vfunc_leading_zero32__3576__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3576__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3576__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3576__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3576__count)));
                            vlSelf->__Vfunc_leading_zero32__3576__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3576__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3576__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3576__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3576__count)));
                            vlSelf->__Vfunc_leading_zero32__3576__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3576__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3576__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3576__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3576__count)));
                            vlSelf->__Vfunc_leading_zero32__3576__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3576__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3576__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3576__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3576__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3576__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3576__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3576__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3576__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__73__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__73__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3588__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__73__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3588__part 
                            = vlSelf->__Vfunc_leading_zero32__3588__value;
                        vlSelf->__Vfunc_leading_zero32__3588__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3588__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3588__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3588__count)));
                            vlSelf->__Vfunc_leading_zero32__3588__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3588__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3588__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3588__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3588__count)));
                            vlSelf->__Vfunc_leading_zero32__3588__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3588__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3588__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3588__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3588__count)));
                            vlSelf->__Vfunc_leading_zero32__3588__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3588__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3588__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3588__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3588__count)));
                            vlSelf->__Vfunc_leading_zero32__3588__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3588__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3588__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3588__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3588__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3588__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3588__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3588__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3588__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__74__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__74__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3600__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__74__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3600__part 
                            = vlSelf->__Vfunc_leading_zero32__3600__value;
                        vlSelf->__Vfunc_leading_zero32__3600__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3600__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3600__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3600__count)));
                            vlSelf->__Vfunc_leading_zero32__3600__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3600__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3600__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3600__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3600__count)));
                            vlSelf->__Vfunc_leading_zero32__3600__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3600__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3600__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3600__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3600__count)));
                            vlSelf->__Vfunc_leading_zero32__3600__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3600__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3600__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3600__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3600__count)));
                            vlSelf->__Vfunc_leading_zero32__3600__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3600__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3600__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3600__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3600__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3600__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3600__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3600__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3600__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__75__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__75__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3612__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__75__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3612__part 
                            = vlSelf->__Vfunc_leading_zero32__3612__value;
                        vlSelf->__Vfunc_leading_zero32__3612__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3612__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3612__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3612__count)));
                            vlSelf->__Vfunc_leading_zero32__3612__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3612__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3612__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3612__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3612__count)));
                            vlSelf->__Vfunc_leading_zero32__3612__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3612__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3612__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3612__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3612__count)));
                            vlSelf->__Vfunc_leading_zero32__3612__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3612__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3612__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3612__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3612__count)));
                            vlSelf->__Vfunc_leading_zero32__3612__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3612__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3612__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3612__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3612__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3612__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3612__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3612__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3612__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__76__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__76__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3624__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__76__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3624__part 
                            = vlSelf->__Vfunc_leading_zero32__3624__value;
                        vlSelf->__Vfunc_leading_zero32__3624__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3624__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3624__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3624__count)));
                            vlSelf->__Vfunc_leading_zero32__3624__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3624__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3624__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3624__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3624__count)));
                            vlSelf->__Vfunc_leading_zero32__3624__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3624__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3624__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3624__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3624__count)));
                            vlSelf->__Vfunc_leading_zero32__3624__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3624__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3624__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3624__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3624__count)));
                            vlSelf->__Vfunc_leading_zero32__3624__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3624__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3624__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3624__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3624__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3624__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3624__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3624__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3624__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__77__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__77__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3636__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__77__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3636__part 
                            = vlSelf->__Vfunc_leading_zero32__3636__value;
                        vlSelf->__Vfunc_leading_zero32__3636__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3636__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3636__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3636__count)));
                            vlSelf->__Vfunc_leading_zero32__3636__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3636__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3636__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3636__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3636__count)));
                            vlSelf->__Vfunc_leading_zero32__3636__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3636__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3636__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3636__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3636__count)));
                            vlSelf->__Vfunc_leading_zero32__3636__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3636__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3636__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3636__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3636__count)));
                            vlSelf->__Vfunc_leading_zero32__3636__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3636__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3636__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3636__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3636__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3636__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3636__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3636__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3636__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__78__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__78__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3648__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__78__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3648__part 
                            = vlSelf->__Vfunc_leading_zero32__3648__value;
                        vlSelf->__Vfunc_leading_zero32__3648__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3648__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3648__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3648__count)));
                            vlSelf->__Vfunc_leading_zero32__3648__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3648__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3648__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3648__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3648__count)));
                            vlSelf->__Vfunc_leading_zero32__3648__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3648__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3648__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3648__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3648__count)));
                            vlSelf->__Vfunc_leading_zero32__3648__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3648__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3648__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3648__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3648__count)));
                            vlSelf->__Vfunc_leading_zero32__3648__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3648__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3648__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3648__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3648__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3648__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3648__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3648__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3648__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__79__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__79__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3660__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__79__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3660__part 
                            = vlSelf->__Vfunc_leading_zero32__3660__value;
                        vlSelf->__Vfunc_leading_zero32__3660__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3660__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3660__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3660__count)));
                            vlSelf->__Vfunc_leading_zero32__3660__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3660__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3660__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3660__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3660__count)));
                            vlSelf->__Vfunc_leading_zero32__3660__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3660__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3660__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3660__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3660__count)));
                            vlSelf->__Vfunc_leading_zero32__3660__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3660__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3660__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3660__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3660__count)));
                            vlSelf->__Vfunc_leading_zero32__3660__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3660__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3660__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3660__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3660__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3660__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3660__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3660__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3660__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__80__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__80__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3672__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__80__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3672__part 
                            = vlSelf->__Vfunc_leading_zero32__3672__value;
                        vlSelf->__Vfunc_leading_zero32__3672__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3672__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3672__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3672__count)));
                            vlSelf->__Vfunc_leading_zero32__3672__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3672__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3672__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3672__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3672__count)));
                            vlSelf->__Vfunc_leading_zero32__3672__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3672__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3672__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3672__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3672__count)));
                            vlSelf->__Vfunc_leading_zero32__3672__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3672__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3672__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3672__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3672__count)));
                            vlSelf->__Vfunc_leading_zero32__3672__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3672__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3672__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3672__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3672__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3672__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3672__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3672__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3672__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__81__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__81__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3684__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__81__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3684__part 
                            = vlSelf->__Vfunc_leading_zero32__3684__value;
                        vlSelf->__Vfunc_leading_zero32__3684__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3684__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3684__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3684__count)));
                            vlSelf->__Vfunc_leading_zero32__3684__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3684__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3684__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3684__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3684__count)));
                            vlSelf->__Vfunc_leading_zero32__3684__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3684__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3684__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3684__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3684__count)));
                            vlSelf->__Vfunc_leading_zero32__3684__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3684__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3684__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3684__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3684__count)));
                            vlSelf->__Vfunc_leading_zero32__3684__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3684__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3684__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3684__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3684__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3684__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3684__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3684__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3684__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__82__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__82__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3696__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__82__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3696__part 
                            = vlSelf->__Vfunc_leading_zero32__3696__value;
                        vlSelf->__Vfunc_leading_zero32__3696__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3696__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3696__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3696__count)));
                            vlSelf->__Vfunc_leading_zero32__3696__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3696__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3696__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3696__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3696__count)));
                            vlSelf->__Vfunc_leading_zero32__3696__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3696__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3696__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3696__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3696__count)));
                            vlSelf->__Vfunc_leading_zero32__3696__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3696__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3696__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3696__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3696__count)));
                            vlSelf->__Vfunc_leading_zero32__3696__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3696__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3696__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3696__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3696__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3696__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3696__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3696__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3696__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__83__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__83__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3708__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__83__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3708__part 
                            = vlSelf->__Vfunc_leading_zero32__3708__value;
                        vlSelf->__Vfunc_leading_zero32__3708__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3708__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3708__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3708__count)));
                            vlSelf->__Vfunc_leading_zero32__3708__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3708__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3708__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3708__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3708__count)));
                            vlSelf->__Vfunc_leading_zero32__3708__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3708__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3708__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3708__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3708__count)));
                            vlSelf->__Vfunc_leading_zero32__3708__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3708__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3708__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3708__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3708__count)));
                            vlSelf->__Vfunc_leading_zero32__3708__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3708__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3708__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3708__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3708__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3708__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3708__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3708__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3708__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__84__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__84__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3720__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__84__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3720__part 
                            = vlSelf->__Vfunc_leading_zero32__3720__value;
                        vlSelf->__Vfunc_leading_zero32__3720__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3720__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3720__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3720__count)));
                            vlSelf->__Vfunc_leading_zero32__3720__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3720__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3720__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3720__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3720__count)));
                            vlSelf->__Vfunc_leading_zero32__3720__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3720__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3720__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3720__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3720__count)));
                            vlSelf->__Vfunc_leading_zero32__3720__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3720__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3720__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3720__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3720__count)));
                            vlSelf->__Vfunc_leading_zero32__3720__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3720__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3720__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3720__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3720__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3720__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3720__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3720__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3720__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__85__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__85__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3732__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__85__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3732__part 
                            = vlSelf->__Vfunc_leading_zero32__3732__value;
                        vlSelf->__Vfunc_leading_zero32__3732__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3732__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3732__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3732__count)));
                            vlSelf->__Vfunc_leading_zero32__3732__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3732__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3732__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3732__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3732__count)));
                            vlSelf->__Vfunc_leading_zero32__3732__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3732__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3732__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3732__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3732__count)));
                            vlSelf->__Vfunc_leading_zero32__3732__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3732__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3732__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3732__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3732__count)));
                            vlSelf->__Vfunc_leading_zero32__3732__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3732__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3732__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3732__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3732__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3732__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3732__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3732__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3732__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__86__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__86__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3744__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__86__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3744__part 
                            = vlSelf->__Vfunc_leading_zero32__3744__value;
                        vlSelf->__Vfunc_leading_zero32__3744__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3744__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3744__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3744__count)));
                            vlSelf->__Vfunc_leading_zero32__3744__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3744__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3744__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3744__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3744__count)));
                            vlSelf->__Vfunc_leading_zero32__3744__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3744__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3744__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3744__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3744__count)));
                            vlSelf->__Vfunc_leading_zero32__3744__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3744__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3744__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3744__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3744__count)));
                            vlSelf->__Vfunc_leading_zero32__3744__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3744__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3744__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3744__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3744__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3744__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3744__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3744__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3744__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__87__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__87__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3756__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__87__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3756__part 
                            = vlSelf->__Vfunc_leading_zero32__3756__value;
                        vlSelf->__Vfunc_leading_zero32__3756__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3756__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3756__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3756__count)));
                            vlSelf->__Vfunc_leading_zero32__3756__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3756__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3756__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3756__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3756__count)));
                            vlSelf->__Vfunc_leading_zero32__3756__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3756__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3756__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3756__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3756__count)));
                            vlSelf->__Vfunc_leading_zero32__3756__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3756__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3756__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3756__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3756__count)));
                            vlSelf->__Vfunc_leading_zero32__3756__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3756__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3756__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3756__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3756__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3756__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3756__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3756__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3756__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__88__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__88__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3768__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__88__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3768__part 
                            = vlSelf->__Vfunc_leading_zero32__3768__value;
                        vlSelf->__Vfunc_leading_zero32__3768__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3768__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3768__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3768__count)));
                            vlSelf->__Vfunc_leading_zero32__3768__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3768__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3768__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3768__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3768__count)));
                            vlSelf->__Vfunc_leading_zero32__3768__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3768__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3768__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3768__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3768__count)));
                            vlSelf->__Vfunc_leading_zero32__3768__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3768__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3768__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3768__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3768__count)));
                            vlSelf->__Vfunc_leading_zero32__3768__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3768__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3768__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3768__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3768__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3768__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3768__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3768__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3768__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__89__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__89__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3780__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__89__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3780__part 
                            = vlSelf->__Vfunc_leading_zero32__3780__value;
                        vlSelf->__Vfunc_leading_zero32__3780__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3780__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3780__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3780__count)));
                            vlSelf->__Vfunc_leading_zero32__3780__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3780__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3780__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3780__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3780__count)));
                            vlSelf->__Vfunc_leading_zero32__3780__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3780__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3780__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3780__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3780__count)));
                            vlSelf->__Vfunc_leading_zero32__3780__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3780__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3780__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3780__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3780__count)));
                            vlSelf->__Vfunc_leading_zero32__3780__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3780__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3780__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3780__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3780__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3780__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3780__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3780__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3780__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__90__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__90__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3792__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__90__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3792__part 
                            = vlSelf->__Vfunc_leading_zero32__3792__value;
                        vlSelf->__Vfunc_leading_zero32__3792__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3792__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3792__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3792__count)));
                            vlSelf->__Vfunc_leading_zero32__3792__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3792__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3792__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3792__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3792__count)));
                            vlSelf->__Vfunc_leading_zero32__3792__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3792__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3792__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3792__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3792__count)));
                            vlSelf->__Vfunc_leading_zero32__3792__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3792__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3792__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3792__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3792__count)));
                            vlSelf->__Vfunc_leading_zero32__3792__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3792__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3792__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3792__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3792__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3792__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3792__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3792__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3792__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__91__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__91__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3804__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__91__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3804__part 
                            = vlSelf->__Vfunc_leading_zero32__3804__value;
                        vlSelf->__Vfunc_leading_zero32__3804__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3804__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3804__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3804__count)));
                            vlSelf->__Vfunc_leading_zero32__3804__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3804__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3804__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3804__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3804__count)));
                            vlSelf->__Vfunc_leading_zero32__3804__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3804__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3804__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3804__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3804__count)));
                            vlSelf->__Vfunc_leading_zero32__3804__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3804__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3804__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3804__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3804__count)));
                            vlSelf->__Vfunc_leading_zero32__3804__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3804__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3804__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3804__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3804__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3804__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3804__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3804__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3804__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__92__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__92__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3816__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__92__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3816__part 
                            = vlSelf->__Vfunc_leading_zero32__3816__value;
                        vlSelf->__Vfunc_leading_zero32__3816__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3816__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3816__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3816__count)));
                            vlSelf->__Vfunc_leading_zero32__3816__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3816__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3816__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3816__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3816__count)));
                            vlSelf->__Vfunc_leading_zero32__3816__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3816__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3816__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3816__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3816__count)));
                            vlSelf->__Vfunc_leading_zero32__3816__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3816__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3816__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3816__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3816__count)));
                            vlSelf->__Vfunc_leading_zero32__3816__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3816__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3816__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3816__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3816__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3816__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3816__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3816__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3816__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__93__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__93__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3828__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__93__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3828__part 
                            = vlSelf->__Vfunc_leading_zero32__3828__value;
                        vlSelf->__Vfunc_leading_zero32__3828__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3828__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3828__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3828__count)));
                            vlSelf->__Vfunc_leading_zero32__3828__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3828__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3828__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3828__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3828__count)));
                            vlSelf->__Vfunc_leading_zero32__3828__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3828__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3828__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3828__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3828__count)));
                            vlSelf->__Vfunc_leading_zero32__3828__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3828__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3828__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3828__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3828__count)));
                            vlSelf->__Vfunc_leading_zero32__3828__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3828__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3828__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3828__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3828__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3828__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3828__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3828__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3828__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__94__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__94__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3840__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__94__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3840__part 
                            = vlSelf->__Vfunc_leading_zero32__3840__value;
                        vlSelf->__Vfunc_leading_zero32__3840__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3840__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3840__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3840__count)));
                            vlSelf->__Vfunc_leading_zero32__3840__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3840__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3840__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3840__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3840__count)));
                            vlSelf->__Vfunc_leading_zero32__3840__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3840__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3840__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3840__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3840__count)));
                            vlSelf->__Vfunc_leading_zero32__3840__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3840__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3840__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3840__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3840__count)));
                            vlSelf->__Vfunc_leading_zero32__3840__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3840__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3840__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3840__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3840__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3840__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3840__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3840__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3840__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__95__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__95__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3852__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__95__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3852__part 
                            = vlSelf->__Vfunc_leading_zero32__3852__value;
                        vlSelf->__Vfunc_leading_zero32__3852__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3852__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3852__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3852__count)));
                            vlSelf->__Vfunc_leading_zero32__3852__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3852__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3852__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3852__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3852__count)));
                            vlSelf->__Vfunc_leading_zero32__3852__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3852__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3852__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3852__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3852__count)));
                            vlSelf->__Vfunc_leading_zero32__3852__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3852__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3852__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3852__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3852__count)));
                            vlSelf->__Vfunc_leading_zero32__3852__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3852__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3852__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3852__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3852__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3852__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3852__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3852__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3852__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__96__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__96__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3864__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__96__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3864__part 
                            = vlSelf->__Vfunc_leading_zero32__3864__value;
                        vlSelf->__Vfunc_leading_zero32__3864__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3864__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3864__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3864__count)));
                            vlSelf->__Vfunc_leading_zero32__3864__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3864__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3864__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3864__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3864__count)));
                            vlSelf->__Vfunc_leading_zero32__3864__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3864__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3864__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3864__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3864__count)));
                            vlSelf->__Vfunc_leading_zero32__3864__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3864__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3864__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3864__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3864__count)));
                            vlSelf->__Vfunc_leading_zero32__3864__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3864__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3864__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3864__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3864__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3864__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3864__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3864__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3864__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__97__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__97__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3876__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__97__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3876__part 
                            = vlSelf->__Vfunc_leading_zero32__3876__value;
                        vlSelf->__Vfunc_leading_zero32__3876__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3876__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3876__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3876__count)));
                            vlSelf->__Vfunc_leading_zero32__3876__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3876__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3876__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3876__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3876__count)));
                            vlSelf->__Vfunc_leading_zero32__3876__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3876__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3876__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3876__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3876__count)));
                            vlSelf->__Vfunc_leading_zero32__3876__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3876__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3876__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3876__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3876__count)));
                            vlSelf->__Vfunc_leading_zero32__3876__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3876__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3876__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3876__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3876__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3876__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3876__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3876__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3876__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__98__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__98__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3888__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__98__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3888__part 
                            = vlSelf->__Vfunc_leading_zero32__3888__value;
                        vlSelf->__Vfunc_leading_zero32__3888__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3888__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3888__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3888__count)));
                            vlSelf->__Vfunc_leading_zero32__3888__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3888__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3888__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3888__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3888__count)));
                            vlSelf->__Vfunc_leading_zero32__3888__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3888__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3888__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3888__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3888__count)));
                            vlSelf->__Vfunc_leading_zero32__3888__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3888__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3888__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3888__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3888__count)));
                            vlSelf->__Vfunc_leading_zero32__3888__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3888__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3888__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3888__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3888__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3888__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3888__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3888__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3888__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__99__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__99__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3900__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__99__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3900__part 
                            = vlSelf->__Vfunc_leading_zero32__3900__value;
                        vlSelf->__Vfunc_leading_zero32__3900__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3900__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3900__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3900__count)));
                            vlSelf->__Vfunc_leading_zero32__3900__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3900__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3900__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3900__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3900__count)));
                            vlSelf->__Vfunc_leading_zero32__3900__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3900__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3900__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3900__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3900__count)));
                            vlSelf->__Vfunc_leading_zero32__3900__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3900__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3900__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3900__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3900__count)));
                            vlSelf->__Vfunc_leading_zero32__3900__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3900__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3900__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3900__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3900__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3900__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3900__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3900__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3900__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__100__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__100__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3912__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__100__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3912__part 
                            = vlSelf->__Vfunc_leading_zero32__3912__value;
                        vlSelf->__Vfunc_leading_zero32__3912__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3912__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3912__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3912__count)));
                            vlSelf->__Vfunc_leading_zero32__3912__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3912__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3912__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3912__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3912__count)));
                            vlSelf->__Vfunc_leading_zero32__3912__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3912__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3912__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3912__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3912__count)));
                            vlSelf->__Vfunc_leading_zero32__3912__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3912__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3912__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3912__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3912__count)));
                            vlSelf->__Vfunc_leading_zero32__3912__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3912__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3912__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3912__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3912__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3912__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3912__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3912__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3912__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__101__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__101__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3924__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__101__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3924__part 
                            = vlSelf->__Vfunc_leading_zero32__3924__value;
                        vlSelf->__Vfunc_leading_zero32__3924__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3924__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3924__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3924__count)));
                            vlSelf->__Vfunc_leading_zero32__3924__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3924__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3924__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3924__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3924__count)));
                            vlSelf->__Vfunc_leading_zero32__3924__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3924__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3924__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3924__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3924__count)));
                            vlSelf->__Vfunc_leading_zero32__3924__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3924__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3924__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3924__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3924__count)));
                            vlSelf->__Vfunc_leading_zero32__3924__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3924__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3924__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3924__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3924__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3924__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3924__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3924__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3924__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__102__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__102__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3936__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__102__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3936__part 
                            = vlSelf->__Vfunc_leading_zero32__3936__value;
                        vlSelf->__Vfunc_leading_zero32__3936__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3936__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3936__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3936__count)));
                            vlSelf->__Vfunc_leading_zero32__3936__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3936__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3936__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3936__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3936__count)));
                            vlSelf->__Vfunc_leading_zero32__3936__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3936__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3936__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3936__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3936__count)));
                            vlSelf->__Vfunc_leading_zero32__3936__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3936__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3936__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3936__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3936__count)));
                            vlSelf->__Vfunc_leading_zero32__3936__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3936__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3936__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3936__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3936__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3936__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3936__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3936__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3936__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__103__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__103__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3948__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__103__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3948__part 
                            = vlSelf->__Vfunc_leading_zero32__3948__value;
                        vlSelf->__Vfunc_leading_zero32__3948__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3948__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3948__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3948__count)));
                            vlSelf->__Vfunc_leading_zero32__3948__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3948__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3948__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3948__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3948__count)));
                            vlSelf->__Vfunc_leading_zero32__3948__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3948__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3948__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3948__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3948__count)));
                            vlSelf->__Vfunc_leading_zero32__3948__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3948__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3948__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3948__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3948__count)));
                            vlSelf->__Vfunc_leading_zero32__3948__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3948__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3948__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3948__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3948__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3948__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3948__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3948__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3948__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__104__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__104__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3960__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__104__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3960__part 
                            = vlSelf->__Vfunc_leading_zero32__3960__value;
                        vlSelf->__Vfunc_leading_zero32__3960__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3960__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3960__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3960__count)));
                            vlSelf->__Vfunc_leading_zero32__3960__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3960__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3960__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3960__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3960__count)));
                            vlSelf->__Vfunc_leading_zero32__3960__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3960__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3960__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3960__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3960__count)));
                            vlSelf->__Vfunc_leading_zero32__3960__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3960__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3960__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3960__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3960__count)));
                            vlSelf->__Vfunc_leading_zero32__3960__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3960__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3960__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3960__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3960__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3960__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3960__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3960__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3960__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__105__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__105__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3972__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__105__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3972__part 
                            = vlSelf->__Vfunc_leading_zero32__3972__value;
                        vlSelf->__Vfunc_leading_zero32__3972__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3972__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3972__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3972__count)));
                            vlSelf->__Vfunc_leading_zero32__3972__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3972__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3972__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3972__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3972__count)));
                            vlSelf->__Vfunc_leading_zero32__3972__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3972__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3972__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3972__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3972__count)));
                            vlSelf->__Vfunc_leading_zero32__3972__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3972__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3972__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3972__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3972__count)));
                            vlSelf->__Vfunc_leading_zero32__3972__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3972__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3972__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3972__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3972__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3972__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3972__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3972__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3972__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__106__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__106__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3984__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__106__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3984__part 
                            = vlSelf->__Vfunc_leading_zero32__3984__value;
                        vlSelf->__Vfunc_leading_zero32__3984__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3984__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3984__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3984__count)));
                            vlSelf->__Vfunc_leading_zero32__3984__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3984__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3984__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3984__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3984__count)));
                            vlSelf->__Vfunc_leading_zero32__3984__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3984__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3984__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3984__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3984__count)));
                            vlSelf->__Vfunc_leading_zero32__3984__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3984__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3984__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3984__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3984__count)));
                            vlSelf->__Vfunc_leading_zero32__3984__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3984__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3984__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3984__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3984__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3984__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3984__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3984__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3984__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__107__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__107__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3996__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__107__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3996__part 
                            = vlSelf->__Vfunc_leading_zero32__3996__value;
                        vlSelf->__Vfunc_leading_zero32__3996__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3996__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3996__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3996__count)));
                            vlSelf->__Vfunc_leading_zero32__3996__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3996__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3996__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3996__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3996__count)));
                            vlSelf->__Vfunc_leading_zero32__3996__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3996__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3996__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3996__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3996__count)));
                            vlSelf->__Vfunc_leading_zero32__3996__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3996__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3996__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3996__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3996__count)));
                            vlSelf->__Vfunc_leading_zero32__3996__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3996__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3996__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3996__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3996__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3996__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3996__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3996__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3996__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__108__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__108__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4008__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__108__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4008__part 
                            = vlSelf->__Vfunc_leading_zero32__4008__value;
                        vlSelf->__Vfunc_leading_zero32__4008__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4008__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4008__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4008__count)));
                            vlSelf->__Vfunc_leading_zero32__4008__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4008__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4008__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4008__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4008__count)));
                            vlSelf->__Vfunc_leading_zero32__4008__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4008__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4008__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4008__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4008__count)));
                            vlSelf->__Vfunc_leading_zero32__4008__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4008__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4008__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4008__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4008__count)));
                            vlSelf->__Vfunc_leading_zero32__4008__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4008__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4008__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4008__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4008__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4008__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4008__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4008__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4008__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__109__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__109__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4020__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__109__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4020__part 
                            = vlSelf->__Vfunc_leading_zero32__4020__value;
                        vlSelf->__Vfunc_leading_zero32__4020__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4020__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4020__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4020__count)));
                            vlSelf->__Vfunc_leading_zero32__4020__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4020__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4020__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4020__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4020__count)));
                            vlSelf->__Vfunc_leading_zero32__4020__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4020__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4020__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4020__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4020__count)));
                            vlSelf->__Vfunc_leading_zero32__4020__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4020__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4020__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4020__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4020__count)));
                            vlSelf->__Vfunc_leading_zero32__4020__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4020__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4020__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4020__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4020__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4020__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4020__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4020__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4020__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__110__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__110__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4032__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__110__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4032__part 
                            = vlSelf->__Vfunc_leading_zero32__4032__value;
                        vlSelf->__Vfunc_leading_zero32__4032__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4032__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4032__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4032__count)));
                            vlSelf->__Vfunc_leading_zero32__4032__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4032__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4032__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4032__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4032__count)));
                            vlSelf->__Vfunc_leading_zero32__4032__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4032__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4032__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4032__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4032__count)));
                            vlSelf->__Vfunc_leading_zero32__4032__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4032__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4032__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4032__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4032__count)));
                            vlSelf->__Vfunc_leading_zero32__4032__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4032__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4032__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4032__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4032__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4032__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4032__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4032__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4032__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__111__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__111__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4044__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__111__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4044__part 
                            = vlSelf->__Vfunc_leading_zero32__4044__value;
                        vlSelf->__Vfunc_leading_zero32__4044__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4044__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4044__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4044__count)));
                            vlSelf->__Vfunc_leading_zero32__4044__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4044__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4044__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4044__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4044__count)));
                            vlSelf->__Vfunc_leading_zero32__4044__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4044__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4044__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4044__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4044__count)));
                            vlSelf->__Vfunc_leading_zero32__4044__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4044__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4044__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4044__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4044__count)));
                            vlSelf->__Vfunc_leading_zero32__4044__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4044__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4044__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4044__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4044__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4044__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4044__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4044__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4044__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__112__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__112__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4056__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__112__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4056__part 
                            = vlSelf->__Vfunc_leading_zero32__4056__value;
                        vlSelf->__Vfunc_leading_zero32__4056__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4056__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4056__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4056__count)));
                            vlSelf->__Vfunc_leading_zero32__4056__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4056__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4056__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4056__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4056__count)));
                            vlSelf->__Vfunc_leading_zero32__4056__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4056__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4056__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4056__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4056__count)));
                            vlSelf->__Vfunc_leading_zero32__4056__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4056__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4056__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4056__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4056__count)));
                            vlSelf->__Vfunc_leading_zero32__4056__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4056__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4056__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4056__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4056__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4056__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4056__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4056__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4056__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__113__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__113__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4068__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__113__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4068__part 
                            = vlSelf->__Vfunc_leading_zero32__4068__value;
                        vlSelf->__Vfunc_leading_zero32__4068__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4068__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4068__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4068__count)));
                            vlSelf->__Vfunc_leading_zero32__4068__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4068__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4068__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4068__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4068__count)));
                            vlSelf->__Vfunc_leading_zero32__4068__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4068__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4068__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4068__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4068__count)));
                            vlSelf->__Vfunc_leading_zero32__4068__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4068__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4068__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4068__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4068__count)));
                            vlSelf->__Vfunc_leading_zero32__4068__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4068__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4068__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4068__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4068__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4068__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4068__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4068__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4068__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__114__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__114__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4080__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__114__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4080__part 
                            = vlSelf->__Vfunc_leading_zero32__4080__value;
                        vlSelf->__Vfunc_leading_zero32__4080__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4080__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4080__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4080__count)));
                            vlSelf->__Vfunc_leading_zero32__4080__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4080__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4080__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4080__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4080__count)));
                            vlSelf->__Vfunc_leading_zero32__4080__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4080__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4080__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4080__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4080__count)));
                            vlSelf->__Vfunc_leading_zero32__4080__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4080__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4080__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4080__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4080__count)));
                            vlSelf->__Vfunc_leading_zero32__4080__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4080__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4080__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4080__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4080__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4080__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4080__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4080__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4080__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__115__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__115__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4092__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__115__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4092__part 
                            = vlSelf->__Vfunc_leading_zero32__4092__value;
                        vlSelf->__Vfunc_leading_zero32__4092__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4092__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4092__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4092__count)));
                            vlSelf->__Vfunc_leading_zero32__4092__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4092__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4092__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4092__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4092__count)));
                            vlSelf->__Vfunc_leading_zero32__4092__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4092__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4092__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4092__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4092__count)));
                            vlSelf->__Vfunc_leading_zero32__4092__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4092__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4092__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4092__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4092__count)));
                            vlSelf->__Vfunc_leading_zero32__4092__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4092__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4092__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4092__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4092__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4092__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4092__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4092__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4092__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__116__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__116__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4104__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__116__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4104__part 
                            = vlSelf->__Vfunc_leading_zero32__4104__value;
                        vlSelf->__Vfunc_leading_zero32__4104__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4104__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4104__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4104__count)));
                            vlSelf->__Vfunc_leading_zero32__4104__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4104__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4104__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4104__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4104__count)));
                            vlSelf->__Vfunc_leading_zero32__4104__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4104__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4104__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4104__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4104__count)));
                            vlSelf->__Vfunc_leading_zero32__4104__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4104__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4104__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4104__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4104__count)));
                            vlSelf->__Vfunc_leading_zero32__4104__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4104__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4104__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4104__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4104__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4104__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4104__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4104__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4104__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__117__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__117__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4116__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__117__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4116__part 
                            = vlSelf->__Vfunc_leading_zero32__4116__value;
                        vlSelf->__Vfunc_leading_zero32__4116__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4116__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4116__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4116__count)));
                            vlSelf->__Vfunc_leading_zero32__4116__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4116__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4116__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4116__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4116__count)));
                            vlSelf->__Vfunc_leading_zero32__4116__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4116__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4116__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4116__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4116__count)));
                            vlSelf->__Vfunc_leading_zero32__4116__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4116__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4116__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4116__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4116__count)));
                            vlSelf->__Vfunc_leading_zero32__4116__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4116__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4116__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4116__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4116__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4116__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4116__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4116__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4116__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__118__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__118__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4128__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__118__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4128__part 
                            = vlSelf->__Vfunc_leading_zero32__4128__value;
                        vlSelf->__Vfunc_leading_zero32__4128__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4128__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4128__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4128__count)));
                            vlSelf->__Vfunc_leading_zero32__4128__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4128__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4128__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4128__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4128__count)));
                            vlSelf->__Vfunc_leading_zero32__4128__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4128__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4128__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4128__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4128__count)));
                            vlSelf->__Vfunc_leading_zero32__4128__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4128__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4128__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4128__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4128__count)));
                            vlSelf->__Vfunc_leading_zero32__4128__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4128__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4128__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4128__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4128__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4128__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4128__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4128__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4128__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__119__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__119__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4140__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__119__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4140__part 
                            = vlSelf->__Vfunc_leading_zero32__4140__value;
                        vlSelf->__Vfunc_leading_zero32__4140__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4140__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4140__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4140__count)));
                            vlSelf->__Vfunc_leading_zero32__4140__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4140__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4140__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4140__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4140__count)));
                            vlSelf->__Vfunc_leading_zero32__4140__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4140__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4140__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4140__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4140__count)));
                            vlSelf->__Vfunc_leading_zero32__4140__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4140__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4140__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4140__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4140__count)));
                            vlSelf->__Vfunc_leading_zero32__4140__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4140__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4140__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4140__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4140__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4140__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4140__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4140__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4140__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__120__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__120__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4152__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__120__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4152__part 
                            = vlSelf->__Vfunc_leading_zero32__4152__value;
                        vlSelf->__Vfunc_leading_zero32__4152__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4152__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4152__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4152__count)));
                            vlSelf->__Vfunc_leading_zero32__4152__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4152__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4152__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4152__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4152__count)));
                            vlSelf->__Vfunc_leading_zero32__4152__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4152__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4152__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4152__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4152__count)));
                            vlSelf->__Vfunc_leading_zero32__4152__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4152__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4152__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4152__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4152__count)));
                            vlSelf->__Vfunc_leading_zero32__4152__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4152__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4152__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4152__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4152__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4152__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4152__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4152__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4152__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__121__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__121__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4164__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__121__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4164__part 
                            = vlSelf->__Vfunc_leading_zero32__4164__value;
                        vlSelf->__Vfunc_leading_zero32__4164__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4164__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4164__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4164__count)));
                            vlSelf->__Vfunc_leading_zero32__4164__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4164__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4164__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4164__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4164__count)));
                            vlSelf->__Vfunc_leading_zero32__4164__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4164__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4164__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4164__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4164__count)));
                            vlSelf->__Vfunc_leading_zero32__4164__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4164__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4164__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4164__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4164__count)));
                            vlSelf->__Vfunc_leading_zero32__4164__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4164__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4164__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4164__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4164__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4164__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4164__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4164__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4164__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__122__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__122__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4176__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__122__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4176__part 
                            = vlSelf->__Vfunc_leading_zero32__4176__value;
                        vlSelf->__Vfunc_leading_zero32__4176__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4176__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4176__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4176__count)));
                            vlSelf->__Vfunc_leading_zero32__4176__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4176__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4176__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4176__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4176__count)));
                            vlSelf->__Vfunc_leading_zero32__4176__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4176__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4176__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4176__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4176__count)));
                            vlSelf->__Vfunc_leading_zero32__4176__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4176__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4176__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4176__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4176__count)));
                            vlSelf->__Vfunc_leading_zero32__4176__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4176__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4176__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4176__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4176__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4176__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4176__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4176__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4176__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__123__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__123__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4188__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__123__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4188__part 
                            = vlSelf->__Vfunc_leading_zero32__4188__value;
                        vlSelf->__Vfunc_leading_zero32__4188__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4188__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4188__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4188__count)));
                            vlSelf->__Vfunc_leading_zero32__4188__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4188__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4188__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4188__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4188__count)));
                            vlSelf->__Vfunc_leading_zero32__4188__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4188__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4188__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4188__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4188__count)));
                            vlSelf->__Vfunc_leading_zero32__4188__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4188__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4188__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4188__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4188__count)));
                            vlSelf->__Vfunc_leading_zero32__4188__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4188__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4188__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4188__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4188__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4188__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4188__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4188__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4188__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__124__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__124__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4200__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__124__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4200__part 
                            = vlSelf->__Vfunc_leading_zero32__4200__value;
                        vlSelf->__Vfunc_leading_zero32__4200__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4200__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4200__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4200__count)));
                            vlSelf->__Vfunc_leading_zero32__4200__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4200__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4200__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4200__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4200__count)));
                            vlSelf->__Vfunc_leading_zero32__4200__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4200__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4200__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4200__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4200__count)));
                            vlSelf->__Vfunc_leading_zero32__4200__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4200__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4200__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4200__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4200__count)));
                            vlSelf->__Vfunc_leading_zero32__4200__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4200__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4200__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4200__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4200__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4200__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4200__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4200__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4200__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__125__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__125__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4212__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__125__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4212__part 
                            = vlSelf->__Vfunc_leading_zero32__4212__value;
                        vlSelf->__Vfunc_leading_zero32__4212__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4212__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4212__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4212__count)));
                            vlSelf->__Vfunc_leading_zero32__4212__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4212__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4212__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4212__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4212__count)));
                            vlSelf->__Vfunc_leading_zero32__4212__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4212__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4212__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4212__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4212__count)));
                            vlSelf->__Vfunc_leading_zero32__4212__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4212__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4212__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4212__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4212__count)));
                            vlSelf->__Vfunc_leading_zero32__4212__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4212__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4212__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4212__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4212__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4212__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4212__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4212__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4212__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__126__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__126__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4224__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__126__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4224__part 
                            = vlSelf->__Vfunc_leading_zero32__4224__value;
                        vlSelf->__Vfunc_leading_zero32__4224__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4224__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4224__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4224__count)));
                            vlSelf->__Vfunc_leading_zero32__4224__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4224__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4224__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4224__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4224__count)));
                            vlSelf->__Vfunc_leading_zero32__4224__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4224__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4224__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4224__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4224__count)));
                            vlSelf->__Vfunc_leading_zero32__4224__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4224__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4224__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4224__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4224__count)));
                            vlSelf->__Vfunc_leading_zero32__4224__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4224__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4224__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4224__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4224__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4224__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4224__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4224__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4224__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__127__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__127__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4236__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__127__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4236__part 
                            = vlSelf->__Vfunc_leading_zero32__4236__value;
                        vlSelf->__Vfunc_leading_zero32__4236__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4236__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4236__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4236__count)));
                            vlSelf->__Vfunc_leading_zero32__4236__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4236__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4236__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4236__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4236__count)));
                            vlSelf->__Vfunc_leading_zero32__4236__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4236__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4236__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4236__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4236__count)));
                            vlSelf->__Vfunc_leading_zero32__4236__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4236__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4236__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4236__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4236__count)));
                            vlSelf->__Vfunc_leading_zero32__4236__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4236__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4236__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4236__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4236__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4236__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4236__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4236__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4236__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2711__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2711__part 
                            = vlSelf->__Vfunc_leading_zero32__2711__value;
                        vlSelf->__Vfunc_leading_zero32__2711__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2711__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2711__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2711__count)));
                            vlSelf->__Vfunc_leading_zero32__2711__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2711__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2711__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2711__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2711__count)));
                            vlSelf->__Vfunc_leading_zero32__2711__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2711__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2711__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2711__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2711__count)));
                            vlSelf->__Vfunc_leading_zero32__2711__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2711__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2711__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2711__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2711__count)));
                            vlSelf->__Vfunc_leading_zero32__2711__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2711__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2711__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2711__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2711__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2711__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2711__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2711__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2711__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__1__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__1__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2723__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__1__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2723__part 
                            = vlSelf->__Vfunc_leading_zero32__2723__value;
                        vlSelf->__Vfunc_leading_zero32__2723__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2723__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2723__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2723__count)));
                            vlSelf->__Vfunc_leading_zero32__2723__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2723__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2723__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2723__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2723__count)));
                            vlSelf->__Vfunc_leading_zero32__2723__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2723__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2723__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2723__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2723__count)));
                            vlSelf->__Vfunc_leading_zero32__2723__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2723__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2723__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2723__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2723__count)));
                            vlSelf->__Vfunc_leading_zero32__2723__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2723__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2723__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2723__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2723__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2723__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2723__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2723__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2723__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__2__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__2__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2735__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__2__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2735__part 
                            = vlSelf->__Vfunc_leading_zero32__2735__value;
                        vlSelf->__Vfunc_leading_zero32__2735__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2735__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2735__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2735__count)));
                            vlSelf->__Vfunc_leading_zero32__2735__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2735__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2735__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2735__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2735__count)));
                            vlSelf->__Vfunc_leading_zero32__2735__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2735__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2735__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2735__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2735__count)));
                            vlSelf->__Vfunc_leading_zero32__2735__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2735__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2735__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2735__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2735__count)));
                            vlSelf->__Vfunc_leading_zero32__2735__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2735__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2735__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2735__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2735__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2735__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2735__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2735__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2735__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__3__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__3__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2747__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__3__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2747__part 
                            = vlSelf->__Vfunc_leading_zero32__2747__value;
                        vlSelf->__Vfunc_leading_zero32__2747__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2747__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2747__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2747__count)));
                            vlSelf->__Vfunc_leading_zero32__2747__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2747__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2747__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2747__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2747__count)));
                            vlSelf->__Vfunc_leading_zero32__2747__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2747__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2747__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2747__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2747__count)));
                            vlSelf->__Vfunc_leading_zero32__2747__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2747__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2747__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2747__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2747__count)));
                            vlSelf->__Vfunc_leading_zero32__2747__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2747__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2747__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2747__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2747__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2747__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2747__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2747__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2747__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2759__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2759__part 
                            = vlSelf->__Vfunc_leading_zero32__2759__value;
                        vlSelf->__Vfunc_leading_zero32__2759__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2759__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2759__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2759__count)));
                            vlSelf->__Vfunc_leading_zero32__2759__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2759__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2759__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2759__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2759__count)));
                            vlSelf->__Vfunc_leading_zero32__2759__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2759__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2759__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2759__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2759__count)));
                            vlSelf->__Vfunc_leading_zero32__2759__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2759__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2759__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2759__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2759__count)));
                            vlSelf->__Vfunc_leading_zero32__2759__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2759__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2759__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2759__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2759__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2759__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2759__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2759__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2759__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2771__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2771__part 
                            = vlSelf->__Vfunc_leading_zero32__2771__value;
                        vlSelf->__Vfunc_leading_zero32__2771__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2771__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2771__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2771__count)));
                            vlSelf->__Vfunc_leading_zero32__2771__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2771__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2771__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2771__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2771__count)));
                            vlSelf->__Vfunc_leading_zero32__2771__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2771__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2771__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2771__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2771__count)));
                            vlSelf->__Vfunc_leading_zero32__2771__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2771__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2771__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2771__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2771__count)));
                            vlSelf->__Vfunc_leading_zero32__2771__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2771__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2771__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2771__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2771__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2771__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2771__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2771__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2771__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2783__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2783__part 
                            = vlSelf->__Vfunc_leading_zero32__2783__value;
                        vlSelf->__Vfunc_leading_zero32__2783__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2783__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2783__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2783__count)));
                            vlSelf->__Vfunc_leading_zero32__2783__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2783__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2783__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2783__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2783__count)));
                            vlSelf->__Vfunc_leading_zero32__2783__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2783__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2783__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2783__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2783__count)));
                            vlSelf->__Vfunc_leading_zero32__2783__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2783__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2783__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2783__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2783__count)));
                            vlSelf->__Vfunc_leading_zero32__2783__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2783__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2783__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2783__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2783__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2783__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2783__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2783__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2783__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2795__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2795__part 
                            = vlSelf->__Vfunc_leading_zero32__2795__value;
                        vlSelf->__Vfunc_leading_zero32__2795__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2795__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2795__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2795__count)));
                            vlSelf->__Vfunc_leading_zero32__2795__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2795__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2795__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2795__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2795__count)));
                            vlSelf->__Vfunc_leading_zero32__2795__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2795__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2795__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2795__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2795__count)));
                            vlSelf->__Vfunc_leading_zero32__2795__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2795__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2795__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2795__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2795__count)));
                            vlSelf->__Vfunc_leading_zero32__2795__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2795__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2795__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2795__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2795__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2795__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2795__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2795__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2795__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__8__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__8__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2807__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__8__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2807__part 
                            = vlSelf->__Vfunc_leading_zero32__2807__value;
                        vlSelf->__Vfunc_leading_zero32__2807__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2807__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2807__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2807__count)));
                            vlSelf->__Vfunc_leading_zero32__2807__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2807__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2807__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2807__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2807__count)));
                            vlSelf->__Vfunc_leading_zero32__2807__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2807__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2807__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2807__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2807__count)));
                            vlSelf->__Vfunc_leading_zero32__2807__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2807__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2807__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2807__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2807__count)));
                            vlSelf->__Vfunc_leading_zero32__2807__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2807__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2807__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2807__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2807__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2807__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2807__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2807__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2807__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__9__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__9__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2819__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__9__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2819__part 
                            = vlSelf->__Vfunc_leading_zero32__2819__value;
                        vlSelf->__Vfunc_leading_zero32__2819__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2819__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2819__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2819__count)));
                            vlSelf->__Vfunc_leading_zero32__2819__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2819__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2819__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2819__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2819__count)));
                            vlSelf->__Vfunc_leading_zero32__2819__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2819__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2819__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2819__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2819__count)));
                            vlSelf->__Vfunc_leading_zero32__2819__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2819__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2819__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2819__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2819__count)));
                            vlSelf->__Vfunc_leading_zero32__2819__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2819__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2819__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2819__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2819__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2819__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2819__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2819__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2819__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__10__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__10__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2831__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__10__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2831__part 
                            = vlSelf->__Vfunc_leading_zero32__2831__value;
                        vlSelf->__Vfunc_leading_zero32__2831__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2831__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2831__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2831__count)));
                            vlSelf->__Vfunc_leading_zero32__2831__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2831__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2831__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2831__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2831__count)));
                            vlSelf->__Vfunc_leading_zero32__2831__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2831__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2831__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2831__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2831__count)));
                            vlSelf->__Vfunc_leading_zero32__2831__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2831__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2831__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2831__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2831__count)));
                            vlSelf->__Vfunc_leading_zero32__2831__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2831__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2831__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2831__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2831__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2831__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2831__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2831__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2831__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__11__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__11__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2843__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__11__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2843__part 
                            = vlSelf->__Vfunc_leading_zero32__2843__value;
                        vlSelf->__Vfunc_leading_zero32__2843__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2843__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2843__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2843__count)));
                            vlSelf->__Vfunc_leading_zero32__2843__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2843__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2843__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2843__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2843__count)));
                            vlSelf->__Vfunc_leading_zero32__2843__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2843__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2843__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2843__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2843__count)));
                            vlSelf->__Vfunc_leading_zero32__2843__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2843__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2843__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2843__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2843__count)));
                            vlSelf->__Vfunc_leading_zero32__2843__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2843__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2843__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2843__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2843__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2843__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2843__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2843__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2843__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__12__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__12__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2855__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__12__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2855__part 
                            = vlSelf->__Vfunc_leading_zero32__2855__value;
                        vlSelf->__Vfunc_leading_zero32__2855__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2855__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2855__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2855__count)));
                            vlSelf->__Vfunc_leading_zero32__2855__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2855__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2855__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2855__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2855__count)));
                            vlSelf->__Vfunc_leading_zero32__2855__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2855__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2855__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2855__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2855__count)));
                            vlSelf->__Vfunc_leading_zero32__2855__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2855__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2855__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2855__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2855__count)));
                            vlSelf->__Vfunc_leading_zero32__2855__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2855__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2855__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2855__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2855__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2855__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2855__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2855__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2855__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__13__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__13__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2867__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__13__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2867__part 
                            = vlSelf->__Vfunc_leading_zero32__2867__value;
                        vlSelf->__Vfunc_leading_zero32__2867__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2867__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2867__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2867__count)));
                            vlSelf->__Vfunc_leading_zero32__2867__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2867__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2867__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2867__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2867__count)));
                            vlSelf->__Vfunc_leading_zero32__2867__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2867__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2867__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2867__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2867__count)));
                            vlSelf->__Vfunc_leading_zero32__2867__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2867__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2867__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2867__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2867__count)));
                            vlSelf->__Vfunc_leading_zero32__2867__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2867__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2867__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2867__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2867__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2867__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2867__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2867__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2867__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__14__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__14__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2879__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__14__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2879__part 
                            = vlSelf->__Vfunc_leading_zero32__2879__value;
                        vlSelf->__Vfunc_leading_zero32__2879__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2879__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2879__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2879__count)));
                            vlSelf->__Vfunc_leading_zero32__2879__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2879__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2879__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2879__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2879__count)));
                            vlSelf->__Vfunc_leading_zero32__2879__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2879__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2879__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2879__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2879__count)));
                            vlSelf->__Vfunc_leading_zero32__2879__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2879__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2879__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2879__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2879__count)));
                            vlSelf->__Vfunc_leading_zero32__2879__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2879__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2879__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2879__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2879__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2879__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2879__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2879__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2879__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__15__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__15__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2891__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__15__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2891__part 
                            = vlSelf->__Vfunc_leading_zero32__2891__value;
                        vlSelf->__Vfunc_leading_zero32__2891__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2891__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2891__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2891__count)));
                            vlSelf->__Vfunc_leading_zero32__2891__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2891__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2891__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2891__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2891__count)));
                            vlSelf->__Vfunc_leading_zero32__2891__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2891__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2891__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2891__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2891__count)));
                            vlSelf->__Vfunc_leading_zero32__2891__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2891__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2891__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2891__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2891__count)));
                            vlSelf->__Vfunc_leading_zero32__2891__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2891__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2891__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2891__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2891__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2891__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2891__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2891__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2891__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__16__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__16__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2903__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__16__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2903__part 
                            = vlSelf->__Vfunc_leading_zero32__2903__value;
                        vlSelf->__Vfunc_leading_zero32__2903__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2903__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2903__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2903__count)));
                            vlSelf->__Vfunc_leading_zero32__2903__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2903__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2903__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2903__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2903__count)));
                            vlSelf->__Vfunc_leading_zero32__2903__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2903__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2903__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2903__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2903__count)));
                            vlSelf->__Vfunc_leading_zero32__2903__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2903__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2903__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2903__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2903__count)));
                            vlSelf->__Vfunc_leading_zero32__2903__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2903__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2903__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2903__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2903__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2903__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2903__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2903__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2903__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__17__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__17__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2915__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__17__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2915__part 
                            = vlSelf->__Vfunc_leading_zero32__2915__value;
                        vlSelf->__Vfunc_leading_zero32__2915__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2915__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2915__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2915__count)));
                            vlSelf->__Vfunc_leading_zero32__2915__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2915__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2915__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2915__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2915__count)));
                            vlSelf->__Vfunc_leading_zero32__2915__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2915__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2915__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2915__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2915__count)));
                            vlSelf->__Vfunc_leading_zero32__2915__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2915__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2915__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2915__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2915__count)));
                            vlSelf->__Vfunc_leading_zero32__2915__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2915__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2915__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2915__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2915__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2915__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2915__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2915__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2915__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__18__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__18__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2927__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__18__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2927__part 
                            = vlSelf->__Vfunc_leading_zero32__2927__value;
                        vlSelf->__Vfunc_leading_zero32__2927__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2927__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2927__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2927__count)));
                            vlSelf->__Vfunc_leading_zero32__2927__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2927__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2927__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2927__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2927__count)));
                            vlSelf->__Vfunc_leading_zero32__2927__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2927__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2927__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2927__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2927__count)));
                            vlSelf->__Vfunc_leading_zero32__2927__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2927__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2927__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2927__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2927__count)));
                            vlSelf->__Vfunc_leading_zero32__2927__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2927__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2927__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2927__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2927__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2927__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2927__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2927__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2927__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__19__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__19__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2939__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__19__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2939__part 
                            = vlSelf->__Vfunc_leading_zero32__2939__value;
                        vlSelf->__Vfunc_leading_zero32__2939__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2939__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2939__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2939__count)));
                            vlSelf->__Vfunc_leading_zero32__2939__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2939__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2939__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2939__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2939__count)));
                            vlSelf->__Vfunc_leading_zero32__2939__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2939__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2939__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2939__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2939__count)));
                            vlSelf->__Vfunc_leading_zero32__2939__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2939__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2939__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2939__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2939__count)));
                            vlSelf->__Vfunc_leading_zero32__2939__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2939__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2939__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2939__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2939__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2939__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2939__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2939__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2939__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__20__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__20__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2951__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__20__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2951__part 
                            = vlSelf->__Vfunc_leading_zero32__2951__value;
                        vlSelf->__Vfunc_leading_zero32__2951__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2951__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2951__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2951__count)));
                            vlSelf->__Vfunc_leading_zero32__2951__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2951__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2951__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2951__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2951__count)));
                            vlSelf->__Vfunc_leading_zero32__2951__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2951__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2951__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2951__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2951__count)));
                            vlSelf->__Vfunc_leading_zero32__2951__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2951__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2951__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2951__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2951__count)));
                            vlSelf->__Vfunc_leading_zero32__2951__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2951__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2951__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2951__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2951__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2951__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2951__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2951__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2951__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__21__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__21__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2963__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__21__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2963__part 
                            = vlSelf->__Vfunc_leading_zero32__2963__value;
                        vlSelf->__Vfunc_leading_zero32__2963__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2963__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2963__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2963__count)));
                            vlSelf->__Vfunc_leading_zero32__2963__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2963__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2963__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2963__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2963__count)));
                            vlSelf->__Vfunc_leading_zero32__2963__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2963__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2963__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2963__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2963__count)));
                            vlSelf->__Vfunc_leading_zero32__2963__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2963__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2963__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2963__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2963__count)));
                            vlSelf->__Vfunc_leading_zero32__2963__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2963__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2963__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2963__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2963__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2963__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2963__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2963__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2963__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__22__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__22__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2975__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__22__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2975__part 
                            = vlSelf->__Vfunc_leading_zero32__2975__value;
                        vlSelf->__Vfunc_leading_zero32__2975__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2975__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2975__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2975__count)));
                            vlSelf->__Vfunc_leading_zero32__2975__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2975__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2975__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2975__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2975__count)));
                            vlSelf->__Vfunc_leading_zero32__2975__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2975__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2975__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2975__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2975__count)));
                            vlSelf->__Vfunc_leading_zero32__2975__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2975__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2975__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2975__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2975__count)));
                            vlSelf->__Vfunc_leading_zero32__2975__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2975__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2975__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2975__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2975__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2975__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2975__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2975__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2975__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__23__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__23__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2987__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__23__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2987__part 
                            = vlSelf->__Vfunc_leading_zero32__2987__value;
                        vlSelf->__Vfunc_leading_zero32__2987__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2987__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2987__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2987__count)));
                            vlSelf->__Vfunc_leading_zero32__2987__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2987__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2987__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2987__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2987__count)));
                            vlSelf->__Vfunc_leading_zero32__2987__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2987__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2987__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2987__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2987__count)));
                            vlSelf->__Vfunc_leading_zero32__2987__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2987__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2987__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2987__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2987__count)));
                            vlSelf->__Vfunc_leading_zero32__2987__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2987__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2987__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2987__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2987__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2987__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2987__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2987__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2987__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__24__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__24__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2999__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__24__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2999__part 
                            = vlSelf->__Vfunc_leading_zero32__2999__value;
                        vlSelf->__Vfunc_leading_zero32__2999__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2999__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2999__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2999__count)));
                            vlSelf->__Vfunc_leading_zero32__2999__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2999__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2999__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2999__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2999__count)));
                            vlSelf->__Vfunc_leading_zero32__2999__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2999__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2999__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2999__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2999__count)));
                            vlSelf->__Vfunc_leading_zero32__2999__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2999__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2999__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2999__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2999__count)));
                            vlSelf->__Vfunc_leading_zero32__2999__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2999__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2999__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2999__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2999__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2999__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2999__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2999__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2999__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__25__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__25__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3011__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__25__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3011__part 
                            = vlSelf->__Vfunc_leading_zero32__3011__value;
                        vlSelf->__Vfunc_leading_zero32__3011__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3011__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3011__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3011__count)));
                            vlSelf->__Vfunc_leading_zero32__3011__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3011__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3011__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3011__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3011__count)));
                            vlSelf->__Vfunc_leading_zero32__3011__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3011__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3011__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3011__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3011__count)));
                            vlSelf->__Vfunc_leading_zero32__3011__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3011__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3011__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3011__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3011__count)));
                            vlSelf->__Vfunc_leading_zero32__3011__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3011__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3011__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3011__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3011__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3011__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3011__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3011__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3011__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__26__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__26__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3023__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__26__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3023__part 
                            = vlSelf->__Vfunc_leading_zero32__3023__value;
                        vlSelf->__Vfunc_leading_zero32__3023__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3023__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3023__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3023__count)));
                            vlSelf->__Vfunc_leading_zero32__3023__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3023__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3023__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3023__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3023__count)));
                            vlSelf->__Vfunc_leading_zero32__3023__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3023__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3023__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3023__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3023__count)));
                            vlSelf->__Vfunc_leading_zero32__3023__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3023__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3023__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3023__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3023__count)));
                            vlSelf->__Vfunc_leading_zero32__3023__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3023__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3023__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3023__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3023__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3023__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3023__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3023__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3023__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__27__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__27__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3035__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__27__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3035__part 
                            = vlSelf->__Vfunc_leading_zero32__3035__value;
                        vlSelf->__Vfunc_leading_zero32__3035__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3035__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3035__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3035__count)));
                            vlSelf->__Vfunc_leading_zero32__3035__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3035__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3035__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3035__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3035__count)));
                            vlSelf->__Vfunc_leading_zero32__3035__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3035__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3035__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3035__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3035__count)));
                            vlSelf->__Vfunc_leading_zero32__3035__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3035__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3035__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3035__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3035__count)));
                            vlSelf->__Vfunc_leading_zero32__3035__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3035__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3035__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3035__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3035__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3035__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3035__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3035__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3035__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__28__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__28__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3047__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__28__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3047__part 
                            = vlSelf->__Vfunc_leading_zero32__3047__value;
                        vlSelf->__Vfunc_leading_zero32__3047__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3047__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3047__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3047__count)));
                            vlSelf->__Vfunc_leading_zero32__3047__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3047__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3047__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3047__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3047__count)));
                            vlSelf->__Vfunc_leading_zero32__3047__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3047__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3047__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3047__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3047__count)));
                            vlSelf->__Vfunc_leading_zero32__3047__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3047__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3047__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3047__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3047__count)));
                            vlSelf->__Vfunc_leading_zero32__3047__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3047__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3047__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3047__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3047__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3047__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3047__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3047__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3047__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__29__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__29__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3059__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__29__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3059__part 
                            = vlSelf->__Vfunc_leading_zero32__3059__value;
                        vlSelf->__Vfunc_leading_zero32__3059__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3059__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3059__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3059__count)));
                            vlSelf->__Vfunc_leading_zero32__3059__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3059__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3059__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3059__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3059__count)));
                            vlSelf->__Vfunc_leading_zero32__3059__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3059__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3059__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3059__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3059__count)));
                            vlSelf->__Vfunc_leading_zero32__3059__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3059__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3059__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3059__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3059__count)));
                            vlSelf->__Vfunc_leading_zero32__3059__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3059__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3059__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3059__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3059__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3059__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3059__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3059__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3059__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__30__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__30__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3071__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__30__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3071__part 
                            = vlSelf->__Vfunc_leading_zero32__3071__value;
                        vlSelf->__Vfunc_leading_zero32__3071__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3071__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3071__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3071__count)));
                            vlSelf->__Vfunc_leading_zero32__3071__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3071__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3071__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3071__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3071__count)));
                            vlSelf->__Vfunc_leading_zero32__3071__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3071__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3071__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3071__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3071__count)));
                            vlSelf->__Vfunc_leading_zero32__3071__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3071__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3071__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3071__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3071__count)));
                            vlSelf->__Vfunc_leading_zero32__3071__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3071__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3071__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3071__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3071__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3071__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3071__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3071__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3071__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__31__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__31__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3083__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__31__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3083__part 
                            = vlSelf->__Vfunc_leading_zero32__3083__value;
                        vlSelf->__Vfunc_leading_zero32__3083__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3083__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3083__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3083__count)));
                            vlSelf->__Vfunc_leading_zero32__3083__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3083__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3083__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3083__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3083__count)));
                            vlSelf->__Vfunc_leading_zero32__3083__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3083__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3083__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3083__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3083__count)));
                            vlSelf->__Vfunc_leading_zero32__3083__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3083__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3083__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3083__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3083__count)));
                            vlSelf->__Vfunc_leading_zero32__3083__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3083__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3083__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3083__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3083__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3083__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3083__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3083__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3083__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__32__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__32__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3095__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__32__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3095__part 
                            = vlSelf->__Vfunc_leading_zero32__3095__value;
                        vlSelf->__Vfunc_leading_zero32__3095__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3095__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3095__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3095__count)));
                            vlSelf->__Vfunc_leading_zero32__3095__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3095__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3095__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3095__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3095__count)));
                            vlSelf->__Vfunc_leading_zero32__3095__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3095__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3095__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3095__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3095__count)));
                            vlSelf->__Vfunc_leading_zero32__3095__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3095__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3095__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3095__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3095__count)));
                            vlSelf->__Vfunc_leading_zero32__3095__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3095__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3095__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3095__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3095__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3095__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3095__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3095__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3095__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__33__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__33__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3107__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__33__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3107__part 
                            = vlSelf->__Vfunc_leading_zero32__3107__value;
                        vlSelf->__Vfunc_leading_zero32__3107__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3107__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3107__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3107__count)));
                            vlSelf->__Vfunc_leading_zero32__3107__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3107__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3107__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3107__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3107__count)));
                            vlSelf->__Vfunc_leading_zero32__3107__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3107__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3107__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3107__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3107__count)));
                            vlSelf->__Vfunc_leading_zero32__3107__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3107__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3107__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3107__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3107__count)));
                            vlSelf->__Vfunc_leading_zero32__3107__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3107__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3107__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3107__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3107__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3107__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3107__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3107__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3107__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__34__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__34__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3119__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__34__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3119__part 
                            = vlSelf->__Vfunc_leading_zero32__3119__value;
                        vlSelf->__Vfunc_leading_zero32__3119__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3119__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3119__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3119__count)));
                            vlSelf->__Vfunc_leading_zero32__3119__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3119__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3119__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3119__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3119__count)));
                            vlSelf->__Vfunc_leading_zero32__3119__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3119__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3119__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3119__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3119__count)));
                            vlSelf->__Vfunc_leading_zero32__3119__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3119__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3119__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3119__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3119__count)));
                            vlSelf->__Vfunc_leading_zero32__3119__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3119__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3119__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3119__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3119__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3119__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3119__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3119__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3119__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__35__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__35__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3131__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__35__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3131__part 
                            = vlSelf->__Vfunc_leading_zero32__3131__value;
                        vlSelf->__Vfunc_leading_zero32__3131__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3131__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3131__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3131__count)));
                            vlSelf->__Vfunc_leading_zero32__3131__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3131__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3131__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3131__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3131__count)));
                            vlSelf->__Vfunc_leading_zero32__3131__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3131__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3131__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3131__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3131__count)));
                            vlSelf->__Vfunc_leading_zero32__3131__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3131__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3131__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3131__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3131__count)));
                            vlSelf->__Vfunc_leading_zero32__3131__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3131__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3131__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3131__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3131__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3131__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3131__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3131__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3131__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__36__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__36__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3143__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__36__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3143__part 
                            = vlSelf->__Vfunc_leading_zero32__3143__value;
                        vlSelf->__Vfunc_leading_zero32__3143__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3143__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3143__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3143__count)));
                            vlSelf->__Vfunc_leading_zero32__3143__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3143__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3143__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3143__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3143__count)));
                            vlSelf->__Vfunc_leading_zero32__3143__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3143__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3143__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3143__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3143__count)));
                            vlSelf->__Vfunc_leading_zero32__3143__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3143__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3143__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3143__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3143__count)));
                            vlSelf->__Vfunc_leading_zero32__3143__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3143__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3143__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3143__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3143__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3143__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3143__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3143__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3143__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__37__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__37__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3155__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__37__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3155__part 
                            = vlSelf->__Vfunc_leading_zero32__3155__value;
                        vlSelf->__Vfunc_leading_zero32__3155__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3155__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3155__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3155__count)));
                            vlSelf->__Vfunc_leading_zero32__3155__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3155__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3155__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3155__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3155__count)));
                            vlSelf->__Vfunc_leading_zero32__3155__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3155__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3155__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3155__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3155__count)));
                            vlSelf->__Vfunc_leading_zero32__3155__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3155__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3155__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3155__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3155__count)));
                            vlSelf->__Vfunc_leading_zero32__3155__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3155__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3155__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3155__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3155__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3155__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3155__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3155__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3155__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__38__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__38__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3167__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__38__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3167__part 
                            = vlSelf->__Vfunc_leading_zero32__3167__value;
                        vlSelf->__Vfunc_leading_zero32__3167__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3167__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3167__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3167__count)));
                            vlSelf->__Vfunc_leading_zero32__3167__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3167__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3167__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3167__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3167__count)));
                            vlSelf->__Vfunc_leading_zero32__3167__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3167__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3167__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3167__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3167__count)));
                            vlSelf->__Vfunc_leading_zero32__3167__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3167__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3167__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3167__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3167__count)));
                            vlSelf->__Vfunc_leading_zero32__3167__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3167__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3167__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3167__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3167__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3167__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3167__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3167__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3167__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__39__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__39__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3179__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__39__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3179__part 
                            = vlSelf->__Vfunc_leading_zero32__3179__value;
                        vlSelf->__Vfunc_leading_zero32__3179__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3179__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3179__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3179__count)));
                            vlSelf->__Vfunc_leading_zero32__3179__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3179__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3179__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3179__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3179__count)));
                            vlSelf->__Vfunc_leading_zero32__3179__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3179__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3179__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3179__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3179__count)));
                            vlSelf->__Vfunc_leading_zero32__3179__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3179__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3179__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3179__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3179__count)));
                            vlSelf->__Vfunc_leading_zero32__3179__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3179__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3179__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3179__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3179__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3179__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3179__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3179__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3179__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__40__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__40__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3191__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__40__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3191__part 
                            = vlSelf->__Vfunc_leading_zero32__3191__value;
                        vlSelf->__Vfunc_leading_zero32__3191__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3191__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3191__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3191__count)));
                            vlSelf->__Vfunc_leading_zero32__3191__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3191__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3191__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3191__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3191__count)));
                            vlSelf->__Vfunc_leading_zero32__3191__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3191__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3191__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3191__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3191__count)));
                            vlSelf->__Vfunc_leading_zero32__3191__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3191__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3191__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3191__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3191__count)));
                            vlSelf->__Vfunc_leading_zero32__3191__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3191__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3191__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3191__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3191__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3191__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3191__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3191__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3191__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__41__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__41__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3203__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__41__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3203__part 
                            = vlSelf->__Vfunc_leading_zero32__3203__value;
                        vlSelf->__Vfunc_leading_zero32__3203__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3203__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3203__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3203__count)));
                            vlSelf->__Vfunc_leading_zero32__3203__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3203__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3203__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3203__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3203__count)));
                            vlSelf->__Vfunc_leading_zero32__3203__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3203__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3203__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3203__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3203__count)));
                            vlSelf->__Vfunc_leading_zero32__3203__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3203__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3203__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3203__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3203__count)));
                            vlSelf->__Vfunc_leading_zero32__3203__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3203__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3203__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3203__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3203__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3203__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3203__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3203__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3203__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__42__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__42__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3215__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__42__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3215__part 
                            = vlSelf->__Vfunc_leading_zero32__3215__value;
                        vlSelf->__Vfunc_leading_zero32__3215__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3215__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3215__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3215__count)));
                            vlSelf->__Vfunc_leading_zero32__3215__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3215__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3215__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3215__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3215__count)));
                            vlSelf->__Vfunc_leading_zero32__3215__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3215__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3215__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3215__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3215__count)));
                            vlSelf->__Vfunc_leading_zero32__3215__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3215__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3215__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3215__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3215__count)));
                            vlSelf->__Vfunc_leading_zero32__3215__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3215__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3215__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3215__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3215__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3215__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3215__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3215__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3215__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__43__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__43__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3227__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__43__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3227__part 
                            = vlSelf->__Vfunc_leading_zero32__3227__value;
                        vlSelf->__Vfunc_leading_zero32__3227__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3227__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3227__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3227__count)));
                            vlSelf->__Vfunc_leading_zero32__3227__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3227__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3227__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3227__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3227__count)));
                            vlSelf->__Vfunc_leading_zero32__3227__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3227__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3227__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3227__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3227__count)));
                            vlSelf->__Vfunc_leading_zero32__3227__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3227__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3227__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3227__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3227__count)));
                            vlSelf->__Vfunc_leading_zero32__3227__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3227__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3227__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3227__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3227__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3227__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3227__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3227__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3227__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__44__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__44__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3239__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__44__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3239__part 
                            = vlSelf->__Vfunc_leading_zero32__3239__value;
                        vlSelf->__Vfunc_leading_zero32__3239__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3239__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3239__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3239__count)));
                            vlSelf->__Vfunc_leading_zero32__3239__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3239__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3239__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3239__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3239__count)));
                            vlSelf->__Vfunc_leading_zero32__3239__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3239__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3239__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3239__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3239__count)));
                            vlSelf->__Vfunc_leading_zero32__3239__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3239__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3239__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3239__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3239__count)));
                            vlSelf->__Vfunc_leading_zero32__3239__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3239__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3239__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3239__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3239__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3239__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3239__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3239__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3239__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__45__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__45__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3251__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__45__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3251__part 
                            = vlSelf->__Vfunc_leading_zero32__3251__value;
                        vlSelf->__Vfunc_leading_zero32__3251__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3251__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3251__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3251__count)));
                            vlSelf->__Vfunc_leading_zero32__3251__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3251__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3251__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3251__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3251__count)));
                            vlSelf->__Vfunc_leading_zero32__3251__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3251__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3251__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3251__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3251__count)));
                            vlSelf->__Vfunc_leading_zero32__3251__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3251__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3251__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3251__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3251__count)));
                            vlSelf->__Vfunc_leading_zero32__3251__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3251__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3251__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3251__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3251__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3251__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3251__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3251__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3251__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__46__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__46__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3263__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__46__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3263__part 
                            = vlSelf->__Vfunc_leading_zero32__3263__value;
                        vlSelf->__Vfunc_leading_zero32__3263__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3263__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3263__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3263__count)));
                            vlSelf->__Vfunc_leading_zero32__3263__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3263__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3263__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3263__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3263__count)));
                            vlSelf->__Vfunc_leading_zero32__3263__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3263__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3263__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3263__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3263__count)));
                            vlSelf->__Vfunc_leading_zero32__3263__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3263__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3263__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3263__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3263__count)));
                            vlSelf->__Vfunc_leading_zero32__3263__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3263__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3263__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3263__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3263__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3263__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3263__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3263__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3263__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__47__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__47__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3275__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__47__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3275__part 
                            = vlSelf->__Vfunc_leading_zero32__3275__value;
                        vlSelf->__Vfunc_leading_zero32__3275__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3275__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3275__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3275__count)));
                            vlSelf->__Vfunc_leading_zero32__3275__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3275__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3275__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3275__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3275__count)));
                            vlSelf->__Vfunc_leading_zero32__3275__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3275__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3275__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3275__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3275__count)));
                            vlSelf->__Vfunc_leading_zero32__3275__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3275__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3275__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3275__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3275__count)));
                            vlSelf->__Vfunc_leading_zero32__3275__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3275__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3275__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3275__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3275__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3275__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3275__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3275__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3275__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__48__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__48__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3287__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__48__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3287__part 
                            = vlSelf->__Vfunc_leading_zero32__3287__value;
                        vlSelf->__Vfunc_leading_zero32__3287__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3287__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3287__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3287__count)));
                            vlSelf->__Vfunc_leading_zero32__3287__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3287__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3287__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3287__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3287__count)));
                            vlSelf->__Vfunc_leading_zero32__3287__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3287__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3287__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3287__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3287__count)));
                            vlSelf->__Vfunc_leading_zero32__3287__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3287__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3287__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3287__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3287__count)));
                            vlSelf->__Vfunc_leading_zero32__3287__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3287__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3287__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3287__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3287__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3287__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3287__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3287__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3287__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__49__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__49__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3299__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__49__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3299__part 
                            = vlSelf->__Vfunc_leading_zero32__3299__value;
                        vlSelf->__Vfunc_leading_zero32__3299__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3299__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3299__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3299__count)));
                            vlSelf->__Vfunc_leading_zero32__3299__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3299__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3299__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3299__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3299__count)));
                            vlSelf->__Vfunc_leading_zero32__3299__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3299__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3299__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3299__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3299__count)));
                            vlSelf->__Vfunc_leading_zero32__3299__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3299__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3299__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3299__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3299__count)));
                            vlSelf->__Vfunc_leading_zero32__3299__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3299__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3299__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3299__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3299__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3299__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3299__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3299__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3299__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__50__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__50__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3311__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__50__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3311__part 
                            = vlSelf->__Vfunc_leading_zero32__3311__value;
                        vlSelf->__Vfunc_leading_zero32__3311__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3311__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3311__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3311__count)));
                            vlSelf->__Vfunc_leading_zero32__3311__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3311__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3311__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3311__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3311__count)));
                            vlSelf->__Vfunc_leading_zero32__3311__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3311__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3311__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3311__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3311__count)));
                            vlSelf->__Vfunc_leading_zero32__3311__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3311__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3311__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3311__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3311__count)));
                            vlSelf->__Vfunc_leading_zero32__3311__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3311__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3311__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3311__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3311__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3311__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3311__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3311__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3311__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__51__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__51__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3323__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__51__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3323__part 
                            = vlSelf->__Vfunc_leading_zero32__3323__value;
                        vlSelf->__Vfunc_leading_zero32__3323__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3323__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3323__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3323__count)));
                            vlSelf->__Vfunc_leading_zero32__3323__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3323__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3323__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3323__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3323__count)));
                            vlSelf->__Vfunc_leading_zero32__3323__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3323__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3323__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3323__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3323__count)));
                            vlSelf->__Vfunc_leading_zero32__3323__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3323__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3323__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3323__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3323__count)));
                            vlSelf->__Vfunc_leading_zero32__3323__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3323__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3323__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3323__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3323__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3323__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3323__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3323__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3323__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__52__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__52__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3335__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__52__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3335__part 
                            = vlSelf->__Vfunc_leading_zero32__3335__value;
                        vlSelf->__Vfunc_leading_zero32__3335__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3335__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3335__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3335__count)));
                            vlSelf->__Vfunc_leading_zero32__3335__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3335__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3335__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3335__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3335__count)));
                            vlSelf->__Vfunc_leading_zero32__3335__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3335__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3335__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3335__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3335__count)));
                            vlSelf->__Vfunc_leading_zero32__3335__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3335__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3335__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3335__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3335__count)));
                            vlSelf->__Vfunc_leading_zero32__3335__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3335__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3335__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3335__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3335__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3335__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3335__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3335__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3335__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__53__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__53__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3347__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__53__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3347__part 
                            = vlSelf->__Vfunc_leading_zero32__3347__value;
                        vlSelf->__Vfunc_leading_zero32__3347__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3347__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3347__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3347__count)));
                            vlSelf->__Vfunc_leading_zero32__3347__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3347__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3347__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3347__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3347__count)));
                            vlSelf->__Vfunc_leading_zero32__3347__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3347__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3347__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3347__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3347__count)));
                            vlSelf->__Vfunc_leading_zero32__3347__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3347__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3347__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3347__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3347__count)));
                            vlSelf->__Vfunc_leading_zero32__3347__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3347__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3347__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3347__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3347__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3347__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3347__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3347__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3347__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__54__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__54__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3359__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__54__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3359__part 
                            = vlSelf->__Vfunc_leading_zero32__3359__value;
                        vlSelf->__Vfunc_leading_zero32__3359__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3359__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3359__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3359__count)));
                            vlSelf->__Vfunc_leading_zero32__3359__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3359__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3359__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3359__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3359__count)));
                            vlSelf->__Vfunc_leading_zero32__3359__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3359__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3359__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3359__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3359__count)));
                            vlSelf->__Vfunc_leading_zero32__3359__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3359__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3359__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3359__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3359__count)));
                            vlSelf->__Vfunc_leading_zero32__3359__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3359__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3359__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3359__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3359__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3359__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3359__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3359__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3359__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__55__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__55__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3371__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__55__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3371__part 
                            = vlSelf->__Vfunc_leading_zero32__3371__value;
                        vlSelf->__Vfunc_leading_zero32__3371__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3371__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3371__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3371__count)));
                            vlSelf->__Vfunc_leading_zero32__3371__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3371__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3371__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3371__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3371__count)));
                            vlSelf->__Vfunc_leading_zero32__3371__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3371__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3371__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3371__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3371__count)));
                            vlSelf->__Vfunc_leading_zero32__3371__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3371__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3371__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3371__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3371__count)));
                            vlSelf->__Vfunc_leading_zero32__3371__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3371__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3371__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3371__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3371__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3371__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3371__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3371__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3371__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__56__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__56__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3383__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__56__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3383__part 
                            = vlSelf->__Vfunc_leading_zero32__3383__value;
                        vlSelf->__Vfunc_leading_zero32__3383__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3383__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3383__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3383__count)));
                            vlSelf->__Vfunc_leading_zero32__3383__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3383__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3383__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3383__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3383__count)));
                            vlSelf->__Vfunc_leading_zero32__3383__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3383__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3383__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3383__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3383__count)));
                            vlSelf->__Vfunc_leading_zero32__3383__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3383__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3383__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3383__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3383__count)));
                            vlSelf->__Vfunc_leading_zero32__3383__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3383__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3383__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3383__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3383__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3383__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3383__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3383__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3383__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__57__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__57__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3395__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__57__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3395__part 
                            = vlSelf->__Vfunc_leading_zero32__3395__value;
                        vlSelf->__Vfunc_leading_zero32__3395__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3395__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3395__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3395__count)));
                            vlSelf->__Vfunc_leading_zero32__3395__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3395__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3395__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3395__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3395__count)));
                            vlSelf->__Vfunc_leading_zero32__3395__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3395__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3395__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3395__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3395__count)));
                            vlSelf->__Vfunc_leading_zero32__3395__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3395__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3395__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3395__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3395__count)));
                            vlSelf->__Vfunc_leading_zero32__3395__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3395__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3395__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3395__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3395__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3395__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3395__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3395__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3395__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__58__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__58__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3407__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__58__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3407__part 
                            = vlSelf->__Vfunc_leading_zero32__3407__value;
                        vlSelf->__Vfunc_leading_zero32__3407__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3407__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3407__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3407__count)));
                            vlSelf->__Vfunc_leading_zero32__3407__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3407__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3407__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3407__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3407__count)));
                            vlSelf->__Vfunc_leading_zero32__3407__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3407__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3407__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3407__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3407__count)));
                            vlSelf->__Vfunc_leading_zero32__3407__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3407__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3407__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3407__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3407__count)));
                            vlSelf->__Vfunc_leading_zero32__3407__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3407__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3407__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3407__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3407__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3407__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3407__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3407__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3407__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__59__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__59__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3419__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__59__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3419__part 
                            = vlSelf->__Vfunc_leading_zero32__3419__value;
                        vlSelf->__Vfunc_leading_zero32__3419__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3419__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3419__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3419__count)));
                            vlSelf->__Vfunc_leading_zero32__3419__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3419__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3419__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3419__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3419__count)));
                            vlSelf->__Vfunc_leading_zero32__3419__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3419__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3419__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3419__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3419__count)));
                            vlSelf->__Vfunc_leading_zero32__3419__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3419__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3419__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3419__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3419__count)));
                            vlSelf->__Vfunc_leading_zero32__3419__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3419__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3419__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3419__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3419__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3419__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3419__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3419__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3419__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__60__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__60__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3431__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__60__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3431__part 
                            = vlSelf->__Vfunc_leading_zero32__3431__value;
                        vlSelf->__Vfunc_leading_zero32__3431__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3431__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3431__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3431__count)));
                            vlSelf->__Vfunc_leading_zero32__3431__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3431__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3431__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3431__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3431__count)));
                            vlSelf->__Vfunc_leading_zero32__3431__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3431__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3431__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3431__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3431__count)));
                            vlSelf->__Vfunc_leading_zero32__3431__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3431__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3431__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3431__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3431__count)));
                            vlSelf->__Vfunc_leading_zero32__3431__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3431__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3431__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3431__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3431__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3431__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3431__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3431__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3431__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__61__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__61__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3443__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__61__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3443__part 
                            = vlSelf->__Vfunc_leading_zero32__3443__value;
                        vlSelf->__Vfunc_leading_zero32__3443__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3443__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3443__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3443__count)));
                            vlSelf->__Vfunc_leading_zero32__3443__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3443__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3443__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3443__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3443__count)));
                            vlSelf->__Vfunc_leading_zero32__3443__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3443__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3443__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3443__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3443__count)));
                            vlSelf->__Vfunc_leading_zero32__3443__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3443__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3443__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3443__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3443__count)));
                            vlSelf->__Vfunc_leading_zero32__3443__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3443__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3443__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3443__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3443__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3443__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3443__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3443__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3443__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__62__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__62__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3455__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__62__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3455__part 
                            = vlSelf->__Vfunc_leading_zero32__3455__value;
                        vlSelf->__Vfunc_leading_zero32__3455__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3455__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3455__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3455__count)));
                            vlSelf->__Vfunc_leading_zero32__3455__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3455__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3455__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3455__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3455__count)));
                            vlSelf->__Vfunc_leading_zero32__3455__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3455__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3455__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3455__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3455__count)));
                            vlSelf->__Vfunc_leading_zero32__3455__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3455__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3455__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3455__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3455__count)));
                            vlSelf->__Vfunc_leading_zero32__3455__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3455__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3455__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3455__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3455__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3455__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3455__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3455__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3455__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__63__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__63__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3467__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__63__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3467__part 
                            = vlSelf->__Vfunc_leading_zero32__3467__value;
                        vlSelf->__Vfunc_leading_zero32__3467__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3467__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3467__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3467__count)));
                            vlSelf->__Vfunc_leading_zero32__3467__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3467__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3467__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3467__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3467__count)));
                            vlSelf->__Vfunc_leading_zero32__3467__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3467__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3467__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3467__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3467__count)));
                            vlSelf->__Vfunc_leading_zero32__3467__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3467__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3467__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3467__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3467__count)));
                            vlSelf->__Vfunc_leading_zero32__3467__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3467__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3467__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3467__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3467__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3467__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3467__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3467__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3467__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__64__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__64__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3479__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__64__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3479__part 
                            = vlSelf->__Vfunc_leading_zero32__3479__value;
                        vlSelf->__Vfunc_leading_zero32__3479__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3479__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3479__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3479__count)));
                            vlSelf->__Vfunc_leading_zero32__3479__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3479__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3479__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3479__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3479__count)));
                            vlSelf->__Vfunc_leading_zero32__3479__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3479__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3479__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3479__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3479__count)));
                            vlSelf->__Vfunc_leading_zero32__3479__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3479__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3479__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3479__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3479__count)));
                            vlSelf->__Vfunc_leading_zero32__3479__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3479__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3479__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3479__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3479__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3479__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3479__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3479__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3479__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__65__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__65__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3491__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__65__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3491__part 
                            = vlSelf->__Vfunc_leading_zero32__3491__value;
                        vlSelf->__Vfunc_leading_zero32__3491__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3491__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3491__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3491__count)));
                            vlSelf->__Vfunc_leading_zero32__3491__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3491__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3491__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3491__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3491__count)));
                            vlSelf->__Vfunc_leading_zero32__3491__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3491__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3491__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3491__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3491__count)));
                            vlSelf->__Vfunc_leading_zero32__3491__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3491__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3491__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3491__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3491__count)));
                            vlSelf->__Vfunc_leading_zero32__3491__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3491__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3491__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3491__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3491__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3491__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3491__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3491__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3491__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__66__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__66__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3503__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__66__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3503__part 
                            = vlSelf->__Vfunc_leading_zero32__3503__value;
                        vlSelf->__Vfunc_leading_zero32__3503__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3503__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3503__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3503__count)));
                            vlSelf->__Vfunc_leading_zero32__3503__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3503__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3503__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3503__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3503__count)));
                            vlSelf->__Vfunc_leading_zero32__3503__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3503__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3503__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3503__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3503__count)));
                            vlSelf->__Vfunc_leading_zero32__3503__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3503__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3503__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3503__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3503__count)));
                            vlSelf->__Vfunc_leading_zero32__3503__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3503__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3503__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3503__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3503__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3503__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3503__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3503__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3503__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__67__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__67__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3515__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__67__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3515__part 
                            = vlSelf->__Vfunc_leading_zero32__3515__value;
                        vlSelf->__Vfunc_leading_zero32__3515__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3515__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3515__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3515__count)));
                            vlSelf->__Vfunc_leading_zero32__3515__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3515__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3515__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3515__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3515__count)));
                            vlSelf->__Vfunc_leading_zero32__3515__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3515__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3515__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3515__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3515__count)));
                            vlSelf->__Vfunc_leading_zero32__3515__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3515__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3515__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3515__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3515__count)));
                            vlSelf->__Vfunc_leading_zero32__3515__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3515__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3515__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3515__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3515__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3515__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3515__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3515__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3515__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__68__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__68__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3527__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__68__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3527__part 
                            = vlSelf->__Vfunc_leading_zero32__3527__value;
                        vlSelf->__Vfunc_leading_zero32__3527__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3527__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3527__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3527__count)));
                            vlSelf->__Vfunc_leading_zero32__3527__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3527__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3527__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3527__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3527__count)));
                            vlSelf->__Vfunc_leading_zero32__3527__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3527__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3527__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3527__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3527__count)));
                            vlSelf->__Vfunc_leading_zero32__3527__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3527__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3527__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3527__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3527__count)));
                            vlSelf->__Vfunc_leading_zero32__3527__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3527__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3527__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3527__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3527__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3527__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3527__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3527__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3527__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__69__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__69__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3539__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__69__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3539__part 
                            = vlSelf->__Vfunc_leading_zero32__3539__value;
                        vlSelf->__Vfunc_leading_zero32__3539__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3539__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3539__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3539__count)));
                            vlSelf->__Vfunc_leading_zero32__3539__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3539__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3539__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3539__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3539__count)));
                            vlSelf->__Vfunc_leading_zero32__3539__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3539__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3539__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3539__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3539__count)));
                            vlSelf->__Vfunc_leading_zero32__3539__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3539__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3539__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3539__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3539__count)));
                            vlSelf->__Vfunc_leading_zero32__3539__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3539__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3539__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3539__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3539__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3539__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3539__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3539__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3539__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__70__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__70__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3551__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__70__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3551__part 
                            = vlSelf->__Vfunc_leading_zero32__3551__value;
                        vlSelf->__Vfunc_leading_zero32__3551__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3551__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3551__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3551__count)));
                            vlSelf->__Vfunc_leading_zero32__3551__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3551__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3551__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3551__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3551__count)));
                            vlSelf->__Vfunc_leading_zero32__3551__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3551__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3551__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3551__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3551__count)));
                            vlSelf->__Vfunc_leading_zero32__3551__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3551__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3551__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3551__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3551__count)));
                            vlSelf->__Vfunc_leading_zero32__3551__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3551__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3551__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3551__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3551__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3551__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3551__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3551__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3551__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__71__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__71__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3563__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__71__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3563__part 
                            = vlSelf->__Vfunc_leading_zero32__3563__value;
                        vlSelf->__Vfunc_leading_zero32__3563__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3563__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3563__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3563__count)));
                            vlSelf->__Vfunc_leading_zero32__3563__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3563__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3563__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3563__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3563__count)));
                            vlSelf->__Vfunc_leading_zero32__3563__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3563__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3563__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3563__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3563__count)));
                            vlSelf->__Vfunc_leading_zero32__3563__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3563__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3563__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3563__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3563__count)));
                            vlSelf->__Vfunc_leading_zero32__3563__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3563__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3563__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3563__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3563__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3563__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3563__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3563__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3563__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__72__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__72__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3575__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__72__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3575__part 
                            = vlSelf->__Vfunc_leading_zero32__3575__value;
                        vlSelf->__Vfunc_leading_zero32__3575__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3575__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3575__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3575__count)));
                            vlSelf->__Vfunc_leading_zero32__3575__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3575__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3575__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3575__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3575__count)));
                            vlSelf->__Vfunc_leading_zero32__3575__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3575__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3575__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3575__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3575__count)));
                            vlSelf->__Vfunc_leading_zero32__3575__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3575__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3575__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3575__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3575__count)));
                            vlSelf->__Vfunc_leading_zero32__3575__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3575__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3575__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3575__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3575__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3575__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3575__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3575__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3575__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__73__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__73__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3587__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__73__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3587__part 
                            = vlSelf->__Vfunc_leading_zero32__3587__value;
                        vlSelf->__Vfunc_leading_zero32__3587__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3587__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3587__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3587__count)));
                            vlSelf->__Vfunc_leading_zero32__3587__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3587__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3587__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3587__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3587__count)));
                            vlSelf->__Vfunc_leading_zero32__3587__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3587__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3587__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3587__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3587__count)));
                            vlSelf->__Vfunc_leading_zero32__3587__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3587__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3587__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3587__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3587__count)));
                            vlSelf->__Vfunc_leading_zero32__3587__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3587__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3587__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3587__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3587__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3587__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3587__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3587__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3587__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__74__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__74__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3599__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__74__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3599__part 
                            = vlSelf->__Vfunc_leading_zero32__3599__value;
                        vlSelf->__Vfunc_leading_zero32__3599__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3599__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3599__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3599__count)));
                            vlSelf->__Vfunc_leading_zero32__3599__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3599__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3599__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3599__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3599__count)));
                            vlSelf->__Vfunc_leading_zero32__3599__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3599__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3599__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3599__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3599__count)));
                            vlSelf->__Vfunc_leading_zero32__3599__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3599__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3599__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3599__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3599__count)));
                            vlSelf->__Vfunc_leading_zero32__3599__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3599__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3599__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3599__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3599__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3599__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3599__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3599__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3599__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__75__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__75__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3611__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__75__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3611__part 
                            = vlSelf->__Vfunc_leading_zero32__3611__value;
                        vlSelf->__Vfunc_leading_zero32__3611__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3611__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3611__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3611__count)));
                            vlSelf->__Vfunc_leading_zero32__3611__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3611__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3611__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3611__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3611__count)));
                            vlSelf->__Vfunc_leading_zero32__3611__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3611__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3611__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3611__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3611__count)));
                            vlSelf->__Vfunc_leading_zero32__3611__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3611__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3611__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3611__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3611__count)));
                            vlSelf->__Vfunc_leading_zero32__3611__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3611__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3611__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3611__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3611__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3611__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3611__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3611__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3611__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__76__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__76__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3623__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__76__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3623__part 
                            = vlSelf->__Vfunc_leading_zero32__3623__value;
                        vlSelf->__Vfunc_leading_zero32__3623__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3623__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3623__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3623__count)));
                            vlSelf->__Vfunc_leading_zero32__3623__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3623__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3623__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3623__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3623__count)));
                            vlSelf->__Vfunc_leading_zero32__3623__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3623__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3623__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3623__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3623__count)));
                            vlSelf->__Vfunc_leading_zero32__3623__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3623__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3623__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3623__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3623__count)));
                            vlSelf->__Vfunc_leading_zero32__3623__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3623__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3623__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3623__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3623__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3623__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3623__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3623__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3623__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__77__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__77__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3635__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__77__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3635__part 
                            = vlSelf->__Vfunc_leading_zero32__3635__value;
                        vlSelf->__Vfunc_leading_zero32__3635__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3635__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3635__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3635__count)));
                            vlSelf->__Vfunc_leading_zero32__3635__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3635__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3635__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3635__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3635__count)));
                            vlSelf->__Vfunc_leading_zero32__3635__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3635__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3635__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3635__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3635__count)));
                            vlSelf->__Vfunc_leading_zero32__3635__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3635__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3635__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3635__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3635__count)));
                            vlSelf->__Vfunc_leading_zero32__3635__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3635__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3635__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3635__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3635__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3635__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3635__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3635__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3635__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__78__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__78__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3647__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__78__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3647__part 
                            = vlSelf->__Vfunc_leading_zero32__3647__value;
                        vlSelf->__Vfunc_leading_zero32__3647__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3647__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3647__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3647__count)));
                            vlSelf->__Vfunc_leading_zero32__3647__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3647__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3647__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3647__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3647__count)));
                            vlSelf->__Vfunc_leading_zero32__3647__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3647__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3647__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3647__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3647__count)));
                            vlSelf->__Vfunc_leading_zero32__3647__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3647__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3647__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3647__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3647__count)));
                            vlSelf->__Vfunc_leading_zero32__3647__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3647__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3647__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3647__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3647__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3647__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3647__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3647__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3647__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__79__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__79__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3659__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__79__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3659__part 
                            = vlSelf->__Vfunc_leading_zero32__3659__value;
                        vlSelf->__Vfunc_leading_zero32__3659__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3659__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3659__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3659__count)));
                            vlSelf->__Vfunc_leading_zero32__3659__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3659__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3659__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3659__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3659__count)));
                            vlSelf->__Vfunc_leading_zero32__3659__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3659__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3659__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3659__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3659__count)));
                            vlSelf->__Vfunc_leading_zero32__3659__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3659__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3659__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3659__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3659__count)));
                            vlSelf->__Vfunc_leading_zero32__3659__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3659__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3659__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3659__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3659__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3659__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3659__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3659__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3659__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__80__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__80__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3671__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__80__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3671__part 
                            = vlSelf->__Vfunc_leading_zero32__3671__value;
                        vlSelf->__Vfunc_leading_zero32__3671__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3671__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3671__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3671__count)));
                            vlSelf->__Vfunc_leading_zero32__3671__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3671__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3671__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3671__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3671__count)));
                            vlSelf->__Vfunc_leading_zero32__3671__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3671__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3671__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3671__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3671__count)));
                            vlSelf->__Vfunc_leading_zero32__3671__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3671__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3671__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3671__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3671__count)));
                            vlSelf->__Vfunc_leading_zero32__3671__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3671__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3671__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3671__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3671__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3671__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3671__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3671__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3671__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__81__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__81__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3683__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__81__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3683__part 
                            = vlSelf->__Vfunc_leading_zero32__3683__value;
                        vlSelf->__Vfunc_leading_zero32__3683__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3683__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3683__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3683__count)));
                            vlSelf->__Vfunc_leading_zero32__3683__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3683__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3683__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3683__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3683__count)));
                            vlSelf->__Vfunc_leading_zero32__3683__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3683__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3683__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3683__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3683__count)));
                            vlSelf->__Vfunc_leading_zero32__3683__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3683__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3683__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3683__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3683__count)));
                            vlSelf->__Vfunc_leading_zero32__3683__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3683__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3683__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3683__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3683__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3683__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3683__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3683__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3683__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__82__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__82__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3695__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__82__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3695__part 
                            = vlSelf->__Vfunc_leading_zero32__3695__value;
                        vlSelf->__Vfunc_leading_zero32__3695__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3695__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3695__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3695__count)));
                            vlSelf->__Vfunc_leading_zero32__3695__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3695__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3695__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3695__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3695__count)));
                            vlSelf->__Vfunc_leading_zero32__3695__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3695__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3695__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3695__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3695__count)));
                            vlSelf->__Vfunc_leading_zero32__3695__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3695__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3695__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3695__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3695__count)));
                            vlSelf->__Vfunc_leading_zero32__3695__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3695__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3695__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3695__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3695__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3695__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3695__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3695__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3695__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__83__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__83__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3707__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__83__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3707__part 
                            = vlSelf->__Vfunc_leading_zero32__3707__value;
                        vlSelf->__Vfunc_leading_zero32__3707__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3707__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3707__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3707__count)));
                            vlSelf->__Vfunc_leading_zero32__3707__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3707__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3707__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3707__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3707__count)));
                            vlSelf->__Vfunc_leading_zero32__3707__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3707__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3707__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3707__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3707__count)));
                            vlSelf->__Vfunc_leading_zero32__3707__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3707__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3707__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3707__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3707__count)));
                            vlSelf->__Vfunc_leading_zero32__3707__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3707__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3707__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3707__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3707__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3707__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3707__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3707__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3707__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__84__KET____DOT__gamma_scale__DOT__shift_a 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__84__KET____DOT__gamma_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3719__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__84__KET____DOT__gamma_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3719__part 
                            = vlSelf->__Vfunc_leading_zero32__3719__value;
                        vlSelf->__Vfunc_leading_zero32__3719__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3719__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3719__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3719__count)));
                            vlSelf->__Vfunc_leading_zero32__3719__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3719__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3719__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3719__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3719__count)));
                            vlSelf->__Vfunc_leading_zero32__3719__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3719__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3719__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3719__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3719__count)));
                            vlSelf->__Vfunc_leading_zero32__3719__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3719__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3719__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3719__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3719__count)));
                            vlSelf->__Vfunc_leading_zero32__3719__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3719__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3719__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3719__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3719__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3719__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3719__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3719__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3719__Vfuncout)) 
                             - (IData)(8U))));
}
