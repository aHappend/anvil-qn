// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vanvil_qn1_top.h for the primary calling header

#include "Vanvil_qn1_top__pch.h"
#include "Vanvil_qn1_top___024root.h"

VL_ATTR_COLD void Vanvil_qn1_top___024root___stl_sequent__TOP__32(Vanvil_qn1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_top___024root___stl_sequent__TOP__32\n"); );
    // Body
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12221__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12221__part 
                            = vlSelf->__Vfunc_leading_zero32__12221__value;
                        vlSelf->__Vfunc_leading_zero32__12221__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12221__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12221__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12221__count)));
                            vlSelf->__Vfunc_leading_zero32__12221__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12221__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12221__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12221__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12221__count)));
                            vlSelf->__Vfunc_leading_zero32__12221__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12221__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12221__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12221__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12221__count)));
                            vlSelf->__Vfunc_leading_zero32__12221__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12221__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12221__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12221__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12221__count)));
                            vlSelf->__Vfunc_leading_zero32__12221__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12221__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12221__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12221__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12221__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12221__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12221__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12221__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12221__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12233__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12233__part 
                            = vlSelf->__Vfunc_leading_zero32__12233__value;
                        vlSelf->__Vfunc_leading_zero32__12233__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12233__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12233__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12233__count)));
                            vlSelf->__Vfunc_leading_zero32__12233__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12233__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12233__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12233__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12233__count)));
                            vlSelf->__Vfunc_leading_zero32__12233__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12233__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12233__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12233__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12233__count)));
                            vlSelf->__Vfunc_leading_zero32__12233__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12233__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12233__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12233__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12233__count)));
                            vlSelf->__Vfunc_leading_zero32__12233__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12233__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12233__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12233__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12233__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12233__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12233__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12233__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12233__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12251__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12251__part 
                            = vlSelf->__Vfunc_leading_zero32__12251__value;
                        vlSelf->__Vfunc_leading_zero32__12251__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12251__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12251__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12251__count)));
                            vlSelf->__Vfunc_leading_zero32__12251__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12251__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12251__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12251__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12251__count)));
                            vlSelf->__Vfunc_leading_zero32__12251__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12251__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12251__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12251__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12251__count)));
                            vlSelf->__Vfunc_leading_zero32__12251__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12251__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12251__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12251__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12251__count)));
                            vlSelf->__Vfunc_leading_zero32__12251__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12251__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12251__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12251__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12251__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12251__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12251__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12251__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12251__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12263__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12263__part 
                            = vlSelf->__Vfunc_leading_zero32__12263__value;
                        vlSelf->__Vfunc_leading_zero32__12263__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12263__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12263__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12263__count)));
                            vlSelf->__Vfunc_leading_zero32__12263__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12263__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12263__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12263__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12263__count)));
                            vlSelf->__Vfunc_leading_zero32__12263__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12263__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12263__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12263__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12263__count)));
                            vlSelf->__Vfunc_leading_zero32__12263__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12263__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12263__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12263__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12263__count)));
                            vlSelf->__Vfunc_leading_zero32__12263__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12263__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12263__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12263__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12263__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12263__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12263__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12263__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12263__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12257__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12257__part 
                            = vlSelf->__Vfunc_leading_zero32__12257__value;
                        vlSelf->__Vfunc_leading_zero32__12257__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12257__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12257__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12257__count)));
                            vlSelf->__Vfunc_leading_zero32__12257__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12257__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12257__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12257__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12257__count)));
                            vlSelf->__Vfunc_leading_zero32__12257__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12257__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12257__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12257__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12257__count)));
                            vlSelf->__Vfunc_leading_zero32__12257__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12257__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12257__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12257__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12257__count)));
                            vlSelf->__Vfunc_leading_zero32__12257__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12257__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12257__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12257__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12257__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12257__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12257__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12257__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12257__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12269__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12269__part 
                            = vlSelf->__Vfunc_leading_zero32__12269__value;
                        vlSelf->__Vfunc_leading_zero32__12269__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12269__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12269__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12269__count)));
                            vlSelf->__Vfunc_leading_zero32__12269__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12269__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12269__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12269__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12269__count)));
                            vlSelf->__Vfunc_leading_zero32__12269__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12269__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12269__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12269__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12269__count)));
                            vlSelf->__Vfunc_leading_zero32__12269__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12269__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12269__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12269__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12269__count)));
                            vlSelf->__Vfunc_leading_zero32__12269__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12269__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12269__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12269__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12269__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12269__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12269__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12269__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12269__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12287__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12287__part 
                            = vlSelf->__Vfunc_leading_zero32__12287__value;
                        vlSelf->__Vfunc_leading_zero32__12287__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12287__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12287__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12287__count)));
                            vlSelf->__Vfunc_leading_zero32__12287__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12287__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12287__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12287__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12287__count)));
                            vlSelf->__Vfunc_leading_zero32__12287__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12287__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12287__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12287__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12287__count)));
                            vlSelf->__Vfunc_leading_zero32__12287__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12287__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12287__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12287__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12287__count)));
                            vlSelf->__Vfunc_leading_zero32__12287__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12287__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12287__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12287__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12287__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12287__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12287__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12287__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12287__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12299__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12299__part 
                            = vlSelf->__Vfunc_leading_zero32__12299__value;
                        vlSelf->__Vfunc_leading_zero32__12299__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12299__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12299__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12299__count)));
                            vlSelf->__Vfunc_leading_zero32__12299__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12299__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12299__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12299__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12299__count)));
                            vlSelf->__Vfunc_leading_zero32__12299__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12299__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12299__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12299__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12299__count)));
                            vlSelf->__Vfunc_leading_zero32__12299__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12299__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12299__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12299__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12299__count)));
                            vlSelf->__Vfunc_leading_zero32__12299__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12299__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12299__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12299__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12299__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12299__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12299__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12299__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12299__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12293__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12293__part 
                            = vlSelf->__Vfunc_leading_zero32__12293__value;
                        vlSelf->__Vfunc_leading_zero32__12293__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12293__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12293__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12293__count)));
                            vlSelf->__Vfunc_leading_zero32__12293__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12293__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12293__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12293__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12293__count)));
                            vlSelf->__Vfunc_leading_zero32__12293__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12293__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12293__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12293__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12293__count)));
                            vlSelf->__Vfunc_leading_zero32__12293__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12293__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12293__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12293__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12293__count)));
                            vlSelf->__Vfunc_leading_zero32__12293__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12293__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12293__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12293__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12293__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12293__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12293__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12293__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12293__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12305__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12305__part 
                            = vlSelf->__Vfunc_leading_zero32__12305__value;
                        vlSelf->__Vfunc_leading_zero32__12305__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12305__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12305__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12305__count)));
                            vlSelf->__Vfunc_leading_zero32__12305__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12305__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12305__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12305__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12305__count)));
                            vlSelf->__Vfunc_leading_zero32__12305__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12305__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12305__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12305__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12305__count)));
                            vlSelf->__Vfunc_leading_zero32__12305__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12305__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12305__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12305__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12305__count)));
                            vlSelf->__Vfunc_leading_zero32__12305__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12305__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12305__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12305__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12305__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12305__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12305__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12305__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12305__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12323__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12323__part 
                            = vlSelf->__Vfunc_leading_zero32__12323__value;
                        vlSelf->__Vfunc_leading_zero32__12323__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12323__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12323__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12323__count)));
                            vlSelf->__Vfunc_leading_zero32__12323__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12323__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12323__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12323__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12323__count)));
                            vlSelf->__Vfunc_leading_zero32__12323__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12323__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12323__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12323__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12323__count)));
                            vlSelf->__Vfunc_leading_zero32__12323__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12323__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12323__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12323__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12323__count)));
                            vlSelf->__Vfunc_leading_zero32__12323__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12323__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12323__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12323__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12323__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12323__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12323__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12323__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12323__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12335__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12335__part 
                            = vlSelf->__Vfunc_leading_zero32__12335__value;
                        vlSelf->__Vfunc_leading_zero32__12335__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12335__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12335__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12335__count)));
                            vlSelf->__Vfunc_leading_zero32__12335__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12335__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12335__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12335__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12335__count)));
                            vlSelf->__Vfunc_leading_zero32__12335__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12335__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12335__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12335__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12335__count)));
                            vlSelf->__Vfunc_leading_zero32__12335__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12335__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12335__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12335__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12335__count)));
                            vlSelf->__Vfunc_leading_zero32__12335__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12335__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12335__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12335__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12335__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12335__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12335__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12335__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12335__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12329__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12329__part 
                            = vlSelf->__Vfunc_leading_zero32__12329__value;
                        vlSelf->__Vfunc_leading_zero32__12329__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12329__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12329__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12329__count)));
                            vlSelf->__Vfunc_leading_zero32__12329__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12329__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12329__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12329__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12329__count)));
                            vlSelf->__Vfunc_leading_zero32__12329__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12329__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12329__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12329__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12329__count)));
                            vlSelf->__Vfunc_leading_zero32__12329__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12329__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12329__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12329__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12329__count)));
                            vlSelf->__Vfunc_leading_zero32__12329__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12329__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12329__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12329__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12329__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12329__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12329__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12329__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12329__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12341__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12341__part 
                            = vlSelf->__Vfunc_leading_zero32__12341__value;
                        vlSelf->__Vfunc_leading_zero32__12341__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12341__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12341__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12341__count)));
                            vlSelf->__Vfunc_leading_zero32__12341__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12341__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12341__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12341__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12341__count)));
                            vlSelf->__Vfunc_leading_zero32__12341__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12341__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12341__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12341__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12341__count)));
                            vlSelf->__Vfunc_leading_zero32__12341__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12341__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12341__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12341__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12341__count)));
                            vlSelf->__Vfunc_leading_zero32__12341__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12341__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12341__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12341__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12341__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12341__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12341__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12341__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12341__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12359__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12359__part 
                            = vlSelf->__Vfunc_leading_zero32__12359__value;
                        vlSelf->__Vfunc_leading_zero32__12359__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12359__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12359__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12359__count)));
                            vlSelf->__Vfunc_leading_zero32__12359__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12359__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12359__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12359__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12359__count)));
                            vlSelf->__Vfunc_leading_zero32__12359__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12359__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12359__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12359__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12359__count)));
                            vlSelf->__Vfunc_leading_zero32__12359__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12359__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12359__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12359__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12359__count)));
                            vlSelf->__Vfunc_leading_zero32__12359__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12359__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12359__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12359__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12359__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12359__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12359__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12359__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12359__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12371__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12371__part 
                            = vlSelf->__Vfunc_leading_zero32__12371__value;
                        vlSelf->__Vfunc_leading_zero32__12371__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12371__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12371__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12371__count)));
                            vlSelf->__Vfunc_leading_zero32__12371__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12371__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12371__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12371__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12371__count)));
                            vlSelf->__Vfunc_leading_zero32__12371__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12371__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12371__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12371__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12371__count)));
                            vlSelf->__Vfunc_leading_zero32__12371__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12371__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12371__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12371__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12371__count)));
                            vlSelf->__Vfunc_leading_zero32__12371__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12371__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12371__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12371__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12371__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12371__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12371__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12371__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12371__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12365__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12365__part 
                            = vlSelf->__Vfunc_leading_zero32__12365__value;
                        vlSelf->__Vfunc_leading_zero32__12365__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12365__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12365__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12365__count)));
                            vlSelf->__Vfunc_leading_zero32__12365__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12365__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12365__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12365__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12365__count)));
                            vlSelf->__Vfunc_leading_zero32__12365__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12365__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12365__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12365__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12365__count)));
                            vlSelf->__Vfunc_leading_zero32__12365__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12365__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12365__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12365__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12365__count)));
                            vlSelf->__Vfunc_leading_zero32__12365__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12365__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12365__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12365__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12365__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12365__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12365__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12365__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12365__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12377__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12377__part 
                            = vlSelf->__Vfunc_leading_zero32__12377__value;
                        vlSelf->__Vfunc_leading_zero32__12377__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12377__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12377__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12377__count)));
                            vlSelf->__Vfunc_leading_zero32__12377__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12377__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12377__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12377__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12377__count)));
                            vlSelf->__Vfunc_leading_zero32__12377__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12377__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12377__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12377__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12377__count)));
                            vlSelf->__Vfunc_leading_zero32__12377__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12377__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12377__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12377__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12377__count)));
                            vlSelf->__Vfunc_leading_zero32__12377__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12377__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12377__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12377__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12377__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12377__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12377__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12377__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12377__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12395__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12395__part 
                            = vlSelf->__Vfunc_leading_zero32__12395__value;
                        vlSelf->__Vfunc_leading_zero32__12395__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12395__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12395__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12395__count)));
                            vlSelf->__Vfunc_leading_zero32__12395__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12395__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12395__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12395__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12395__count)));
                            vlSelf->__Vfunc_leading_zero32__12395__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12395__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12395__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12395__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12395__count)));
                            vlSelf->__Vfunc_leading_zero32__12395__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12395__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12395__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12395__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12395__count)));
                            vlSelf->__Vfunc_leading_zero32__12395__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12395__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12395__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12395__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12395__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12395__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12395__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12395__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12395__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12407__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12407__part 
                            = vlSelf->__Vfunc_leading_zero32__12407__value;
                        vlSelf->__Vfunc_leading_zero32__12407__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12407__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12407__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12407__count)));
                            vlSelf->__Vfunc_leading_zero32__12407__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12407__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12407__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12407__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12407__count)));
                            vlSelf->__Vfunc_leading_zero32__12407__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12407__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12407__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12407__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12407__count)));
                            vlSelf->__Vfunc_leading_zero32__12407__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12407__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12407__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12407__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12407__count)));
                            vlSelf->__Vfunc_leading_zero32__12407__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12407__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12407__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12407__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12407__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12407__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12407__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12407__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12407__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12401__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12401__part 
                            = vlSelf->__Vfunc_leading_zero32__12401__value;
                        vlSelf->__Vfunc_leading_zero32__12401__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12401__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12401__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12401__count)));
                            vlSelf->__Vfunc_leading_zero32__12401__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12401__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12401__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12401__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12401__count)));
                            vlSelf->__Vfunc_leading_zero32__12401__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12401__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12401__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12401__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12401__count)));
                            vlSelf->__Vfunc_leading_zero32__12401__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12401__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12401__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12401__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12401__count)));
                            vlSelf->__Vfunc_leading_zero32__12401__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12401__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12401__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12401__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12401__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12401__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12401__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12401__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12401__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12413__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12413__part 
                            = vlSelf->__Vfunc_leading_zero32__12413__value;
                        vlSelf->__Vfunc_leading_zero32__12413__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12413__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12413__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12413__count)));
                            vlSelf->__Vfunc_leading_zero32__12413__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12413__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12413__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12413__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12413__count)));
                            vlSelf->__Vfunc_leading_zero32__12413__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12413__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12413__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12413__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12413__count)));
                            vlSelf->__Vfunc_leading_zero32__12413__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12413__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12413__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12413__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12413__count)));
                            vlSelf->__Vfunc_leading_zero32__12413__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12413__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12413__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12413__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12413__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12413__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12413__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12413__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12413__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12431__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12431__part 
                            = vlSelf->__Vfunc_leading_zero32__12431__value;
                        vlSelf->__Vfunc_leading_zero32__12431__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12431__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12431__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12431__count)));
                            vlSelf->__Vfunc_leading_zero32__12431__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12431__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12431__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12431__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12431__count)));
                            vlSelf->__Vfunc_leading_zero32__12431__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12431__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12431__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12431__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12431__count)));
                            vlSelf->__Vfunc_leading_zero32__12431__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12431__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12431__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12431__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12431__count)));
                            vlSelf->__Vfunc_leading_zero32__12431__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12431__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12431__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12431__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12431__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12431__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12431__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12431__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12431__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12443__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12443__part 
                            = vlSelf->__Vfunc_leading_zero32__12443__value;
                        vlSelf->__Vfunc_leading_zero32__12443__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12443__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12443__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12443__count)));
                            vlSelf->__Vfunc_leading_zero32__12443__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12443__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12443__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12443__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12443__count)));
                            vlSelf->__Vfunc_leading_zero32__12443__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12443__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12443__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12443__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12443__count)));
                            vlSelf->__Vfunc_leading_zero32__12443__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12443__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12443__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12443__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12443__count)));
                            vlSelf->__Vfunc_leading_zero32__12443__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12443__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12443__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12443__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12443__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12443__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12443__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12443__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12443__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12437__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12437__part 
                            = vlSelf->__Vfunc_leading_zero32__12437__value;
                        vlSelf->__Vfunc_leading_zero32__12437__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12437__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12437__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12437__count)));
                            vlSelf->__Vfunc_leading_zero32__12437__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12437__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12437__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12437__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12437__count)));
                            vlSelf->__Vfunc_leading_zero32__12437__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12437__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12437__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12437__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12437__count)));
                            vlSelf->__Vfunc_leading_zero32__12437__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12437__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12437__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12437__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12437__count)));
                            vlSelf->__Vfunc_leading_zero32__12437__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12437__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12437__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12437__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12437__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12437__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12437__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12437__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12437__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12449__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12449__part 
                            = vlSelf->__Vfunc_leading_zero32__12449__value;
                        vlSelf->__Vfunc_leading_zero32__12449__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12449__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12449__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12449__count)));
                            vlSelf->__Vfunc_leading_zero32__12449__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12449__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12449__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12449__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12449__count)));
                            vlSelf->__Vfunc_leading_zero32__12449__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12449__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12449__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12449__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12449__count)));
                            vlSelf->__Vfunc_leading_zero32__12449__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12449__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12449__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12449__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12449__count)));
                            vlSelf->__Vfunc_leading_zero32__12449__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12449__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12449__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12449__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12449__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12449__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12449__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12449__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12449__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12467__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12467__part 
                            = vlSelf->__Vfunc_leading_zero32__12467__value;
                        vlSelf->__Vfunc_leading_zero32__12467__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12467__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12467__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12467__count)));
                            vlSelf->__Vfunc_leading_zero32__12467__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12467__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12467__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12467__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12467__count)));
                            vlSelf->__Vfunc_leading_zero32__12467__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12467__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12467__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12467__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12467__count)));
                            vlSelf->__Vfunc_leading_zero32__12467__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12467__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12467__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12467__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12467__count)));
                            vlSelf->__Vfunc_leading_zero32__12467__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12467__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12467__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12467__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12467__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12467__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12467__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12467__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12467__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12479__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12479__part 
                            = vlSelf->__Vfunc_leading_zero32__12479__value;
                        vlSelf->__Vfunc_leading_zero32__12479__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12479__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12479__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12479__count)));
                            vlSelf->__Vfunc_leading_zero32__12479__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12479__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12479__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12479__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12479__count)));
                            vlSelf->__Vfunc_leading_zero32__12479__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12479__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12479__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12479__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12479__count)));
                            vlSelf->__Vfunc_leading_zero32__12479__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12479__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12479__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12479__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12479__count)));
                            vlSelf->__Vfunc_leading_zero32__12479__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12479__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12479__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12479__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12479__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12479__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12479__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12479__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12479__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12473__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12473__part 
                            = vlSelf->__Vfunc_leading_zero32__12473__value;
                        vlSelf->__Vfunc_leading_zero32__12473__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12473__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12473__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12473__count)));
                            vlSelf->__Vfunc_leading_zero32__12473__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12473__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12473__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12473__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12473__count)));
                            vlSelf->__Vfunc_leading_zero32__12473__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12473__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12473__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12473__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12473__count)));
                            vlSelf->__Vfunc_leading_zero32__12473__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12473__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12473__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12473__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12473__count)));
                            vlSelf->__Vfunc_leading_zero32__12473__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12473__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12473__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12473__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12473__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12473__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12473__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12473__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12473__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12485__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12485__part 
                            = vlSelf->__Vfunc_leading_zero32__12485__value;
                        vlSelf->__Vfunc_leading_zero32__12485__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12485__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12485__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12485__count)));
                            vlSelf->__Vfunc_leading_zero32__12485__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12485__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12485__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12485__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12485__count)));
                            vlSelf->__Vfunc_leading_zero32__12485__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12485__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12485__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12485__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12485__count)));
                            vlSelf->__Vfunc_leading_zero32__12485__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12485__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12485__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12485__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12485__count)));
                            vlSelf->__Vfunc_leading_zero32__12485__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12485__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12485__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12485__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12485__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12485__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12485__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12485__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12485__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12503__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12503__part 
                            = vlSelf->__Vfunc_leading_zero32__12503__value;
                        vlSelf->__Vfunc_leading_zero32__12503__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12503__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12503__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12503__count)));
                            vlSelf->__Vfunc_leading_zero32__12503__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12503__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12503__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12503__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12503__count)));
                            vlSelf->__Vfunc_leading_zero32__12503__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12503__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12503__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12503__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12503__count)));
                            vlSelf->__Vfunc_leading_zero32__12503__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12503__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12503__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12503__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12503__count)));
                            vlSelf->__Vfunc_leading_zero32__12503__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12503__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12503__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12503__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12503__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12503__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12503__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12503__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12503__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12515__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12515__part 
                            = vlSelf->__Vfunc_leading_zero32__12515__value;
                        vlSelf->__Vfunc_leading_zero32__12515__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12515__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12515__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12515__count)));
                            vlSelf->__Vfunc_leading_zero32__12515__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12515__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12515__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12515__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12515__count)));
                            vlSelf->__Vfunc_leading_zero32__12515__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12515__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12515__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12515__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12515__count)));
                            vlSelf->__Vfunc_leading_zero32__12515__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12515__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12515__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12515__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12515__count)));
                            vlSelf->__Vfunc_leading_zero32__12515__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12515__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12515__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12515__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12515__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12515__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12515__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12515__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12515__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12509__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12509__part 
                            = vlSelf->__Vfunc_leading_zero32__12509__value;
                        vlSelf->__Vfunc_leading_zero32__12509__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12509__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12509__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12509__count)));
                            vlSelf->__Vfunc_leading_zero32__12509__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12509__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12509__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12509__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12509__count)));
                            vlSelf->__Vfunc_leading_zero32__12509__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12509__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12509__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12509__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12509__count)));
                            vlSelf->__Vfunc_leading_zero32__12509__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12509__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12509__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12509__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12509__count)));
                            vlSelf->__Vfunc_leading_zero32__12509__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12509__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12509__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12509__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12509__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12509__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12509__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12509__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12509__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12521__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12521__part 
                            = vlSelf->__Vfunc_leading_zero32__12521__value;
                        vlSelf->__Vfunc_leading_zero32__12521__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12521__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12521__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12521__count)));
                            vlSelf->__Vfunc_leading_zero32__12521__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12521__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12521__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12521__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12521__count)));
                            vlSelf->__Vfunc_leading_zero32__12521__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12521__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12521__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12521__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12521__count)));
                            vlSelf->__Vfunc_leading_zero32__12521__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12521__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12521__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12521__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12521__count)));
                            vlSelf->__Vfunc_leading_zero32__12521__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12521__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12521__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12521__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12521__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12521__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12521__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12521__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12521__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12539__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12539__part 
                            = vlSelf->__Vfunc_leading_zero32__12539__value;
                        vlSelf->__Vfunc_leading_zero32__12539__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12539__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12539__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12539__count)));
                            vlSelf->__Vfunc_leading_zero32__12539__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12539__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12539__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12539__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12539__count)));
                            vlSelf->__Vfunc_leading_zero32__12539__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12539__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12539__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12539__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12539__count)));
                            vlSelf->__Vfunc_leading_zero32__12539__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12539__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12539__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12539__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12539__count)));
                            vlSelf->__Vfunc_leading_zero32__12539__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12539__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12539__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12539__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12539__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12539__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12539__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12539__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12539__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12551__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12551__part 
                            = vlSelf->__Vfunc_leading_zero32__12551__value;
                        vlSelf->__Vfunc_leading_zero32__12551__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12551__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12551__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12551__count)));
                            vlSelf->__Vfunc_leading_zero32__12551__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12551__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12551__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12551__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12551__count)));
                            vlSelf->__Vfunc_leading_zero32__12551__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12551__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12551__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12551__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12551__count)));
                            vlSelf->__Vfunc_leading_zero32__12551__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12551__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12551__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12551__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12551__count)));
                            vlSelf->__Vfunc_leading_zero32__12551__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12551__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12551__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12551__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12551__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12551__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12551__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12551__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12551__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12545__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12545__part 
                            = vlSelf->__Vfunc_leading_zero32__12545__value;
                        vlSelf->__Vfunc_leading_zero32__12545__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12545__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12545__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12545__count)));
                            vlSelf->__Vfunc_leading_zero32__12545__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12545__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12545__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12545__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12545__count)));
                            vlSelf->__Vfunc_leading_zero32__12545__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12545__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12545__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12545__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12545__count)));
                            vlSelf->__Vfunc_leading_zero32__12545__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12545__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12545__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12545__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12545__count)));
                            vlSelf->__Vfunc_leading_zero32__12545__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12545__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12545__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12545__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12545__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12545__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12545__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12545__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12545__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12557__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12557__part 
                            = vlSelf->__Vfunc_leading_zero32__12557__value;
                        vlSelf->__Vfunc_leading_zero32__12557__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12557__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12557__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12557__count)));
                            vlSelf->__Vfunc_leading_zero32__12557__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12557__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12557__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12557__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12557__count)));
                            vlSelf->__Vfunc_leading_zero32__12557__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12557__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12557__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12557__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12557__count)));
                            vlSelf->__Vfunc_leading_zero32__12557__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12557__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12557__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12557__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12557__count)));
                            vlSelf->__Vfunc_leading_zero32__12557__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12557__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12557__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12557__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12557__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12557__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12557__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12557__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12557__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12575__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12575__part 
                            = vlSelf->__Vfunc_leading_zero32__12575__value;
                        vlSelf->__Vfunc_leading_zero32__12575__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12575__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12575__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12575__count)));
                            vlSelf->__Vfunc_leading_zero32__12575__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12575__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12575__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12575__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12575__count)));
                            vlSelf->__Vfunc_leading_zero32__12575__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12575__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12575__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12575__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12575__count)));
                            vlSelf->__Vfunc_leading_zero32__12575__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12575__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12575__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12575__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12575__count)));
                            vlSelf->__Vfunc_leading_zero32__12575__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12575__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12575__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12575__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12575__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12575__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12575__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12575__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12575__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12587__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12587__part 
                            = vlSelf->__Vfunc_leading_zero32__12587__value;
                        vlSelf->__Vfunc_leading_zero32__12587__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12587__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12587__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12587__count)));
                            vlSelf->__Vfunc_leading_zero32__12587__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12587__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12587__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12587__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12587__count)));
                            vlSelf->__Vfunc_leading_zero32__12587__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12587__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12587__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12587__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12587__count)));
                            vlSelf->__Vfunc_leading_zero32__12587__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12587__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12587__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12587__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12587__count)));
                            vlSelf->__Vfunc_leading_zero32__12587__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12587__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12587__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12587__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12587__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12587__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12587__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12587__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12587__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12581__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12581__part 
                            = vlSelf->__Vfunc_leading_zero32__12581__value;
                        vlSelf->__Vfunc_leading_zero32__12581__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12581__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12581__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12581__count)));
                            vlSelf->__Vfunc_leading_zero32__12581__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12581__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12581__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12581__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12581__count)));
                            vlSelf->__Vfunc_leading_zero32__12581__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12581__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12581__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12581__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12581__count)));
                            vlSelf->__Vfunc_leading_zero32__12581__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12581__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12581__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12581__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12581__count)));
                            vlSelf->__Vfunc_leading_zero32__12581__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12581__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12581__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12581__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12581__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12581__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12581__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12581__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12581__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12593__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12593__part 
                            = vlSelf->__Vfunc_leading_zero32__12593__value;
                        vlSelf->__Vfunc_leading_zero32__12593__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12593__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12593__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12593__count)));
                            vlSelf->__Vfunc_leading_zero32__12593__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12593__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12593__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12593__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12593__count)));
                            vlSelf->__Vfunc_leading_zero32__12593__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12593__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12593__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12593__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12593__count)));
                            vlSelf->__Vfunc_leading_zero32__12593__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12593__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12593__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12593__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12593__count)));
                            vlSelf->__Vfunc_leading_zero32__12593__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12593__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12593__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12593__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12593__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12593__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12593__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12593__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12593__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12611__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12611__part 
                            = vlSelf->__Vfunc_leading_zero32__12611__value;
                        vlSelf->__Vfunc_leading_zero32__12611__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12611__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12611__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12611__count)));
                            vlSelf->__Vfunc_leading_zero32__12611__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12611__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12611__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12611__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12611__count)));
                            vlSelf->__Vfunc_leading_zero32__12611__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12611__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12611__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12611__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12611__count)));
                            vlSelf->__Vfunc_leading_zero32__12611__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12611__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12611__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12611__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12611__count)));
                            vlSelf->__Vfunc_leading_zero32__12611__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12611__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12611__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12611__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12611__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12611__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12611__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12611__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12611__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12623__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12623__part 
                            = vlSelf->__Vfunc_leading_zero32__12623__value;
                        vlSelf->__Vfunc_leading_zero32__12623__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12623__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12623__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12623__count)));
                            vlSelf->__Vfunc_leading_zero32__12623__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12623__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12623__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12623__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12623__count)));
                            vlSelf->__Vfunc_leading_zero32__12623__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12623__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12623__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12623__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12623__count)));
                            vlSelf->__Vfunc_leading_zero32__12623__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12623__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12623__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12623__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12623__count)));
                            vlSelf->__Vfunc_leading_zero32__12623__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12623__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12623__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12623__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12623__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12623__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12623__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12623__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12623__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12617__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12617__part 
                            = vlSelf->__Vfunc_leading_zero32__12617__value;
                        vlSelf->__Vfunc_leading_zero32__12617__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12617__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12617__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12617__count)));
                            vlSelf->__Vfunc_leading_zero32__12617__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12617__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12617__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12617__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12617__count)));
                            vlSelf->__Vfunc_leading_zero32__12617__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12617__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12617__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12617__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12617__count)));
                            vlSelf->__Vfunc_leading_zero32__12617__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12617__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12617__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12617__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12617__count)));
                            vlSelf->__Vfunc_leading_zero32__12617__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12617__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12617__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12617__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12617__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12617__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12617__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12617__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12617__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12629__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12629__part 
                            = vlSelf->__Vfunc_leading_zero32__12629__value;
                        vlSelf->__Vfunc_leading_zero32__12629__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12629__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12629__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12629__count)));
                            vlSelf->__Vfunc_leading_zero32__12629__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12629__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12629__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12629__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12629__count)));
                            vlSelf->__Vfunc_leading_zero32__12629__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12629__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12629__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12629__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12629__count)));
                            vlSelf->__Vfunc_leading_zero32__12629__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12629__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12629__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12629__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12629__count)));
                            vlSelf->__Vfunc_leading_zero32__12629__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12629__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12629__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12629__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12629__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12629__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12629__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12629__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12629__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12647__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12647__part 
                            = vlSelf->__Vfunc_leading_zero32__12647__value;
                        vlSelf->__Vfunc_leading_zero32__12647__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12647__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12647__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12647__count)));
                            vlSelf->__Vfunc_leading_zero32__12647__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12647__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12647__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12647__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12647__count)));
                            vlSelf->__Vfunc_leading_zero32__12647__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12647__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12647__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12647__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12647__count)));
                            vlSelf->__Vfunc_leading_zero32__12647__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12647__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12647__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12647__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12647__count)));
                            vlSelf->__Vfunc_leading_zero32__12647__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12647__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12647__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12647__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12647__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12647__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12647__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12647__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12647__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12659__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12659__part 
                            = vlSelf->__Vfunc_leading_zero32__12659__value;
                        vlSelf->__Vfunc_leading_zero32__12659__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12659__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12659__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12659__count)));
                            vlSelf->__Vfunc_leading_zero32__12659__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12659__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12659__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12659__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12659__count)));
                            vlSelf->__Vfunc_leading_zero32__12659__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12659__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12659__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12659__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12659__count)));
                            vlSelf->__Vfunc_leading_zero32__12659__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12659__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12659__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12659__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12659__count)));
                            vlSelf->__Vfunc_leading_zero32__12659__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12659__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12659__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12659__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12659__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12659__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12659__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12659__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12659__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12653__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12653__part 
                            = vlSelf->__Vfunc_leading_zero32__12653__value;
                        vlSelf->__Vfunc_leading_zero32__12653__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12653__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12653__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12653__count)));
                            vlSelf->__Vfunc_leading_zero32__12653__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12653__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12653__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12653__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12653__count)));
                            vlSelf->__Vfunc_leading_zero32__12653__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12653__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12653__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12653__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12653__count)));
                            vlSelf->__Vfunc_leading_zero32__12653__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12653__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12653__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12653__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12653__count)));
                            vlSelf->__Vfunc_leading_zero32__12653__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12653__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12653__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12653__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12653__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12653__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12653__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12653__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12653__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12665__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12665__part 
                            = vlSelf->__Vfunc_leading_zero32__12665__value;
                        vlSelf->__Vfunc_leading_zero32__12665__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12665__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12665__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12665__count)));
                            vlSelf->__Vfunc_leading_zero32__12665__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12665__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12665__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12665__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12665__count)));
                            vlSelf->__Vfunc_leading_zero32__12665__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12665__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12665__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12665__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12665__count)));
                            vlSelf->__Vfunc_leading_zero32__12665__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12665__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12665__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12665__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12665__count)));
                            vlSelf->__Vfunc_leading_zero32__12665__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12665__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12665__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12665__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12665__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12665__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12665__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12665__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12665__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12683__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12683__part 
                            = vlSelf->__Vfunc_leading_zero32__12683__value;
                        vlSelf->__Vfunc_leading_zero32__12683__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12683__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12683__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12683__count)));
                            vlSelf->__Vfunc_leading_zero32__12683__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12683__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12683__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12683__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12683__count)));
                            vlSelf->__Vfunc_leading_zero32__12683__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12683__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12683__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12683__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12683__count)));
                            vlSelf->__Vfunc_leading_zero32__12683__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12683__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12683__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12683__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12683__count)));
                            vlSelf->__Vfunc_leading_zero32__12683__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12683__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12683__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12683__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12683__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12683__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12683__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12683__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12683__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12695__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12695__part 
                            = vlSelf->__Vfunc_leading_zero32__12695__value;
                        vlSelf->__Vfunc_leading_zero32__12695__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12695__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12695__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12695__count)));
                            vlSelf->__Vfunc_leading_zero32__12695__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12695__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12695__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12695__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12695__count)));
                            vlSelf->__Vfunc_leading_zero32__12695__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12695__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12695__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12695__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12695__count)));
                            vlSelf->__Vfunc_leading_zero32__12695__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12695__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12695__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12695__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12695__count)));
                            vlSelf->__Vfunc_leading_zero32__12695__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12695__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12695__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12695__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12695__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12695__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12695__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12695__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12695__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12689__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12689__part 
                            = vlSelf->__Vfunc_leading_zero32__12689__value;
                        vlSelf->__Vfunc_leading_zero32__12689__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12689__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12689__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12689__count)));
                            vlSelf->__Vfunc_leading_zero32__12689__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12689__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12689__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12689__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12689__count)));
                            vlSelf->__Vfunc_leading_zero32__12689__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12689__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12689__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12689__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12689__count)));
                            vlSelf->__Vfunc_leading_zero32__12689__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12689__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12689__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12689__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12689__count)));
                            vlSelf->__Vfunc_leading_zero32__12689__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12689__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12689__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12689__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12689__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12689__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12689__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12689__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12689__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12701__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12701__part 
                            = vlSelf->__Vfunc_leading_zero32__12701__value;
                        vlSelf->__Vfunc_leading_zero32__12701__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12701__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12701__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12701__count)));
                            vlSelf->__Vfunc_leading_zero32__12701__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12701__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12701__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12701__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12701__count)));
                            vlSelf->__Vfunc_leading_zero32__12701__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12701__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12701__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12701__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12701__count)));
                            vlSelf->__Vfunc_leading_zero32__12701__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12701__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12701__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12701__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12701__count)));
                            vlSelf->__Vfunc_leading_zero32__12701__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12701__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12701__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12701__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12701__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12701__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12701__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12701__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12701__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12719__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12719__part 
                            = vlSelf->__Vfunc_leading_zero32__12719__value;
                        vlSelf->__Vfunc_leading_zero32__12719__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12719__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12719__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12719__count)));
                            vlSelf->__Vfunc_leading_zero32__12719__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12719__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12719__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12719__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12719__count)));
                            vlSelf->__Vfunc_leading_zero32__12719__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12719__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12719__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12719__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12719__count)));
                            vlSelf->__Vfunc_leading_zero32__12719__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12719__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12719__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12719__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12719__count)));
                            vlSelf->__Vfunc_leading_zero32__12719__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12719__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12719__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12719__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12719__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12719__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12719__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12719__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12719__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12731__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12731__part 
                            = vlSelf->__Vfunc_leading_zero32__12731__value;
                        vlSelf->__Vfunc_leading_zero32__12731__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12731__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12731__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12731__count)));
                            vlSelf->__Vfunc_leading_zero32__12731__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12731__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12731__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12731__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12731__count)));
                            vlSelf->__Vfunc_leading_zero32__12731__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12731__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12731__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12731__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12731__count)));
                            vlSelf->__Vfunc_leading_zero32__12731__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12731__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12731__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12731__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12731__count)));
                            vlSelf->__Vfunc_leading_zero32__12731__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12731__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12731__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12731__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12731__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12731__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12731__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12731__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12731__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12725__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12725__part 
                            = vlSelf->__Vfunc_leading_zero32__12725__value;
                        vlSelf->__Vfunc_leading_zero32__12725__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12725__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12725__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12725__count)));
                            vlSelf->__Vfunc_leading_zero32__12725__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12725__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12725__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12725__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12725__count)));
                            vlSelf->__Vfunc_leading_zero32__12725__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12725__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12725__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12725__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12725__count)));
                            vlSelf->__Vfunc_leading_zero32__12725__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12725__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12725__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12725__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12725__count)));
                            vlSelf->__Vfunc_leading_zero32__12725__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12725__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12725__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12725__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12725__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12725__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12725__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12725__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12725__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12737__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12737__part 
                            = vlSelf->__Vfunc_leading_zero32__12737__value;
                        vlSelf->__Vfunc_leading_zero32__12737__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12737__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12737__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12737__count)));
                            vlSelf->__Vfunc_leading_zero32__12737__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12737__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12737__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12737__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12737__count)));
                            vlSelf->__Vfunc_leading_zero32__12737__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12737__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12737__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12737__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12737__count)));
                            vlSelf->__Vfunc_leading_zero32__12737__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12737__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12737__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12737__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12737__count)));
                            vlSelf->__Vfunc_leading_zero32__12737__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12737__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12737__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12737__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12737__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12737__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12737__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12737__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12737__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12755__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12755__part 
                            = vlSelf->__Vfunc_leading_zero32__12755__value;
                        vlSelf->__Vfunc_leading_zero32__12755__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12755__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12755__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12755__count)));
                            vlSelf->__Vfunc_leading_zero32__12755__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12755__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12755__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12755__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12755__count)));
                            vlSelf->__Vfunc_leading_zero32__12755__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12755__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12755__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12755__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12755__count)));
                            vlSelf->__Vfunc_leading_zero32__12755__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12755__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12755__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12755__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12755__count)));
                            vlSelf->__Vfunc_leading_zero32__12755__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12755__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12755__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12755__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12755__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12755__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12755__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12755__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12755__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12767__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12767__part 
                            = vlSelf->__Vfunc_leading_zero32__12767__value;
                        vlSelf->__Vfunc_leading_zero32__12767__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12767__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12767__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12767__count)));
                            vlSelf->__Vfunc_leading_zero32__12767__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12767__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12767__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12767__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12767__count)));
                            vlSelf->__Vfunc_leading_zero32__12767__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12767__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12767__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12767__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12767__count)));
                            vlSelf->__Vfunc_leading_zero32__12767__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12767__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12767__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12767__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12767__count)));
                            vlSelf->__Vfunc_leading_zero32__12767__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12767__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12767__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12767__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12767__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12767__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12767__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12767__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12767__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12761__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12761__part 
                            = vlSelf->__Vfunc_leading_zero32__12761__value;
                        vlSelf->__Vfunc_leading_zero32__12761__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12761__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12761__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12761__count)));
                            vlSelf->__Vfunc_leading_zero32__12761__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12761__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12761__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12761__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12761__count)));
                            vlSelf->__Vfunc_leading_zero32__12761__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12761__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12761__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12761__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12761__count)));
                            vlSelf->__Vfunc_leading_zero32__12761__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12761__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12761__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12761__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12761__count)));
                            vlSelf->__Vfunc_leading_zero32__12761__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12761__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12761__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12761__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12761__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12761__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12761__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12761__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12761__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12773__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12773__part 
                            = vlSelf->__Vfunc_leading_zero32__12773__value;
                        vlSelf->__Vfunc_leading_zero32__12773__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12773__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12773__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12773__count)));
                            vlSelf->__Vfunc_leading_zero32__12773__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12773__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12773__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12773__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12773__count)));
                            vlSelf->__Vfunc_leading_zero32__12773__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12773__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12773__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12773__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12773__count)));
                            vlSelf->__Vfunc_leading_zero32__12773__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12773__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12773__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12773__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12773__count)));
                            vlSelf->__Vfunc_leading_zero32__12773__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12773__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12773__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12773__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12773__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12773__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12773__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12773__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12773__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12791__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12791__part 
                            = vlSelf->__Vfunc_leading_zero32__12791__value;
                        vlSelf->__Vfunc_leading_zero32__12791__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12791__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12791__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12791__count)));
                            vlSelf->__Vfunc_leading_zero32__12791__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12791__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12791__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12791__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12791__count)));
                            vlSelf->__Vfunc_leading_zero32__12791__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12791__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12791__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12791__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12791__count)));
                            vlSelf->__Vfunc_leading_zero32__12791__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12791__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12791__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12791__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12791__count)));
                            vlSelf->__Vfunc_leading_zero32__12791__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12791__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12791__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12791__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12791__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12791__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12791__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12791__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12791__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12803__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12803__part 
                            = vlSelf->__Vfunc_leading_zero32__12803__value;
                        vlSelf->__Vfunc_leading_zero32__12803__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12803__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12803__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12803__count)));
                            vlSelf->__Vfunc_leading_zero32__12803__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12803__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12803__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12803__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12803__count)));
                            vlSelf->__Vfunc_leading_zero32__12803__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12803__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12803__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12803__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12803__count)));
                            vlSelf->__Vfunc_leading_zero32__12803__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12803__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12803__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12803__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12803__count)));
                            vlSelf->__Vfunc_leading_zero32__12803__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12803__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12803__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12803__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12803__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12803__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12803__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12803__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12803__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12797__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12797__part 
                            = vlSelf->__Vfunc_leading_zero32__12797__value;
                        vlSelf->__Vfunc_leading_zero32__12797__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12797__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12797__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12797__count)));
                            vlSelf->__Vfunc_leading_zero32__12797__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12797__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12797__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12797__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12797__count)));
                            vlSelf->__Vfunc_leading_zero32__12797__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12797__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12797__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12797__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12797__count)));
                            vlSelf->__Vfunc_leading_zero32__12797__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12797__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12797__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12797__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12797__count)));
                            vlSelf->__Vfunc_leading_zero32__12797__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12797__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12797__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12797__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12797__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12797__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12797__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12797__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12797__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12809__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12809__part 
                            = vlSelf->__Vfunc_leading_zero32__12809__value;
                        vlSelf->__Vfunc_leading_zero32__12809__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12809__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12809__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12809__count)));
                            vlSelf->__Vfunc_leading_zero32__12809__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12809__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12809__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12809__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12809__count)));
                            vlSelf->__Vfunc_leading_zero32__12809__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12809__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12809__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12809__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12809__count)));
                            vlSelf->__Vfunc_leading_zero32__12809__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12809__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12809__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12809__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12809__count)));
                            vlSelf->__Vfunc_leading_zero32__12809__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12809__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12809__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12809__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12809__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12809__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12809__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12809__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12809__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12827__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12827__part 
                            = vlSelf->__Vfunc_leading_zero32__12827__value;
                        vlSelf->__Vfunc_leading_zero32__12827__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12827__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12827__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12827__count)));
                            vlSelf->__Vfunc_leading_zero32__12827__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12827__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12827__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12827__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12827__count)));
                            vlSelf->__Vfunc_leading_zero32__12827__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12827__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12827__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12827__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12827__count)));
                            vlSelf->__Vfunc_leading_zero32__12827__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12827__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12827__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12827__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12827__count)));
                            vlSelf->__Vfunc_leading_zero32__12827__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12827__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12827__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12827__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12827__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12827__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12827__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12827__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12827__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12839__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12839__part 
                            = vlSelf->__Vfunc_leading_zero32__12839__value;
                        vlSelf->__Vfunc_leading_zero32__12839__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12839__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12839__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12839__count)));
                            vlSelf->__Vfunc_leading_zero32__12839__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12839__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12839__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12839__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12839__count)));
                            vlSelf->__Vfunc_leading_zero32__12839__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12839__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12839__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12839__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12839__count)));
                            vlSelf->__Vfunc_leading_zero32__12839__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12839__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12839__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12839__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12839__count)));
                            vlSelf->__Vfunc_leading_zero32__12839__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12839__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12839__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12839__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12839__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12839__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12839__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12839__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12839__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12833__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12833__part 
                            = vlSelf->__Vfunc_leading_zero32__12833__value;
                        vlSelf->__Vfunc_leading_zero32__12833__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12833__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12833__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12833__count)));
                            vlSelf->__Vfunc_leading_zero32__12833__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12833__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12833__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12833__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12833__count)));
                            vlSelf->__Vfunc_leading_zero32__12833__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12833__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12833__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12833__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12833__count)));
                            vlSelf->__Vfunc_leading_zero32__12833__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12833__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12833__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12833__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12833__count)));
                            vlSelf->__Vfunc_leading_zero32__12833__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12833__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12833__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12833__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12833__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12833__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12833__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12833__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12833__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12845__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12845__part 
                            = vlSelf->__Vfunc_leading_zero32__12845__value;
                        vlSelf->__Vfunc_leading_zero32__12845__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12845__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12845__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12845__count)));
                            vlSelf->__Vfunc_leading_zero32__12845__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12845__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12845__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12845__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12845__count)));
                            vlSelf->__Vfunc_leading_zero32__12845__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12845__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12845__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12845__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12845__count)));
                            vlSelf->__Vfunc_leading_zero32__12845__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12845__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12845__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12845__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12845__count)));
                            vlSelf->__Vfunc_leading_zero32__12845__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12845__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12845__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12845__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12845__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12845__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12845__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12845__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12845__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12863__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12863__part 
                            = vlSelf->__Vfunc_leading_zero32__12863__value;
                        vlSelf->__Vfunc_leading_zero32__12863__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12863__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12863__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12863__count)));
                            vlSelf->__Vfunc_leading_zero32__12863__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12863__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12863__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12863__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12863__count)));
                            vlSelf->__Vfunc_leading_zero32__12863__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12863__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12863__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12863__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12863__count)));
                            vlSelf->__Vfunc_leading_zero32__12863__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12863__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12863__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12863__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12863__count)));
                            vlSelf->__Vfunc_leading_zero32__12863__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12863__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12863__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12863__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12863__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12863__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12863__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12863__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12863__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12875__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12875__part 
                            = vlSelf->__Vfunc_leading_zero32__12875__value;
                        vlSelf->__Vfunc_leading_zero32__12875__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12875__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12875__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12875__count)));
                            vlSelf->__Vfunc_leading_zero32__12875__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12875__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12875__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12875__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12875__count)));
                            vlSelf->__Vfunc_leading_zero32__12875__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12875__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12875__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12875__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12875__count)));
                            vlSelf->__Vfunc_leading_zero32__12875__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12875__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12875__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12875__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12875__count)));
                            vlSelf->__Vfunc_leading_zero32__12875__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12875__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12875__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12875__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12875__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12875__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12875__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12875__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12875__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12869__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12869__part 
                            = vlSelf->__Vfunc_leading_zero32__12869__value;
                        vlSelf->__Vfunc_leading_zero32__12869__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12869__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12869__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12869__count)));
                            vlSelf->__Vfunc_leading_zero32__12869__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12869__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12869__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12869__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12869__count)));
                            vlSelf->__Vfunc_leading_zero32__12869__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12869__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12869__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12869__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12869__count)));
                            vlSelf->__Vfunc_leading_zero32__12869__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12869__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12869__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12869__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12869__count)));
                            vlSelf->__Vfunc_leading_zero32__12869__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12869__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12869__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12869__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12869__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12869__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12869__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12869__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12869__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12881__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12881__part 
                            = vlSelf->__Vfunc_leading_zero32__12881__value;
                        vlSelf->__Vfunc_leading_zero32__12881__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12881__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12881__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12881__count)));
                            vlSelf->__Vfunc_leading_zero32__12881__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12881__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12881__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12881__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12881__count)));
                            vlSelf->__Vfunc_leading_zero32__12881__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12881__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12881__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12881__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12881__count)));
                            vlSelf->__Vfunc_leading_zero32__12881__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12881__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12881__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12881__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12881__count)));
                            vlSelf->__Vfunc_leading_zero32__12881__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12881__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12881__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12881__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12881__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12881__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12881__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12881__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12881__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12899__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12899__part 
                            = vlSelf->__Vfunc_leading_zero32__12899__value;
                        vlSelf->__Vfunc_leading_zero32__12899__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12899__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12899__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12899__count)));
                            vlSelf->__Vfunc_leading_zero32__12899__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12899__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12899__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12899__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12899__count)));
                            vlSelf->__Vfunc_leading_zero32__12899__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12899__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12899__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12899__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12899__count)));
                            vlSelf->__Vfunc_leading_zero32__12899__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12899__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12899__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12899__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12899__count)));
                            vlSelf->__Vfunc_leading_zero32__12899__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12899__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12899__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12899__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12899__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12899__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12899__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12899__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12899__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12911__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12911__part 
                            = vlSelf->__Vfunc_leading_zero32__12911__value;
                        vlSelf->__Vfunc_leading_zero32__12911__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12911__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12911__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12911__count)));
                            vlSelf->__Vfunc_leading_zero32__12911__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12911__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12911__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12911__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12911__count)));
                            vlSelf->__Vfunc_leading_zero32__12911__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12911__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12911__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12911__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12911__count)));
                            vlSelf->__Vfunc_leading_zero32__12911__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12911__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12911__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12911__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12911__count)));
                            vlSelf->__Vfunc_leading_zero32__12911__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12911__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12911__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12911__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12911__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12911__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12911__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12911__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12911__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12905__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12905__part 
                            = vlSelf->__Vfunc_leading_zero32__12905__value;
                        vlSelf->__Vfunc_leading_zero32__12905__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12905__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12905__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12905__count)));
                            vlSelf->__Vfunc_leading_zero32__12905__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12905__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12905__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12905__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12905__count)));
                            vlSelf->__Vfunc_leading_zero32__12905__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12905__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12905__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12905__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12905__count)));
                            vlSelf->__Vfunc_leading_zero32__12905__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12905__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12905__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12905__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12905__count)));
                            vlSelf->__Vfunc_leading_zero32__12905__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12905__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12905__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12905__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12905__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12905__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12905__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12905__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12905__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12917__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12917__part 
                            = vlSelf->__Vfunc_leading_zero32__12917__value;
                        vlSelf->__Vfunc_leading_zero32__12917__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12917__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12917__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12917__count)));
                            vlSelf->__Vfunc_leading_zero32__12917__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12917__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12917__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12917__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12917__count)));
                            vlSelf->__Vfunc_leading_zero32__12917__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12917__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12917__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12917__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12917__count)));
                            vlSelf->__Vfunc_leading_zero32__12917__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12917__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12917__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12917__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12917__count)));
                            vlSelf->__Vfunc_leading_zero32__12917__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12917__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12917__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12917__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12917__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12917__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12917__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12917__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12917__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12935__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12935__part 
                            = vlSelf->__Vfunc_leading_zero32__12935__value;
                        vlSelf->__Vfunc_leading_zero32__12935__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12935__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12935__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12935__count)));
                            vlSelf->__Vfunc_leading_zero32__12935__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12935__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12935__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12935__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12935__count)));
                            vlSelf->__Vfunc_leading_zero32__12935__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12935__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12935__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12935__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12935__count)));
                            vlSelf->__Vfunc_leading_zero32__12935__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12935__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12935__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12935__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12935__count)));
                            vlSelf->__Vfunc_leading_zero32__12935__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12935__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12935__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12935__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12935__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12935__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12935__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12935__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12935__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12947__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12947__part 
                            = vlSelf->__Vfunc_leading_zero32__12947__value;
                        vlSelf->__Vfunc_leading_zero32__12947__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12947__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12947__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12947__count)));
                            vlSelf->__Vfunc_leading_zero32__12947__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12947__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12947__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12947__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12947__count)));
                            vlSelf->__Vfunc_leading_zero32__12947__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12947__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12947__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12947__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12947__count)));
                            vlSelf->__Vfunc_leading_zero32__12947__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12947__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12947__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12947__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12947__count)));
                            vlSelf->__Vfunc_leading_zero32__12947__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12947__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12947__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12947__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12947__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12947__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12947__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12947__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12947__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12941__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12941__part 
                            = vlSelf->__Vfunc_leading_zero32__12941__value;
                        vlSelf->__Vfunc_leading_zero32__12941__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12941__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12941__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12941__count)));
                            vlSelf->__Vfunc_leading_zero32__12941__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12941__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12941__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12941__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12941__count)));
                            vlSelf->__Vfunc_leading_zero32__12941__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12941__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12941__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12941__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12941__count)));
                            vlSelf->__Vfunc_leading_zero32__12941__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12941__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12941__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12941__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12941__count)));
                            vlSelf->__Vfunc_leading_zero32__12941__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12941__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12941__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12941__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12941__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12941__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12941__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12941__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12941__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12953__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12953__part 
                            = vlSelf->__Vfunc_leading_zero32__12953__value;
                        vlSelf->__Vfunc_leading_zero32__12953__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12953__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12953__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12953__count)));
                            vlSelf->__Vfunc_leading_zero32__12953__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12953__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12953__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12953__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12953__count)));
                            vlSelf->__Vfunc_leading_zero32__12953__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12953__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12953__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12953__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12953__count)));
                            vlSelf->__Vfunc_leading_zero32__12953__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12953__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12953__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12953__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12953__count)));
                            vlSelf->__Vfunc_leading_zero32__12953__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12953__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12953__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12953__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12953__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12953__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12953__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12953__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12953__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12971__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12971__part 
                            = vlSelf->__Vfunc_leading_zero32__12971__value;
                        vlSelf->__Vfunc_leading_zero32__12971__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12971__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12971__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12971__count)));
                            vlSelf->__Vfunc_leading_zero32__12971__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12971__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12971__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12971__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12971__count)));
                            vlSelf->__Vfunc_leading_zero32__12971__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12971__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12971__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12971__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12971__count)));
                            vlSelf->__Vfunc_leading_zero32__12971__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12971__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12971__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12971__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12971__count)));
                            vlSelf->__Vfunc_leading_zero32__12971__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12971__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12971__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12971__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12971__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12971__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12971__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12971__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12971__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12983__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12983__part 
                            = vlSelf->__Vfunc_leading_zero32__12983__value;
                        vlSelf->__Vfunc_leading_zero32__12983__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12983__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12983__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12983__count)));
                            vlSelf->__Vfunc_leading_zero32__12983__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12983__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12983__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12983__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12983__count)));
                            vlSelf->__Vfunc_leading_zero32__12983__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12983__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12983__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12983__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12983__count)));
                            vlSelf->__Vfunc_leading_zero32__12983__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12983__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12983__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12983__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12983__count)));
                            vlSelf->__Vfunc_leading_zero32__12983__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12983__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12983__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12983__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12983__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12983__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12983__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12983__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12983__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12977__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12977__part 
                            = vlSelf->__Vfunc_leading_zero32__12977__value;
                        vlSelf->__Vfunc_leading_zero32__12977__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12977__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12977__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12977__count)));
                            vlSelf->__Vfunc_leading_zero32__12977__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12977__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12977__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12977__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12977__count)));
                            vlSelf->__Vfunc_leading_zero32__12977__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12977__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12977__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12977__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12977__count)));
                            vlSelf->__Vfunc_leading_zero32__12977__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12977__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12977__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12977__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12977__count)));
                            vlSelf->__Vfunc_leading_zero32__12977__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12977__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12977__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12977__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12977__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12977__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12977__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12977__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12977__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12989__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12989__part 
                            = vlSelf->__Vfunc_leading_zero32__12989__value;
                        vlSelf->__Vfunc_leading_zero32__12989__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12989__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12989__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12989__count)));
                            vlSelf->__Vfunc_leading_zero32__12989__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12989__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12989__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12989__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12989__count)));
                            vlSelf->__Vfunc_leading_zero32__12989__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12989__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12989__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12989__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12989__count)));
                            vlSelf->__Vfunc_leading_zero32__12989__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12989__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12989__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12989__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12989__count)));
                            vlSelf->__Vfunc_leading_zero32__12989__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12989__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12989__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12989__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12989__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12989__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12989__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12989__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12989__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13007__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13007__part 
                            = vlSelf->__Vfunc_leading_zero32__13007__value;
                        vlSelf->__Vfunc_leading_zero32__13007__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13007__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13007__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13007__count)));
                            vlSelf->__Vfunc_leading_zero32__13007__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13007__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13007__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13007__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13007__count)));
                            vlSelf->__Vfunc_leading_zero32__13007__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13007__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13007__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13007__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13007__count)));
                            vlSelf->__Vfunc_leading_zero32__13007__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13007__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13007__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13007__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13007__count)));
                            vlSelf->__Vfunc_leading_zero32__13007__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13007__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13007__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13007__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13007__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13007__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13007__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13007__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13007__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13019__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13019__part 
                            = vlSelf->__Vfunc_leading_zero32__13019__value;
                        vlSelf->__Vfunc_leading_zero32__13019__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13019__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13019__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13019__count)));
                            vlSelf->__Vfunc_leading_zero32__13019__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13019__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13019__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13019__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13019__count)));
                            vlSelf->__Vfunc_leading_zero32__13019__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13019__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13019__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13019__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13019__count)));
                            vlSelf->__Vfunc_leading_zero32__13019__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13019__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13019__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13019__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13019__count)));
                            vlSelf->__Vfunc_leading_zero32__13019__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13019__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13019__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13019__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13019__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13019__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13019__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13019__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13019__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13013__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13013__part 
                            = vlSelf->__Vfunc_leading_zero32__13013__value;
                        vlSelf->__Vfunc_leading_zero32__13013__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13013__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13013__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13013__count)));
                            vlSelf->__Vfunc_leading_zero32__13013__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13013__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13013__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13013__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13013__count)));
                            vlSelf->__Vfunc_leading_zero32__13013__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13013__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13013__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13013__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13013__count)));
                            vlSelf->__Vfunc_leading_zero32__13013__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13013__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13013__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13013__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13013__count)));
                            vlSelf->__Vfunc_leading_zero32__13013__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13013__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13013__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13013__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13013__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13013__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13013__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13013__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13013__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13025__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13025__part 
                            = vlSelf->__Vfunc_leading_zero32__13025__value;
                        vlSelf->__Vfunc_leading_zero32__13025__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13025__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13025__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13025__count)));
                            vlSelf->__Vfunc_leading_zero32__13025__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13025__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13025__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13025__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13025__count)));
                            vlSelf->__Vfunc_leading_zero32__13025__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13025__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13025__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13025__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13025__count)));
                            vlSelf->__Vfunc_leading_zero32__13025__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13025__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13025__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13025__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13025__count)));
                            vlSelf->__Vfunc_leading_zero32__13025__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13025__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13025__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13025__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13025__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13025__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13025__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13025__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13025__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13043__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13043__part 
                            = vlSelf->__Vfunc_leading_zero32__13043__value;
                        vlSelf->__Vfunc_leading_zero32__13043__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13043__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13043__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13043__count)));
                            vlSelf->__Vfunc_leading_zero32__13043__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13043__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13043__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13043__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13043__count)));
                            vlSelf->__Vfunc_leading_zero32__13043__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13043__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13043__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13043__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13043__count)));
                            vlSelf->__Vfunc_leading_zero32__13043__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13043__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13043__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13043__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13043__count)));
                            vlSelf->__Vfunc_leading_zero32__13043__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13043__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13043__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13043__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13043__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13043__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13043__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13043__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13043__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13055__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13055__part 
                            = vlSelf->__Vfunc_leading_zero32__13055__value;
                        vlSelf->__Vfunc_leading_zero32__13055__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13055__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13055__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13055__count)));
                            vlSelf->__Vfunc_leading_zero32__13055__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13055__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13055__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13055__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13055__count)));
                            vlSelf->__Vfunc_leading_zero32__13055__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13055__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13055__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13055__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13055__count)));
                            vlSelf->__Vfunc_leading_zero32__13055__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13055__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13055__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13055__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13055__count)));
                            vlSelf->__Vfunc_leading_zero32__13055__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13055__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13055__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13055__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13055__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13055__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13055__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13055__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13055__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13049__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13049__part 
                            = vlSelf->__Vfunc_leading_zero32__13049__value;
                        vlSelf->__Vfunc_leading_zero32__13049__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13049__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13049__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13049__count)));
                            vlSelf->__Vfunc_leading_zero32__13049__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13049__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13049__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13049__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13049__count)));
                            vlSelf->__Vfunc_leading_zero32__13049__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13049__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13049__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13049__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13049__count)));
                            vlSelf->__Vfunc_leading_zero32__13049__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13049__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13049__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13049__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13049__count)));
                            vlSelf->__Vfunc_leading_zero32__13049__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13049__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13049__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13049__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13049__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13049__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13049__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13049__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13049__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13061__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13061__part 
                            = vlSelf->__Vfunc_leading_zero32__13061__value;
                        vlSelf->__Vfunc_leading_zero32__13061__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13061__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13061__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13061__count)));
                            vlSelf->__Vfunc_leading_zero32__13061__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13061__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13061__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13061__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13061__count)));
                            vlSelf->__Vfunc_leading_zero32__13061__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13061__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13061__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13061__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13061__count)));
                            vlSelf->__Vfunc_leading_zero32__13061__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13061__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13061__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13061__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13061__count)));
                            vlSelf->__Vfunc_leading_zero32__13061__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13061__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13061__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13061__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13061__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13061__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13061__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13061__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13061__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13079__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13079__part 
                            = vlSelf->__Vfunc_leading_zero32__13079__value;
                        vlSelf->__Vfunc_leading_zero32__13079__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13079__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13079__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13079__count)));
                            vlSelf->__Vfunc_leading_zero32__13079__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13079__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13079__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13079__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13079__count)));
                            vlSelf->__Vfunc_leading_zero32__13079__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13079__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13079__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13079__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13079__count)));
                            vlSelf->__Vfunc_leading_zero32__13079__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13079__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13079__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13079__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13079__count)));
                            vlSelf->__Vfunc_leading_zero32__13079__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13079__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13079__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13079__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13079__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13079__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13079__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13079__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13079__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13091__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13091__part 
                            = vlSelf->__Vfunc_leading_zero32__13091__value;
                        vlSelf->__Vfunc_leading_zero32__13091__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13091__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13091__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13091__count)));
                            vlSelf->__Vfunc_leading_zero32__13091__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13091__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13091__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13091__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13091__count)));
                            vlSelf->__Vfunc_leading_zero32__13091__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13091__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13091__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13091__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13091__count)));
                            vlSelf->__Vfunc_leading_zero32__13091__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13091__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13091__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13091__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13091__count)));
                            vlSelf->__Vfunc_leading_zero32__13091__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13091__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13091__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13091__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13091__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13091__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13091__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13091__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13091__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13085__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13085__part 
                            = vlSelf->__Vfunc_leading_zero32__13085__value;
                        vlSelf->__Vfunc_leading_zero32__13085__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13085__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13085__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13085__count)));
                            vlSelf->__Vfunc_leading_zero32__13085__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13085__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13085__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13085__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13085__count)));
                            vlSelf->__Vfunc_leading_zero32__13085__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13085__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13085__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13085__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13085__count)));
                            vlSelf->__Vfunc_leading_zero32__13085__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13085__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13085__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13085__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13085__count)));
                            vlSelf->__Vfunc_leading_zero32__13085__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13085__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13085__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13085__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13085__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13085__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13085__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13085__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13085__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13097__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13097__part 
                            = vlSelf->__Vfunc_leading_zero32__13097__value;
                        vlSelf->__Vfunc_leading_zero32__13097__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13097__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13097__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13097__count)));
                            vlSelf->__Vfunc_leading_zero32__13097__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13097__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13097__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13097__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13097__count)));
                            vlSelf->__Vfunc_leading_zero32__13097__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13097__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13097__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13097__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13097__count)));
                            vlSelf->__Vfunc_leading_zero32__13097__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13097__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13097__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13097__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13097__count)));
                            vlSelf->__Vfunc_leading_zero32__13097__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13097__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13097__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13097__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13097__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13097__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13097__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13097__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13097__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13115__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13115__part 
                            = vlSelf->__Vfunc_leading_zero32__13115__value;
                        vlSelf->__Vfunc_leading_zero32__13115__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13115__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13115__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13115__count)));
                            vlSelf->__Vfunc_leading_zero32__13115__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13115__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13115__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13115__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13115__count)));
                            vlSelf->__Vfunc_leading_zero32__13115__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13115__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13115__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13115__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13115__count)));
                            vlSelf->__Vfunc_leading_zero32__13115__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13115__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13115__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13115__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13115__count)));
                            vlSelf->__Vfunc_leading_zero32__13115__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13115__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13115__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13115__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13115__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13115__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13115__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13115__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13115__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13127__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13127__part 
                            = vlSelf->__Vfunc_leading_zero32__13127__value;
                        vlSelf->__Vfunc_leading_zero32__13127__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13127__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13127__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13127__count)));
                            vlSelf->__Vfunc_leading_zero32__13127__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13127__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13127__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13127__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13127__count)));
                            vlSelf->__Vfunc_leading_zero32__13127__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13127__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13127__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13127__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13127__count)));
                            vlSelf->__Vfunc_leading_zero32__13127__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13127__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13127__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13127__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13127__count)));
                            vlSelf->__Vfunc_leading_zero32__13127__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13127__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13127__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13127__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13127__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13127__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13127__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13127__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13127__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13121__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13121__part 
                            = vlSelf->__Vfunc_leading_zero32__13121__value;
                        vlSelf->__Vfunc_leading_zero32__13121__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13121__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13121__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13121__count)));
                            vlSelf->__Vfunc_leading_zero32__13121__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13121__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13121__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13121__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13121__count)));
                            vlSelf->__Vfunc_leading_zero32__13121__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13121__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13121__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13121__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13121__count)));
                            vlSelf->__Vfunc_leading_zero32__13121__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13121__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13121__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13121__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13121__count)));
                            vlSelf->__Vfunc_leading_zero32__13121__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13121__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13121__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13121__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13121__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13121__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13121__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13121__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13121__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13133__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13133__part 
                            = vlSelf->__Vfunc_leading_zero32__13133__value;
                        vlSelf->__Vfunc_leading_zero32__13133__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13133__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13133__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13133__count)));
                            vlSelf->__Vfunc_leading_zero32__13133__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13133__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13133__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13133__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13133__count)));
                            vlSelf->__Vfunc_leading_zero32__13133__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13133__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13133__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13133__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13133__count)));
                            vlSelf->__Vfunc_leading_zero32__13133__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13133__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13133__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13133__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13133__count)));
                            vlSelf->__Vfunc_leading_zero32__13133__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13133__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13133__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13133__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13133__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13133__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13133__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13133__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13133__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13151__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13151__part 
                            = vlSelf->__Vfunc_leading_zero32__13151__value;
                        vlSelf->__Vfunc_leading_zero32__13151__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13151__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13151__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13151__count)));
                            vlSelf->__Vfunc_leading_zero32__13151__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13151__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13151__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13151__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13151__count)));
                            vlSelf->__Vfunc_leading_zero32__13151__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13151__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13151__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13151__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13151__count)));
                            vlSelf->__Vfunc_leading_zero32__13151__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13151__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13151__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13151__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13151__count)));
                            vlSelf->__Vfunc_leading_zero32__13151__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13151__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13151__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13151__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13151__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13151__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13151__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13151__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13151__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13163__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13163__part 
                            = vlSelf->__Vfunc_leading_zero32__13163__value;
                        vlSelf->__Vfunc_leading_zero32__13163__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13163__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13163__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13163__count)));
                            vlSelf->__Vfunc_leading_zero32__13163__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13163__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13163__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13163__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13163__count)));
                            vlSelf->__Vfunc_leading_zero32__13163__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13163__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13163__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13163__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13163__count)));
                            vlSelf->__Vfunc_leading_zero32__13163__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13163__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13163__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13163__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13163__count)));
                            vlSelf->__Vfunc_leading_zero32__13163__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13163__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13163__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13163__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13163__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13163__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13163__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13163__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13163__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13157__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13157__part 
                            = vlSelf->__Vfunc_leading_zero32__13157__value;
                        vlSelf->__Vfunc_leading_zero32__13157__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13157__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13157__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13157__count)));
                            vlSelf->__Vfunc_leading_zero32__13157__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13157__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13157__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13157__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13157__count)));
                            vlSelf->__Vfunc_leading_zero32__13157__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13157__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13157__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13157__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13157__count)));
                            vlSelf->__Vfunc_leading_zero32__13157__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13157__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13157__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13157__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13157__count)));
                            vlSelf->__Vfunc_leading_zero32__13157__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13157__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13157__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13157__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13157__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13157__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13157__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13157__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13157__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13169__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13169__part 
                            = vlSelf->__Vfunc_leading_zero32__13169__value;
                        vlSelf->__Vfunc_leading_zero32__13169__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13169__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13169__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13169__count)));
                            vlSelf->__Vfunc_leading_zero32__13169__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13169__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13169__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13169__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13169__count)));
                            vlSelf->__Vfunc_leading_zero32__13169__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13169__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13169__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13169__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13169__count)));
                            vlSelf->__Vfunc_leading_zero32__13169__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13169__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13169__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13169__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13169__count)));
                            vlSelf->__Vfunc_leading_zero32__13169__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13169__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13169__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13169__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13169__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13169__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13169__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13169__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13169__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13187__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13187__part 
                            = vlSelf->__Vfunc_leading_zero32__13187__value;
                        vlSelf->__Vfunc_leading_zero32__13187__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13187__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13187__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13187__count)));
                            vlSelf->__Vfunc_leading_zero32__13187__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13187__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13187__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13187__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13187__count)));
                            vlSelf->__Vfunc_leading_zero32__13187__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13187__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13187__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13187__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13187__count)));
                            vlSelf->__Vfunc_leading_zero32__13187__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13187__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13187__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13187__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13187__count)));
                            vlSelf->__Vfunc_leading_zero32__13187__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13187__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13187__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13187__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13187__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13187__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13187__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13187__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13187__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13199__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13199__part 
                            = vlSelf->__Vfunc_leading_zero32__13199__value;
                        vlSelf->__Vfunc_leading_zero32__13199__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13199__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13199__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13199__count)));
                            vlSelf->__Vfunc_leading_zero32__13199__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13199__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13199__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13199__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13199__count)));
                            vlSelf->__Vfunc_leading_zero32__13199__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13199__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13199__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13199__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13199__count)));
                            vlSelf->__Vfunc_leading_zero32__13199__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13199__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13199__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13199__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13199__count)));
                            vlSelf->__Vfunc_leading_zero32__13199__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13199__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13199__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13199__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13199__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13199__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13199__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13199__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13199__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13193__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13193__part 
                            = vlSelf->__Vfunc_leading_zero32__13193__value;
                        vlSelf->__Vfunc_leading_zero32__13193__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13193__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13193__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13193__count)));
                            vlSelf->__Vfunc_leading_zero32__13193__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13193__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13193__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13193__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13193__count)));
                            vlSelf->__Vfunc_leading_zero32__13193__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13193__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13193__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13193__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13193__count)));
                            vlSelf->__Vfunc_leading_zero32__13193__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13193__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13193__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13193__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13193__count)));
                            vlSelf->__Vfunc_leading_zero32__13193__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13193__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13193__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13193__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13193__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13193__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13193__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13193__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13193__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13205__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13205__part 
                            = vlSelf->__Vfunc_leading_zero32__13205__value;
                        vlSelf->__Vfunc_leading_zero32__13205__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13205__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13205__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13205__count)));
                            vlSelf->__Vfunc_leading_zero32__13205__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13205__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13205__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13205__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13205__count)));
                            vlSelf->__Vfunc_leading_zero32__13205__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13205__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13205__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13205__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13205__count)));
                            vlSelf->__Vfunc_leading_zero32__13205__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13205__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13205__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13205__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13205__count)));
                            vlSelf->__Vfunc_leading_zero32__13205__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13205__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13205__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13205__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13205__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13205__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13205__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13205__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13205__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13223__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13223__part 
                            = vlSelf->__Vfunc_leading_zero32__13223__value;
                        vlSelf->__Vfunc_leading_zero32__13223__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13223__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13223__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13223__count)));
                            vlSelf->__Vfunc_leading_zero32__13223__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13223__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13223__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13223__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13223__count)));
                            vlSelf->__Vfunc_leading_zero32__13223__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13223__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13223__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13223__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13223__count)));
                            vlSelf->__Vfunc_leading_zero32__13223__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13223__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13223__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13223__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13223__count)));
                            vlSelf->__Vfunc_leading_zero32__13223__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13223__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13223__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13223__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13223__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13223__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13223__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13223__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13223__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13235__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13235__part 
                            = vlSelf->__Vfunc_leading_zero32__13235__value;
                        vlSelf->__Vfunc_leading_zero32__13235__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13235__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13235__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13235__count)));
                            vlSelf->__Vfunc_leading_zero32__13235__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13235__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13235__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13235__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13235__count)));
                            vlSelf->__Vfunc_leading_zero32__13235__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13235__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13235__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13235__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13235__count)));
                            vlSelf->__Vfunc_leading_zero32__13235__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13235__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13235__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13235__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13235__count)));
                            vlSelf->__Vfunc_leading_zero32__13235__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13235__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13235__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13235__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13235__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13235__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13235__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13235__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13235__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13229__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13229__part 
                            = vlSelf->__Vfunc_leading_zero32__13229__value;
                        vlSelf->__Vfunc_leading_zero32__13229__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13229__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13229__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13229__count)));
                            vlSelf->__Vfunc_leading_zero32__13229__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13229__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13229__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13229__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13229__count)));
                            vlSelf->__Vfunc_leading_zero32__13229__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13229__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13229__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13229__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13229__count)));
                            vlSelf->__Vfunc_leading_zero32__13229__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13229__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13229__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13229__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13229__count)));
                            vlSelf->__Vfunc_leading_zero32__13229__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13229__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13229__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13229__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13229__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13229__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13229__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13229__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13229__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13241__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13241__part 
                            = vlSelf->__Vfunc_leading_zero32__13241__value;
                        vlSelf->__Vfunc_leading_zero32__13241__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13241__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13241__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13241__count)));
                            vlSelf->__Vfunc_leading_zero32__13241__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13241__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13241__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13241__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13241__count)));
                            vlSelf->__Vfunc_leading_zero32__13241__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13241__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13241__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13241__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13241__count)));
                            vlSelf->__Vfunc_leading_zero32__13241__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13241__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13241__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13241__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13241__count)));
                            vlSelf->__Vfunc_leading_zero32__13241__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13241__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13241__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13241__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13241__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13241__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13241__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13241__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13241__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13259__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13259__part 
                            = vlSelf->__Vfunc_leading_zero32__13259__value;
                        vlSelf->__Vfunc_leading_zero32__13259__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13259__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13259__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13259__count)));
                            vlSelf->__Vfunc_leading_zero32__13259__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13259__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13259__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13259__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13259__count)));
                            vlSelf->__Vfunc_leading_zero32__13259__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13259__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13259__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13259__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13259__count)));
                            vlSelf->__Vfunc_leading_zero32__13259__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13259__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13259__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13259__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13259__count)));
                            vlSelf->__Vfunc_leading_zero32__13259__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13259__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13259__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13259__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13259__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13259__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13259__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13259__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13259__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13271__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13271__part 
                            = vlSelf->__Vfunc_leading_zero32__13271__value;
                        vlSelf->__Vfunc_leading_zero32__13271__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13271__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13271__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13271__count)));
                            vlSelf->__Vfunc_leading_zero32__13271__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13271__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13271__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13271__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13271__count)));
                            vlSelf->__Vfunc_leading_zero32__13271__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13271__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13271__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13271__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13271__count)));
                            vlSelf->__Vfunc_leading_zero32__13271__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13271__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13271__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13271__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13271__count)));
                            vlSelf->__Vfunc_leading_zero32__13271__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13271__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13271__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13271__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13271__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13271__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13271__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13271__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13271__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13265__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13265__part 
                            = vlSelf->__Vfunc_leading_zero32__13265__value;
                        vlSelf->__Vfunc_leading_zero32__13265__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13265__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13265__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13265__count)));
                            vlSelf->__Vfunc_leading_zero32__13265__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13265__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13265__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13265__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13265__count)));
                            vlSelf->__Vfunc_leading_zero32__13265__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13265__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13265__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13265__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13265__count)));
                            vlSelf->__Vfunc_leading_zero32__13265__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13265__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13265__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13265__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13265__count)));
                            vlSelf->__Vfunc_leading_zero32__13265__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13265__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13265__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13265__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13265__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13265__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13265__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13265__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13265__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13277__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13277__part 
                            = vlSelf->__Vfunc_leading_zero32__13277__value;
                        vlSelf->__Vfunc_leading_zero32__13277__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13277__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13277__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13277__count)));
                            vlSelf->__Vfunc_leading_zero32__13277__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13277__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13277__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13277__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13277__count)));
                            vlSelf->__Vfunc_leading_zero32__13277__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13277__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13277__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13277__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13277__count)));
                            vlSelf->__Vfunc_leading_zero32__13277__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13277__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13277__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13277__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13277__count)));
                            vlSelf->__Vfunc_leading_zero32__13277__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13277__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13277__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13277__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13277__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13277__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13277__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13277__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13277__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13295__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13295__part 
                            = vlSelf->__Vfunc_leading_zero32__13295__value;
                        vlSelf->__Vfunc_leading_zero32__13295__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13295__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13295__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13295__count)));
                            vlSelf->__Vfunc_leading_zero32__13295__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13295__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13295__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13295__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13295__count)));
                            vlSelf->__Vfunc_leading_zero32__13295__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13295__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13295__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13295__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13295__count)));
                            vlSelf->__Vfunc_leading_zero32__13295__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13295__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13295__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13295__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13295__count)));
                            vlSelf->__Vfunc_leading_zero32__13295__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13295__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13295__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13295__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13295__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13295__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13295__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13295__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13295__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13307__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13307__part 
                            = vlSelf->__Vfunc_leading_zero32__13307__value;
                        vlSelf->__Vfunc_leading_zero32__13307__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13307__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13307__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13307__count)));
                            vlSelf->__Vfunc_leading_zero32__13307__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13307__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13307__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13307__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13307__count)));
                            vlSelf->__Vfunc_leading_zero32__13307__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13307__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13307__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13307__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13307__count)));
                            vlSelf->__Vfunc_leading_zero32__13307__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13307__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13307__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13307__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13307__count)));
                            vlSelf->__Vfunc_leading_zero32__13307__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13307__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13307__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13307__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13307__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13307__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13307__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13307__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13307__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13301__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13301__part 
                            = vlSelf->__Vfunc_leading_zero32__13301__value;
                        vlSelf->__Vfunc_leading_zero32__13301__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13301__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13301__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13301__count)));
                            vlSelf->__Vfunc_leading_zero32__13301__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13301__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13301__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13301__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13301__count)));
                            vlSelf->__Vfunc_leading_zero32__13301__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13301__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13301__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13301__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13301__count)));
                            vlSelf->__Vfunc_leading_zero32__13301__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13301__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13301__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13301__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13301__count)));
                            vlSelf->__Vfunc_leading_zero32__13301__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13301__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13301__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13301__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13301__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13301__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13301__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13301__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13301__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13313__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13313__part 
                            = vlSelf->__Vfunc_leading_zero32__13313__value;
                        vlSelf->__Vfunc_leading_zero32__13313__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13313__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13313__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13313__count)));
                            vlSelf->__Vfunc_leading_zero32__13313__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13313__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13313__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13313__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13313__count)));
                            vlSelf->__Vfunc_leading_zero32__13313__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13313__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13313__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13313__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13313__count)));
                            vlSelf->__Vfunc_leading_zero32__13313__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13313__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13313__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13313__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13313__count)));
                            vlSelf->__Vfunc_leading_zero32__13313__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13313__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13313__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13313__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13313__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13313__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13313__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13313__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13313__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13331__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13331__part 
                            = vlSelf->__Vfunc_leading_zero32__13331__value;
                        vlSelf->__Vfunc_leading_zero32__13331__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13331__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13331__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13331__count)));
                            vlSelf->__Vfunc_leading_zero32__13331__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13331__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13331__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13331__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13331__count)));
                            vlSelf->__Vfunc_leading_zero32__13331__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13331__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13331__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13331__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13331__count)));
                            vlSelf->__Vfunc_leading_zero32__13331__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13331__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13331__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13331__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13331__count)));
                            vlSelf->__Vfunc_leading_zero32__13331__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13331__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13331__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13331__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13331__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13331__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13331__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13331__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13331__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13343__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13343__part 
                            = vlSelf->__Vfunc_leading_zero32__13343__value;
                        vlSelf->__Vfunc_leading_zero32__13343__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13343__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13343__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13343__count)));
                            vlSelf->__Vfunc_leading_zero32__13343__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13343__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13343__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13343__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13343__count)));
                            vlSelf->__Vfunc_leading_zero32__13343__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13343__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13343__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13343__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13343__count)));
                            vlSelf->__Vfunc_leading_zero32__13343__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13343__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13343__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13343__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13343__count)));
                            vlSelf->__Vfunc_leading_zero32__13343__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13343__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13343__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13343__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13343__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13343__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13343__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13343__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13343__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13337__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13337__part 
                            = vlSelf->__Vfunc_leading_zero32__13337__value;
                        vlSelf->__Vfunc_leading_zero32__13337__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13337__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13337__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13337__count)));
                            vlSelf->__Vfunc_leading_zero32__13337__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13337__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13337__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13337__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13337__count)));
                            vlSelf->__Vfunc_leading_zero32__13337__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13337__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13337__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13337__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13337__count)));
                            vlSelf->__Vfunc_leading_zero32__13337__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13337__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13337__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13337__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13337__count)));
                            vlSelf->__Vfunc_leading_zero32__13337__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13337__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13337__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13337__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13337__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13337__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13337__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13337__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13337__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13349__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13349__part 
                            = vlSelf->__Vfunc_leading_zero32__13349__value;
                        vlSelf->__Vfunc_leading_zero32__13349__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13349__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13349__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13349__count)));
                            vlSelf->__Vfunc_leading_zero32__13349__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13349__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13349__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13349__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13349__count)));
                            vlSelf->__Vfunc_leading_zero32__13349__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13349__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13349__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13349__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13349__count)));
                            vlSelf->__Vfunc_leading_zero32__13349__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13349__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13349__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13349__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13349__count)));
                            vlSelf->__Vfunc_leading_zero32__13349__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13349__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13349__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13349__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13349__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13349__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13349__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13349__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13349__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13367__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13367__part 
                            = vlSelf->__Vfunc_leading_zero32__13367__value;
                        vlSelf->__Vfunc_leading_zero32__13367__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13367__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13367__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13367__count)));
                            vlSelf->__Vfunc_leading_zero32__13367__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13367__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13367__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13367__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13367__count)));
                            vlSelf->__Vfunc_leading_zero32__13367__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13367__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13367__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13367__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13367__count)));
                            vlSelf->__Vfunc_leading_zero32__13367__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13367__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13367__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13367__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13367__count)));
                            vlSelf->__Vfunc_leading_zero32__13367__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13367__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13367__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13367__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13367__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13367__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13367__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13367__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13367__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13379__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13379__part 
                            = vlSelf->__Vfunc_leading_zero32__13379__value;
                        vlSelf->__Vfunc_leading_zero32__13379__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13379__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13379__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13379__count)));
                            vlSelf->__Vfunc_leading_zero32__13379__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13379__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13379__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13379__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13379__count)));
                            vlSelf->__Vfunc_leading_zero32__13379__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13379__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13379__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13379__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13379__count)));
                            vlSelf->__Vfunc_leading_zero32__13379__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13379__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13379__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13379__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13379__count)));
                            vlSelf->__Vfunc_leading_zero32__13379__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13379__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13379__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13379__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13379__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13379__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13379__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13379__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13379__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13373__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13373__part 
                            = vlSelf->__Vfunc_leading_zero32__13373__value;
                        vlSelf->__Vfunc_leading_zero32__13373__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13373__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13373__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13373__count)));
                            vlSelf->__Vfunc_leading_zero32__13373__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13373__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13373__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13373__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13373__count)));
                            vlSelf->__Vfunc_leading_zero32__13373__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13373__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13373__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13373__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13373__count)));
                            vlSelf->__Vfunc_leading_zero32__13373__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13373__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13373__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13373__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13373__count)));
                            vlSelf->__Vfunc_leading_zero32__13373__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13373__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13373__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13373__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13373__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13373__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13373__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13373__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13373__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13385__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13385__part 
                            = vlSelf->__Vfunc_leading_zero32__13385__value;
                        vlSelf->__Vfunc_leading_zero32__13385__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13385__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13385__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13385__count)));
                            vlSelf->__Vfunc_leading_zero32__13385__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13385__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13385__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13385__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13385__count)));
                            vlSelf->__Vfunc_leading_zero32__13385__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13385__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13385__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13385__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13385__count)));
                            vlSelf->__Vfunc_leading_zero32__13385__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13385__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13385__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13385__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13385__count)));
                            vlSelf->__Vfunc_leading_zero32__13385__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13385__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13385__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13385__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13385__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13385__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13385__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13385__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13385__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13403__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13403__part 
                            = vlSelf->__Vfunc_leading_zero32__13403__value;
                        vlSelf->__Vfunc_leading_zero32__13403__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13403__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13403__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13403__count)));
                            vlSelf->__Vfunc_leading_zero32__13403__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13403__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13403__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13403__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13403__count)));
                            vlSelf->__Vfunc_leading_zero32__13403__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13403__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13403__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13403__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13403__count)));
                            vlSelf->__Vfunc_leading_zero32__13403__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13403__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13403__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13403__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13403__count)));
                            vlSelf->__Vfunc_leading_zero32__13403__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13403__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13403__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13403__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13403__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13403__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13403__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13403__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13403__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13415__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13415__part 
                            = vlSelf->__Vfunc_leading_zero32__13415__value;
                        vlSelf->__Vfunc_leading_zero32__13415__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13415__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13415__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13415__count)));
                            vlSelf->__Vfunc_leading_zero32__13415__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13415__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13415__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13415__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13415__count)));
                            vlSelf->__Vfunc_leading_zero32__13415__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13415__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13415__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13415__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13415__count)));
                            vlSelf->__Vfunc_leading_zero32__13415__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13415__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13415__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13415__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13415__count)));
                            vlSelf->__Vfunc_leading_zero32__13415__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13415__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13415__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13415__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13415__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13415__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13415__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13415__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13415__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13409__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13409__part 
                            = vlSelf->__Vfunc_leading_zero32__13409__value;
                        vlSelf->__Vfunc_leading_zero32__13409__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13409__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13409__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13409__count)));
                            vlSelf->__Vfunc_leading_zero32__13409__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13409__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13409__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13409__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13409__count)));
                            vlSelf->__Vfunc_leading_zero32__13409__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13409__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13409__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13409__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13409__count)));
                            vlSelf->__Vfunc_leading_zero32__13409__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13409__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13409__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13409__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13409__count)));
                            vlSelf->__Vfunc_leading_zero32__13409__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13409__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13409__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13409__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13409__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13409__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13409__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13409__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13409__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13421__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13421__part 
                            = vlSelf->__Vfunc_leading_zero32__13421__value;
                        vlSelf->__Vfunc_leading_zero32__13421__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13421__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13421__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13421__count)));
                            vlSelf->__Vfunc_leading_zero32__13421__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13421__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13421__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13421__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13421__count)));
                            vlSelf->__Vfunc_leading_zero32__13421__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13421__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13421__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13421__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13421__count)));
                            vlSelf->__Vfunc_leading_zero32__13421__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13421__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13421__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13421__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13421__count)));
                            vlSelf->__Vfunc_leading_zero32__13421__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13421__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13421__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13421__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13421__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13421__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13421__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13421__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13421__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13439__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13439__part 
                            = vlSelf->__Vfunc_leading_zero32__13439__value;
                        vlSelf->__Vfunc_leading_zero32__13439__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13439__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13439__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13439__count)));
                            vlSelf->__Vfunc_leading_zero32__13439__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13439__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13439__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13439__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13439__count)));
                            vlSelf->__Vfunc_leading_zero32__13439__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13439__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13439__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13439__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13439__count)));
                            vlSelf->__Vfunc_leading_zero32__13439__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13439__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13439__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13439__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13439__count)));
                            vlSelf->__Vfunc_leading_zero32__13439__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13439__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13439__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13439__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13439__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13439__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13439__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13439__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13439__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13451__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13451__part 
                            = vlSelf->__Vfunc_leading_zero32__13451__value;
                        vlSelf->__Vfunc_leading_zero32__13451__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13451__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13451__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13451__count)));
                            vlSelf->__Vfunc_leading_zero32__13451__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13451__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13451__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13451__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13451__count)));
                            vlSelf->__Vfunc_leading_zero32__13451__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13451__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13451__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13451__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13451__count)));
                            vlSelf->__Vfunc_leading_zero32__13451__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13451__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13451__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13451__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13451__count)));
                            vlSelf->__Vfunc_leading_zero32__13451__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13451__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13451__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13451__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13451__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13451__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13451__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13451__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13451__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13445__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13445__part 
                            = vlSelf->__Vfunc_leading_zero32__13445__value;
                        vlSelf->__Vfunc_leading_zero32__13445__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13445__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13445__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13445__count)));
                            vlSelf->__Vfunc_leading_zero32__13445__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13445__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13445__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13445__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13445__count)));
                            vlSelf->__Vfunc_leading_zero32__13445__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13445__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13445__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13445__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13445__count)));
                            vlSelf->__Vfunc_leading_zero32__13445__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13445__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13445__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13445__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13445__count)));
                            vlSelf->__Vfunc_leading_zero32__13445__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13445__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13445__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13445__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13445__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13445__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13445__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13445__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13445__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13457__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13457__part 
                            = vlSelf->__Vfunc_leading_zero32__13457__value;
                        vlSelf->__Vfunc_leading_zero32__13457__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13457__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13457__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13457__count)));
                            vlSelf->__Vfunc_leading_zero32__13457__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13457__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13457__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13457__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13457__count)));
                            vlSelf->__Vfunc_leading_zero32__13457__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13457__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13457__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13457__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13457__count)));
                            vlSelf->__Vfunc_leading_zero32__13457__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13457__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13457__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13457__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13457__count)));
                            vlSelf->__Vfunc_leading_zero32__13457__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13457__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13457__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13457__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13457__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13457__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13457__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13457__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13457__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13475__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13475__part 
                            = vlSelf->__Vfunc_leading_zero32__13475__value;
                        vlSelf->__Vfunc_leading_zero32__13475__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13475__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13475__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13475__count)));
                            vlSelf->__Vfunc_leading_zero32__13475__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13475__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13475__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13475__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13475__count)));
                            vlSelf->__Vfunc_leading_zero32__13475__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13475__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13475__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13475__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13475__count)));
                            vlSelf->__Vfunc_leading_zero32__13475__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13475__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13475__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13475__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13475__count)));
                            vlSelf->__Vfunc_leading_zero32__13475__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13475__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13475__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13475__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13475__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13475__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13475__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13475__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13475__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13487__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13487__part 
                            = vlSelf->__Vfunc_leading_zero32__13487__value;
                        vlSelf->__Vfunc_leading_zero32__13487__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13487__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13487__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13487__count)));
                            vlSelf->__Vfunc_leading_zero32__13487__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13487__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13487__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13487__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13487__count)));
                            vlSelf->__Vfunc_leading_zero32__13487__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13487__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13487__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13487__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13487__count)));
                            vlSelf->__Vfunc_leading_zero32__13487__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13487__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13487__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13487__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13487__count)));
                            vlSelf->__Vfunc_leading_zero32__13487__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13487__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13487__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13487__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13487__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13487__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13487__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13487__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13487__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13481__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13481__part 
                            = vlSelf->__Vfunc_leading_zero32__13481__value;
                        vlSelf->__Vfunc_leading_zero32__13481__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13481__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13481__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13481__count)));
                            vlSelf->__Vfunc_leading_zero32__13481__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13481__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13481__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13481__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13481__count)));
                            vlSelf->__Vfunc_leading_zero32__13481__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13481__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13481__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13481__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13481__count)));
                            vlSelf->__Vfunc_leading_zero32__13481__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13481__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13481__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13481__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13481__count)));
                            vlSelf->__Vfunc_leading_zero32__13481__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13481__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13481__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13481__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13481__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13481__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13481__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13481__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13481__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13493__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13493__part 
                            = vlSelf->__Vfunc_leading_zero32__13493__value;
                        vlSelf->__Vfunc_leading_zero32__13493__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13493__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13493__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13493__count)));
                            vlSelf->__Vfunc_leading_zero32__13493__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13493__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13493__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13493__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13493__count)));
                            vlSelf->__Vfunc_leading_zero32__13493__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13493__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13493__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13493__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13493__count)));
                            vlSelf->__Vfunc_leading_zero32__13493__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13493__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13493__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13493__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13493__count)));
                            vlSelf->__Vfunc_leading_zero32__13493__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13493__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13493__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13493__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13493__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13493__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13493__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13493__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13493__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13511__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13511__part 
                            = vlSelf->__Vfunc_leading_zero32__13511__value;
                        vlSelf->__Vfunc_leading_zero32__13511__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13511__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13511__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13511__count)));
                            vlSelf->__Vfunc_leading_zero32__13511__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13511__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13511__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13511__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13511__count)));
                            vlSelf->__Vfunc_leading_zero32__13511__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13511__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13511__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13511__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13511__count)));
                            vlSelf->__Vfunc_leading_zero32__13511__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13511__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13511__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13511__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13511__count)));
                            vlSelf->__Vfunc_leading_zero32__13511__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13511__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13511__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13511__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13511__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13511__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13511__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13511__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13511__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13523__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13523__part 
                            = vlSelf->__Vfunc_leading_zero32__13523__value;
                        vlSelf->__Vfunc_leading_zero32__13523__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13523__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13523__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13523__count)));
                            vlSelf->__Vfunc_leading_zero32__13523__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13523__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13523__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13523__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13523__count)));
                            vlSelf->__Vfunc_leading_zero32__13523__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13523__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13523__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13523__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13523__count)));
                            vlSelf->__Vfunc_leading_zero32__13523__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13523__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13523__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13523__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13523__count)));
                            vlSelf->__Vfunc_leading_zero32__13523__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13523__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13523__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13523__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13523__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13523__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13523__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13523__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13523__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13517__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13517__part 
                            = vlSelf->__Vfunc_leading_zero32__13517__value;
                        vlSelf->__Vfunc_leading_zero32__13517__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13517__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13517__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13517__count)));
                            vlSelf->__Vfunc_leading_zero32__13517__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13517__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13517__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13517__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13517__count)));
                            vlSelf->__Vfunc_leading_zero32__13517__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13517__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13517__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13517__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13517__count)));
                            vlSelf->__Vfunc_leading_zero32__13517__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13517__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13517__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13517__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13517__count)));
                            vlSelf->__Vfunc_leading_zero32__13517__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13517__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13517__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13517__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13517__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13517__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13517__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13517__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13517__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13529__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13529__part 
                            = vlSelf->__Vfunc_leading_zero32__13529__value;
                        vlSelf->__Vfunc_leading_zero32__13529__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13529__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13529__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13529__count)));
                            vlSelf->__Vfunc_leading_zero32__13529__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13529__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13529__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13529__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13529__count)));
                            vlSelf->__Vfunc_leading_zero32__13529__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13529__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13529__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13529__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13529__count)));
                            vlSelf->__Vfunc_leading_zero32__13529__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13529__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13529__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13529__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13529__count)));
                            vlSelf->__Vfunc_leading_zero32__13529__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13529__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13529__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13529__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13529__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13529__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13529__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13529__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13529__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13547__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13547__part 
                            = vlSelf->__Vfunc_leading_zero32__13547__value;
                        vlSelf->__Vfunc_leading_zero32__13547__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13547__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13547__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13547__count)));
                            vlSelf->__Vfunc_leading_zero32__13547__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13547__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13547__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13547__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13547__count)));
                            vlSelf->__Vfunc_leading_zero32__13547__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13547__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13547__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13547__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13547__count)));
                            vlSelf->__Vfunc_leading_zero32__13547__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13547__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13547__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13547__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13547__count)));
                            vlSelf->__Vfunc_leading_zero32__13547__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13547__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13547__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13547__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13547__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13547__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13547__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13547__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13547__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13559__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13559__part 
                            = vlSelf->__Vfunc_leading_zero32__13559__value;
                        vlSelf->__Vfunc_leading_zero32__13559__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13559__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13559__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13559__count)));
                            vlSelf->__Vfunc_leading_zero32__13559__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13559__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13559__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13559__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13559__count)));
                            vlSelf->__Vfunc_leading_zero32__13559__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13559__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13559__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13559__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13559__count)));
                            vlSelf->__Vfunc_leading_zero32__13559__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13559__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13559__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13559__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13559__count)));
                            vlSelf->__Vfunc_leading_zero32__13559__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13559__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13559__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13559__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13559__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13559__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13559__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13559__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13559__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13553__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13553__part 
                            = vlSelf->__Vfunc_leading_zero32__13553__value;
                        vlSelf->__Vfunc_leading_zero32__13553__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13553__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13553__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13553__count)));
                            vlSelf->__Vfunc_leading_zero32__13553__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13553__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13553__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13553__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13553__count)));
                            vlSelf->__Vfunc_leading_zero32__13553__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13553__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13553__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13553__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13553__count)));
                            vlSelf->__Vfunc_leading_zero32__13553__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13553__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13553__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13553__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13553__count)));
                            vlSelf->__Vfunc_leading_zero32__13553__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13553__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13553__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13553__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13553__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13553__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13553__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13553__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13553__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13565__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13565__part 
                            = vlSelf->__Vfunc_leading_zero32__13565__value;
                        vlSelf->__Vfunc_leading_zero32__13565__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13565__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13565__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13565__count)));
                            vlSelf->__Vfunc_leading_zero32__13565__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13565__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13565__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13565__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13565__count)));
                            vlSelf->__Vfunc_leading_zero32__13565__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13565__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13565__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13565__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13565__count)));
                            vlSelf->__Vfunc_leading_zero32__13565__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13565__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13565__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13565__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13565__count)));
                            vlSelf->__Vfunc_leading_zero32__13565__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13565__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13565__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13565__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13565__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13565__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13565__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13565__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13565__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13583__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13583__part 
                            = vlSelf->__Vfunc_leading_zero32__13583__value;
                        vlSelf->__Vfunc_leading_zero32__13583__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13583__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13583__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13583__count)));
                            vlSelf->__Vfunc_leading_zero32__13583__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13583__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13583__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13583__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13583__count)));
                            vlSelf->__Vfunc_leading_zero32__13583__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13583__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13583__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13583__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13583__count)));
                            vlSelf->__Vfunc_leading_zero32__13583__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13583__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13583__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13583__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13583__count)));
                            vlSelf->__Vfunc_leading_zero32__13583__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13583__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13583__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13583__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13583__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13583__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13583__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13583__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13583__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13595__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13595__part 
                            = vlSelf->__Vfunc_leading_zero32__13595__value;
                        vlSelf->__Vfunc_leading_zero32__13595__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13595__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13595__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13595__count)));
                            vlSelf->__Vfunc_leading_zero32__13595__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13595__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13595__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13595__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13595__count)));
                            vlSelf->__Vfunc_leading_zero32__13595__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13595__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13595__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13595__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13595__count)));
                            vlSelf->__Vfunc_leading_zero32__13595__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13595__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13595__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13595__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13595__count)));
                            vlSelf->__Vfunc_leading_zero32__13595__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13595__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13595__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13595__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13595__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13595__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13595__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13595__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13595__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13589__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13589__part 
                            = vlSelf->__Vfunc_leading_zero32__13589__value;
                        vlSelf->__Vfunc_leading_zero32__13589__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13589__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13589__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13589__count)));
                            vlSelf->__Vfunc_leading_zero32__13589__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13589__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13589__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13589__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13589__count)));
                            vlSelf->__Vfunc_leading_zero32__13589__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13589__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13589__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13589__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13589__count)));
                            vlSelf->__Vfunc_leading_zero32__13589__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13589__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13589__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13589__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13589__count)));
                            vlSelf->__Vfunc_leading_zero32__13589__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13589__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13589__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13589__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13589__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13589__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13589__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13589__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13589__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13601__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13601__part 
                            = vlSelf->__Vfunc_leading_zero32__13601__value;
                        vlSelf->__Vfunc_leading_zero32__13601__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13601__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13601__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13601__count)));
                            vlSelf->__Vfunc_leading_zero32__13601__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13601__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13601__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13601__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13601__count)));
                            vlSelf->__Vfunc_leading_zero32__13601__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13601__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13601__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13601__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13601__count)));
                            vlSelf->__Vfunc_leading_zero32__13601__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13601__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13601__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13601__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13601__count)));
                            vlSelf->__Vfunc_leading_zero32__13601__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13601__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13601__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13601__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13601__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13601__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13601__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13601__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13601__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13619__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13619__part 
                            = vlSelf->__Vfunc_leading_zero32__13619__value;
                        vlSelf->__Vfunc_leading_zero32__13619__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13619__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13619__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13619__count)));
                            vlSelf->__Vfunc_leading_zero32__13619__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13619__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13619__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13619__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13619__count)));
                            vlSelf->__Vfunc_leading_zero32__13619__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13619__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13619__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13619__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13619__count)));
                            vlSelf->__Vfunc_leading_zero32__13619__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13619__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13619__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13619__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13619__count)));
                            vlSelf->__Vfunc_leading_zero32__13619__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13619__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13619__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13619__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13619__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13619__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13619__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13619__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13619__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13631__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13631__part 
                            = vlSelf->__Vfunc_leading_zero32__13631__value;
                        vlSelf->__Vfunc_leading_zero32__13631__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13631__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13631__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13631__count)));
                            vlSelf->__Vfunc_leading_zero32__13631__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13631__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13631__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13631__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13631__count)));
                            vlSelf->__Vfunc_leading_zero32__13631__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13631__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13631__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13631__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13631__count)));
                            vlSelf->__Vfunc_leading_zero32__13631__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13631__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13631__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13631__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13631__count)));
                            vlSelf->__Vfunc_leading_zero32__13631__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13631__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13631__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13631__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13631__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13631__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13631__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13631__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13631__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13625__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13625__part 
                            = vlSelf->__Vfunc_leading_zero32__13625__value;
                        vlSelf->__Vfunc_leading_zero32__13625__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13625__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13625__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13625__count)));
                            vlSelf->__Vfunc_leading_zero32__13625__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13625__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13625__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13625__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13625__count)));
                            vlSelf->__Vfunc_leading_zero32__13625__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13625__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13625__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13625__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13625__count)));
                            vlSelf->__Vfunc_leading_zero32__13625__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13625__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13625__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13625__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13625__count)));
                            vlSelf->__Vfunc_leading_zero32__13625__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13625__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13625__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13625__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13625__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13625__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13625__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13625__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13625__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13637__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13637__part 
                            = vlSelf->__Vfunc_leading_zero32__13637__value;
                        vlSelf->__Vfunc_leading_zero32__13637__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13637__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13637__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13637__count)));
                            vlSelf->__Vfunc_leading_zero32__13637__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13637__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13637__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13637__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13637__count)));
                            vlSelf->__Vfunc_leading_zero32__13637__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13637__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13637__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13637__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13637__count)));
                            vlSelf->__Vfunc_leading_zero32__13637__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13637__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13637__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13637__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13637__count)));
                            vlSelf->__Vfunc_leading_zero32__13637__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13637__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13637__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13637__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13637__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13637__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13637__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13637__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13637__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13655__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13655__part 
                            = vlSelf->__Vfunc_leading_zero32__13655__value;
                        vlSelf->__Vfunc_leading_zero32__13655__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13655__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13655__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13655__count)));
                            vlSelf->__Vfunc_leading_zero32__13655__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13655__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13655__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13655__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13655__count)));
                            vlSelf->__Vfunc_leading_zero32__13655__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13655__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13655__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13655__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13655__count)));
                            vlSelf->__Vfunc_leading_zero32__13655__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13655__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13655__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13655__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13655__count)));
                            vlSelf->__Vfunc_leading_zero32__13655__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13655__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13655__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13655__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13655__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13655__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13655__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13655__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13655__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13667__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13667__part 
                            = vlSelf->__Vfunc_leading_zero32__13667__value;
                        vlSelf->__Vfunc_leading_zero32__13667__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13667__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13667__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13667__count)));
                            vlSelf->__Vfunc_leading_zero32__13667__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13667__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13667__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13667__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13667__count)));
                            vlSelf->__Vfunc_leading_zero32__13667__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13667__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13667__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13667__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13667__count)));
                            vlSelf->__Vfunc_leading_zero32__13667__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13667__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13667__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13667__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13667__count)));
                            vlSelf->__Vfunc_leading_zero32__13667__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13667__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13667__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13667__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13667__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13667__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13667__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13667__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13667__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13661__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13661__part 
                            = vlSelf->__Vfunc_leading_zero32__13661__value;
                        vlSelf->__Vfunc_leading_zero32__13661__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13661__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13661__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13661__count)));
                            vlSelf->__Vfunc_leading_zero32__13661__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13661__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13661__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13661__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13661__count)));
                            vlSelf->__Vfunc_leading_zero32__13661__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13661__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13661__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13661__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13661__count)));
                            vlSelf->__Vfunc_leading_zero32__13661__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13661__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13661__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13661__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13661__count)));
                            vlSelf->__Vfunc_leading_zero32__13661__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13661__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13661__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13661__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13661__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13661__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13661__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13661__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13661__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13673__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13673__part 
                            = vlSelf->__Vfunc_leading_zero32__13673__value;
                        vlSelf->__Vfunc_leading_zero32__13673__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13673__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13673__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13673__count)));
                            vlSelf->__Vfunc_leading_zero32__13673__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13673__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13673__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13673__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13673__count)));
                            vlSelf->__Vfunc_leading_zero32__13673__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13673__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13673__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13673__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13673__count)));
                            vlSelf->__Vfunc_leading_zero32__13673__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13673__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13673__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13673__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13673__count)));
                            vlSelf->__Vfunc_leading_zero32__13673__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13673__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13673__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13673__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13673__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13673__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13673__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13673__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13673__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13691__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13691__part 
                            = vlSelf->__Vfunc_leading_zero32__13691__value;
                        vlSelf->__Vfunc_leading_zero32__13691__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13691__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13691__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13691__count)));
                            vlSelf->__Vfunc_leading_zero32__13691__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13691__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13691__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13691__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13691__count)));
                            vlSelf->__Vfunc_leading_zero32__13691__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13691__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13691__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13691__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13691__count)));
                            vlSelf->__Vfunc_leading_zero32__13691__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13691__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13691__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13691__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13691__count)));
                            vlSelf->__Vfunc_leading_zero32__13691__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13691__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13691__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13691__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13691__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13691__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13691__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13691__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13691__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13703__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13703__part 
                            = vlSelf->__Vfunc_leading_zero32__13703__value;
                        vlSelf->__Vfunc_leading_zero32__13703__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13703__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13703__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13703__count)));
                            vlSelf->__Vfunc_leading_zero32__13703__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13703__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13703__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13703__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13703__count)));
                            vlSelf->__Vfunc_leading_zero32__13703__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13703__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13703__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13703__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13703__count)));
                            vlSelf->__Vfunc_leading_zero32__13703__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13703__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13703__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13703__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13703__count)));
                            vlSelf->__Vfunc_leading_zero32__13703__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13703__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13703__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13703__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13703__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13703__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13703__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13703__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13703__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13697__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13697__part 
                            = vlSelf->__Vfunc_leading_zero32__13697__value;
                        vlSelf->__Vfunc_leading_zero32__13697__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13697__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13697__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13697__count)));
                            vlSelf->__Vfunc_leading_zero32__13697__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13697__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13697__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13697__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13697__count)));
                            vlSelf->__Vfunc_leading_zero32__13697__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13697__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13697__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13697__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13697__count)));
                            vlSelf->__Vfunc_leading_zero32__13697__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13697__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13697__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13697__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13697__count)));
                            vlSelf->__Vfunc_leading_zero32__13697__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13697__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13697__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13697__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13697__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13697__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13697__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13697__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13697__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13709__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13709__part 
                            = vlSelf->__Vfunc_leading_zero32__13709__value;
                        vlSelf->__Vfunc_leading_zero32__13709__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13709__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13709__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13709__count)));
                            vlSelf->__Vfunc_leading_zero32__13709__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13709__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13709__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13709__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13709__count)));
                            vlSelf->__Vfunc_leading_zero32__13709__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13709__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13709__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13709__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13709__count)));
                            vlSelf->__Vfunc_leading_zero32__13709__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13709__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13709__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13709__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13709__count)));
                            vlSelf->__Vfunc_leading_zero32__13709__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13709__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13709__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13709__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13709__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13709__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13709__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13709__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13709__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13727__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13727__part 
                            = vlSelf->__Vfunc_leading_zero32__13727__value;
                        vlSelf->__Vfunc_leading_zero32__13727__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13727__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13727__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13727__count)));
                            vlSelf->__Vfunc_leading_zero32__13727__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13727__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13727__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13727__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13727__count)));
                            vlSelf->__Vfunc_leading_zero32__13727__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13727__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13727__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13727__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13727__count)));
                            vlSelf->__Vfunc_leading_zero32__13727__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13727__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13727__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13727__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13727__count)));
                            vlSelf->__Vfunc_leading_zero32__13727__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13727__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13727__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13727__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13727__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13727__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13727__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13727__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13727__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13739__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13739__part 
                            = vlSelf->__Vfunc_leading_zero32__13739__value;
                        vlSelf->__Vfunc_leading_zero32__13739__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13739__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13739__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13739__count)));
                            vlSelf->__Vfunc_leading_zero32__13739__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13739__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13739__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13739__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13739__count)));
                            vlSelf->__Vfunc_leading_zero32__13739__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13739__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13739__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13739__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13739__count)));
                            vlSelf->__Vfunc_leading_zero32__13739__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13739__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13739__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13739__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13739__count)));
                            vlSelf->__Vfunc_leading_zero32__13739__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13739__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13739__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13739__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13739__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13739__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13739__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13739__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13739__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13733__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13733__part 
                            = vlSelf->__Vfunc_leading_zero32__13733__value;
                        vlSelf->__Vfunc_leading_zero32__13733__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13733__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13733__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13733__count)));
                            vlSelf->__Vfunc_leading_zero32__13733__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13733__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13733__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13733__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13733__count)));
                            vlSelf->__Vfunc_leading_zero32__13733__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13733__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13733__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13733__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13733__count)));
                            vlSelf->__Vfunc_leading_zero32__13733__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13733__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13733__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13733__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13733__count)));
                            vlSelf->__Vfunc_leading_zero32__13733__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13733__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13733__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13733__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13733__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13733__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13733__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13733__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13733__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13745__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13745__part 
                            = vlSelf->__Vfunc_leading_zero32__13745__value;
                        vlSelf->__Vfunc_leading_zero32__13745__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13745__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13745__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13745__count)));
                            vlSelf->__Vfunc_leading_zero32__13745__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13745__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13745__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13745__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13745__count)));
                            vlSelf->__Vfunc_leading_zero32__13745__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13745__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13745__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13745__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13745__count)));
                            vlSelf->__Vfunc_leading_zero32__13745__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13745__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13745__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13745__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13745__count)));
                            vlSelf->__Vfunc_leading_zero32__13745__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13745__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13745__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13745__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13745__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13745__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13745__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13745__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13745__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13763__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13763__part 
                            = vlSelf->__Vfunc_leading_zero32__13763__value;
                        vlSelf->__Vfunc_leading_zero32__13763__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13763__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13763__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13763__count)));
                            vlSelf->__Vfunc_leading_zero32__13763__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13763__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13763__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13763__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13763__count)));
                            vlSelf->__Vfunc_leading_zero32__13763__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13763__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13763__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13763__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13763__count)));
                            vlSelf->__Vfunc_leading_zero32__13763__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13763__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13763__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13763__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13763__count)));
                            vlSelf->__Vfunc_leading_zero32__13763__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13763__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13763__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13763__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13763__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13763__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13763__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13763__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13763__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13775__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13775__part 
                            = vlSelf->__Vfunc_leading_zero32__13775__value;
                        vlSelf->__Vfunc_leading_zero32__13775__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13775__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13775__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13775__count)));
                            vlSelf->__Vfunc_leading_zero32__13775__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13775__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13775__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13775__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13775__count)));
                            vlSelf->__Vfunc_leading_zero32__13775__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13775__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13775__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13775__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13775__count)));
                            vlSelf->__Vfunc_leading_zero32__13775__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13775__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13775__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13775__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13775__count)));
                            vlSelf->__Vfunc_leading_zero32__13775__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13775__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13775__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13775__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13775__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13775__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13775__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13775__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13775__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13769__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13769__part 
                            = vlSelf->__Vfunc_leading_zero32__13769__value;
                        vlSelf->__Vfunc_leading_zero32__13769__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13769__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13769__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13769__count)));
                            vlSelf->__Vfunc_leading_zero32__13769__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13769__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13769__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13769__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13769__count)));
                            vlSelf->__Vfunc_leading_zero32__13769__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13769__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13769__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13769__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13769__count)));
                            vlSelf->__Vfunc_leading_zero32__13769__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13769__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13769__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13769__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13769__count)));
                            vlSelf->__Vfunc_leading_zero32__13769__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13769__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13769__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13769__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13769__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13769__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13769__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13769__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13769__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13781__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13781__part 
                            = vlSelf->__Vfunc_leading_zero32__13781__value;
                        vlSelf->__Vfunc_leading_zero32__13781__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13781__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13781__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13781__count)));
                            vlSelf->__Vfunc_leading_zero32__13781__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13781__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13781__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13781__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13781__count)));
                            vlSelf->__Vfunc_leading_zero32__13781__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13781__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13781__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13781__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13781__count)));
                            vlSelf->__Vfunc_leading_zero32__13781__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13781__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13781__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13781__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13781__count)));
                            vlSelf->__Vfunc_leading_zero32__13781__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13781__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13781__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13781__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13781__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13781__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13781__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13781__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13781__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13799__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13799__part 
                            = vlSelf->__Vfunc_leading_zero32__13799__value;
                        vlSelf->__Vfunc_leading_zero32__13799__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13799__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13799__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13799__count)));
                            vlSelf->__Vfunc_leading_zero32__13799__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13799__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13799__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13799__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13799__count)));
                            vlSelf->__Vfunc_leading_zero32__13799__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13799__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13799__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13799__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13799__count)));
                            vlSelf->__Vfunc_leading_zero32__13799__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13799__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13799__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13799__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13799__count)));
                            vlSelf->__Vfunc_leading_zero32__13799__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13799__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13799__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13799__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13799__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13799__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13799__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13799__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13799__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13811__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13811__part 
                            = vlSelf->__Vfunc_leading_zero32__13811__value;
                        vlSelf->__Vfunc_leading_zero32__13811__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13811__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13811__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13811__count)));
                            vlSelf->__Vfunc_leading_zero32__13811__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13811__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13811__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13811__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13811__count)));
                            vlSelf->__Vfunc_leading_zero32__13811__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13811__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13811__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13811__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13811__count)));
                            vlSelf->__Vfunc_leading_zero32__13811__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13811__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13811__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13811__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13811__count)));
                            vlSelf->__Vfunc_leading_zero32__13811__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13811__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13811__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13811__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13811__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13811__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13811__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13811__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13811__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13805__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13805__part 
                            = vlSelf->__Vfunc_leading_zero32__13805__value;
                        vlSelf->__Vfunc_leading_zero32__13805__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13805__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13805__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13805__count)));
                            vlSelf->__Vfunc_leading_zero32__13805__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13805__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13805__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13805__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13805__count)));
                            vlSelf->__Vfunc_leading_zero32__13805__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13805__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13805__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13805__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13805__count)));
                            vlSelf->__Vfunc_leading_zero32__13805__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13805__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13805__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13805__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13805__count)));
                            vlSelf->__Vfunc_leading_zero32__13805__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13805__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13805__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13805__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13805__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13805__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13805__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13805__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13805__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13817__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13817__part 
                            = vlSelf->__Vfunc_leading_zero32__13817__value;
                        vlSelf->__Vfunc_leading_zero32__13817__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13817__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13817__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13817__count)));
                            vlSelf->__Vfunc_leading_zero32__13817__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13817__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13817__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13817__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13817__count)));
                            vlSelf->__Vfunc_leading_zero32__13817__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13817__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13817__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13817__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13817__count)));
                            vlSelf->__Vfunc_leading_zero32__13817__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13817__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13817__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13817__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13817__count)));
                            vlSelf->__Vfunc_leading_zero32__13817__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13817__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13817__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13817__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13817__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13817__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13817__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13817__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13817__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13835__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13835__part 
                            = vlSelf->__Vfunc_leading_zero32__13835__value;
                        vlSelf->__Vfunc_leading_zero32__13835__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13835__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13835__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13835__count)));
                            vlSelf->__Vfunc_leading_zero32__13835__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13835__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13835__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13835__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13835__count)));
                            vlSelf->__Vfunc_leading_zero32__13835__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13835__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13835__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13835__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13835__count)));
                            vlSelf->__Vfunc_leading_zero32__13835__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13835__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13835__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13835__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13835__count)));
                            vlSelf->__Vfunc_leading_zero32__13835__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13835__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13835__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13835__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13835__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13835__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13835__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13835__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13835__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13847__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13847__part 
                            = vlSelf->__Vfunc_leading_zero32__13847__value;
                        vlSelf->__Vfunc_leading_zero32__13847__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13847__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13847__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13847__count)));
                            vlSelf->__Vfunc_leading_zero32__13847__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13847__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13847__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13847__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13847__count)));
                            vlSelf->__Vfunc_leading_zero32__13847__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13847__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13847__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13847__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13847__count)));
                            vlSelf->__Vfunc_leading_zero32__13847__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13847__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13847__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13847__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13847__count)));
                            vlSelf->__Vfunc_leading_zero32__13847__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13847__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13847__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13847__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13847__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13847__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13847__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13847__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13847__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13841__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13841__part 
                            = vlSelf->__Vfunc_leading_zero32__13841__value;
                        vlSelf->__Vfunc_leading_zero32__13841__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13841__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13841__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13841__count)));
                            vlSelf->__Vfunc_leading_zero32__13841__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13841__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13841__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13841__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13841__count)));
                            vlSelf->__Vfunc_leading_zero32__13841__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13841__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13841__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13841__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13841__count)));
                            vlSelf->__Vfunc_leading_zero32__13841__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13841__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13841__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13841__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13841__count)));
                            vlSelf->__Vfunc_leading_zero32__13841__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13841__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13841__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13841__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13841__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13841__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13841__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13841__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13841__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13853__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13853__part 
                            = vlSelf->__Vfunc_leading_zero32__13853__value;
                        vlSelf->__Vfunc_leading_zero32__13853__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13853__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13853__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13853__count)));
                            vlSelf->__Vfunc_leading_zero32__13853__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13853__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13853__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13853__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13853__count)));
                            vlSelf->__Vfunc_leading_zero32__13853__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13853__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13853__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13853__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13853__count)));
                            vlSelf->__Vfunc_leading_zero32__13853__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13853__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13853__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13853__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13853__count)));
                            vlSelf->__Vfunc_leading_zero32__13853__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13853__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13853__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13853__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13853__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13853__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13853__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13853__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13853__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13871__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13871__part 
                            = vlSelf->__Vfunc_leading_zero32__13871__value;
                        vlSelf->__Vfunc_leading_zero32__13871__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13871__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13871__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13871__count)));
                            vlSelf->__Vfunc_leading_zero32__13871__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13871__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13871__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13871__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13871__count)));
                            vlSelf->__Vfunc_leading_zero32__13871__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13871__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13871__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13871__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13871__count)));
                            vlSelf->__Vfunc_leading_zero32__13871__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13871__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13871__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13871__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13871__count)));
                            vlSelf->__Vfunc_leading_zero32__13871__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13871__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13871__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13871__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13871__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13871__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13871__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13871__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13871__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13883__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13883__part 
                            = vlSelf->__Vfunc_leading_zero32__13883__value;
                        vlSelf->__Vfunc_leading_zero32__13883__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13883__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13883__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13883__count)));
                            vlSelf->__Vfunc_leading_zero32__13883__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13883__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13883__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13883__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13883__count)));
                            vlSelf->__Vfunc_leading_zero32__13883__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13883__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13883__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13883__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13883__count)));
                            vlSelf->__Vfunc_leading_zero32__13883__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13883__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13883__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13883__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13883__count)));
                            vlSelf->__Vfunc_leading_zero32__13883__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13883__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13883__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13883__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13883__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13883__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13883__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13883__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13883__Vfuncout)) 
                             - (IData)(8U))));
}
