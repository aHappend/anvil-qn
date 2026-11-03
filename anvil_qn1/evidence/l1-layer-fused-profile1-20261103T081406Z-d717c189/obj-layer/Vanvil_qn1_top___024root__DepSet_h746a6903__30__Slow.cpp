// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vanvil_qn1_top.h for the primary calling header

#include "Vanvil_qn1_top__pch.h"
#include "Vanvil_qn1_top___024root.h"

VL_ATTR_COLD void Vanvil_qn1_top___024root___stl_sequent__TOP__31(Vanvil_qn1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_top___024root___stl_sequent__TOP__31\n"); );
    // Body
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13800__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13800__part 
                            = vlSelf->__Vfunc_leading_zero32__13800__value;
                        vlSelf->__Vfunc_leading_zero32__13800__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13800__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13800__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13800__count)));
                            vlSelf->__Vfunc_leading_zero32__13800__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13800__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13800__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13800__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13800__count)));
                            vlSelf->__Vfunc_leading_zero32__13800__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13800__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13800__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13800__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13800__count)));
                            vlSelf->__Vfunc_leading_zero32__13800__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13800__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13800__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13800__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13800__count)));
                            vlSelf->__Vfunc_leading_zero32__13800__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13800__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13800__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13800__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13800__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13800__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13800__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13800__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13800__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13818__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13818__part 
                            = vlSelf->__Vfunc_leading_zero32__13818__value;
                        vlSelf->__Vfunc_leading_zero32__13818__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13818__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13818__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13818__count)));
                            vlSelf->__Vfunc_leading_zero32__13818__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13818__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13818__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13818__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13818__count)));
                            vlSelf->__Vfunc_leading_zero32__13818__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13818__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13818__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13818__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13818__count)));
                            vlSelf->__Vfunc_leading_zero32__13818__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13818__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13818__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13818__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13818__count)));
                            vlSelf->__Vfunc_leading_zero32__13818__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13818__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13818__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13818__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13818__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13818__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13818__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13818__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13818__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13836__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13836__part 
                            = vlSelf->__Vfunc_leading_zero32__13836__value;
                        vlSelf->__Vfunc_leading_zero32__13836__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13836__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13836__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13836__count)));
                            vlSelf->__Vfunc_leading_zero32__13836__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13836__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13836__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13836__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13836__count)));
                            vlSelf->__Vfunc_leading_zero32__13836__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13836__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13836__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13836__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13836__count)));
                            vlSelf->__Vfunc_leading_zero32__13836__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13836__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13836__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13836__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13836__count)));
                            vlSelf->__Vfunc_leading_zero32__13836__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13836__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13836__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13836__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13836__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13836__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13836__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13836__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13836__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13854__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13854__part 
                            = vlSelf->__Vfunc_leading_zero32__13854__value;
                        vlSelf->__Vfunc_leading_zero32__13854__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13854__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13854__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13854__count)));
                            vlSelf->__Vfunc_leading_zero32__13854__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13854__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13854__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13854__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13854__count)));
                            vlSelf->__Vfunc_leading_zero32__13854__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13854__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13854__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13854__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13854__count)));
                            vlSelf->__Vfunc_leading_zero32__13854__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13854__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13854__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13854__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13854__count)));
                            vlSelf->__Vfunc_leading_zero32__13854__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13854__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13854__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13854__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13854__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13854__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13854__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13854__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13854__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13872__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13872__part 
                            = vlSelf->__Vfunc_leading_zero32__13872__value;
                        vlSelf->__Vfunc_leading_zero32__13872__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13872__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13872__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13872__count)));
                            vlSelf->__Vfunc_leading_zero32__13872__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13872__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13872__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13872__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13872__count)));
                            vlSelf->__Vfunc_leading_zero32__13872__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13872__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13872__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13872__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13872__count)));
                            vlSelf->__Vfunc_leading_zero32__13872__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13872__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13872__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13872__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13872__count)));
                            vlSelf->__Vfunc_leading_zero32__13872__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13872__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13872__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13872__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13872__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13872__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13872__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13872__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13872__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13890__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13890__part 
                            = vlSelf->__Vfunc_leading_zero32__13890__value;
                        vlSelf->__Vfunc_leading_zero32__13890__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13890__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13890__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13890__count)));
                            vlSelf->__Vfunc_leading_zero32__13890__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13890__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13890__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13890__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13890__count)));
                            vlSelf->__Vfunc_leading_zero32__13890__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13890__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13890__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13890__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13890__count)));
                            vlSelf->__Vfunc_leading_zero32__13890__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13890__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13890__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13890__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13890__count)));
                            vlSelf->__Vfunc_leading_zero32__13890__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13890__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13890__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13890__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13890__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13890__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13890__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13890__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13890__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13908__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13908__part 
                            = vlSelf->__Vfunc_leading_zero32__13908__value;
                        vlSelf->__Vfunc_leading_zero32__13908__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13908__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13908__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13908__count)));
                            vlSelf->__Vfunc_leading_zero32__13908__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13908__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13908__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13908__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13908__count)));
                            vlSelf->__Vfunc_leading_zero32__13908__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13908__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13908__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13908__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13908__count)));
                            vlSelf->__Vfunc_leading_zero32__13908__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13908__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13908__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13908__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13908__count)));
                            vlSelf->__Vfunc_leading_zero32__13908__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13908__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13908__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13908__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13908__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13908__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13908__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13908__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13908__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13926__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13926__part 
                            = vlSelf->__Vfunc_leading_zero32__13926__value;
                        vlSelf->__Vfunc_leading_zero32__13926__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13926__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13926__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13926__count)));
                            vlSelf->__Vfunc_leading_zero32__13926__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13926__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13926__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13926__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13926__count)));
                            vlSelf->__Vfunc_leading_zero32__13926__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13926__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13926__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13926__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13926__count)));
                            vlSelf->__Vfunc_leading_zero32__13926__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13926__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13926__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13926__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13926__count)));
                            vlSelf->__Vfunc_leading_zero32__13926__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13926__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13926__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13926__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13926__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13926__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13926__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13926__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13926__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13944__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13944__part 
                            = vlSelf->__Vfunc_leading_zero32__13944__value;
                        vlSelf->__Vfunc_leading_zero32__13944__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13944__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13944__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13944__count)));
                            vlSelf->__Vfunc_leading_zero32__13944__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13944__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13944__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13944__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13944__count)));
                            vlSelf->__Vfunc_leading_zero32__13944__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13944__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13944__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13944__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13944__count)));
                            vlSelf->__Vfunc_leading_zero32__13944__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13944__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13944__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13944__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13944__count)));
                            vlSelf->__Vfunc_leading_zero32__13944__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13944__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13944__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13944__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13944__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13944__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13944__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13944__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13944__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13962__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13962__part 
                            = vlSelf->__Vfunc_leading_zero32__13962__value;
                        vlSelf->__Vfunc_leading_zero32__13962__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13962__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13962__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13962__count)));
                            vlSelf->__Vfunc_leading_zero32__13962__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13962__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13962__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13962__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13962__count)));
                            vlSelf->__Vfunc_leading_zero32__13962__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13962__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13962__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13962__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13962__count)));
                            vlSelf->__Vfunc_leading_zero32__13962__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13962__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13962__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13962__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13962__count)));
                            vlSelf->__Vfunc_leading_zero32__13962__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13962__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13962__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13962__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13962__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13962__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13962__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13962__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13962__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13980__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13980__part 
                            = vlSelf->__Vfunc_leading_zero32__13980__value;
                        vlSelf->__Vfunc_leading_zero32__13980__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13980__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13980__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13980__count)));
                            vlSelf->__Vfunc_leading_zero32__13980__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13980__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13980__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13980__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13980__count)));
                            vlSelf->__Vfunc_leading_zero32__13980__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13980__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13980__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13980__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13980__count)));
                            vlSelf->__Vfunc_leading_zero32__13980__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13980__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13980__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13980__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13980__count)));
                            vlSelf->__Vfunc_leading_zero32__13980__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13980__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13980__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13980__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13980__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13980__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13980__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13980__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13980__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13998__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13998__part 
                            = vlSelf->__Vfunc_leading_zero32__13998__value;
                        vlSelf->__Vfunc_leading_zero32__13998__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13998__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13998__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13998__count)));
                            vlSelf->__Vfunc_leading_zero32__13998__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13998__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13998__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13998__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13998__count)));
                            vlSelf->__Vfunc_leading_zero32__13998__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13998__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13998__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13998__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13998__count)));
                            vlSelf->__Vfunc_leading_zero32__13998__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13998__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13998__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13998__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13998__count)));
                            vlSelf->__Vfunc_leading_zero32__13998__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13998__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13998__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13998__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13998__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13998__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13998__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13998__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13998__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14016__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__14016__part 
                            = vlSelf->__Vfunc_leading_zero32__14016__value;
                        vlSelf->__Vfunc_leading_zero32__14016__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14016__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14016__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14016__count)));
                            vlSelf->__Vfunc_leading_zero32__14016__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14016__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14016__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14016__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14016__count)));
                            vlSelf->__Vfunc_leading_zero32__14016__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14016__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14016__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14016__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14016__count)));
                            vlSelf->__Vfunc_leading_zero32__14016__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14016__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14016__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14016__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14016__count)));
                            vlSelf->__Vfunc_leading_zero32__14016__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14016__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14016__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14016__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14016__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14016__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14016__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14016__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14016__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14034__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__14034__part 
                            = vlSelf->__Vfunc_leading_zero32__14034__value;
                        vlSelf->__Vfunc_leading_zero32__14034__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14034__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14034__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14034__count)));
                            vlSelf->__Vfunc_leading_zero32__14034__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14034__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14034__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14034__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14034__count)));
                            vlSelf->__Vfunc_leading_zero32__14034__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14034__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14034__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14034__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14034__count)));
                            vlSelf->__Vfunc_leading_zero32__14034__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14034__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14034__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14034__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14034__count)));
                            vlSelf->__Vfunc_leading_zero32__14034__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14034__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14034__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14034__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14034__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14034__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14034__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14034__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14034__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14052__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__14052__part 
                            = vlSelf->__Vfunc_leading_zero32__14052__value;
                        vlSelf->__Vfunc_leading_zero32__14052__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14052__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14052__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14052__count)));
                            vlSelf->__Vfunc_leading_zero32__14052__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14052__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14052__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14052__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14052__count)));
                            vlSelf->__Vfunc_leading_zero32__14052__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14052__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14052__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14052__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14052__count)));
                            vlSelf->__Vfunc_leading_zero32__14052__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14052__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14052__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14052__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14052__count)));
                            vlSelf->__Vfunc_leading_zero32__14052__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14052__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14052__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14052__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14052__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14052__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14052__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14052__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14052__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14070__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__14070__part 
                            = vlSelf->__Vfunc_leading_zero32__14070__value;
                        vlSelf->__Vfunc_leading_zero32__14070__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14070__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14070__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14070__count)));
                            vlSelf->__Vfunc_leading_zero32__14070__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14070__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14070__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14070__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14070__count)));
                            vlSelf->__Vfunc_leading_zero32__14070__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14070__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14070__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14070__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14070__count)));
                            vlSelf->__Vfunc_leading_zero32__14070__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14070__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14070__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14070__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14070__count)));
                            vlSelf->__Vfunc_leading_zero32__14070__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14070__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14070__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14070__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14070__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14070__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14070__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14070__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14070__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14088__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__14088__part 
                            = vlSelf->__Vfunc_leading_zero32__14088__value;
                        vlSelf->__Vfunc_leading_zero32__14088__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14088__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14088__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14088__count)));
                            vlSelf->__Vfunc_leading_zero32__14088__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14088__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14088__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14088__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14088__count)));
                            vlSelf->__Vfunc_leading_zero32__14088__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14088__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14088__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14088__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14088__count)));
                            vlSelf->__Vfunc_leading_zero32__14088__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14088__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14088__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14088__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14088__count)));
                            vlSelf->__Vfunc_leading_zero32__14088__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14088__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14088__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14088__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14088__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14088__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14088__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14088__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14088__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14106__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__14106__part 
                            = vlSelf->__Vfunc_leading_zero32__14106__value;
                        vlSelf->__Vfunc_leading_zero32__14106__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14106__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14106__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14106__count)));
                            vlSelf->__Vfunc_leading_zero32__14106__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14106__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14106__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14106__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14106__count)));
                            vlSelf->__Vfunc_leading_zero32__14106__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14106__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14106__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14106__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14106__count)));
                            vlSelf->__Vfunc_leading_zero32__14106__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14106__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14106__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14106__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14106__count)));
                            vlSelf->__Vfunc_leading_zero32__14106__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14106__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14106__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14106__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14106__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14106__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14106__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14106__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14106__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14124__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__14124__part 
                            = vlSelf->__Vfunc_leading_zero32__14124__value;
                        vlSelf->__Vfunc_leading_zero32__14124__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14124__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14124__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14124__count)));
                            vlSelf->__Vfunc_leading_zero32__14124__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14124__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14124__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14124__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14124__count)));
                            vlSelf->__Vfunc_leading_zero32__14124__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14124__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14124__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14124__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14124__count)));
                            vlSelf->__Vfunc_leading_zero32__14124__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14124__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14124__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14124__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14124__count)));
                            vlSelf->__Vfunc_leading_zero32__14124__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14124__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14124__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14124__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14124__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14124__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14124__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14124__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14124__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14142__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__14142__part 
                            = vlSelf->__Vfunc_leading_zero32__14142__value;
                        vlSelf->__Vfunc_leading_zero32__14142__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14142__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14142__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14142__count)));
                            vlSelf->__Vfunc_leading_zero32__14142__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14142__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14142__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14142__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14142__count)));
                            vlSelf->__Vfunc_leading_zero32__14142__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14142__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14142__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14142__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14142__count)));
                            vlSelf->__Vfunc_leading_zero32__14142__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14142__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14142__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14142__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14142__count)));
                            vlSelf->__Vfunc_leading_zero32__14142__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14142__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14142__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14142__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14142__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14142__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14142__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14142__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14142__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14160__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__14160__part 
                            = vlSelf->__Vfunc_leading_zero32__14160__value;
                        vlSelf->__Vfunc_leading_zero32__14160__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14160__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14160__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14160__count)));
                            vlSelf->__Vfunc_leading_zero32__14160__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14160__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14160__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14160__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14160__count)));
                            vlSelf->__Vfunc_leading_zero32__14160__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14160__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14160__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14160__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14160__count)));
                            vlSelf->__Vfunc_leading_zero32__14160__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14160__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14160__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14160__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14160__count)));
                            vlSelf->__Vfunc_leading_zero32__14160__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14160__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14160__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14160__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14160__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14160__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14160__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14160__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14160__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14178__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__14178__part 
                            = vlSelf->__Vfunc_leading_zero32__14178__value;
                        vlSelf->__Vfunc_leading_zero32__14178__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14178__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14178__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14178__count)));
                            vlSelf->__Vfunc_leading_zero32__14178__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14178__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14178__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14178__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14178__count)));
                            vlSelf->__Vfunc_leading_zero32__14178__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14178__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14178__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14178__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14178__count)));
                            vlSelf->__Vfunc_leading_zero32__14178__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14178__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14178__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14178__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14178__count)));
                            vlSelf->__Vfunc_leading_zero32__14178__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14178__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14178__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14178__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14178__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14178__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14178__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14178__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14178__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14196__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__14196__part 
                            = vlSelf->__Vfunc_leading_zero32__14196__value;
                        vlSelf->__Vfunc_leading_zero32__14196__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14196__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14196__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14196__count)));
                            vlSelf->__Vfunc_leading_zero32__14196__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14196__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14196__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14196__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14196__count)));
                            vlSelf->__Vfunc_leading_zero32__14196__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14196__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14196__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14196__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14196__count)));
                            vlSelf->__Vfunc_leading_zero32__14196__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14196__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14196__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14196__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14196__count)));
                            vlSelf->__Vfunc_leading_zero32__14196__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14196__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14196__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14196__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14196__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14196__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14196__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14196__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14196__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14214__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__14214__part 
                            = vlSelf->__Vfunc_leading_zero32__14214__value;
                        vlSelf->__Vfunc_leading_zero32__14214__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14214__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14214__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14214__count)));
                            vlSelf->__Vfunc_leading_zero32__14214__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14214__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14214__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14214__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14214__count)));
                            vlSelf->__Vfunc_leading_zero32__14214__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14214__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14214__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14214__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14214__count)));
                            vlSelf->__Vfunc_leading_zero32__14214__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14214__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14214__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14214__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14214__count)));
                            vlSelf->__Vfunc_leading_zero32__14214__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14214__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14214__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14214__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14214__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14214__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14214__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14214__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14214__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14232__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__14232__part 
                            = vlSelf->__Vfunc_leading_zero32__14232__value;
                        vlSelf->__Vfunc_leading_zero32__14232__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14232__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14232__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14232__count)));
                            vlSelf->__Vfunc_leading_zero32__14232__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14232__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14232__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14232__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14232__count)));
                            vlSelf->__Vfunc_leading_zero32__14232__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14232__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14232__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14232__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14232__count)));
                            vlSelf->__Vfunc_leading_zero32__14232__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14232__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14232__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14232__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14232__count)));
                            vlSelf->__Vfunc_leading_zero32__14232__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14232__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14232__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14232__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14232__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14232__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14232__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14232__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14232__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14250__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__14250__part 
                            = vlSelf->__Vfunc_leading_zero32__14250__value;
                        vlSelf->__Vfunc_leading_zero32__14250__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14250__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14250__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14250__count)));
                            vlSelf->__Vfunc_leading_zero32__14250__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14250__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14250__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14250__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14250__count)));
                            vlSelf->__Vfunc_leading_zero32__14250__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14250__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14250__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14250__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14250__count)));
                            vlSelf->__Vfunc_leading_zero32__14250__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14250__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14250__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14250__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14250__count)));
                            vlSelf->__Vfunc_leading_zero32__14250__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14250__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14250__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14250__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14250__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14250__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14250__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14250__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14250__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11970__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11970__part 
                            = vlSelf->__Vfunc_leading_zero32__11970__value;
                        vlSelf->__Vfunc_leading_zero32__11970__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11970__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11970__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11970__count)));
                            vlSelf->__Vfunc_leading_zero32__11970__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11970__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11970__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11970__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11970__count)));
                            vlSelf->__Vfunc_leading_zero32__11970__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11970__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11970__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11970__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11970__count)));
                            vlSelf->__Vfunc_leading_zero32__11970__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11970__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11970__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11970__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11970__count)));
                            vlSelf->__Vfunc_leading_zero32__11970__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11970__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11970__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11970__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11970__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11970__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11970__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11970__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11970__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11976__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11976__part 
                            = vlSelf->__Vfunc_leading_zero32__11976__value;
                        vlSelf->__Vfunc_leading_zero32__11976__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11976__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11976__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11976__count)));
                            vlSelf->__Vfunc_leading_zero32__11976__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11976__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11976__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11976__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11976__count)));
                            vlSelf->__Vfunc_leading_zero32__11976__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11976__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11976__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11976__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11976__count)));
                            vlSelf->__Vfunc_leading_zero32__11976__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11976__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11976__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11976__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11976__count)));
                            vlSelf->__Vfunc_leading_zero32__11976__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11976__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11976__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11976__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11976__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11976__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11976__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11976__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11976__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12006__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12006__part 
                            = vlSelf->__Vfunc_leading_zero32__12006__value;
                        vlSelf->__Vfunc_leading_zero32__12006__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12006__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12006__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12006__count)));
                            vlSelf->__Vfunc_leading_zero32__12006__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12006__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12006__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12006__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12006__count)));
                            vlSelf->__Vfunc_leading_zero32__12006__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12006__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12006__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12006__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12006__count)));
                            vlSelf->__Vfunc_leading_zero32__12006__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12006__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12006__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12006__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12006__count)));
                            vlSelf->__Vfunc_leading_zero32__12006__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12006__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12006__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12006__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12006__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12006__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12006__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12006__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12006__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12012__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12012__part 
                            = vlSelf->__Vfunc_leading_zero32__12012__value;
                        vlSelf->__Vfunc_leading_zero32__12012__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12012__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12012__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12012__count)));
                            vlSelf->__Vfunc_leading_zero32__12012__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12012__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12012__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12012__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12012__count)));
                            vlSelf->__Vfunc_leading_zero32__12012__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12012__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12012__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12012__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12012__count)));
                            vlSelf->__Vfunc_leading_zero32__12012__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12012__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12012__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12012__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12012__count)));
                            vlSelf->__Vfunc_leading_zero32__12012__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12012__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12012__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12012__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12012__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12012__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12012__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12012__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12012__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12042__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12042__part 
                            = vlSelf->__Vfunc_leading_zero32__12042__value;
                        vlSelf->__Vfunc_leading_zero32__12042__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12042__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12042__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12042__count)));
                            vlSelf->__Vfunc_leading_zero32__12042__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12042__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12042__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12042__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12042__count)));
                            vlSelf->__Vfunc_leading_zero32__12042__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12042__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12042__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12042__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12042__count)));
                            vlSelf->__Vfunc_leading_zero32__12042__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12042__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12042__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12042__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12042__count)));
                            vlSelf->__Vfunc_leading_zero32__12042__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12042__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12042__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12042__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12042__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12042__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12042__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12042__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12042__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12048__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12048__part 
                            = vlSelf->__Vfunc_leading_zero32__12048__value;
                        vlSelf->__Vfunc_leading_zero32__12048__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12048__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12048__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12048__count)));
                            vlSelf->__Vfunc_leading_zero32__12048__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12048__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12048__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12048__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12048__count)));
                            vlSelf->__Vfunc_leading_zero32__12048__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12048__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12048__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12048__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12048__count)));
                            vlSelf->__Vfunc_leading_zero32__12048__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12048__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12048__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12048__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12048__count)));
                            vlSelf->__Vfunc_leading_zero32__12048__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12048__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12048__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12048__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12048__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12048__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12048__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12048__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12048__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12078__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12078__part 
                            = vlSelf->__Vfunc_leading_zero32__12078__value;
                        vlSelf->__Vfunc_leading_zero32__12078__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12078__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12078__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12078__count)));
                            vlSelf->__Vfunc_leading_zero32__12078__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12078__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12078__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12078__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12078__count)));
                            vlSelf->__Vfunc_leading_zero32__12078__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12078__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12078__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12078__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12078__count)));
                            vlSelf->__Vfunc_leading_zero32__12078__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12078__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12078__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12078__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12078__count)));
                            vlSelf->__Vfunc_leading_zero32__12078__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12078__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12078__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12078__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12078__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12078__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12078__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12078__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12078__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12084__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12084__part 
                            = vlSelf->__Vfunc_leading_zero32__12084__value;
                        vlSelf->__Vfunc_leading_zero32__12084__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12084__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12084__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12084__count)));
                            vlSelf->__Vfunc_leading_zero32__12084__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12084__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12084__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12084__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12084__count)));
                            vlSelf->__Vfunc_leading_zero32__12084__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12084__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12084__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12084__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12084__count)));
                            vlSelf->__Vfunc_leading_zero32__12084__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12084__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12084__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12084__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12084__count)));
                            vlSelf->__Vfunc_leading_zero32__12084__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12084__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12084__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12084__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12084__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12084__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12084__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12084__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12084__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12114__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12114__part 
                            = vlSelf->__Vfunc_leading_zero32__12114__value;
                        vlSelf->__Vfunc_leading_zero32__12114__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12114__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12114__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12114__count)));
                            vlSelf->__Vfunc_leading_zero32__12114__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12114__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12114__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12114__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12114__count)));
                            vlSelf->__Vfunc_leading_zero32__12114__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12114__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12114__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12114__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12114__count)));
                            vlSelf->__Vfunc_leading_zero32__12114__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12114__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12114__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12114__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12114__count)));
                            vlSelf->__Vfunc_leading_zero32__12114__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12114__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12114__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12114__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12114__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12114__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12114__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12114__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12114__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12120__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12120__part 
                            = vlSelf->__Vfunc_leading_zero32__12120__value;
                        vlSelf->__Vfunc_leading_zero32__12120__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12120__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12120__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12120__count)));
                            vlSelf->__Vfunc_leading_zero32__12120__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12120__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12120__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12120__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12120__count)));
                            vlSelf->__Vfunc_leading_zero32__12120__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12120__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12120__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12120__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12120__count)));
                            vlSelf->__Vfunc_leading_zero32__12120__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12120__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12120__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12120__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12120__count)));
                            vlSelf->__Vfunc_leading_zero32__12120__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12120__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12120__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12120__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12120__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12120__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12120__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12120__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12120__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12150__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12150__part 
                            = vlSelf->__Vfunc_leading_zero32__12150__value;
                        vlSelf->__Vfunc_leading_zero32__12150__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12150__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12150__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12150__count)));
                            vlSelf->__Vfunc_leading_zero32__12150__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12150__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12150__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12150__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12150__count)));
                            vlSelf->__Vfunc_leading_zero32__12150__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12150__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12150__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12150__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12150__count)));
                            vlSelf->__Vfunc_leading_zero32__12150__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12150__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12150__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12150__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12150__count)));
                            vlSelf->__Vfunc_leading_zero32__12150__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12150__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12150__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12150__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12150__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12150__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12150__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12150__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12150__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12156__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12156__part 
                            = vlSelf->__Vfunc_leading_zero32__12156__value;
                        vlSelf->__Vfunc_leading_zero32__12156__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12156__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12156__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12156__count)));
                            vlSelf->__Vfunc_leading_zero32__12156__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12156__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12156__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12156__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12156__count)));
                            vlSelf->__Vfunc_leading_zero32__12156__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12156__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12156__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12156__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12156__count)));
                            vlSelf->__Vfunc_leading_zero32__12156__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12156__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12156__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12156__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12156__count)));
                            vlSelf->__Vfunc_leading_zero32__12156__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12156__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12156__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12156__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12156__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12156__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12156__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12156__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12156__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12186__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12186__part 
                            = vlSelf->__Vfunc_leading_zero32__12186__value;
                        vlSelf->__Vfunc_leading_zero32__12186__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12186__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12186__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12186__count)));
                            vlSelf->__Vfunc_leading_zero32__12186__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12186__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12186__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12186__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12186__count)));
                            vlSelf->__Vfunc_leading_zero32__12186__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12186__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12186__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12186__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12186__count)));
                            vlSelf->__Vfunc_leading_zero32__12186__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12186__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12186__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12186__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12186__count)));
                            vlSelf->__Vfunc_leading_zero32__12186__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12186__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12186__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12186__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12186__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12186__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12186__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12186__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12186__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12192__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12192__part 
                            = vlSelf->__Vfunc_leading_zero32__12192__value;
                        vlSelf->__Vfunc_leading_zero32__12192__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12192__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12192__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12192__count)));
                            vlSelf->__Vfunc_leading_zero32__12192__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12192__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12192__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12192__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12192__count)));
                            vlSelf->__Vfunc_leading_zero32__12192__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12192__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12192__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12192__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12192__count)));
                            vlSelf->__Vfunc_leading_zero32__12192__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12192__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12192__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12192__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12192__count)));
                            vlSelf->__Vfunc_leading_zero32__12192__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12192__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12192__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12192__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12192__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12192__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12192__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12192__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12192__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12222__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12222__part 
                            = vlSelf->__Vfunc_leading_zero32__12222__value;
                        vlSelf->__Vfunc_leading_zero32__12222__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12222__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12222__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12222__count)));
                            vlSelf->__Vfunc_leading_zero32__12222__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12222__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12222__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12222__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12222__count)));
                            vlSelf->__Vfunc_leading_zero32__12222__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12222__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12222__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12222__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12222__count)));
                            vlSelf->__Vfunc_leading_zero32__12222__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12222__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12222__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12222__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12222__count)));
                            vlSelf->__Vfunc_leading_zero32__12222__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12222__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12222__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12222__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12222__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12222__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12222__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12222__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12222__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12228__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12228__part 
                            = vlSelf->__Vfunc_leading_zero32__12228__value;
                        vlSelf->__Vfunc_leading_zero32__12228__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12228__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12228__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12228__count)));
                            vlSelf->__Vfunc_leading_zero32__12228__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12228__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12228__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12228__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12228__count)));
                            vlSelf->__Vfunc_leading_zero32__12228__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12228__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12228__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12228__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12228__count)));
                            vlSelf->__Vfunc_leading_zero32__12228__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12228__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12228__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12228__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12228__count)));
                            vlSelf->__Vfunc_leading_zero32__12228__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12228__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12228__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12228__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12228__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12228__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12228__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12228__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12228__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12258__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12258__part 
                            = vlSelf->__Vfunc_leading_zero32__12258__value;
                        vlSelf->__Vfunc_leading_zero32__12258__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12258__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12258__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12258__count)));
                            vlSelf->__Vfunc_leading_zero32__12258__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12258__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12258__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12258__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12258__count)));
                            vlSelf->__Vfunc_leading_zero32__12258__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12258__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12258__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12258__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12258__count)));
                            vlSelf->__Vfunc_leading_zero32__12258__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12258__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12258__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12258__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12258__count)));
                            vlSelf->__Vfunc_leading_zero32__12258__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12258__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12258__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12258__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12258__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12258__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12258__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12258__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12258__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12264__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12264__part 
                            = vlSelf->__Vfunc_leading_zero32__12264__value;
                        vlSelf->__Vfunc_leading_zero32__12264__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12264__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12264__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12264__count)));
                            vlSelf->__Vfunc_leading_zero32__12264__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12264__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12264__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12264__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12264__count)));
                            vlSelf->__Vfunc_leading_zero32__12264__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12264__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12264__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12264__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12264__count)));
                            vlSelf->__Vfunc_leading_zero32__12264__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12264__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12264__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12264__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12264__count)));
                            vlSelf->__Vfunc_leading_zero32__12264__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12264__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12264__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12264__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12264__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12264__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12264__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12264__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12264__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12294__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12294__part 
                            = vlSelf->__Vfunc_leading_zero32__12294__value;
                        vlSelf->__Vfunc_leading_zero32__12294__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12294__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12294__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12294__count)));
                            vlSelf->__Vfunc_leading_zero32__12294__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12294__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12294__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12294__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12294__count)));
                            vlSelf->__Vfunc_leading_zero32__12294__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12294__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12294__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12294__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12294__count)));
                            vlSelf->__Vfunc_leading_zero32__12294__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12294__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12294__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12294__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12294__count)));
                            vlSelf->__Vfunc_leading_zero32__12294__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12294__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12294__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12294__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12294__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12294__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12294__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12294__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12294__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12300__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12300__part 
                            = vlSelf->__Vfunc_leading_zero32__12300__value;
                        vlSelf->__Vfunc_leading_zero32__12300__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12300__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12300__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12300__count)));
                            vlSelf->__Vfunc_leading_zero32__12300__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12300__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12300__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12300__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12300__count)));
                            vlSelf->__Vfunc_leading_zero32__12300__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12300__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12300__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12300__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12300__count)));
                            vlSelf->__Vfunc_leading_zero32__12300__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12300__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12300__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12300__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12300__count)));
                            vlSelf->__Vfunc_leading_zero32__12300__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12300__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12300__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12300__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12300__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12300__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12300__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12300__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12300__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12330__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12330__part 
                            = vlSelf->__Vfunc_leading_zero32__12330__value;
                        vlSelf->__Vfunc_leading_zero32__12330__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12330__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12330__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12330__count)));
                            vlSelf->__Vfunc_leading_zero32__12330__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12330__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12330__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12330__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12330__count)));
                            vlSelf->__Vfunc_leading_zero32__12330__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12330__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12330__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12330__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12330__count)));
                            vlSelf->__Vfunc_leading_zero32__12330__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12330__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12330__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12330__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12330__count)));
                            vlSelf->__Vfunc_leading_zero32__12330__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12330__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12330__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12330__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12330__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12330__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12330__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12330__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12330__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12336__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12336__part 
                            = vlSelf->__Vfunc_leading_zero32__12336__value;
                        vlSelf->__Vfunc_leading_zero32__12336__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12336__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12336__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12336__count)));
                            vlSelf->__Vfunc_leading_zero32__12336__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12336__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12336__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12336__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12336__count)));
                            vlSelf->__Vfunc_leading_zero32__12336__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12336__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12336__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12336__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12336__count)));
                            vlSelf->__Vfunc_leading_zero32__12336__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12336__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12336__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12336__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12336__count)));
                            vlSelf->__Vfunc_leading_zero32__12336__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12336__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12336__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12336__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12336__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12336__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12336__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12336__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12336__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12366__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12366__part 
                            = vlSelf->__Vfunc_leading_zero32__12366__value;
                        vlSelf->__Vfunc_leading_zero32__12366__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12366__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12366__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12366__count)));
                            vlSelf->__Vfunc_leading_zero32__12366__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12366__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12366__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12366__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12366__count)));
                            vlSelf->__Vfunc_leading_zero32__12366__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12366__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12366__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12366__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12366__count)));
                            vlSelf->__Vfunc_leading_zero32__12366__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12366__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12366__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12366__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12366__count)));
                            vlSelf->__Vfunc_leading_zero32__12366__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12366__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12366__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12366__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12366__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12366__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12366__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12366__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12366__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12372__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12372__part 
                            = vlSelf->__Vfunc_leading_zero32__12372__value;
                        vlSelf->__Vfunc_leading_zero32__12372__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12372__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12372__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12372__count)));
                            vlSelf->__Vfunc_leading_zero32__12372__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12372__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12372__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12372__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12372__count)));
                            vlSelf->__Vfunc_leading_zero32__12372__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12372__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12372__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12372__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12372__count)));
                            vlSelf->__Vfunc_leading_zero32__12372__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12372__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12372__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12372__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12372__count)));
                            vlSelf->__Vfunc_leading_zero32__12372__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12372__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12372__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12372__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12372__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12372__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12372__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12372__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12372__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12402__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12402__part 
                            = vlSelf->__Vfunc_leading_zero32__12402__value;
                        vlSelf->__Vfunc_leading_zero32__12402__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12402__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12402__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12402__count)));
                            vlSelf->__Vfunc_leading_zero32__12402__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12402__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12402__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12402__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12402__count)));
                            vlSelf->__Vfunc_leading_zero32__12402__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12402__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12402__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12402__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12402__count)));
                            vlSelf->__Vfunc_leading_zero32__12402__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12402__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12402__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12402__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12402__count)));
                            vlSelf->__Vfunc_leading_zero32__12402__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12402__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12402__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12402__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12402__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12402__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12402__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12402__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12402__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12408__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12408__part 
                            = vlSelf->__Vfunc_leading_zero32__12408__value;
                        vlSelf->__Vfunc_leading_zero32__12408__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12408__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12408__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12408__count)));
                            vlSelf->__Vfunc_leading_zero32__12408__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12408__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12408__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12408__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12408__count)));
                            vlSelf->__Vfunc_leading_zero32__12408__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12408__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12408__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12408__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12408__count)));
                            vlSelf->__Vfunc_leading_zero32__12408__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12408__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12408__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12408__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12408__count)));
                            vlSelf->__Vfunc_leading_zero32__12408__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12408__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12408__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12408__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12408__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12408__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12408__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12408__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12408__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12438__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12438__part 
                            = vlSelf->__Vfunc_leading_zero32__12438__value;
                        vlSelf->__Vfunc_leading_zero32__12438__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12438__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12438__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12438__count)));
                            vlSelf->__Vfunc_leading_zero32__12438__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12438__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12438__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12438__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12438__count)));
                            vlSelf->__Vfunc_leading_zero32__12438__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12438__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12438__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12438__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12438__count)));
                            vlSelf->__Vfunc_leading_zero32__12438__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12438__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12438__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12438__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12438__count)));
                            vlSelf->__Vfunc_leading_zero32__12438__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12438__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12438__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12438__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12438__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12438__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12438__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12438__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12438__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12444__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12444__part 
                            = vlSelf->__Vfunc_leading_zero32__12444__value;
                        vlSelf->__Vfunc_leading_zero32__12444__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12444__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12444__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12444__count)));
                            vlSelf->__Vfunc_leading_zero32__12444__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12444__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12444__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12444__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12444__count)));
                            vlSelf->__Vfunc_leading_zero32__12444__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12444__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12444__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12444__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12444__count)));
                            vlSelf->__Vfunc_leading_zero32__12444__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12444__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12444__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12444__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12444__count)));
                            vlSelf->__Vfunc_leading_zero32__12444__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12444__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12444__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12444__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12444__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12444__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12444__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12444__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12444__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12474__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12474__part 
                            = vlSelf->__Vfunc_leading_zero32__12474__value;
                        vlSelf->__Vfunc_leading_zero32__12474__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12474__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12474__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12474__count)));
                            vlSelf->__Vfunc_leading_zero32__12474__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12474__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12474__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12474__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12474__count)));
                            vlSelf->__Vfunc_leading_zero32__12474__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12474__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12474__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12474__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12474__count)));
                            vlSelf->__Vfunc_leading_zero32__12474__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12474__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12474__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12474__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12474__count)));
                            vlSelf->__Vfunc_leading_zero32__12474__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12474__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12474__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12474__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12474__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12474__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12474__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12474__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12474__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12480__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12480__part 
                            = vlSelf->__Vfunc_leading_zero32__12480__value;
                        vlSelf->__Vfunc_leading_zero32__12480__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12480__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12480__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12480__count)));
                            vlSelf->__Vfunc_leading_zero32__12480__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12480__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12480__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12480__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12480__count)));
                            vlSelf->__Vfunc_leading_zero32__12480__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12480__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12480__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12480__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12480__count)));
                            vlSelf->__Vfunc_leading_zero32__12480__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12480__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12480__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12480__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12480__count)));
                            vlSelf->__Vfunc_leading_zero32__12480__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12480__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12480__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12480__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12480__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12480__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12480__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12480__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12480__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12510__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12510__part 
                            = vlSelf->__Vfunc_leading_zero32__12510__value;
                        vlSelf->__Vfunc_leading_zero32__12510__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12510__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12510__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12510__count)));
                            vlSelf->__Vfunc_leading_zero32__12510__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12510__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12510__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12510__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12510__count)));
                            vlSelf->__Vfunc_leading_zero32__12510__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12510__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12510__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12510__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12510__count)));
                            vlSelf->__Vfunc_leading_zero32__12510__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12510__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12510__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12510__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12510__count)));
                            vlSelf->__Vfunc_leading_zero32__12510__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12510__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12510__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12510__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12510__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12510__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12510__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12510__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12510__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12516__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12516__part 
                            = vlSelf->__Vfunc_leading_zero32__12516__value;
                        vlSelf->__Vfunc_leading_zero32__12516__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12516__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12516__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12516__count)));
                            vlSelf->__Vfunc_leading_zero32__12516__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12516__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12516__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12516__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12516__count)));
                            vlSelf->__Vfunc_leading_zero32__12516__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12516__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12516__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12516__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12516__count)));
                            vlSelf->__Vfunc_leading_zero32__12516__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12516__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12516__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12516__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12516__count)));
                            vlSelf->__Vfunc_leading_zero32__12516__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12516__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12516__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12516__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12516__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12516__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12516__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12516__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12516__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12546__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12546__part 
                            = vlSelf->__Vfunc_leading_zero32__12546__value;
                        vlSelf->__Vfunc_leading_zero32__12546__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12546__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12546__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12546__count)));
                            vlSelf->__Vfunc_leading_zero32__12546__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12546__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12546__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12546__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12546__count)));
                            vlSelf->__Vfunc_leading_zero32__12546__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12546__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12546__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12546__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12546__count)));
                            vlSelf->__Vfunc_leading_zero32__12546__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12546__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12546__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12546__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12546__count)));
                            vlSelf->__Vfunc_leading_zero32__12546__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12546__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12546__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12546__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12546__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12546__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12546__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12546__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12546__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12552__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12552__part 
                            = vlSelf->__Vfunc_leading_zero32__12552__value;
                        vlSelf->__Vfunc_leading_zero32__12552__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12552__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12552__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12552__count)));
                            vlSelf->__Vfunc_leading_zero32__12552__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12552__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12552__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12552__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12552__count)));
                            vlSelf->__Vfunc_leading_zero32__12552__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12552__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12552__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12552__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12552__count)));
                            vlSelf->__Vfunc_leading_zero32__12552__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12552__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12552__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12552__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12552__count)));
                            vlSelf->__Vfunc_leading_zero32__12552__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12552__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12552__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12552__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12552__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12552__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12552__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12552__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12552__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12582__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12582__part 
                            = vlSelf->__Vfunc_leading_zero32__12582__value;
                        vlSelf->__Vfunc_leading_zero32__12582__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12582__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12582__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12582__count)));
                            vlSelf->__Vfunc_leading_zero32__12582__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12582__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12582__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12582__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12582__count)));
                            vlSelf->__Vfunc_leading_zero32__12582__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12582__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12582__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12582__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12582__count)));
                            vlSelf->__Vfunc_leading_zero32__12582__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12582__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12582__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12582__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12582__count)));
                            vlSelf->__Vfunc_leading_zero32__12582__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12582__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12582__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12582__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12582__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12582__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12582__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12582__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12582__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12588__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12588__part 
                            = vlSelf->__Vfunc_leading_zero32__12588__value;
                        vlSelf->__Vfunc_leading_zero32__12588__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12588__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12588__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12588__count)));
                            vlSelf->__Vfunc_leading_zero32__12588__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12588__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12588__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12588__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12588__count)));
                            vlSelf->__Vfunc_leading_zero32__12588__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12588__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12588__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12588__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12588__count)));
                            vlSelf->__Vfunc_leading_zero32__12588__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12588__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12588__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12588__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12588__count)));
                            vlSelf->__Vfunc_leading_zero32__12588__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12588__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12588__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12588__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12588__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12588__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12588__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12588__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12588__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12618__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12618__part 
                            = vlSelf->__Vfunc_leading_zero32__12618__value;
                        vlSelf->__Vfunc_leading_zero32__12618__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12618__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12618__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12618__count)));
                            vlSelf->__Vfunc_leading_zero32__12618__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12618__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12618__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12618__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12618__count)));
                            vlSelf->__Vfunc_leading_zero32__12618__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12618__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12618__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12618__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12618__count)));
                            vlSelf->__Vfunc_leading_zero32__12618__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12618__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12618__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12618__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12618__count)));
                            vlSelf->__Vfunc_leading_zero32__12618__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12618__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12618__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12618__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12618__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12618__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12618__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12618__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12618__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12624__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12624__part 
                            = vlSelf->__Vfunc_leading_zero32__12624__value;
                        vlSelf->__Vfunc_leading_zero32__12624__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12624__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12624__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12624__count)));
                            vlSelf->__Vfunc_leading_zero32__12624__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12624__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12624__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12624__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12624__count)));
                            vlSelf->__Vfunc_leading_zero32__12624__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12624__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12624__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12624__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12624__count)));
                            vlSelf->__Vfunc_leading_zero32__12624__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12624__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12624__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12624__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12624__count)));
                            vlSelf->__Vfunc_leading_zero32__12624__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12624__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12624__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12624__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12624__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12624__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12624__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12624__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12624__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12654__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12654__part 
                            = vlSelf->__Vfunc_leading_zero32__12654__value;
                        vlSelf->__Vfunc_leading_zero32__12654__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12654__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12654__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12654__count)));
                            vlSelf->__Vfunc_leading_zero32__12654__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12654__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12654__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12654__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12654__count)));
                            vlSelf->__Vfunc_leading_zero32__12654__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12654__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12654__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12654__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12654__count)));
                            vlSelf->__Vfunc_leading_zero32__12654__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12654__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12654__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12654__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12654__count)));
                            vlSelf->__Vfunc_leading_zero32__12654__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12654__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12654__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12654__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12654__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12654__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12654__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12654__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12654__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12660__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12660__part 
                            = vlSelf->__Vfunc_leading_zero32__12660__value;
                        vlSelf->__Vfunc_leading_zero32__12660__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12660__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12660__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12660__count)));
                            vlSelf->__Vfunc_leading_zero32__12660__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12660__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12660__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12660__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12660__count)));
                            vlSelf->__Vfunc_leading_zero32__12660__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12660__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12660__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12660__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12660__count)));
                            vlSelf->__Vfunc_leading_zero32__12660__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12660__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12660__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12660__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12660__count)));
                            vlSelf->__Vfunc_leading_zero32__12660__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12660__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12660__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12660__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12660__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12660__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12660__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12660__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12660__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12690__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12690__part 
                            = vlSelf->__Vfunc_leading_zero32__12690__value;
                        vlSelf->__Vfunc_leading_zero32__12690__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12690__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12690__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12690__count)));
                            vlSelf->__Vfunc_leading_zero32__12690__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12690__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12690__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12690__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12690__count)));
                            vlSelf->__Vfunc_leading_zero32__12690__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12690__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12690__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12690__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12690__count)));
                            vlSelf->__Vfunc_leading_zero32__12690__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12690__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12690__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12690__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12690__count)));
                            vlSelf->__Vfunc_leading_zero32__12690__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12690__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12690__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12690__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12690__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12690__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12690__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12690__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12690__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12696__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12696__part 
                            = vlSelf->__Vfunc_leading_zero32__12696__value;
                        vlSelf->__Vfunc_leading_zero32__12696__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12696__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12696__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12696__count)));
                            vlSelf->__Vfunc_leading_zero32__12696__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12696__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12696__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12696__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12696__count)));
                            vlSelf->__Vfunc_leading_zero32__12696__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12696__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12696__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12696__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12696__count)));
                            vlSelf->__Vfunc_leading_zero32__12696__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12696__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12696__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12696__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12696__count)));
                            vlSelf->__Vfunc_leading_zero32__12696__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12696__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12696__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12696__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12696__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12696__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12696__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12696__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12696__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12726__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12726__part 
                            = vlSelf->__Vfunc_leading_zero32__12726__value;
                        vlSelf->__Vfunc_leading_zero32__12726__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12726__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12726__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12726__count)));
                            vlSelf->__Vfunc_leading_zero32__12726__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12726__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12726__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12726__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12726__count)));
                            vlSelf->__Vfunc_leading_zero32__12726__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12726__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12726__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12726__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12726__count)));
                            vlSelf->__Vfunc_leading_zero32__12726__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12726__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12726__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12726__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12726__count)));
                            vlSelf->__Vfunc_leading_zero32__12726__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12726__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12726__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12726__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12726__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12726__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12726__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12726__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12726__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12732__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12732__part 
                            = vlSelf->__Vfunc_leading_zero32__12732__value;
                        vlSelf->__Vfunc_leading_zero32__12732__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12732__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12732__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12732__count)));
                            vlSelf->__Vfunc_leading_zero32__12732__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12732__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12732__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12732__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12732__count)));
                            vlSelf->__Vfunc_leading_zero32__12732__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12732__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12732__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12732__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12732__count)));
                            vlSelf->__Vfunc_leading_zero32__12732__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12732__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12732__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12732__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12732__count)));
                            vlSelf->__Vfunc_leading_zero32__12732__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12732__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12732__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12732__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12732__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12732__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12732__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12732__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12732__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12762__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12762__part 
                            = vlSelf->__Vfunc_leading_zero32__12762__value;
                        vlSelf->__Vfunc_leading_zero32__12762__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12762__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12762__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12762__count)));
                            vlSelf->__Vfunc_leading_zero32__12762__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12762__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12762__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12762__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12762__count)));
                            vlSelf->__Vfunc_leading_zero32__12762__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12762__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12762__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12762__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12762__count)));
                            vlSelf->__Vfunc_leading_zero32__12762__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12762__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12762__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12762__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12762__count)));
                            vlSelf->__Vfunc_leading_zero32__12762__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12762__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12762__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12762__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12762__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12762__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12762__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12762__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12762__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12768__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12768__part 
                            = vlSelf->__Vfunc_leading_zero32__12768__value;
                        vlSelf->__Vfunc_leading_zero32__12768__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12768__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12768__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12768__count)));
                            vlSelf->__Vfunc_leading_zero32__12768__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12768__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12768__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12768__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12768__count)));
                            vlSelf->__Vfunc_leading_zero32__12768__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12768__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12768__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12768__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12768__count)));
                            vlSelf->__Vfunc_leading_zero32__12768__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12768__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12768__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12768__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12768__count)));
                            vlSelf->__Vfunc_leading_zero32__12768__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12768__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12768__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12768__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12768__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12768__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12768__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12768__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12768__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12798__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12798__part 
                            = vlSelf->__Vfunc_leading_zero32__12798__value;
                        vlSelf->__Vfunc_leading_zero32__12798__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12798__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12798__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12798__count)));
                            vlSelf->__Vfunc_leading_zero32__12798__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12798__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12798__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12798__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12798__count)));
                            vlSelf->__Vfunc_leading_zero32__12798__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12798__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12798__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12798__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12798__count)));
                            vlSelf->__Vfunc_leading_zero32__12798__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12798__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12798__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12798__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12798__count)));
                            vlSelf->__Vfunc_leading_zero32__12798__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12798__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12798__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12798__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12798__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12798__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12798__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12798__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12798__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12804__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12804__part 
                            = vlSelf->__Vfunc_leading_zero32__12804__value;
                        vlSelf->__Vfunc_leading_zero32__12804__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12804__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12804__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12804__count)));
                            vlSelf->__Vfunc_leading_zero32__12804__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12804__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12804__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12804__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12804__count)));
                            vlSelf->__Vfunc_leading_zero32__12804__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12804__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12804__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12804__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12804__count)));
                            vlSelf->__Vfunc_leading_zero32__12804__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12804__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12804__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12804__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12804__count)));
                            vlSelf->__Vfunc_leading_zero32__12804__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12804__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12804__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12804__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12804__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12804__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12804__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12804__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12804__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12834__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12834__part 
                            = vlSelf->__Vfunc_leading_zero32__12834__value;
                        vlSelf->__Vfunc_leading_zero32__12834__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12834__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12834__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12834__count)));
                            vlSelf->__Vfunc_leading_zero32__12834__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12834__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12834__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12834__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12834__count)));
                            vlSelf->__Vfunc_leading_zero32__12834__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12834__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12834__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12834__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12834__count)));
                            vlSelf->__Vfunc_leading_zero32__12834__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12834__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12834__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12834__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12834__count)));
                            vlSelf->__Vfunc_leading_zero32__12834__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12834__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12834__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12834__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12834__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12834__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12834__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12834__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12834__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12840__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12840__part 
                            = vlSelf->__Vfunc_leading_zero32__12840__value;
                        vlSelf->__Vfunc_leading_zero32__12840__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12840__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12840__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12840__count)));
                            vlSelf->__Vfunc_leading_zero32__12840__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12840__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12840__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12840__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12840__count)));
                            vlSelf->__Vfunc_leading_zero32__12840__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12840__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12840__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12840__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12840__count)));
                            vlSelf->__Vfunc_leading_zero32__12840__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12840__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12840__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12840__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12840__count)));
                            vlSelf->__Vfunc_leading_zero32__12840__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12840__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12840__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12840__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12840__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12840__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12840__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12840__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12840__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12870__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12870__part 
                            = vlSelf->__Vfunc_leading_zero32__12870__value;
                        vlSelf->__Vfunc_leading_zero32__12870__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12870__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12870__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12870__count)));
                            vlSelf->__Vfunc_leading_zero32__12870__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12870__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12870__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12870__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12870__count)));
                            vlSelf->__Vfunc_leading_zero32__12870__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12870__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12870__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12870__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12870__count)));
                            vlSelf->__Vfunc_leading_zero32__12870__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12870__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12870__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12870__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12870__count)));
                            vlSelf->__Vfunc_leading_zero32__12870__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12870__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12870__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12870__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12870__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12870__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12870__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12870__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12870__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12876__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12876__part 
                            = vlSelf->__Vfunc_leading_zero32__12876__value;
                        vlSelf->__Vfunc_leading_zero32__12876__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12876__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12876__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12876__count)));
                            vlSelf->__Vfunc_leading_zero32__12876__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12876__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12876__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12876__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12876__count)));
                            vlSelf->__Vfunc_leading_zero32__12876__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12876__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12876__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12876__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12876__count)));
                            vlSelf->__Vfunc_leading_zero32__12876__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12876__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12876__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12876__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12876__count)));
                            vlSelf->__Vfunc_leading_zero32__12876__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12876__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12876__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12876__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12876__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12876__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12876__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12876__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12876__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12906__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12906__part 
                            = vlSelf->__Vfunc_leading_zero32__12906__value;
                        vlSelf->__Vfunc_leading_zero32__12906__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12906__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12906__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12906__count)));
                            vlSelf->__Vfunc_leading_zero32__12906__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12906__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12906__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12906__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12906__count)));
                            vlSelf->__Vfunc_leading_zero32__12906__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12906__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12906__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12906__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12906__count)));
                            vlSelf->__Vfunc_leading_zero32__12906__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12906__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12906__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12906__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12906__count)));
                            vlSelf->__Vfunc_leading_zero32__12906__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12906__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12906__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12906__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12906__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12906__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12906__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12906__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12906__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12912__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12912__part 
                            = vlSelf->__Vfunc_leading_zero32__12912__value;
                        vlSelf->__Vfunc_leading_zero32__12912__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12912__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12912__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12912__count)));
                            vlSelf->__Vfunc_leading_zero32__12912__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12912__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12912__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12912__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12912__count)));
                            vlSelf->__Vfunc_leading_zero32__12912__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12912__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12912__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12912__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12912__count)));
                            vlSelf->__Vfunc_leading_zero32__12912__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12912__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12912__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12912__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12912__count)));
                            vlSelf->__Vfunc_leading_zero32__12912__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12912__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12912__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12912__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12912__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12912__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12912__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12912__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12912__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12942__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12942__part 
                            = vlSelf->__Vfunc_leading_zero32__12942__value;
                        vlSelf->__Vfunc_leading_zero32__12942__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12942__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12942__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12942__count)));
                            vlSelf->__Vfunc_leading_zero32__12942__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12942__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12942__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12942__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12942__count)));
                            vlSelf->__Vfunc_leading_zero32__12942__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12942__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12942__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12942__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12942__count)));
                            vlSelf->__Vfunc_leading_zero32__12942__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12942__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12942__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12942__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12942__count)));
                            vlSelf->__Vfunc_leading_zero32__12942__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12942__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12942__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12942__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12942__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12942__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12942__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12942__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12942__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12948__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12948__part 
                            = vlSelf->__Vfunc_leading_zero32__12948__value;
                        vlSelf->__Vfunc_leading_zero32__12948__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12948__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12948__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12948__count)));
                            vlSelf->__Vfunc_leading_zero32__12948__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12948__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12948__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12948__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12948__count)));
                            vlSelf->__Vfunc_leading_zero32__12948__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12948__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12948__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12948__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12948__count)));
                            vlSelf->__Vfunc_leading_zero32__12948__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12948__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12948__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12948__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12948__count)));
                            vlSelf->__Vfunc_leading_zero32__12948__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12948__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12948__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12948__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12948__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12948__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12948__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12948__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12948__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12978__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12978__part 
                            = vlSelf->__Vfunc_leading_zero32__12978__value;
                        vlSelf->__Vfunc_leading_zero32__12978__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12978__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12978__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12978__count)));
                            vlSelf->__Vfunc_leading_zero32__12978__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12978__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12978__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12978__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12978__count)));
                            vlSelf->__Vfunc_leading_zero32__12978__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12978__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12978__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12978__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12978__count)));
                            vlSelf->__Vfunc_leading_zero32__12978__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12978__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12978__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12978__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12978__count)));
                            vlSelf->__Vfunc_leading_zero32__12978__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12978__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12978__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12978__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12978__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12978__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12978__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12978__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12978__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12984__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__12984__part 
                            = vlSelf->__Vfunc_leading_zero32__12984__value;
                        vlSelf->__Vfunc_leading_zero32__12984__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12984__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12984__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12984__count)));
                            vlSelf->__Vfunc_leading_zero32__12984__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12984__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12984__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12984__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12984__count)));
                            vlSelf->__Vfunc_leading_zero32__12984__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12984__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12984__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12984__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12984__count)));
                            vlSelf->__Vfunc_leading_zero32__12984__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12984__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12984__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12984__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12984__count)));
                            vlSelf->__Vfunc_leading_zero32__12984__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12984__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12984__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12984__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12984__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12984__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12984__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12984__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12984__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13014__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13014__part 
                            = vlSelf->__Vfunc_leading_zero32__13014__value;
                        vlSelf->__Vfunc_leading_zero32__13014__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13014__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13014__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13014__count)));
                            vlSelf->__Vfunc_leading_zero32__13014__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13014__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13014__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13014__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13014__count)));
                            vlSelf->__Vfunc_leading_zero32__13014__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13014__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13014__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13014__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13014__count)));
                            vlSelf->__Vfunc_leading_zero32__13014__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13014__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13014__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13014__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13014__count)));
                            vlSelf->__Vfunc_leading_zero32__13014__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13014__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13014__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13014__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13014__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13014__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13014__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13014__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13014__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13020__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13020__part 
                            = vlSelf->__Vfunc_leading_zero32__13020__value;
                        vlSelf->__Vfunc_leading_zero32__13020__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13020__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13020__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13020__count)));
                            vlSelf->__Vfunc_leading_zero32__13020__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13020__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13020__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13020__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13020__count)));
                            vlSelf->__Vfunc_leading_zero32__13020__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13020__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13020__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13020__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13020__count)));
                            vlSelf->__Vfunc_leading_zero32__13020__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13020__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13020__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13020__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13020__count)));
                            vlSelf->__Vfunc_leading_zero32__13020__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13020__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13020__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13020__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13020__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13020__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13020__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13020__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13020__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13050__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13050__part 
                            = vlSelf->__Vfunc_leading_zero32__13050__value;
                        vlSelf->__Vfunc_leading_zero32__13050__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13050__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13050__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13050__count)));
                            vlSelf->__Vfunc_leading_zero32__13050__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13050__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13050__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13050__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13050__count)));
                            vlSelf->__Vfunc_leading_zero32__13050__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13050__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13050__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13050__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13050__count)));
                            vlSelf->__Vfunc_leading_zero32__13050__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13050__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13050__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13050__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13050__count)));
                            vlSelf->__Vfunc_leading_zero32__13050__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13050__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13050__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13050__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13050__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13050__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13050__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13050__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13050__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13056__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13056__part 
                            = vlSelf->__Vfunc_leading_zero32__13056__value;
                        vlSelf->__Vfunc_leading_zero32__13056__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13056__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13056__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13056__count)));
                            vlSelf->__Vfunc_leading_zero32__13056__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13056__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13056__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13056__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13056__count)));
                            vlSelf->__Vfunc_leading_zero32__13056__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13056__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13056__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13056__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13056__count)));
                            vlSelf->__Vfunc_leading_zero32__13056__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13056__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13056__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13056__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13056__count)));
                            vlSelf->__Vfunc_leading_zero32__13056__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13056__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13056__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13056__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13056__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13056__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13056__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13056__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13056__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13086__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13086__part 
                            = vlSelf->__Vfunc_leading_zero32__13086__value;
                        vlSelf->__Vfunc_leading_zero32__13086__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13086__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13086__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13086__count)));
                            vlSelf->__Vfunc_leading_zero32__13086__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13086__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13086__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13086__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13086__count)));
                            vlSelf->__Vfunc_leading_zero32__13086__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13086__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13086__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13086__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13086__count)));
                            vlSelf->__Vfunc_leading_zero32__13086__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13086__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13086__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13086__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13086__count)));
                            vlSelf->__Vfunc_leading_zero32__13086__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13086__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13086__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13086__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13086__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13086__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13086__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13086__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13086__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13092__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13092__part 
                            = vlSelf->__Vfunc_leading_zero32__13092__value;
                        vlSelf->__Vfunc_leading_zero32__13092__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13092__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13092__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13092__count)));
                            vlSelf->__Vfunc_leading_zero32__13092__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13092__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13092__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13092__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13092__count)));
                            vlSelf->__Vfunc_leading_zero32__13092__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13092__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13092__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13092__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13092__count)));
                            vlSelf->__Vfunc_leading_zero32__13092__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13092__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13092__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13092__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13092__count)));
                            vlSelf->__Vfunc_leading_zero32__13092__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13092__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13092__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13092__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13092__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13092__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13092__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13092__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13092__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13122__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13122__part 
                            = vlSelf->__Vfunc_leading_zero32__13122__value;
                        vlSelf->__Vfunc_leading_zero32__13122__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13122__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13122__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13122__count)));
                            vlSelf->__Vfunc_leading_zero32__13122__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13122__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13122__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13122__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13122__count)));
                            vlSelf->__Vfunc_leading_zero32__13122__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13122__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13122__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13122__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13122__count)));
                            vlSelf->__Vfunc_leading_zero32__13122__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13122__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13122__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13122__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13122__count)));
                            vlSelf->__Vfunc_leading_zero32__13122__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13122__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13122__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13122__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13122__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13122__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13122__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13122__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13122__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13128__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13128__part 
                            = vlSelf->__Vfunc_leading_zero32__13128__value;
                        vlSelf->__Vfunc_leading_zero32__13128__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13128__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13128__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13128__count)));
                            vlSelf->__Vfunc_leading_zero32__13128__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13128__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13128__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13128__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13128__count)));
                            vlSelf->__Vfunc_leading_zero32__13128__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13128__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13128__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13128__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13128__count)));
                            vlSelf->__Vfunc_leading_zero32__13128__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13128__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13128__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13128__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13128__count)));
                            vlSelf->__Vfunc_leading_zero32__13128__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13128__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13128__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13128__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13128__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13128__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13128__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13128__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13128__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13158__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13158__part 
                            = vlSelf->__Vfunc_leading_zero32__13158__value;
                        vlSelf->__Vfunc_leading_zero32__13158__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13158__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13158__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13158__count)));
                            vlSelf->__Vfunc_leading_zero32__13158__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13158__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13158__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13158__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13158__count)));
                            vlSelf->__Vfunc_leading_zero32__13158__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13158__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13158__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13158__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13158__count)));
                            vlSelf->__Vfunc_leading_zero32__13158__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13158__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13158__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13158__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13158__count)));
                            vlSelf->__Vfunc_leading_zero32__13158__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13158__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13158__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13158__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13158__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13158__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13158__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13158__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13158__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13164__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13164__part 
                            = vlSelf->__Vfunc_leading_zero32__13164__value;
                        vlSelf->__Vfunc_leading_zero32__13164__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13164__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13164__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13164__count)));
                            vlSelf->__Vfunc_leading_zero32__13164__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13164__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13164__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13164__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13164__count)));
                            vlSelf->__Vfunc_leading_zero32__13164__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13164__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13164__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13164__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13164__count)));
                            vlSelf->__Vfunc_leading_zero32__13164__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13164__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13164__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13164__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13164__count)));
                            vlSelf->__Vfunc_leading_zero32__13164__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13164__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13164__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13164__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13164__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13164__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13164__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13164__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13164__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13194__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13194__part 
                            = vlSelf->__Vfunc_leading_zero32__13194__value;
                        vlSelf->__Vfunc_leading_zero32__13194__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13194__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13194__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13194__count)));
                            vlSelf->__Vfunc_leading_zero32__13194__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13194__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13194__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13194__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13194__count)));
                            vlSelf->__Vfunc_leading_zero32__13194__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13194__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13194__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13194__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13194__count)));
                            vlSelf->__Vfunc_leading_zero32__13194__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13194__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13194__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13194__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13194__count)));
                            vlSelf->__Vfunc_leading_zero32__13194__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13194__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13194__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13194__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13194__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13194__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13194__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13194__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13194__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13200__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13200__part 
                            = vlSelf->__Vfunc_leading_zero32__13200__value;
                        vlSelf->__Vfunc_leading_zero32__13200__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13200__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13200__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13200__count)));
                            vlSelf->__Vfunc_leading_zero32__13200__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13200__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13200__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13200__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13200__count)));
                            vlSelf->__Vfunc_leading_zero32__13200__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13200__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13200__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13200__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13200__count)));
                            vlSelf->__Vfunc_leading_zero32__13200__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13200__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13200__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13200__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13200__count)));
                            vlSelf->__Vfunc_leading_zero32__13200__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13200__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13200__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13200__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13200__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13200__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13200__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13200__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13200__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13230__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13230__part 
                            = vlSelf->__Vfunc_leading_zero32__13230__value;
                        vlSelf->__Vfunc_leading_zero32__13230__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13230__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13230__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13230__count)));
                            vlSelf->__Vfunc_leading_zero32__13230__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13230__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13230__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13230__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13230__count)));
                            vlSelf->__Vfunc_leading_zero32__13230__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13230__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13230__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13230__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13230__count)));
                            vlSelf->__Vfunc_leading_zero32__13230__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13230__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13230__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13230__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13230__count)));
                            vlSelf->__Vfunc_leading_zero32__13230__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13230__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13230__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13230__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13230__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13230__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13230__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13230__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13230__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13236__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13236__part 
                            = vlSelf->__Vfunc_leading_zero32__13236__value;
                        vlSelf->__Vfunc_leading_zero32__13236__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13236__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13236__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13236__count)));
                            vlSelf->__Vfunc_leading_zero32__13236__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13236__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13236__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13236__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13236__count)));
                            vlSelf->__Vfunc_leading_zero32__13236__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13236__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13236__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13236__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13236__count)));
                            vlSelf->__Vfunc_leading_zero32__13236__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13236__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13236__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13236__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13236__count)));
                            vlSelf->__Vfunc_leading_zero32__13236__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13236__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13236__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13236__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13236__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13236__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13236__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13236__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13236__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13266__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13266__part 
                            = vlSelf->__Vfunc_leading_zero32__13266__value;
                        vlSelf->__Vfunc_leading_zero32__13266__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13266__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13266__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13266__count)));
                            vlSelf->__Vfunc_leading_zero32__13266__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13266__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13266__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13266__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13266__count)));
                            vlSelf->__Vfunc_leading_zero32__13266__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13266__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13266__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13266__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13266__count)));
                            vlSelf->__Vfunc_leading_zero32__13266__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13266__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13266__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13266__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13266__count)));
                            vlSelf->__Vfunc_leading_zero32__13266__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13266__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13266__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13266__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13266__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13266__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13266__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13266__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13266__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13272__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13272__part 
                            = vlSelf->__Vfunc_leading_zero32__13272__value;
                        vlSelf->__Vfunc_leading_zero32__13272__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13272__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13272__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13272__count)));
                            vlSelf->__Vfunc_leading_zero32__13272__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13272__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13272__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13272__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13272__count)));
                            vlSelf->__Vfunc_leading_zero32__13272__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13272__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13272__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13272__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13272__count)));
                            vlSelf->__Vfunc_leading_zero32__13272__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13272__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13272__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13272__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13272__count)));
                            vlSelf->__Vfunc_leading_zero32__13272__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13272__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13272__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13272__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13272__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13272__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13272__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13272__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13272__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13302__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13302__part 
                            = vlSelf->__Vfunc_leading_zero32__13302__value;
                        vlSelf->__Vfunc_leading_zero32__13302__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13302__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13302__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13302__count)));
                            vlSelf->__Vfunc_leading_zero32__13302__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13302__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13302__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13302__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13302__count)));
                            vlSelf->__Vfunc_leading_zero32__13302__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13302__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13302__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13302__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13302__count)));
                            vlSelf->__Vfunc_leading_zero32__13302__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13302__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13302__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13302__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13302__count)));
                            vlSelf->__Vfunc_leading_zero32__13302__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13302__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13302__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13302__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13302__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13302__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13302__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13302__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13302__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13308__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13308__part 
                            = vlSelf->__Vfunc_leading_zero32__13308__value;
                        vlSelf->__Vfunc_leading_zero32__13308__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13308__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13308__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13308__count)));
                            vlSelf->__Vfunc_leading_zero32__13308__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13308__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13308__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13308__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13308__count)));
                            vlSelf->__Vfunc_leading_zero32__13308__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13308__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13308__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13308__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13308__count)));
                            vlSelf->__Vfunc_leading_zero32__13308__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13308__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13308__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13308__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13308__count)));
                            vlSelf->__Vfunc_leading_zero32__13308__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13308__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13308__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13308__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13308__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13308__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13308__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13308__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13308__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13338__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13338__part 
                            = vlSelf->__Vfunc_leading_zero32__13338__value;
                        vlSelf->__Vfunc_leading_zero32__13338__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13338__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13338__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13338__count)));
                            vlSelf->__Vfunc_leading_zero32__13338__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13338__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13338__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13338__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13338__count)));
                            vlSelf->__Vfunc_leading_zero32__13338__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13338__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13338__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13338__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13338__count)));
                            vlSelf->__Vfunc_leading_zero32__13338__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13338__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13338__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13338__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13338__count)));
                            vlSelf->__Vfunc_leading_zero32__13338__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13338__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13338__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13338__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13338__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13338__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13338__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13338__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13338__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13344__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13344__part 
                            = vlSelf->__Vfunc_leading_zero32__13344__value;
                        vlSelf->__Vfunc_leading_zero32__13344__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13344__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13344__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13344__count)));
                            vlSelf->__Vfunc_leading_zero32__13344__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13344__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13344__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13344__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13344__count)));
                            vlSelf->__Vfunc_leading_zero32__13344__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13344__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13344__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13344__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13344__count)));
                            vlSelf->__Vfunc_leading_zero32__13344__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13344__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13344__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13344__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13344__count)));
                            vlSelf->__Vfunc_leading_zero32__13344__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13344__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13344__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13344__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13344__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13344__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13344__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13344__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13344__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13374__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13374__part 
                            = vlSelf->__Vfunc_leading_zero32__13374__value;
                        vlSelf->__Vfunc_leading_zero32__13374__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13374__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13374__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13374__count)));
                            vlSelf->__Vfunc_leading_zero32__13374__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13374__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13374__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13374__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13374__count)));
                            vlSelf->__Vfunc_leading_zero32__13374__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13374__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13374__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13374__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13374__count)));
                            vlSelf->__Vfunc_leading_zero32__13374__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13374__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13374__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13374__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13374__count)));
                            vlSelf->__Vfunc_leading_zero32__13374__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13374__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13374__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13374__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13374__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13374__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13374__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13374__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13374__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13380__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13380__part 
                            = vlSelf->__Vfunc_leading_zero32__13380__value;
                        vlSelf->__Vfunc_leading_zero32__13380__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13380__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13380__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13380__count)));
                            vlSelf->__Vfunc_leading_zero32__13380__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13380__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13380__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13380__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13380__count)));
                            vlSelf->__Vfunc_leading_zero32__13380__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13380__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13380__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13380__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13380__count)));
                            vlSelf->__Vfunc_leading_zero32__13380__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13380__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13380__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13380__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13380__count)));
                            vlSelf->__Vfunc_leading_zero32__13380__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13380__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13380__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13380__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13380__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13380__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13380__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13380__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13380__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13410__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13410__part 
                            = vlSelf->__Vfunc_leading_zero32__13410__value;
                        vlSelf->__Vfunc_leading_zero32__13410__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13410__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13410__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13410__count)));
                            vlSelf->__Vfunc_leading_zero32__13410__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13410__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13410__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13410__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13410__count)));
                            vlSelf->__Vfunc_leading_zero32__13410__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13410__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13410__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13410__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13410__count)));
                            vlSelf->__Vfunc_leading_zero32__13410__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13410__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13410__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13410__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13410__count)));
                            vlSelf->__Vfunc_leading_zero32__13410__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13410__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13410__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13410__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13410__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13410__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13410__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13410__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13410__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13416__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13416__part 
                            = vlSelf->__Vfunc_leading_zero32__13416__value;
                        vlSelf->__Vfunc_leading_zero32__13416__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13416__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13416__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13416__count)));
                            vlSelf->__Vfunc_leading_zero32__13416__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13416__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13416__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13416__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13416__count)));
                            vlSelf->__Vfunc_leading_zero32__13416__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13416__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13416__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13416__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13416__count)));
                            vlSelf->__Vfunc_leading_zero32__13416__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13416__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13416__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13416__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13416__count)));
                            vlSelf->__Vfunc_leading_zero32__13416__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13416__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13416__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13416__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13416__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13416__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13416__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13416__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13416__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13446__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13446__part 
                            = vlSelf->__Vfunc_leading_zero32__13446__value;
                        vlSelf->__Vfunc_leading_zero32__13446__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13446__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13446__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13446__count)));
                            vlSelf->__Vfunc_leading_zero32__13446__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13446__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13446__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13446__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13446__count)));
                            vlSelf->__Vfunc_leading_zero32__13446__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13446__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13446__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13446__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13446__count)));
                            vlSelf->__Vfunc_leading_zero32__13446__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13446__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13446__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13446__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13446__count)));
                            vlSelf->__Vfunc_leading_zero32__13446__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13446__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13446__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13446__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13446__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13446__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13446__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13446__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13446__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13452__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13452__part 
                            = vlSelf->__Vfunc_leading_zero32__13452__value;
                        vlSelf->__Vfunc_leading_zero32__13452__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13452__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13452__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13452__count)));
                            vlSelf->__Vfunc_leading_zero32__13452__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13452__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13452__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13452__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13452__count)));
                            vlSelf->__Vfunc_leading_zero32__13452__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13452__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13452__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13452__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13452__count)));
                            vlSelf->__Vfunc_leading_zero32__13452__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13452__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13452__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13452__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13452__count)));
                            vlSelf->__Vfunc_leading_zero32__13452__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13452__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13452__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13452__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13452__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13452__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13452__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13452__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13452__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13482__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13482__part 
                            = vlSelf->__Vfunc_leading_zero32__13482__value;
                        vlSelf->__Vfunc_leading_zero32__13482__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13482__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13482__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13482__count)));
                            vlSelf->__Vfunc_leading_zero32__13482__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13482__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13482__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13482__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13482__count)));
                            vlSelf->__Vfunc_leading_zero32__13482__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13482__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13482__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13482__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13482__count)));
                            vlSelf->__Vfunc_leading_zero32__13482__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13482__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13482__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13482__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13482__count)));
                            vlSelf->__Vfunc_leading_zero32__13482__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13482__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13482__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13482__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13482__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13482__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13482__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13482__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13482__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13488__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13488__part 
                            = vlSelf->__Vfunc_leading_zero32__13488__value;
                        vlSelf->__Vfunc_leading_zero32__13488__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13488__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13488__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13488__count)));
                            vlSelf->__Vfunc_leading_zero32__13488__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13488__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13488__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13488__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13488__count)));
                            vlSelf->__Vfunc_leading_zero32__13488__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13488__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13488__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13488__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13488__count)));
                            vlSelf->__Vfunc_leading_zero32__13488__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13488__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13488__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13488__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13488__count)));
                            vlSelf->__Vfunc_leading_zero32__13488__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13488__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13488__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13488__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13488__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13488__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13488__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13488__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13488__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13518__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13518__part 
                            = vlSelf->__Vfunc_leading_zero32__13518__value;
                        vlSelf->__Vfunc_leading_zero32__13518__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13518__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13518__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13518__count)));
                            vlSelf->__Vfunc_leading_zero32__13518__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13518__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13518__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13518__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13518__count)));
                            vlSelf->__Vfunc_leading_zero32__13518__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13518__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13518__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13518__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13518__count)));
                            vlSelf->__Vfunc_leading_zero32__13518__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13518__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13518__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13518__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13518__count)));
                            vlSelf->__Vfunc_leading_zero32__13518__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13518__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13518__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13518__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13518__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13518__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13518__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13518__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13518__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13524__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13524__part 
                            = vlSelf->__Vfunc_leading_zero32__13524__value;
                        vlSelf->__Vfunc_leading_zero32__13524__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13524__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13524__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13524__count)));
                            vlSelf->__Vfunc_leading_zero32__13524__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13524__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13524__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13524__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13524__count)));
                            vlSelf->__Vfunc_leading_zero32__13524__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13524__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13524__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13524__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13524__count)));
                            vlSelf->__Vfunc_leading_zero32__13524__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13524__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13524__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13524__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13524__count)));
                            vlSelf->__Vfunc_leading_zero32__13524__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13524__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13524__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13524__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13524__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13524__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13524__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13524__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13524__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13554__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13554__part 
                            = vlSelf->__Vfunc_leading_zero32__13554__value;
                        vlSelf->__Vfunc_leading_zero32__13554__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13554__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13554__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13554__count)));
                            vlSelf->__Vfunc_leading_zero32__13554__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13554__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13554__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13554__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13554__count)));
                            vlSelf->__Vfunc_leading_zero32__13554__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13554__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13554__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13554__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13554__count)));
                            vlSelf->__Vfunc_leading_zero32__13554__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13554__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13554__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13554__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13554__count)));
                            vlSelf->__Vfunc_leading_zero32__13554__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13554__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13554__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13554__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13554__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13554__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13554__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13554__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13554__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13560__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13560__part 
                            = vlSelf->__Vfunc_leading_zero32__13560__value;
                        vlSelf->__Vfunc_leading_zero32__13560__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13560__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13560__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13560__count)));
                            vlSelf->__Vfunc_leading_zero32__13560__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13560__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13560__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13560__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13560__count)));
                            vlSelf->__Vfunc_leading_zero32__13560__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13560__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13560__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13560__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13560__count)));
                            vlSelf->__Vfunc_leading_zero32__13560__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13560__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13560__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13560__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13560__count)));
                            vlSelf->__Vfunc_leading_zero32__13560__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13560__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13560__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13560__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13560__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13560__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13560__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13560__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13560__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13590__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13590__part 
                            = vlSelf->__Vfunc_leading_zero32__13590__value;
                        vlSelf->__Vfunc_leading_zero32__13590__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13590__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13590__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13590__count)));
                            vlSelf->__Vfunc_leading_zero32__13590__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13590__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13590__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13590__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13590__count)));
                            vlSelf->__Vfunc_leading_zero32__13590__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13590__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13590__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13590__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13590__count)));
                            vlSelf->__Vfunc_leading_zero32__13590__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13590__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13590__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13590__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13590__count)));
                            vlSelf->__Vfunc_leading_zero32__13590__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13590__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13590__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13590__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13590__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13590__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13590__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13590__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13590__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13596__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13596__part 
                            = vlSelf->__Vfunc_leading_zero32__13596__value;
                        vlSelf->__Vfunc_leading_zero32__13596__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13596__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13596__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13596__count)));
                            vlSelf->__Vfunc_leading_zero32__13596__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13596__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13596__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13596__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13596__count)));
                            vlSelf->__Vfunc_leading_zero32__13596__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13596__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13596__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13596__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13596__count)));
                            vlSelf->__Vfunc_leading_zero32__13596__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13596__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13596__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13596__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13596__count)));
                            vlSelf->__Vfunc_leading_zero32__13596__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13596__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13596__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13596__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13596__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13596__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13596__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13596__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13596__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13626__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13626__part 
                            = vlSelf->__Vfunc_leading_zero32__13626__value;
                        vlSelf->__Vfunc_leading_zero32__13626__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13626__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13626__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13626__count)));
                            vlSelf->__Vfunc_leading_zero32__13626__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13626__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13626__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13626__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13626__count)));
                            vlSelf->__Vfunc_leading_zero32__13626__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13626__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13626__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13626__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13626__count)));
                            vlSelf->__Vfunc_leading_zero32__13626__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13626__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13626__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13626__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13626__count)));
                            vlSelf->__Vfunc_leading_zero32__13626__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13626__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13626__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13626__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13626__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13626__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13626__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13626__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13626__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13632__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13632__part 
                            = vlSelf->__Vfunc_leading_zero32__13632__value;
                        vlSelf->__Vfunc_leading_zero32__13632__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13632__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13632__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13632__count)));
                            vlSelf->__Vfunc_leading_zero32__13632__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13632__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13632__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13632__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13632__count)));
                            vlSelf->__Vfunc_leading_zero32__13632__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13632__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13632__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13632__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13632__count)));
                            vlSelf->__Vfunc_leading_zero32__13632__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13632__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13632__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13632__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13632__count)));
                            vlSelf->__Vfunc_leading_zero32__13632__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13632__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13632__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13632__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13632__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13632__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13632__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13632__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13632__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13662__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13662__part 
                            = vlSelf->__Vfunc_leading_zero32__13662__value;
                        vlSelf->__Vfunc_leading_zero32__13662__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13662__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13662__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13662__count)));
                            vlSelf->__Vfunc_leading_zero32__13662__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13662__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13662__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13662__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13662__count)));
                            vlSelf->__Vfunc_leading_zero32__13662__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13662__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13662__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13662__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13662__count)));
                            vlSelf->__Vfunc_leading_zero32__13662__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13662__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13662__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13662__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13662__count)));
                            vlSelf->__Vfunc_leading_zero32__13662__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13662__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13662__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13662__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13662__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13662__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13662__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13662__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13662__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13668__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13668__part 
                            = vlSelf->__Vfunc_leading_zero32__13668__value;
                        vlSelf->__Vfunc_leading_zero32__13668__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13668__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13668__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13668__count)));
                            vlSelf->__Vfunc_leading_zero32__13668__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13668__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13668__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13668__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13668__count)));
                            vlSelf->__Vfunc_leading_zero32__13668__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13668__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13668__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13668__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13668__count)));
                            vlSelf->__Vfunc_leading_zero32__13668__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13668__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13668__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13668__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13668__count)));
                            vlSelf->__Vfunc_leading_zero32__13668__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13668__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13668__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13668__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13668__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13668__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13668__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13668__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13668__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13698__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13698__part 
                            = vlSelf->__Vfunc_leading_zero32__13698__value;
                        vlSelf->__Vfunc_leading_zero32__13698__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13698__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13698__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13698__count)));
                            vlSelf->__Vfunc_leading_zero32__13698__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13698__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13698__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13698__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13698__count)));
                            vlSelf->__Vfunc_leading_zero32__13698__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13698__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13698__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13698__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13698__count)));
                            vlSelf->__Vfunc_leading_zero32__13698__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13698__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13698__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13698__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13698__count)));
                            vlSelf->__Vfunc_leading_zero32__13698__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13698__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13698__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13698__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13698__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13698__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13698__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13698__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13698__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13704__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13704__part 
                            = vlSelf->__Vfunc_leading_zero32__13704__value;
                        vlSelf->__Vfunc_leading_zero32__13704__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13704__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13704__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13704__count)));
                            vlSelf->__Vfunc_leading_zero32__13704__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13704__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13704__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13704__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13704__count)));
                            vlSelf->__Vfunc_leading_zero32__13704__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13704__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13704__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13704__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13704__count)));
                            vlSelf->__Vfunc_leading_zero32__13704__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13704__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13704__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13704__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13704__count)));
                            vlSelf->__Vfunc_leading_zero32__13704__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13704__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13704__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13704__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13704__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13704__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13704__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13704__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13704__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13734__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13734__part 
                            = vlSelf->__Vfunc_leading_zero32__13734__value;
                        vlSelf->__Vfunc_leading_zero32__13734__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13734__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13734__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13734__count)));
                            vlSelf->__Vfunc_leading_zero32__13734__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13734__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13734__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13734__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13734__count)));
                            vlSelf->__Vfunc_leading_zero32__13734__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13734__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13734__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13734__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13734__count)));
                            vlSelf->__Vfunc_leading_zero32__13734__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13734__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13734__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13734__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13734__count)));
                            vlSelf->__Vfunc_leading_zero32__13734__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13734__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13734__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13734__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13734__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13734__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13734__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13734__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13734__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13740__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13740__part 
                            = vlSelf->__Vfunc_leading_zero32__13740__value;
                        vlSelf->__Vfunc_leading_zero32__13740__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13740__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13740__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13740__count)));
                            vlSelf->__Vfunc_leading_zero32__13740__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13740__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13740__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13740__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13740__count)));
                            vlSelf->__Vfunc_leading_zero32__13740__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13740__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13740__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13740__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13740__count)));
                            vlSelf->__Vfunc_leading_zero32__13740__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13740__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13740__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13740__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13740__count)));
                            vlSelf->__Vfunc_leading_zero32__13740__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13740__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13740__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13740__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13740__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13740__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13740__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13740__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13740__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13770__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13770__part 
                            = vlSelf->__Vfunc_leading_zero32__13770__value;
                        vlSelf->__Vfunc_leading_zero32__13770__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13770__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13770__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13770__count)));
                            vlSelf->__Vfunc_leading_zero32__13770__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13770__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13770__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13770__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13770__count)));
                            vlSelf->__Vfunc_leading_zero32__13770__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13770__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13770__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13770__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13770__count)));
                            vlSelf->__Vfunc_leading_zero32__13770__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13770__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13770__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13770__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13770__count)));
                            vlSelf->__Vfunc_leading_zero32__13770__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13770__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13770__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13770__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13770__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13770__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13770__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13770__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13770__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13776__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13776__part 
                            = vlSelf->__Vfunc_leading_zero32__13776__value;
                        vlSelf->__Vfunc_leading_zero32__13776__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13776__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13776__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13776__count)));
                            vlSelf->__Vfunc_leading_zero32__13776__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13776__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13776__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13776__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13776__count)));
                            vlSelf->__Vfunc_leading_zero32__13776__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13776__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13776__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13776__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13776__count)));
                            vlSelf->__Vfunc_leading_zero32__13776__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13776__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13776__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13776__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13776__count)));
                            vlSelf->__Vfunc_leading_zero32__13776__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13776__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13776__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13776__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13776__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13776__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13776__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13776__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13776__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13806__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13806__part 
                            = vlSelf->__Vfunc_leading_zero32__13806__value;
                        vlSelf->__Vfunc_leading_zero32__13806__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13806__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13806__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13806__count)));
                            vlSelf->__Vfunc_leading_zero32__13806__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13806__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13806__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13806__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13806__count)));
                            vlSelf->__Vfunc_leading_zero32__13806__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13806__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13806__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13806__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13806__count)));
                            vlSelf->__Vfunc_leading_zero32__13806__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13806__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13806__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13806__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13806__count)));
                            vlSelf->__Vfunc_leading_zero32__13806__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13806__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13806__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13806__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13806__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13806__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13806__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13806__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13806__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13812__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13812__part 
                            = vlSelf->__Vfunc_leading_zero32__13812__value;
                        vlSelf->__Vfunc_leading_zero32__13812__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13812__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13812__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13812__count)));
                            vlSelf->__Vfunc_leading_zero32__13812__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13812__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13812__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13812__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13812__count)));
                            vlSelf->__Vfunc_leading_zero32__13812__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13812__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13812__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13812__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13812__count)));
                            vlSelf->__Vfunc_leading_zero32__13812__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13812__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13812__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13812__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13812__count)));
                            vlSelf->__Vfunc_leading_zero32__13812__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13812__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13812__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13812__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13812__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13812__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13812__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13812__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13812__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13842__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13842__part 
                            = vlSelf->__Vfunc_leading_zero32__13842__value;
                        vlSelf->__Vfunc_leading_zero32__13842__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13842__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13842__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13842__count)));
                            vlSelf->__Vfunc_leading_zero32__13842__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13842__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13842__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13842__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13842__count)));
                            vlSelf->__Vfunc_leading_zero32__13842__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13842__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13842__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13842__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13842__count)));
                            vlSelf->__Vfunc_leading_zero32__13842__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13842__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13842__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13842__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13842__count)));
                            vlSelf->__Vfunc_leading_zero32__13842__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13842__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13842__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13842__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13842__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13842__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13842__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13842__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13842__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13848__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13848__part 
                            = vlSelf->__Vfunc_leading_zero32__13848__value;
                        vlSelf->__Vfunc_leading_zero32__13848__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13848__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13848__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13848__count)));
                            vlSelf->__Vfunc_leading_zero32__13848__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13848__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13848__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13848__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13848__count)));
                            vlSelf->__Vfunc_leading_zero32__13848__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13848__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13848__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13848__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13848__count)));
                            vlSelf->__Vfunc_leading_zero32__13848__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13848__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13848__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13848__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13848__count)));
                            vlSelf->__Vfunc_leading_zero32__13848__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13848__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13848__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13848__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13848__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13848__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13848__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13848__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13848__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13878__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13878__part 
                            = vlSelf->__Vfunc_leading_zero32__13878__value;
                        vlSelf->__Vfunc_leading_zero32__13878__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13878__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13878__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13878__count)));
                            vlSelf->__Vfunc_leading_zero32__13878__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13878__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13878__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13878__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13878__count)));
                            vlSelf->__Vfunc_leading_zero32__13878__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13878__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13878__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13878__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13878__count)));
                            vlSelf->__Vfunc_leading_zero32__13878__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13878__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13878__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13878__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13878__count)));
                            vlSelf->__Vfunc_leading_zero32__13878__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13878__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13878__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13878__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13878__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13878__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13878__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13878__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13878__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13884__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13884__part 
                            = vlSelf->__Vfunc_leading_zero32__13884__value;
                        vlSelf->__Vfunc_leading_zero32__13884__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13884__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13884__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13884__count)));
                            vlSelf->__Vfunc_leading_zero32__13884__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13884__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13884__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13884__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13884__count)));
                            vlSelf->__Vfunc_leading_zero32__13884__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13884__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13884__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13884__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13884__count)));
                            vlSelf->__Vfunc_leading_zero32__13884__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13884__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13884__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13884__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13884__count)));
                            vlSelf->__Vfunc_leading_zero32__13884__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13884__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13884__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13884__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13884__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13884__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13884__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13884__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13884__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13914__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13914__part 
                            = vlSelf->__Vfunc_leading_zero32__13914__value;
                        vlSelf->__Vfunc_leading_zero32__13914__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13914__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13914__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13914__count)));
                            vlSelf->__Vfunc_leading_zero32__13914__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13914__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13914__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13914__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13914__count)));
                            vlSelf->__Vfunc_leading_zero32__13914__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13914__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13914__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13914__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13914__count)));
                            vlSelf->__Vfunc_leading_zero32__13914__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13914__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13914__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13914__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13914__count)));
                            vlSelf->__Vfunc_leading_zero32__13914__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13914__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13914__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13914__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13914__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13914__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13914__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13914__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13914__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13920__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13920__part 
                            = vlSelf->__Vfunc_leading_zero32__13920__value;
                        vlSelf->__Vfunc_leading_zero32__13920__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13920__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13920__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13920__count)));
                            vlSelf->__Vfunc_leading_zero32__13920__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13920__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13920__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13920__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13920__count)));
                            vlSelf->__Vfunc_leading_zero32__13920__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13920__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13920__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13920__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13920__count)));
                            vlSelf->__Vfunc_leading_zero32__13920__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13920__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13920__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13920__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13920__count)));
                            vlSelf->__Vfunc_leading_zero32__13920__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13920__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13920__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13920__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13920__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13920__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13920__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13920__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13920__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13950__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13950__part 
                            = vlSelf->__Vfunc_leading_zero32__13950__value;
                        vlSelf->__Vfunc_leading_zero32__13950__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13950__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13950__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13950__count)));
                            vlSelf->__Vfunc_leading_zero32__13950__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13950__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13950__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13950__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13950__count)));
                            vlSelf->__Vfunc_leading_zero32__13950__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13950__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13950__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13950__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13950__count)));
                            vlSelf->__Vfunc_leading_zero32__13950__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13950__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13950__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13950__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13950__count)));
                            vlSelf->__Vfunc_leading_zero32__13950__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13950__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13950__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13950__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13950__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13950__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13950__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13950__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13950__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13956__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13956__part 
                            = vlSelf->__Vfunc_leading_zero32__13956__value;
                        vlSelf->__Vfunc_leading_zero32__13956__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13956__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13956__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13956__count)));
                            vlSelf->__Vfunc_leading_zero32__13956__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13956__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13956__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13956__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13956__count)));
                            vlSelf->__Vfunc_leading_zero32__13956__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13956__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13956__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13956__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13956__count)));
                            vlSelf->__Vfunc_leading_zero32__13956__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13956__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13956__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13956__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13956__count)));
                            vlSelf->__Vfunc_leading_zero32__13956__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13956__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13956__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13956__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13956__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13956__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13956__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13956__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13956__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13986__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13986__part 
                            = vlSelf->__Vfunc_leading_zero32__13986__value;
                        vlSelf->__Vfunc_leading_zero32__13986__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13986__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13986__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13986__count)));
                            vlSelf->__Vfunc_leading_zero32__13986__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13986__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13986__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13986__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13986__count)));
                            vlSelf->__Vfunc_leading_zero32__13986__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13986__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13986__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13986__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13986__count)));
                            vlSelf->__Vfunc_leading_zero32__13986__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13986__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13986__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13986__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13986__count)));
                            vlSelf->__Vfunc_leading_zero32__13986__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13986__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13986__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13986__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13986__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13986__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13986__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13986__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13986__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13992__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__13992__part 
                            = vlSelf->__Vfunc_leading_zero32__13992__value;
                        vlSelf->__Vfunc_leading_zero32__13992__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13992__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13992__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13992__count)));
                            vlSelf->__Vfunc_leading_zero32__13992__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13992__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13992__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13992__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13992__count)));
                            vlSelf->__Vfunc_leading_zero32__13992__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13992__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13992__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13992__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13992__count)));
                            vlSelf->__Vfunc_leading_zero32__13992__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13992__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13992__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13992__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13992__count)));
                            vlSelf->__Vfunc_leading_zero32__13992__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13992__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13992__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13992__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13992__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13992__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13992__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13992__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13992__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14022__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__14022__part 
                            = vlSelf->__Vfunc_leading_zero32__14022__value;
                        vlSelf->__Vfunc_leading_zero32__14022__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14022__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14022__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14022__count)));
                            vlSelf->__Vfunc_leading_zero32__14022__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14022__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14022__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14022__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14022__count)));
                            vlSelf->__Vfunc_leading_zero32__14022__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14022__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14022__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14022__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14022__count)));
                            vlSelf->__Vfunc_leading_zero32__14022__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14022__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14022__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14022__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14022__count)));
                            vlSelf->__Vfunc_leading_zero32__14022__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14022__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14022__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14022__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14022__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14022__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14022__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14022__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14022__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14028__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__14028__part 
                            = vlSelf->__Vfunc_leading_zero32__14028__value;
                        vlSelf->__Vfunc_leading_zero32__14028__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14028__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14028__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14028__count)));
                            vlSelf->__Vfunc_leading_zero32__14028__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14028__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14028__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14028__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14028__count)));
                            vlSelf->__Vfunc_leading_zero32__14028__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14028__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14028__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14028__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14028__count)));
                            vlSelf->__Vfunc_leading_zero32__14028__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14028__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14028__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14028__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14028__count)));
                            vlSelf->__Vfunc_leading_zero32__14028__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14028__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14028__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14028__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14028__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14028__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14028__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14028__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14028__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14058__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__14058__part 
                            = vlSelf->__Vfunc_leading_zero32__14058__value;
                        vlSelf->__Vfunc_leading_zero32__14058__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14058__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14058__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14058__count)));
                            vlSelf->__Vfunc_leading_zero32__14058__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14058__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14058__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14058__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14058__count)));
                            vlSelf->__Vfunc_leading_zero32__14058__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14058__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14058__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14058__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14058__count)));
                            vlSelf->__Vfunc_leading_zero32__14058__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14058__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14058__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14058__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14058__count)));
                            vlSelf->__Vfunc_leading_zero32__14058__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14058__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14058__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14058__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14058__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14058__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14058__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14058__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14058__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14064__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__14064__part 
                            = vlSelf->__Vfunc_leading_zero32__14064__value;
                        vlSelf->__Vfunc_leading_zero32__14064__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14064__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14064__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14064__count)));
                            vlSelf->__Vfunc_leading_zero32__14064__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14064__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14064__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14064__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14064__count)));
                            vlSelf->__Vfunc_leading_zero32__14064__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14064__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14064__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14064__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14064__count)));
                            vlSelf->__Vfunc_leading_zero32__14064__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14064__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14064__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14064__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14064__count)));
                            vlSelf->__Vfunc_leading_zero32__14064__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14064__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14064__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14064__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14064__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14064__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14064__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14064__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14064__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14094__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__14094__part 
                            = vlSelf->__Vfunc_leading_zero32__14094__value;
                        vlSelf->__Vfunc_leading_zero32__14094__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14094__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14094__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14094__count)));
                            vlSelf->__Vfunc_leading_zero32__14094__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14094__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14094__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14094__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14094__count)));
                            vlSelf->__Vfunc_leading_zero32__14094__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14094__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14094__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14094__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14094__count)));
                            vlSelf->__Vfunc_leading_zero32__14094__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14094__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14094__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14094__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14094__count)));
                            vlSelf->__Vfunc_leading_zero32__14094__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14094__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14094__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14094__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14094__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14094__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14094__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14094__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14094__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14100__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__14100__part 
                            = vlSelf->__Vfunc_leading_zero32__14100__value;
                        vlSelf->__Vfunc_leading_zero32__14100__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14100__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14100__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14100__count)));
                            vlSelf->__Vfunc_leading_zero32__14100__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14100__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14100__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14100__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14100__count)));
                            vlSelf->__Vfunc_leading_zero32__14100__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14100__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14100__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14100__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14100__count)));
                            vlSelf->__Vfunc_leading_zero32__14100__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14100__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14100__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14100__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14100__count)));
                            vlSelf->__Vfunc_leading_zero32__14100__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14100__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14100__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14100__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14100__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14100__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14100__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14100__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14100__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14130__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__14130__part 
                            = vlSelf->__Vfunc_leading_zero32__14130__value;
                        vlSelf->__Vfunc_leading_zero32__14130__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14130__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14130__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14130__count)));
                            vlSelf->__Vfunc_leading_zero32__14130__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14130__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14130__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14130__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14130__count)));
                            vlSelf->__Vfunc_leading_zero32__14130__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14130__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14130__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14130__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14130__count)));
                            vlSelf->__Vfunc_leading_zero32__14130__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14130__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14130__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14130__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14130__count)));
                            vlSelf->__Vfunc_leading_zero32__14130__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14130__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14130__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14130__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14130__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14130__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14130__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14130__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14130__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14136__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__14136__part 
                            = vlSelf->__Vfunc_leading_zero32__14136__value;
                        vlSelf->__Vfunc_leading_zero32__14136__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14136__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14136__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14136__count)));
                            vlSelf->__Vfunc_leading_zero32__14136__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14136__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14136__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14136__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14136__count)));
                            vlSelf->__Vfunc_leading_zero32__14136__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14136__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14136__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14136__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14136__count)));
                            vlSelf->__Vfunc_leading_zero32__14136__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14136__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14136__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14136__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14136__count)));
                            vlSelf->__Vfunc_leading_zero32__14136__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14136__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14136__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14136__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14136__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14136__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14136__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14136__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14136__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14166__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__14166__part 
                            = vlSelf->__Vfunc_leading_zero32__14166__value;
                        vlSelf->__Vfunc_leading_zero32__14166__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14166__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14166__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14166__count)));
                            vlSelf->__Vfunc_leading_zero32__14166__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14166__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14166__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14166__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14166__count)));
                            vlSelf->__Vfunc_leading_zero32__14166__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14166__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14166__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14166__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14166__count)));
                            vlSelf->__Vfunc_leading_zero32__14166__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14166__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14166__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14166__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14166__count)));
                            vlSelf->__Vfunc_leading_zero32__14166__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14166__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14166__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14166__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14166__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14166__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14166__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14166__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14166__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14172__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__14172__part 
                            = vlSelf->__Vfunc_leading_zero32__14172__value;
                        vlSelf->__Vfunc_leading_zero32__14172__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14172__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14172__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14172__count)));
                            vlSelf->__Vfunc_leading_zero32__14172__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14172__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14172__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14172__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14172__count)));
                            vlSelf->__Vfunc_leading_zero32__14172__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14172__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14172__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14172__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14172__count)));
                            vlSelf->__Vfunc_leading_zero32__14172__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14172__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14172__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14172__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14172__count)));
                            vlSelf->__Vfunc_leading_zero32__14172__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14172__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14172__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14172__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14172__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14172__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14172__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14172__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14172__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14202__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__14202__part 
                            = vlSelf->__Vfunc_leading_zero32__14202__value;
                        vlSelf->__Vfunc_leading_zero32__14202__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14202__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14202__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14202__count)));
                            vlSelf->__Vfunc_leading_zero32__14202__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14202__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14202__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14202__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14202__count)));
                            vlSelf->__Vfunc_leading_zero32__14202__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14202__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14202__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14202__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14202__count)));
                            vlSelf->__Vfunc_leading_zero32__14202__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14202__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14202__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14202__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14202__count)));
                            vlSelf->__Vfunc_leading_zero32__14202__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14202__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14202__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14202__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14202__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14202__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14202__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14202__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14202__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14208__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__14208__part 
                            = vlSelf->__Vfunc_leading_zero32__14208__value;
                        vlSelf->__Vfunc_leading_zero32__14208__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14208__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14208__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14208__count)));
                            vlSelf->__Vfunc_leading_zero32__14208__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14208__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14208__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14208__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14208__count)));
                            vlSelf->__Vfunc_leading_zero32__14208__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14208__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14208__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14208__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14208__count)));
                            vlSelf->__Vfunc_leading_zero32__14208__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14208__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14208__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14208__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14208__count)));
                            vlSelf->__Vfunc_leading_zero32__14208__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14208__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14208__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14208__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14208__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14208__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14208__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14208__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14208__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14238__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__14238__part 
                            = vlSelf->__Vfunc_leading_zero32__14238__value;
                        vlSelf->__Vfunc_leading_zero32__14238__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14238__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14238__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14238__count)));
                            vlSelf->__Vfunc_leading_zero32__14238__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14238__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14238__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14238__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14238__count)));
                            vlSelf->__Vfunc_leading_zero32__14238__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14238__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14238__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14238__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14238__count)));
                            vlSelf->__Vfunc_leading_zero32__14238__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14238__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14238__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14238__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14238__count)));
                            vlSelf->__Vfunc_leading_zero32__14238__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14238__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14238__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14238__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14238__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14238__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14238__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14238__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14238__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14244__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__14244__part 
                            = vlSelf->__Vfunc_leading_zero32__14244__value;
                        vlSelf->__Vfunc_leading_zero32__14244__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14244__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14244__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14244__count)));
                            vlSelf->__Vfunc_leading_zero32__14244__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14244__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14244__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14244__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14244__count)));
                            vlSelf->__Vfunc_leading_zero32__14244__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14244__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14244__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14244__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14244__count)));
                            vlSelf->__Vfunc_leading_zero32__14244__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14244__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14244__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14244__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14244__count)));
                            vlSelf->__Vfunc_leading_zero32__14244__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14244__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14244__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14244__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14244__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14244__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14244__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14244__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14244__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11963__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11963__part 
                            = vlSelf->__Vfunc_leading_zero32__11963__value;
                        vlSelf->__Vfunc_leading_zero32__11963__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11963__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11963__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11963__count)));
                            vlSelf->__Vfunc_leading_zero32__11963__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11963__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11963__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11963__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11963__count)));
                            vlSelf->__Vfunc_leading_zero32__11963__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11963__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11963__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11963__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11963__count)));
                            vlSelf->__Vfunc_leading_zero32__11963__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11963__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11963__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11963__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11963__count)));
                            vlSelf->__Vfunc_leading_zero32__11963__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11963__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11963__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11963__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11963__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11963__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11963__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11963__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11963__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11975__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11975__part 
                            = vlSelf->__Vfunc_leading_zero32__11975__value;
                        vlSelf->__Vfunc_leading_zero32__11975__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11975__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11975__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11975__count)));
                            vlSelf->__Vfunc_leading_zero32__11975__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11975__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11975__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11975__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11975__count)));
                            vlSelf->__Vfunc_leading_zero32__11975__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11975__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11975__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11975__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11975__count)));
                            vlSelf->__Vfunc_leading_zero32__11975__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11975__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11975__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11975__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11975__count)));
                            vlSelf->__Vfunc_leading_zero32__11975__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11975__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11975__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11975__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11975__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11975__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11975__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11975__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11975__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11969__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11969__part 
                            = vlSelf->__Vfunc_leading_zero32__11969__value;
                        vlSelf->__Vfunc_leading_zero32__11969__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11969__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11969__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11969__count)));
                            vlSelf->__Vfunc_leading_zero32__11969__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11969__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11969__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11969__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11969__count)));
                            vlSelf->__Vfunc_leading_zero32__11969__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11969__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11969__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11969__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11969__count)));
                            vlSelf->__Vfunc_leading_zero32__11969__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11969__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11969__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11969__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11969__count)));
                            vlSelf->__Vfunc_leading_zero32__11969__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11969__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11969__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11969__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11969__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11969__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11969__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11969__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11969__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11981__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11981__part 
                            = vlSelf->__Vfunc_leading_zero32__11981__value;
                        vlSelf->__Vfunc_leading_zero32__11981__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11981__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11981__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11981__count)));
                            vlSelf->__Vfunc_leading_zero32__11981__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11981__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11981__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11981__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11981__count)));
                            vlSelf->__Vfunc_leading_zero32__11981__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11981__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11981__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11981__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11981__count)));
                            vlSelf->__Vfunc_leading_zero32__11981__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11981__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11981__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11981__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11981__count)));
                            vlSelf->__Vfunc_leading_zero32__11981__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11981__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11981__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11981__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11981__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11981__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11981__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11981__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11981__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11999__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11999__part 
                            = vlSelf->__Vfunc_leading_zero32__11999__value;
                        vlSelf->__Vfunc_leading_zero32__11999__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11999__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11999__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11999__count)));
                            vlSelf->__Vfunc_leading_zero32__11999__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11999__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11999__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11999__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11999__count)));
                            vlSelf->__Vfunc_leading_zero32__11999__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11999__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11999__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11999__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11999__count)));
                            vlSelf->__Vfunc_leading_zero32__11999__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11999__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11999__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11999__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11999__count)));
                            vlSelf->__Vfunc_leading_zero32__11999__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11999__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11999__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11999__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11999__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11999__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11999__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11999__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11999__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12011__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12011__part 
                            = vlSelf->__Vfunc_leading_zero32__12011__value;
                        vlSelf->__Vfunc_leading_zero32__12011__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12011__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12011__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12011__count)));
                            vlSelf->__Vfunc_leading_zero32__12011__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12011__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12011__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12011__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12011__count)));
                            vlSelf->__Vfunc_leading_zero32__12011__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12011__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12011__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12011__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12011__count)));
                            vlSelf->__Vfunc_leading_zero32__12011__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12011__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12011__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12011__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12011__count)));
                            vlSelf->__Vfunc_leading_zero32__12011__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12011__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12011__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12011__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12011__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12011__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12011__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12011__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12011__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12005__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12005__part 
                            = vlSelf->__Vfunc_leading_zero32__12005__value;
                        vlSelf->__Vfunc_leading_zero32__12005__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12005__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12005__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12005__count)));
                            vlSelf->__Vfunc_leading_zero32__12005__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12005__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12005__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12005__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12005__count)));
                            vlSelf->__Vfunc_leading_zero32__12005__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12005__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12005__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12005__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12005__count)));
                            vlSelf->__Vfunc_leading_zero32__12005__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12005__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12005__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12005__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12005__count)));
                            vlSelf->__Vfunc_leading_zero32__12005__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12005__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12005__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12005__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12005__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12005__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12005__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12005__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12005__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12017__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12017__part 
                            = vlSelf->__Vfunc_leading_zero32__12017__value;
                        vlSelf->__Vfunc_leading_zero32__12017__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12017__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12017__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12017__count)));
                            vlSelf->__Vfunc_leading_zero32__12017__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12017__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12017__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12017__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12017__count)));
                            vlSelf->__Vfunc_leading_zero32__12017__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12017__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12017__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12017__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12017__count)));
                            vlSelf->__Vfunc_leading_zero32__12017__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12017__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12017__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12017__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12017__count)));
                            vlSelf->__Vfunc_leading_zero32__12017__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12017__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12017__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12017__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12017__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12017__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12017__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12017__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12017__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12035__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12035__part 
                            = vlSelf->__Vfunc_leading_zero32__12035__value;
                        vlSelf->__Vfunc_leading_zero32__12035__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12035__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12035__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12035__count)));
                            vlSelf->__Vfunc_leading_zero32__12035__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12035__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12035__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12035__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12035__count)));
                            vlSelf->__Vfunc_leading_zero32__12035__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12035__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12035__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12035__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12035__count)));
                            vlSelf->__Vfunc_leading_zero32__12035__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12035__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12035__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12035__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12035__count)));
                            vlSelf->__Vfunc_leading_zero32__12035__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12035__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12035__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12035__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12035__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12035__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12035__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12035__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12035__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12047__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12047__part 
                            = vlSelf->__Vfunc_leading_zero32__12047__value;
                        vlSelf->__Vfunc_leading_zero32__12047__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12047__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12047__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12047__count)));
                            vlSelf->__Vfunc_leading_zero32__12047__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12047__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12047__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12047__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12047__count)));
                            vlSelf->__Vfunc_leading_zero32__12047__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12047__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12047__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12047__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12047__count)));
                            vlSelf->__Vfunc_leading_zero32__12047__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12047__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12047__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12047__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12047__count)));
                            vlSelf->__Vfunc_leading_zero32__12047__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12047__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12047__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12047__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12047__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12047__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12047__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12047__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12047__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12041__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12041__part 
                            = vlSelf->__Vfunc_leading_zero32__12041__value;
                        vlSelf->__Vfunc_leading_zero32__12041__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12041__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12041__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12041__count)));
                            vlSelf->__Vfunc_leading_zero32__12041__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12041__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12041__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12041__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12041__count)));
                            vlSelf->__Vfunc_leading_zero32__12041__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12041__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12041__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12041__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12041__count)));
                            vlSelf->__Vfunc_leading_zero32__12041__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12041__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12041__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12041__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12041__count)));
                            vlSelf->__Vfunc_leading_zero32__12041__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12041__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12041__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12041__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12041__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12041__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12041__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12041__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12041__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12053__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12053__part 
                            = vlSelf->__Vfunc_leading_zero32__12053__value;
                        vlSelf->__Vfunc_leading_zero32__12053__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12053__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12053__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12053__count)));
                            vlSelf->__Vfunc_leading_zero32__12053__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12053__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12053__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12053__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12053__count)));
                            vlSelf->__Vfunc_leading_zero32__12053__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12053__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12053__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12053__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12053__count)));
                            vlSelf->__Vfunc_leading_zero32__12053__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12053__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12053__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12053__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12053__count)));
                            vlSelf->__Vfunc_leading_zero32__12053__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12053__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12053__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12053__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12053__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12053__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12053__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12053__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12053__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12071__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12071__part 
                            = vlSelf->__Vfunc_leading_zero32__12071__value;
                        vlSelf->__Vfunc_leading_zero32__12071__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12071__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12071__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12071__count)));
                            vlSelf->__Vfunc_leading_zero32__12071__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12071__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12071__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12071__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12071__count)));
                            vlSelf->__Vfunc_leading_zero32__12071__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12071__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12071__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12071__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12071__count)));
                            vlSelf->__Vfunc_leading_zero32__12071__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12071__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12071__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12071__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12071__count)));
                            vlSelf->__Vfunc_leading_zero32__12071__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12071__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12071__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12071__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12071__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12071__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12071__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12071__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12071__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12083__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12083__part 
                            = vlSelf->__Vfunc_leading_zero32__12083__value;
                        vlSelf->__Vfunc_leading_zero32__12083__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12083__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12083__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12083__count)));
                            vlSelf->__Vfunc_leading_zero32__12083__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12083__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12083__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12083__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12083__count)));
                            vlSelf->__Vfunc_leading_zero32__12083__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12083__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12083__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12083__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12083__count)));
                            vlSelf->__Vfunc_leading_zero32__12083__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12083__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12083__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12083__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12083__count)));
                            vlSelf->__Vfunc_leading_zero32__12083__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12083__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12083__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12083__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12083__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12083__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12083__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12083__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12083__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12077__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12077__part 
                            = vlSelf->__Vfunc_leading_zero32__12077__value;
                        vlSelf->__Vfunc_leading_zero32__12077__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12077__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12077__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12077__count)));
                            vlSelf->__Vfunc_leading_zero32__12077__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12077__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12077__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12077__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12077__count)));
                            vlSelf->__Vfunc_leading_zero32__12077__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12077__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12077__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12077__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12077__count)));
                            vlSelf->__Vfunc_leading_zero32__12077__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12077__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12077__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12077__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12077__count)));
                            vlSelf->__Vfunc_leading_zero32__12077__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12077__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12077__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12077__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12077__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12077__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12077__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12077__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12077__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12089__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12089__part 
                            = vlSelf->__Vfunc_leading_zero32__12089__value;
                        vlSelf->__Vfunc_leading_zero32__12089__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12089__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12089__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12089__count)));
                            vlSelf->__Vfunc_leading_zero32__12089__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12089__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12089__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12089__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12089__count)));
                            vlSelf->__Vfunc_leading_zero32__12089__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12089__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12089__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12089__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12089__count)));
                            vlSelf->__Vfunc_leading_zero32__12089__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12089__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12089__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12089__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12089__count)));
                            vlSelf->__Vfunc_leading_zero32__12089__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12089__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12089__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12089__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12089__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12089__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12089__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12089__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12089__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12107__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12107__part 
                            = vlSelf->__Vfunc_leading_zero32__12107__value;
                        vlSelf->__Vfunc_leading_zero32__12107__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12107__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12107__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12107__count)));
                            vlSelf->__Vfunc_leading_zero32__12107__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12107__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12107__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12107__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12107__count)));
                            vlSelf->__Vfunc_leading_zero32__12107__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12107__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12107__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12107__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12107__count)));
                            vlSelf->__Vfunc_leading_zero32__12107__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12107__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12107__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12107__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12107__count)));
                            vlSelf->__Vfunc_leading_zero32__12107__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12107__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12107__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12107__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12107__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12107__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12107__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12107__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12107__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12119__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12119__part 
                            = vlSelf->__Vfunc_leading_zero32__12119__value;
                        vlSelf->__Vfunc_leading_zero32__12119__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12119__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12119__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12119__count)));
                            vlSelf->__Vfunc_leading_zero32__12119__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12119__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12119__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12119__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12119__count)));
                            vlSelf->__Vfunc_leading_zero32__12119__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12119__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12119__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12119__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12119__count)));
                            vlSelf->__Vfunc_leading_zero32__12119__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12119__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12119__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12119__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12119__count)));
                            vlSelf->__Vfunc_leading_zero32__12119__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12119__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12119__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12119__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12119__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12119__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12119__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12119__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12119__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12113__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12113__part 
                            = vlSelf->__Vfunc_leading_zero32__12113__value;
                        vlSelf->__Vfunc_leading_zero32__12113__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12113__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12113__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12113__count)));
                            vlSelf->__Vfunc_leading_zero32__12113__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12113__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12113__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12113__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12113__count)));
                            vlSelf->__Vfunc_leading_zero32__12113__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12113__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12113__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12113__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12113__count)));
                            vlSelf->__Vfunc_leading_zero32__12113__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12113__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12113__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12113__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12113__count)));
                            vlSelf->__Vfunc_leading_zero32__12113__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12113__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12113__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12113__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12113__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12113__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12113__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12113__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12113__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12125__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12125__part 
                            = vlSelf->__Vfunc_leading_zero32__12125__value;
                        vlSelf->__Vfunc_leading_zero32__12125__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12125__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12125__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12125__count)));
                            vlSelf->__Vfunc_leading_zero32__12125__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12125__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12125__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12125__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12125__count)));
                            vlSelf->__Vfunc_leading_zero32__12125__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12125__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12125__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12125__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12125__count)));
                            vlSelf->__Vfunc_leading_zero32__12125__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12125__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12125__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12125__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12125__count)));
                            vlSelf->__Vfunc_leading_zero32__12125__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12125__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12125__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12125__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12125__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12125__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12125__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12125__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12125__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12143__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12143__part 
                            = vlSelf->__Vfunc_leading_zero32__12143__value;
                        vlSelf->__Vfunc_leading_zero32__12143__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12143__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12143__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12143__count)));
                            vlSelf->__Vfunc_leading_zero32__12143__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12143__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12143__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12143__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12143__count)));
                            vlSelf->__Vfunc_leading_zero32__12143__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12143__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12143__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12143__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12143__count)));
                            vlSelf->__Vfunc_leading_zero32__12143__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12143__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12143__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12143__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12143__count)));
                            vlSelf->__Vfunc_leading_zero32__12143__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12143__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12143__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12143__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12143__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12143__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12143__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12143__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12143__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12155__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12155__part 
                            = vlSelf->__Vfunc_leading_zero32__12155__value;
                        vlSelf->__Vfunc_leading_zero32__12155__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12155__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12155__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12155__count)));
                            vlSelf->__Vfunc_leading_zero32__12155__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12155__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12155__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12155__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12155__count)));
                            vlSelf->__Vfunc_leading_zero32__12155__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12155__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12155__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12155__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12155__count)));
                            vlSelf->__Vfunc_leading_zero32__12155__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12155__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12155__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12155__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12155__count)));
                            vlSelf->__Vfunc_leading_zero32__12155__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12155__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12155__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12155__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12155__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12155__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12155__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12155__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12155__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12149__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12149__part 
                            = vlSelf->__Vfunc_leading_zero32__12149__value;
                        vlSelf->__Vfunc_leading_zero32__12149__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12149__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12149__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12149__count)));
                            vlSelf->__Vfunc_leading_zero32__12149__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12149__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12149__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12149__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12149__count)));
                            vlSelf->__Vfunc_leading_zero32__12149__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12149__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12149__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12149__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12149__count)));
                            vlSelf->__Vfunc_leading_zero32__12149__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12149__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12149__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12149__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12149__count)));
                            vlSelf->__Vfunc_leading_zero32__12149__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12149__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12149__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12149__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12149__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12149__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12149__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12149__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12149__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12161__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12161__part 
                            = vlSelf->__Vfunc_leading_zero32__12161__value;
                        vlSelf->__Vfunc_leading_zero32__12161__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12161__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12161__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12161__count)));
                            vlSelf->__Vfunc_leading_zero32__12161__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12161__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12161__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12161__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12161__count)));
                            vlSelf->__Vfunc_leading_zero32__12161__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12161__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12161__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12161__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12161__count)));
                            vlSelf->__Vfunc_leading_zero32__12161__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12161__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12161__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12161__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12161__count)));
                            vlSelf->__Vfunc_leading_zero32__12161__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12161__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12161__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12161__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12161__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12161__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12161__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12161__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12161__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12179__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12179__part 
                            = vlSelf->__Vfunc_leading_zero32__12179__value;
                        vlSelf->__Vfunc_leading_zero32__12179__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12179__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12179__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12179__count)));
                            vlSelf->__Vfunc_leading_zero32__12179__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12179__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12179__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12179__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12179__count)));
                            vlSelf->__Vfunc_leading_zero32__12179__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12179__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12179__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12179__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12179__count)));
                            vlSelf->__Vfunc_leading_zero32__12179__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12179__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12179__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12179__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12179__count)));
                            vlSelf->__Vfunc_leading_zero32__12179__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12179__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12179__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12179__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12179__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12179__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12179__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12179__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12179__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12191__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12191__part 
                            = vlSelf->__Vfunc_leading_zero32__12191__value;
                        vlSelf->__Vfunc_leading_zero32__12191__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12191__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12191__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12191__count)));
                            vlSelf->__Vfunc_leading_zero32__12191__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12191__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12191__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12191__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12191__count)));
                            vlSelf->__Vfunc_leading_zero32__12191__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12191__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12191__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12191__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12191__count)));
                            vlSelf->__Vfunc_leading_zero32__12191__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12191__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12191__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12191__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12191__count)));
                            vlSelf->__Vfunc_leading_zero32__12191__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12191__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12191__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12191__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12191__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12191__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12191__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12191__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12191__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12185__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12185__part 
                            = vlSelf->__Vfunc_leading_zero32__12185__value;
                        vlSelf->__Vfunc_leading_zero32__12185__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12185__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12185__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12185__count)));
                            vlSelf->__Vfunc_leading_zero32__12185__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12185__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12185__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12185__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12185__count)));
                            vlSelf->__Vfunc_leading_zero32__12185__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12185__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12185__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12185__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12185__count)));
                            vlSelf->__Vfunc_leading_zero32__12185__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12185__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12185__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12185__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12185__count)));
                            vlSelf->__Vfunc_leading_zero32__12185__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12185__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12185__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12185__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12185__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12185__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12185__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12185__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12185__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12197__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12197__part 
                            = vlSelf->__Vfunc_leading_zero32__12197__value;
                        vlSelf->__Vfunc_leading_zero32__12197__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12197__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12197__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12197__count)));
                            vlSelf->__Vfunc_leading_zero32__12197__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12197__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12197__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12197__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12197__count)));
                            vlSelf->__Vfunc_leading_zero32__12197__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12197__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12197__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12197__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12197__count)));
                            vlSelf->__Vfunc_leading_zero32__12197__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12197__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12197__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12197__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12197__count)));
                            vlSelf->__Vfunc_leading_zero32__12197__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12197__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12197__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12197__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12197__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12197__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12197__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12197__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12197__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12215__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12215__part 
                            = vlSelf->__Vfunc_leading_zero32__12215__value;
                        vlSelf->__Vfunc_leading_zero32__12215__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12215__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12215__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12215__count)));
                            vlSelf->__Vfunc_leading_zero32__12215__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12215__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12215__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12215__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12215__count)));
                            vlSelf->__Vfunc_leading_zero32__12215__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12215__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12215__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12215__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12215__count)));
                            vlSelf->__Vfunc_leading_zero32__12215__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12215__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12215__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12215__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12215__count)));
                            vlSelf->__Vfunc_leading_zero32__12215__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12215__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12215__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12215__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12215__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12215__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12215__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12215__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12215__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__12227__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__12227__part 
                            = vlSelf->__Vfunc_leading_zero32__12227__value;
                        vlSelf->__Vfunc_leading_zero32__12227__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12227__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__12227__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12227__count)));
                            vlSelf->__Vfunc_leading_zero32__12227__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12227__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12227__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__12227__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12227__count)));
                            vlSelf->__Vfunc_leading_zero32__12227__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12227__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12227__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__12227__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12227__count)));
                            vlSelf->__Vfunc_leading_zero32__12227__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12227__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__12227__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__12227__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12227__count)));
                            vlSelf->__Vfunc_leading_zero32__12227__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__12227__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__12227__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__12227__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__12227__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__12227__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__12227__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__12227__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__12227__Vfuncout)) 
                             - (IData)(8U))));
}
