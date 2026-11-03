// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vanvil_qn1_top.h for the primary calling header

#include "Vanvil_qn1_top__pch.h"
#include "Vanvil_qn1_top___024root.h"

VL_ATTR_COLD void Vanvil_qn1_top___024root___stl_sequent__TOP__24(Vanvil_qn1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_top___024root___stl_sequent__TOP__24\n"); );
    // Body
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__94__KET____DOT__multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__94__KET____DOT__multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__601__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__94__KET____DOT__multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__601__part 
                            = vlSelf->__Vfunc_leading_zero32__601__value;
                        vlSelf->__Vfunc_leading_zero32__601__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__601__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__601__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__601__count)));
                            vlSelf->__Vfunc_leading_zero32__601__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__601__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__601__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__601__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__601__count)));
                            vlSelf->__Vfunc_leading_zero32__601__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__601__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__601__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__601__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__601__count)));
                            vlSelf->__Vfunc_leading_zero32__601__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__601__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__601__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__601__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__601__count)));
                            vlSelf->__Vfunc_leading_zero32__601__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__601__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__601__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__601__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__601__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__601__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__601__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__601__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__601__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__95__KET____DOT__multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__95__KET____DOT__multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__607__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__95__KET____DOT__multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__607__part 
                            = vlSelf->__Vfunc_leading_zero32__607__value;
                        vlSelf->__Vfunc_leading_zero32__607__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__607__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__607__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__607__count)));
                            vlSelf->__Vfunc_leading_zero32__607__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__607__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__607__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__607__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__607__count)));
                            vlSelf->__Vfunc_leading_zero32__607__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__607__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__607__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__607__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__607__count)));
                            vlSelf->__Vfunc_leading_zero32__607__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__607__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__607__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__607__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__607__count)));
                            vlSelf->__Vfunc_leading_zero32__607__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__607__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__607__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__607__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__607__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__607__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__607__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__607__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__607__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__96__KET____DOT__multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__96__KET____DOT__multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__613__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__96__KET____DOT__multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__613__part 
                            = vlSelf->__Vfunc_leading_zero32__613__value;
                        vlSelf->__Vfunc_leading_zero32__613__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__613__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__613__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__613__count)));
                            vlSelf->__Vfunc_leading_zero32__613__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__613__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__613__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__613__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__613__count)));
                            vlSelf->__Vfunc_leading_zero32__613__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__613__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__613__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__613__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__613__count)));
                            vlSelf->__Vfunc_leading_zero32__613__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__613__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__613__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__613__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__613__count)));
                            vlSelf->__Vfunc_leading_zero32__613__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__613__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__613__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__613__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__613__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__613__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__613__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__613__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__613__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__97__KET____DOT__multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__97__KET____DOT__multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__619__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__97__KET____DOT__multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__619__part 
                            = vlSelf->__Vfunc_leading_zero32__619__value;
                        vlSelf->__Vfunc_leading_zero32__619__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__619__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__619__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__619__count)));
                            vlSelf->__Vfunc_leading_zero32__619__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__619__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__619__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__619__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__619__count)));
                            vlSelf->__Vfunc_leading_zero32__619__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__619__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__619__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__619__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__619__count)));
                            vlSelf->__Vfunc_leading_zero32__619__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__619__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__619__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__619__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__619__count)));
                            vlSelf->__Vfunc_leading_zero32__619__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__619__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__619__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__619__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__619__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__619__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__619__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__619__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__619__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__98__KET____DOT__multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__98__KET____DOT__multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__625__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__98__KET____DOT__multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__625__part 
                            = vlSelf->__Vfunc_leading_zero32__625__value;
                        vlSelf->__Vfunc_leading_zero32__625__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__625__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__625__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__625__count)));
                            vlSelf->__Vfunc_leading_zero32__625__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__625__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__625__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__625__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__625__count)));
                            vlSelf->__Vfunc_leading_zero32__625__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__625__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__625__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__625__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__625__count)));
                            vlSelf->__Vfunc_leading_zero32__625__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__625__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__625__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__625__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__625__count)));
                            vlSelf->__Vfunc_leading_zero32__625__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__625__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__625__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__625__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__625__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__625__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__625__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__625__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__625__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__99__KET____DOT__multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__99__KET____DOT__multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__631__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__99__KET____DOT__multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__631__part 
                            = vlSelf->__Vfunc_leading_zero32__631__value;
                        vlSelf->__Vfunc_leading_zero32__631__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__631__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__631__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__631__count)));
                            vlSelf->__Vfunc_leading_zero32__631__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__631__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__631__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__631__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__631__count)));
                            vlSelf->__Vfunc_leading_zero32__631__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__631__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__631__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__631__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__631__count)));
                            vlSelf->__Vfunc_leading_zero32__631__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__631__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__631__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__631__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__631__count)));
                            vlSelf->__Vfunc_leading_zero32__631__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__631__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__631__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__631__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__631__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__631__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__631__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__631__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__631__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__100__KET____DOT__multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__100__KET____DOT__multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__637__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__100__KET____DOT__multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__637__part 
                            = vlSelf->__Vfunc_leading_zero32__637__value;
                        vlSelf->__Vfunc_leading_zero32__637__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__637__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__637__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__637__count)));
                            vlSelf->__Vfunc_leading_zero32__637__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__637__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__637__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__637__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__637__count)));
                            vlSelf->__Vfunc_leading_zero32__637__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__637__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__637__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__637__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__637__count)));
                            vlSelf->__Vfunc_leading_zero32__637__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__637__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__637__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__637__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__637__count)));
                            vlSelf->__Vfunc_leading_zero32__637__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__637__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__637__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__637__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__637__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__637__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__637__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__637__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__637__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__101__KET____DOT__multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__101__KET____DOT__multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__643__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__101__KET____DOT__multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__643__part 
                            = vlSelf->__Vfunc_leading_zero32__643__value;
                        vlSelf->__Vfunc_leading_zero32__643__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__643__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__643__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__643__count)));
                            vlSelf->__Vfunc_leading_zero32__643__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__643__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__643__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__643__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__643__count)));
                            vlSelf->__Vfunc_leading_zero32__643__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__643__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__643__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__643__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__643__count)));
                            vlSelf->__Vfunc_leading_zero32__643__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__643__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__643__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__643__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__643__count)));
                            vlSelf->__Vfunc_leading_zero32__643__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__643__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__643__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__643__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__643__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__643__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__643__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__643__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__643__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__102__KET____DOT__multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__102__KET____DOT__multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__649__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__102__KET____DOT__multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__649__part 
                            = vlSelf->__Vfunc_leading_zero32__649__value;
                        vlSelf->__Vfunc_leading_zero32__649__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__649__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__649__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__649__count)));
                            vlSelf->__Vfunc_leading_zero32__649__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__649__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__649__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__649__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__649__count)));
                            vlSelf->__Vfunc_leading_zero32__649__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__649__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__649__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__649__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__649__count)));
                            vlSelf->__Vfunc_leading_zero32__649__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__649__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__649__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__649__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__649__count)));
                            vlSelf->__Vfunc_leading_zero32__649__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__649__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__649__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__649__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__649__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__649__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__649__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__649__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__649__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__103__KET____DOT__multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__103__KET____DOT__multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__655__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__103__KET____DOT__multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__655__part 
                            = vlSelf->__Vfunc_leading_zero32__655__value;
                        vlSelf->__Vfunc_leading_zero32__655__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__655__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__655__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__655__count)));
                            vlSelf->__Vfunc_leading_zero32__655__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__655__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__655__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__655__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__655__count)));
                            vlSelf->__Vfunc_leading_zero32__655__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__655__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__655__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__655__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__655__count)));
                            vlSelf->__Vfunc_leading_zero32__655__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__655__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__655__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__655__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__655__count)));
                            vlSelf->__Vfunc_leading_zero32__655__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__655__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__655__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__655__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__655__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__655__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__655__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__655__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__655__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__104__KET____DOT__multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__104__KET____DOT__multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__661__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__104__KET____DOT__multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__661__part 
                            = vlSelf->__Vfunc_leading_zero32__661__value;
                        vlSelf->__Vfunc_leading_zero32__661__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__661__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__661__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__661__count)));
                            vlSelf->__Vfunc_leading_zero32__661__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__661__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__661__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__661__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__661__count)));
                            vlSelf->__Vfunc_leading_zero32__661__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__661__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__661__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__661__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__661__count)));
                            vlSelf->__Vfunc_leading_zero32__661__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__661__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__661__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__661__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__661__count)));
                            vlSelf->__Vfunc_leading_zero32__661__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__661__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__661__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__661__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__661__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__661__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__661__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__661__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__661__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__105__KET____DOT__multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__105__KET____DOT__multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__667__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__105__KET____DOT__multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__667__part 
                            = vlSelf->__Vfunc_leading_zero32__667__value;
                        vlSelf->__Vfunc_leading_zero32__667__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__667__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__667__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__667__count)));
                            vlSelf->__Vfunc_leading_zero32__667__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__667__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__667__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__667__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__667__count)));
                            vlSelf->__Vfunc_leading_zero32__667__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__667__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__667__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__667__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__667__count)));
                            vlSelf->__Vfunc_leading_zero32__667__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__667__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__667__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__667__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__667__count)));
                            vlSelf->__Vfunc_leading_zero32__667__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__667__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__667__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__667__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__667__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__667__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__667__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__667__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__667__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__106__KET____DOT__multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__106__KET____DOT__multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__673__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__106__KET____DOT__multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__673__part 
                            = vlSelf->__Vfunc_leading_zero32__673__value;
                        vlSelf->__Vfunc_leading_zero32__673__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__673__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__673__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__673__count)));
                            vlSelf->__Vfunc_leading_zero32__673__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__673__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__673__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__673__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__673__count)));
                            vlSelf->__Vfunc_leading_zero32__673__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__673__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__673__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__673__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__673__count)));
                            vlSelf->__Vfunc_leading_zero32__673__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__673__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__673__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__673__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__673__count)));
                            vlSelf->__Vfunc_leading_zero32__673__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__673__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__673__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__673__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__673__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__673__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__673__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__673__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__673__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__107__KET____DOT__multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__107__KET____DOT__multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__679__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__107__KET____DOT__multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__679__part 
                            = vlSelf->__Vfunc_leading_zero32__679__value;
                        vlSelf->__Vfunc_leading_zero32__679__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__679__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__679__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__679__count)));
                            vlSelf->__Vfunc_leading_zero32__679__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__679__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__679__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__679__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__679__count)));
                            vlSelf->__Vfunc_leading_zero32__679__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__679__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__679__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__679__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__679__count)));
                            vlSelf->__Vfunc_leading_zero32__679__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__679__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__679__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__679__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__679__count)));
                            vlSelf->__Vfunc_leading_zero32__679__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__679__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__679__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__679__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__679__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__679__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__679__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__679__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__679__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__108__KET____DOT__multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__108__KET____DOT__multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__685__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__108__KET____DOT__multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__685__part 
                            = vlSelf->__Vfunc_leading_zero32__685__value;
                        vlSelf->__Vfunc_leading_zero32__685__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__685__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__685__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__685__count)));
                            vlSelf->__Vfunc_leading_zero32__685__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__685__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__685__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__685__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__685__count)));
                            vlSelf->__Vfunc_leading_zero32__685__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__685__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__685__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__685__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__685__count)));
                            vlSelf->__Vfunc_leading_zero32__685__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__685__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__685__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__685__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__685__count)));
                            vlSelf->__Vfunc_leading_zero32__685__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__685__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__685__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__685__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__685__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__685__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__685__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__685__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__685__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__109__KET____DOT__multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__109__KET____DOT__multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__691__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__109__KET____DOT__multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__691__part 
                            = vlSelf->__Vfunc_leading_zero32__691__value;
                        vlSelf->__Vfunc_leading_zero32__691__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__691__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__691__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__691__count)));
                            vlSelf->__Vfunc_leading_zero32__691__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__691__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__691__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__691__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__691__count)));
                            vlSelf->__Vfunc_leading_zero32__691__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__691__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__691__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__691__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__691__count)));
                            vlSelf->__Vfunc_leading_zero32__691__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__691__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__691__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__691__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__691__count)));
                            vlSelf->__Vfunc_leading_zero32__691__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__691__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__691__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__691__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__691__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__691__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__691__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__691__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__691__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__110__KET____DOT__multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__110__KET____DOT__multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__697__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__110__KET____DOT__multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__697__part 
                            = vlSelf->__Vfunc_leading_zero32__697__value;
                        vlSelf->__Vfunc_leading_zero32__697__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__697__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__697__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__697__count)));
                            vlSelf->__Vfunc_leading_zero32__697__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__697__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__697__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__697__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__697__count)));
                            vlSelf->__Vfunc_leading_zero32__697__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__697__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__697__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__697__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__697__count)));
                            vlSelf->__Vfunc_leading_zero32__697__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__697__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__697__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__697__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__697__count)));
                            vlSelf->__Vfunc_leading_zero32__697__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__697__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__697__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__697__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__697__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__697__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__697__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__697__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__697__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__111__KET____DOT__multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__111__KET____DOT__multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__703__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__111__KET____DOT__multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__703__part 
                            = vlSelf->__Vfunc_leading_zero32__703__value;
                        vlSelf->__Vfunc_leading_zero32__703__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__703__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__703__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__703__count)));
                            vlSelf->__Vfunc_leading_zero32__703__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__703__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__703__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__703__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__703__count)));
                            vlSelf->__Vfunc_leading_zero32__703__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__703__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__703__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__703__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__703__count)));
                            vlSelf->__Vfunc_leading_zero32__703__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__703__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__703__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__703__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__703__count)));
                            vlSelf->__Vfunc_leading_zero32__703__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__703__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__703__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__703__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__703__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__703__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__703__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__703__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__703__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__112__KET____DOT__multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__112__KET____DOT__multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__709__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__112__KET____DOT__multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__709__part 
                            = vlSelf->__Vfunc_leading_zero32__709__value;
                        vlSelf->__Vfunc_leading_zero32__709__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__709__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__709__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__709__count)));
                            vlSelf->__Vfunc_leading_zero32__709__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__709__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__709__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__709__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__709__count)));
                            vlSelf->__Vfunc_leading_zero32__709__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__709__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__709__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__709__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__709__count)));
                            vlSelf->__Vfunc_leading_zero32__709__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__709__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__709__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__709__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__709__count)));
                            vlSelf->__Vfunc_leading_zero32__709__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__709__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__709__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__709__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__709__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__709__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__709__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__709__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__709__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__113__KET____DOT__multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__113__KET____DOT__multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__715__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__113__KET____DOT__multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__715__part 
                            = vlSelf->__Vfunc_leading_zero32__715__value;
                        vlSelf->__Vfunc_leading_zero32__715__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__715__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__715__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__715__count)));
                            vlSelf->__Vfunc_leading_zero32__715__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__715__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__715__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__715__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__715__count)));
                            vlSelf->__Vfunc_leading_zero32__715__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__715__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__715__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__715__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__715__count)));
                            vlSelf->__Vfunc_leading_zero32__715__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__715__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__715__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__715__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__715__count)));
                            vlSelf->__Vfunc_leading_zero32__715__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__715__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__715__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__715__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__715__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__715__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__715__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__715__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__715__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__114__KET____DOT__multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__114__KET____DOT__multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__721__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__114__KET____DOT__multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__721__part 
                            = vlSelf->__Vfunc_leading_zero32__721__value;
                        vlSelf->__Vfunc_leading_zero32__721__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__721__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__721__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__721__count)));
                            vlSelf->__Vfunc_leading_zero32__721__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__721__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__721__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__721__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__721__count)));
                            vlSelf->__Vfunc_leading_zero32__721__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__721__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__721__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__721__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__721__count)));
                            vlSelf->__Vfunc_leading_zero32__721__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__721__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__721__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__721__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__721__count)));
                            vlSelf->__Vfunc_leading_zero32__721__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__721__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__721__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__721__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__721__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__721__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__721__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__721__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__721__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__115__KET____DOT__multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__115__KET____DOT__multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__727__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__115__KET____DOT__multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__727__part 
                            = vlSelf->__Vfunc_leading_zero32__727__value;
                        vlSelf->__Vfunc_leading_zero32__727__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__727__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__727__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__727__count)));
                            vlSelf->__Vfunc_leading_zero32__727__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__727__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__727__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__727__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__727__count)));
                            vlSelf->__Vfunc_leading_zero32__727__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__727__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__727__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__727__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__727__count)));
                            vlSelf->__Vfunc_leading_zero32__727__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__727__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__727__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__727__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__727__count)));
                            vlSelf->__Vfunc_leading_zero32__727__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__727__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__727__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__727__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__727__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__727__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__727__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__727__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__727__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__116__KET____DOT__multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__116__KET____DOT__multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__733__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__116__KET____DOT__multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__733__part 
                            = vlSelf->__Vfunc_leading_zero32__733__value;
                        vlSelf->__Vfunc_leading_zero32__733__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__733__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__733__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__733__count)));
                            vlSelf->__Vfunc_leading_zero32__733__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__733__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__733__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__733__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__733__count)));
                            vlSelf->__Vfunc_leading_zero32__733__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__733__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__733__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__733__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__733__count)));
                            vlSelf->__Vfunc_leading_zero32__733__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__733__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__733__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__733__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__733__count)));
                            vlSelf->__Vfunc_leading_zero32__733__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__733__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__733__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__733__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__733__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__733__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__733__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__733__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__733__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__117__KET____DOT__multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__117__KET____DOT__multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__739__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__117__KET____DOT__multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__739__part 
                            = vlSelf->__Vfunc_leading_zero32__739__value;
                        vlSelf->__Vfunc_leading_zero32__739__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__739__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__739__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__739__count)));
                            vlSelf->__Vfunc_leading_zero32__739__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__739__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__739__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__739__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__739__count)));
                            vlSelf->__Vfunc_leading_zero32__739__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__739__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__739__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__739__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__739__count)));
                            vlSelf->__Vfunc_leading_zero32__739__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__739__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__739__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__739__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__739__count)));
                            vlSelf->__Vfunc_leading_zero32__739__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__739__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__739__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__739__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__739__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__739__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__739__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__739__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__739__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__118__KET____DOT__multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__118__KET____DOT__multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__745__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__118__KET____DOT__multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__745__part 
                            = vlSelf->__Vfunc_leading_zero32__745__value;
                        vlSelf->__Vfunc_leading_zero32__745__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__745__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__745__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__745__count)));
                            vlSelf->__Vfunc_leading_zero32__745__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__745__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__745__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__745__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__745__count)));
                            vlSelf->__Vfunc_leading_zero32__745__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__745__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__745__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__745__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__745__count)));
                            vlSelf->__Vfunc_leading_zero32__745__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__745__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__745__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__745__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__745__count)));
                            vlSelf->__Vfunc_leading_zero32__745__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__745__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__745__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__745__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__745__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__745__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__745__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__745__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__745__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__119__KET____DOT__multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__119__KET____DOT__multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__751__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__119__KET____DOT__multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__751__part 
                            = vlSelf->__Vfunc_leading_zero32__751__value;
                        vlSelf->__Vfunc_leading_zero32__751__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__751__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__751__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__751__count)));
                            vlSelf->__Vfunc_leading_zero32__751__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__751__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__751__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__751__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__751__count)));
                            vlSelf->__Vfunc_leading_zero32__751__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__751__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__751__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__751__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__751__count)));
                            vlSelf->__Vfunc_leading_zero32__751__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__751__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__751__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__751__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__751__count)));
                            vlSelf->__Vfunc_leading_zero32__751__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__751__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__751__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__751__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__751__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__751__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__751__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__751__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__751__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__120__KET____DOT__multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__120__KET____DOT__multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__757__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__120__KET____DOT__multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__757__part 
                            = vlSelf->__Vfunc_leading_zero32__757__value;
                        vlSelf->__Vfunc_leading_zero32__757__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__757__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__757__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__757__count)));
                            vlSelf->__Vfunc_leading_zero32__757__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__757__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__757__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__757__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__757__count)));
                            vlSelf->__Vfunc_leading_zero32__757__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__757__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__757__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__757__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__757__count)));
                            vlSelf->__Vfunc_leading_zero32__757__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__757__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__757__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__757__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__757__count)));
                            vlSelf->__Vfunc_leading_zero32__757__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__757__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__757__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__757__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__757__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__757__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__757__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__757__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__757__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__121__KET____DOT__multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__121__KET____DOT__multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__763__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__121__KET____DOT__multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__763__part 
                            = vlSelf->__Vfunc_leading_zero32__763__value;
                        vlSelf->__Vfunc_leading_zero32__763__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__763__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__763__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__763__count)));
                            vlSelf->__Vfunc_leading_zero32__763__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__763__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__763__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__763__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__763__count)));
                            vlSelf->__Vfunc_leading_zero32__763__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__763__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__763__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__763__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__763__count)));
                            vlSelf->__Vfunc_leading_zero32__763__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__763__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__763__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__763__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__763__count)));
                            vlSelf->__Vfunc_leading_zero32__763__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__763__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__763__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__763__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__763__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__763__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__763__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__763__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__763__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__122__KET____DOT__multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__122__KET____DOT__multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__769__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__122__KET____DOT__multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__769__part 
                            = vlSelf->__Vfunc_leading_zero32__769__value;
                        vlSelf->__Vfunc_leading_zero32__769__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__769__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__769__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__769__count)));
                            vlSelf->__Vfunc_leading_zero32__769__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__769__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__769__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__769__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__769__count)));
                            vlSelf->__Vfunc_leading_zero32__769__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__769__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__769__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__769__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__769__count)));
                            vlSelf->__Vfunc_leading_zero32__769__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__769__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__769__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__769__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__769__count)));
                            vlSelf->__Vfunc_leading_zero32__769__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__769__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__769__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__769__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__769__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__769__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__769__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__769__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__769__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__123__KET____DOT__multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__123__KET____DOT__multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__775__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__123__KET____DOT__multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__775__part 
                            = vlSelf->__Vfunc_leading_zero32__775__value;
                        vlSelf->__Vfunc_leading_zero32__775__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__775__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__775__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__775__count)));
                            vlSelf->__Vfunc_leading_zero32__775__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__775__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__775__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__775__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__775__count)));
                            vlSelf->__Vfunc_leading_zero32__775__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__775__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__775__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__775__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__775__count)));
                            vlSelf->__Vfunc_leading_zero32__775__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__775__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__775__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__775__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__775__count)));
                            vlSelf->__Vfunc_leading_zero32__775__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__775__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__775__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__775__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__775__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__775__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__775__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__775__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__775__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__124__KET____DOT__multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__124__KET____DOT__multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__781__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__124__KET____DOT__multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__781__part 
                            = vlSelf->__Vfunc_leading_zero32__781__value;
                        vlSelf->__Vfunc_leading_zero32__781__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__781__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__781__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__781__count)));
                            vlSelf->__Vfunc_leading_zero32__781__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__781__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__781__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__781__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__781__count)));
                            vlSelf->__Vfunc_leading_zero32__781__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__781__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__781__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__781__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__781__count)));
                            vlSelf->__Vfunc_leading_zero32__781__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__781__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__781__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__781__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__781__count)));
                            vlSelf->__Vfunc_leading_zero32__781__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__781__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__781__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__781__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__781__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__781__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__781__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__781__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__781__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__125__KET____DOT__multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__125__KET____DOT__multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__787__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__125__KET____DOT__multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__787__part 
                            = vlSelf->__Vfunc_leading_zero32__787__value;
                        vlSelf->__Vfunc_leading_zero32__787__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__787__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__787__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__787__count)));
                            vlSelf->__Vfunc_leading_zero32__787__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__787__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__787__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__787__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__787__count)));
                            vlSelf->__Vfunc_leading_zero32__787__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__787__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__787__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__787__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__787__count)));
                            vlSelf->__Vfunc_leading_zero32__787__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__787__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__787__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__787__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__787__count)));
                            vlSelf->__Vfunc_leading_zero32__787__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__787__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__787__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__787__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__787__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__787__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__787__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__787__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__787__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__126__KET____DOT__multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__126__KET____DOT__multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__793__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__126__KET____DOT__multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__793__part 
                            = vlSelf->__Vfunc_leading_zero32__793__value;
                        vlSelf->__Vfunc_leading_zero32__793__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__793__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__793__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__793__count)));
                            vlSelf->__Vfunc_leading_zero32__793__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__793__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__793__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__793__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__793__count)));
                            vlSelf->__Vfunc_leading_zero32__793__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__793__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__793__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__793__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__793__count)));
                            vlSelf->__Vfunc_leading_zero32__793__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__793__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__793__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__793__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__793__count)));
                            vlSelf->__Vfunc_leading_zero32__793__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__793__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__793__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__793__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__793__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__793__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__793__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__793__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__793__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__127__KET____DOT__multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__127__KET____DOT__multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__799__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__127__KET____DOT__multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__799__part 
                            = vlSelf->__Vfunc_leading_zero32__799__value;
                        vlSelf->__Vfunc_leading_zero32__799__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__799__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__799__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__799__count)));
                            vlSelf->__Vfunc_leading_zero32__799__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__799__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__799__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__799__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__799__count)));
                            vlSelf->__Vfunc_leading_zero32__799__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__799__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__799__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__799__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__799__count)));
                            vlSelf->__Vfunc_leading_zero32__799__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__799__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__799__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__799__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__799__count)));
                            vlSelf->__Vfunc_leading_zero32__799__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__799__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__799__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__799__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__799__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__799__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__799__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__799__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__799__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__0__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__0__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__36__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__0__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__36__part 
                            = vlSelf->__Vfunc_leading_zero32__36__value;
                        vlSelf->__Vfunc_leading_zero32__36__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__36__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__36__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__36__count)));
                            vlSelf->__Vfunc_leading_zero32__36__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__36__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__36__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__36__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__36__count)));
                            vlSelf->__Vfunc_leading_zero32__36__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__36__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__36__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__36__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__36__count)));
                            vlSelf->__Vfunc_leading_zero32__36__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__36__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__36__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__36__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__36__count)));
                            vlSelf->__Vfunc_leading_zero32__36__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__36__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__36__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__36__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__36__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__36__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__36__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__36__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__36__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__1__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__1__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__42__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__1__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__42__part 
                            = vlSelf->__Vfunc_leading_zero32__42__value;
                        vlSelf->__Vfunc_leading_zero32__42__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__42__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__42__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__42__count)));
                            vlSelf->__Vfunc_leading_zero32__42__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__42__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__42__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__42__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__42__count)));
                            vlSelf->__Vfunc_leading_zero32__42__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__42__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__42__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__42__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__42__count)));
                            vlSelf->__Vfunc_leading_zero32__42__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__42__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__42__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__42__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__42__count)));
                            vlSelf->__Vfunc_leading_zero32__42__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__42__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__42__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__42__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__42__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__42__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__42__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__42__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__42__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__2__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__2__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__48__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__2__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__48__part 
                            = vlSelf->__Vfunc_leading_zero32__48__value;
                        vlSelf->__Vfunc_leading_zero32__48__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__48__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__48__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__48__count)));
                            vlSelf->__Vfunc_leading_zero32__48__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__48__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__48__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__48__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__48__count)));
                            vlSelf->__Vfunc_leading_zero32__48__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__48__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__48__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__48__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__48__count)));
                            vlSelf->__Vfunc_leading_zero32__48__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__48__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__48__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__48__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__48__count)));
                            vlSelf->__Vfunc_leading_zero32__48__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__48__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__48__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__48__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__48__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__48__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__48__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__48__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__48__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__3__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__3__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__54__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__3__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__54__part 
                            = vlSelf->__Vfunc_leading_zero32__54__value;
                        vlSelf->__Vfunc_leading_zero32__54__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__54__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__54__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__54__count)));
                            vlSelf->__Vfunc_leading_zero32__54__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__54__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__54__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__54__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__54__count)));
                            vlSelf->__Vfunc_leading_zero32__54__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__54__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__54__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__54__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__54__count)));
                            vlSelf->__Vfunc_leading_zero32__54__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__54__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__54__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__54__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__54__count)));
                            vlSelf->__Vfunc_leading_zero32__54__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__54__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__54__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__54__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__54__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__54__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__54__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__54__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__54__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__4__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__4__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__60__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__4__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__60__part 
                            = vlSelf->__Vfunc_leading_zero32__60__value;
                        vlSelf->__Vfunc_leading_zero32__60__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__60__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__60__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__60__count)));
                            vlSelf->__Vfunc_leading_zero32__60__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__60__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__60__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__60__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__60__count)));
                            vlSelf->__Vfunc_leading_zero32__60__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__60__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__60__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__60__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__60__count)));
                            vlSelf->__Vfunc_leading_zero32__60__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__60__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__60__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__60__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__60__count)));
                            vlSelf->__Vfunc_leading_zero32__60__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__60__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__60__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__60__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__60__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__60__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__60__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__60__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__60__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__5__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__5__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__66__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__5__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__66__part 
                            = vlSelf->__Vfunc_leading_zero32__66__value;
                        vlSelf->__Vfunc_leading_zero32__66__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__66__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__66__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__66__count)));
                            vlSelf->__Vfunc_leading_zero32__66__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__66__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__66__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__66__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__66__count)));
                            vlSelf->__Vfunc_leading_zero32__66__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__66__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__66__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__66__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__66__count)));
                            vlSelf->__Vfunc_leading_zero32__66__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__66__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__66__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__66__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__66__count)));
                            vlSelf->__Vfunc_leading_zero32__66__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__66__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__66__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__66__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__66__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__66__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__66__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__66__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__66__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__6__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__6__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__72__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__6__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__72__part 
                            = vlSelf->__Vfunc_leading_zero32__72__value;
                        vlSelf->__Vfunc_leading_zero32__72__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__72__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__72__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__72__count)));
                            vlSelf->__Vfunc_leading_zero32__72__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__72__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__72__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__72__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__72__count)));
                            vlSelf->__Vfunc_leading_zero32__72__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__72__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__72__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__72__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__72__count)));
                            vlSelf->__Vfunc_leading_zero32__72__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__72__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__72__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__72__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__72__count)));
                            vlSelf->__Vfunc_leading_zero32__72__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__72__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__72__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__72__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__72__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__72__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__72__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__72__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__72__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__7__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__7__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__78__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__7__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__78__part 
                            = vlSelf->__Vfunc_leading_zero32__78__value;
                        vlSelf->__Vfunc_leading_zero32__78__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__78__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__78__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__78__count)));
                            vlSelf->__Vfunc_leading_zero32__78__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__78__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__78__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__78__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__78__count)));
                            vlSelf->__Vfunc_leading_zero32__78__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__78__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__78__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__78__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__78__count)));
                            vlSelf->__Vfunc_leading_zero32__78__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__78__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__78__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__78__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__78__count)));
                            vlSelf->__Vfunc_leading_zero32__78__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__78__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__78__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__78__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__78__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__78__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__78__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__78__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__78__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__8__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__8__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__84__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__8__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__84__part 
                            = vlSelf->__Vfunc_leading_zero32__84__value;
                        vlSelf->__Vfunc_leading_zero32__84__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__84__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__84__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__84__count)));
                            vlSelf->__Vfunc_leading_zero32__84__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__84__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__84__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__84__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__84__count)));
                            vlSelf->__Vfunc_leading_zero32__84__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__84__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__84__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__84__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__84__count)));
                            vlSelf->__Vfunc_leading_zero32__84__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__84__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__84__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__84__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__84__count)));
                            vlSelf->__Vfunc_leading_zero32__84__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__84__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__84__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__84__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__84__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__84__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__84__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__84__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__84__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__9__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__9__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__90__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__9__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__90__part 
                            = vlSelf->__Vfunc_leading_zero32__90__value;
                        vlSelf->__Vfunc_leading_zero32__90__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__90__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__90__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__90__count)));
                            vlSelf->__Vfunc_leading_zero32__90__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__90__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__90__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__90__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__90__count)));
                            vlSelf->__Vfunc_leading_zero32__90__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__90__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__90__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__90__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__90__count)));
                            vlSelf->__Vfunc_leading_zero32__90__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__90__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__90__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__90__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__90__count)));
                            vlSelf->__Vfunc_leading_zero32__90__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__90__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__90__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__90__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__90__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__90__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__90__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__90__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__90__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__10__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__10__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__96__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__10__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__96__part 
                            = vlSelf->__Vfunc_leading_zero32__96__value;
                        vlSelf->__Vfunc_leading_zero32__96__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__96__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__96__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__96__count)));
                            vlSelf->__Vfunc_leading_zero32__96__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__96__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__96__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__96__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__96__count)));
                            vlSelf->__Vfunc_leading_zero32__96__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__96__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__96__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__96__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__96__count)));
                            vlSelf->__Vfunc_leading_zero32__96__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__96__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__96__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__96__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__96__count)));
                            vlSelf->__Vfunc_leading_zero32__96__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__96__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__96__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__96__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__96__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__96__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__96__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__96__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__96__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__11__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__11__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__102__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__11__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__102__part 
                            = vlSelf->__Vfunc_leading_zero32__102__value;
                        vlSelf->__Vfunc_leading_zero32__102__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__102__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__102__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__102__count)));
                            vlSelf->__Vfunc_leading_zero32__102__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__102__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__102__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__102__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__102__count)));
                            vlSelf->__Vfunc_leading_zero32__102__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__102__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__102__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__102__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__102__count)));
                            vlSelf->__Vfunc_leading_zero32__102__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__102__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__102__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__102__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__102__count)));
                            vlSelf->__Vfunc_leading_zero32__102__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__102__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__102__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__102__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__102__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__102__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__102__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__102__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__102__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__12__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__12__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__108__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__12__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__108__part 
                            = vlSelf->__Vfunc_leading_zero32__108__value;
                        vlSelf->__Vfunc_leading_zero32__108__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__108__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__108__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__108__count)));
                            vlSelf->__Vfunc_leading_zero32__108__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__108__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__108__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__108__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__108__count)));
                            vlSelf->__Vfunc_leading_zero32__108__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__108__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__108__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__108__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__108__count)));
                            vlSelf->__Vfunc_leading_zero32__108__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__108__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__108__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__108__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__108__count)));
                            vlSelf->__Vfunc_leading_zero32__108__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__108__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__108__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__108__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__108__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__108__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__108__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__108__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__108__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__13__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__13__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__114__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__13__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__114__part 
                            = vlSelf->__Vfunc_leading_zero32__114__value;
                        vlSelf->__Vfunc_leading_zero32__114__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__114__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__114__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__114__count)));
                            vlSelf->__Vfunc_leading_zero32__114__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__114__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__114__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__114__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__114__count)));
                            vlSelf->__Vfunc_leading_zero32__114__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__114__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__114__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__114__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__114__count)));
                            vlSelf->__Vfunc_leading_zero32__114__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__114__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__114__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__114__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__114__count)));
                            vlSelf->__Vfunc_leading_zero32__114__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__114__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__114__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__114__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__114__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__114__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__114__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__114__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__114__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__14__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__14__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__120__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__14__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__120__part 
                            = vlSelf->__Vfunc_leading_zero32__120__value;
                        vlSelf->__Vfunc_leading_zero32__120__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__120__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__120__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__120__count)));
                            vlSelf->__Vfunc_leading_zero32__120__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__120__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__120__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__120__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__120__count)));
                            vlSelf->__Vfunc_leading_zero32__120__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__120__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__120__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__120__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__120__count)));
                            vlSelf->__Vfunc_leading_zero32__120__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__120__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__120__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__120__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__120__count)));
                            vlSelf->__Vfunc_leading_zero32__120__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__120__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__120__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__120__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__120__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__120__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__120__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__120__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__120__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__15__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__15__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__126__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__15__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__126__part 
                            = vlSelf->__Vfunc_leading_zero32__126__value;
                        vlSelf->__Vfunc_leading_zero32__126__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__126__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__126__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__126__count)));
                            vlSelf->__Vfunc_leading_zero32__126__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__126__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__126__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__126__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__126__count)));
                            vlSelf->__Vfunc_leading_zero32__126__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__126__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__126__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__126__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__126__count)));
                            vlSelf->__Vfunc_leading_zero32__126__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__126__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__126__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__126__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__126__count)));
                            vlSelf->__Vfunc_leading_zero32__126__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__126__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__126__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__126__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__126__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__126__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__126__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__126__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__126__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__16__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__16__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__132__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__16__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__132__part 
                            = vlSelf->__Vfunc_leading_zero32__132__value;
                        vlSelf->__Vfunc_leading_zero32__132__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__132__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__132__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__132__count)));
                            vlSelf->__Vfunc_leading_zero32__132__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__132__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__132__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__132__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__132__count)));
                            vlSelf->__Vfunc_leading_zero32__132__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__132__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__132__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__132__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__132__count)));
                            vlSelf->__Vfunc_leading_zero32__132__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__132__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__132__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__132__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__132__count)));
                            vlSelf->__Vfunc_leading_zero32__132__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__132__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__132__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__132__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__132__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__132__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__132__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__132__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__132__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__17__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__17__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__138__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__17__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__138__part 
                            = vlSelf->__Vfunc_leading_zero32__138__value;
                        vlSelf->__Vfunc_leading_zero32__138__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__138__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__138__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__138__count)));
                            vlSelf->__Vfunc_leading_zero32__138__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__138__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__138__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__138__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__138__count)));
                            vlSelf->__Vfunc_leading_zero32__138__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__138__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__138__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__138__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__138__count)));
                            vlSelf->__Vfunc_leading_zero32__138__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__138__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__138__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__138__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__138__count)));
                            vlSelf->__Vfunc_leading_zero32__138__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__138__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__138__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__138__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__138__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__138__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__138__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__138__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__138__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__18__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__18__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__144__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__18__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__144__part 
                            = vlSelf->__Vfunc_leading_zero32__144__value;
                        vlSelf->__Vfunc_leading_zero32__144__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__144__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__144__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__144__count)));
                            vlSelf->__Vfunc_leading_zero32__144__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__144__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__144__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__144__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__144__count)));
                            vlSelf->__Vfunc_leading_zero32__144__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__144__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__144__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__144__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__144__count)));
                            vlSelf->__Vfunc_leading_zero32__144__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__144__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__144__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__144__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__144__count)));
                            vlSelf->__Vfunc_leading_zero32__144__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__144__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__144__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__144__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__144__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__144__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__144__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__144__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__144__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__19__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__19__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__150__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__19__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__150__part 
                            = vlSelf->__Vfunc_leading_zero32__150__value;
                        vlSelf->__Vfunc_leading_zero32__150__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__150__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__150__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__150__count)));
                            vlSelf->__Vfunc_leading_zero32__150__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__150__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__150__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__150__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__150__count)));
                            vlSelf->__Vfunc_leading_zero32__150__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__150__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__150__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__150__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__150__count)));
                            vlSelf->__Vfunc_leading_zero32__150__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__150__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__150__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__150__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__150__count)));
                            vlSelf->__Vfunc_leading_zero32__150__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__150__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__150__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__150__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__150__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__150__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__150__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__150__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__150__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__20__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__20__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__156__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__20__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__156__part 
                            = vlSelf->__Vfunc_leading_zero32__156__value;
                        vlSelf->__Vfunc_leading_zero32__156__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__156__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__156__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__156__count)));
                            vlSelf->__Vfunc_leading_zero32__156__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__156__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__156__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__156__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__156__count)));
                            vlSelf->__Vfunc_leading_zero32__156__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__156__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__156__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__156__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__156__count)));
                            vlSelf->__Vfunc_leading_zero32__156__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__156__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__156__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__156__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__156__count)));
                            vlSelf->__Vfunc_leading_zero32__156__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__156__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__156__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__156__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__156__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__156__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__156__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__156__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__156__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__21__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__21__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__162__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__21__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__162__part 
                            = vlSelf->__Vfunc_leading_zero32__162__value;
                        vlSelf->__Vfunc_leading_zero32__162__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__162__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__162__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__162__count)));
                            vlSelf->__Vfunc_leading_zero32__162__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__162__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__162__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__162__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__162__count)));
                            vlSelf->__Vfunc_leading_zero32__162__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__162__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__162__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__162__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__162__count)));
                            vlSelf->__Vfunc_leading_zero32__162__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__162__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__162__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__162__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__162__count)));
                            vlSelf->__Vfunc_leading_zero32__162__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__162__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__162__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__162__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__162__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__162__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__162__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__162__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__162__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__22__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__22__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__168__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__22__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__168__part 
                            = vlSelf->__Vfunc_leading_zero32__168__value;
                        vlSelf->__Vfunc_leading_zero32__168__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__168__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__168__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__168__count)));
                            vlSelf->__Vfunc_leading_zero32__168__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__168__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__168__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__168__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__168__count)));
                            vlSelf->__Vfunc_leading_zero32__168__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__168__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__168__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__168__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__168__count)));
                            vlSelf->__Vfunc_leading_zero32__168__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__168__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__168__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__168__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__168__count)));
                            vlSelf->__Vfunc_leading_zero32__168__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__168__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__168__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__168__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__168__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__168__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__168__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__168__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__168__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__23__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__23__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__174__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__23__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__174__part 
                            = vlSelf->__Vfunc_leading_zero32__174__value;
                        vlSelf->__Vfunc_leading_zero32__174__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__174__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__174__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__174__count)));
                            vlSelf->__Vfunc_leading_zero32__174__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__174__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__174__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__174__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__174__count)));
                            vlSelf->__Vfunc_leading_zero32__174__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__174__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__174__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__174__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__174__count)));
                            vlSelf->__Vfunc_leading_zero32__174__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__174__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__174__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__174__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__174__count)));
                            vlSelf->__Vfunc_leading_zero32__174__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__174__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__174__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__174__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__174__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__174__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__174__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__174__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__174__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__24__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__24__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__180__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__24__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__180__part 
                            = vlSelf->__Vfunc_leading_zero32__180__value;
                        vlSelf->__Vfunc_leading_zero32__180__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__180__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__180__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__180__count)));
                            vlSelf->__Vfunc_leading_zero32__180__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__180__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__180__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__180__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__180__count)));
                            vlSelf->__Vfunc_leading_zero32__180__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__180__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__180__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__180__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__180__count)));
                            vlSelf->__Vfunc_leading_zero32__180__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__180__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__180__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__180__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__180__count)));
                            vlSelf->__Vfunc_leading_zero32__180__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__180__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__180__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__180__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__180__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__180__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__180__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__180__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__180__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__25__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__25__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__186__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__25__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__186__part 
                            = vlSelf->__Vfunc_leading_zero32__186__value;
                        vlSelf->__Vfunc_leading_zero32__186__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__186__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__186__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__186__count)));
                            vlSelf->__Vfunc_leading_zero32__186__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__186__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__186__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__186__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__186__count)));
                            vlSelf->__Vfunc_leading_zero32__186__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__186__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__186__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__186__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__186__count)));
                            vlSelf->__Vfunc_leading_zero32__186__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__186__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__186__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__186__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__186__count)));
                            vlSelf->__Vfunc_leading_zero32__186__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__186__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__186__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__186__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__186__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__186__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__186__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__186__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__186__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__26__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__26__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__192__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__26__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__192__part 
                            = vlSelf->__Vfunc_leading_zero32__192__value;
                        vlSelf->__Vfunc_leading_zero32__192__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__192__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__192__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__192__count)));
                            vlSelf->__Vfunc_leading_zero32__192__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__192__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__192__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__192__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__192__count)));
                            vlSelf->__Vfunc_leading_zero32__192__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__192__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__192__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__192__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__192__count)));
                            vlSelf->__Vfunc_leading_zero32__192__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__192__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__192__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__192__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__192__count)));
                            vlSelf->__Vfunc_leading_zero32__192__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__192__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__192__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__192__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__192__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__192__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__192__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__192__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__192__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__27__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__27__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__198__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__27__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__198__part 
                            = vlSelf->__Vfunc_leading_zero32__198__value;
                        vlSelf->__Vfunc_leading_zero32__198__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__198__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__198__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__198__count)));
                            vlSelf->__Vfunc_leading_zero32__198__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__198__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__198__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__198__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__198__count)));
                            vlSelf->__Vfunc_leading_zero32__198__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__198__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__198__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__198__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__198__count)));
                            vlSelf->__Vfunc_leading_zero32__198__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__198__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__198__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__198__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__198__count)));
                            vlSelf->__Vfunc_leading_zero32__198__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__198__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__198__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__198__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__198__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__198__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__198__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__198__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__198__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__28__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__28__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__204__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__28__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__204__part 
                            = vlSelf->__Vfunc_leading_zero32__204__value;
                        vlSelf->__Vfunc_leading_zero32__204__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__204__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__204__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__204__count)));
                            vlSelf->__Vfunc_leading_zero32__204__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__204__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__204__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__204__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__204__count)));
                            vlSelf->__Vfunc_leading_zero32__204__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__204__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__204__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__204__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__204__count)));
                            vlSelf->__Vfunc_leading_zero32__204__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__204__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__204__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__204__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__204__count)));
                            vlSelf->__Vfunc_leading_zero32__204__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__204__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__204__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__204__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__204__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__204__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__204__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__204__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__204__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__29__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__29__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__210__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__29__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__210__part 
                            = vlSelf->__Vfunc_leading_zero32__210__value;
                        vlSelf->__Vfunc_leading_zero32__210__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__210__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__210__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__210__count)));
                            vlSelf->__Vfunc_leading_zero32__210__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__210__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__210__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__210__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__210__count)));
                            vlSelf->__Vfunc_leading_zero32__210__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__210__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__210__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__210__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__210__count)));
                            vlSelf->__Vfunc_leading_zero32__210__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__210__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__210__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__210__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__210__count)));
                            vlSelf->__Vfunc_leading_zero32__210__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__210__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__210__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__210__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__210__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__210__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__210__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__210__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__210__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__30__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__30__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__216__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__30__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__216__part 
                            = vlSelf->__Vfunc_leading_zero32__216__value;
                        vlSelf->__Vfunc_leading_zero32__216__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__216__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__216__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__216__count)));
                            vlSelf->__Vfunc_leading_zero32__216__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__216__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__216__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__216__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__216__count)));
                            vlSelf->__Vfunc_leading_zero32__216__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__216__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__216__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__216__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__216__count)));
                            vlSelf->__Vfunc_leading_zero32__216__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__216__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__216__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__216__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__216__count)));
                            vlSelf->__Vfunc_leading_zero32__216__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__216__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__216__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__216__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__216__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__216__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__216__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__216__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__216__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__31__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__31__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__222__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__31__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__222__part 
                            = vlSelf->__Vfunc_leading_zero32__222__value;
                        vlSelf->__Vfunc_leading_zero32__222__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__222__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__222__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__222__count)));
                            vlSelf->__Vfunc_leading_zero32__222__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__222__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__222__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__222__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__222__count)));
                            vlSelf->__Vfunc_leading_zero32__222__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__222__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__222__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__222__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__222__count)));
                            vlSelf->__Vfunc_leading_zero32__222__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__222__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__222__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__222__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__222__count)));
                            vlSelf->__Vfunc_leading_zero32__222__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__222__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__222__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__222__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__222__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__222__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__222__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__222__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__222__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__32__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__32__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__228__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__32__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__228__part 
                            = vlSelf->__Vfunc_leading_zero32__228__value;
                        vlSelf->__Vfunc_leading_zero32__228__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__228__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__228__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__228__count)));
                            vlSelf->__Vfunc_leading_zero32__228__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__228__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__228__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__228__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__228__count)));
                            vlSelf->__Vfunc_leading_zero32__228__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__228__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__228__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__228__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__228__count)));
                            vlSelf->__Vfunc_leading_zero32__228__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__228__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__228__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__228__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__228__count)));
                            vlSelf->__Vfunc_leading_zero32__228__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__228__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__228__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__228__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__228__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__228__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__228__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__228__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__228__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__33__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__33__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__234__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__33__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__234__part 
                            = vlSelf->__Vfunc_leading_zero32__234__value;
                        vlSelf->__Vfunc_leading_zero32__234__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__234__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__234__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__234__count)));
                            vlSelf->__Vfunc_leading_zero32__234__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__234__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__234__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__234__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__234__count)));
                            vlSelf->__Vfunc_leading_zero32__234__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__234__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__234__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__234__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__234__count)));
                            vlSelf->__Vfunc_leading_zero32__234__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__234__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__234__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__234__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__234__count)));
                            vlSelf->__Vfunc_leading_zero32__234__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__234__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__234__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__234__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__234__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__234__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__234__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__234__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__234__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__34__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__34__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__240__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__34__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__240__part 
                            = vlSelf->__Vfunc_leading_zero32__240__value;
                        vlSelf->__Vfunc_leading_zero32__240__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__240__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__240__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__240__count)));
                            vlSelf->__Vfunc_leading_zero32__240__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__240__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__240__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__240__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__240__count)));
                            vlSelf->__Vfunc_leading_zero32__240__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__240__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__240__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__240__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__240__count)));
                            vlSelf->__Vfunc_leading_zero32__240__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__240__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__240__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__240__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__240__count)));
                            vlSelf->__Vfunc_leading_zero32__240__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__240__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__240__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__240__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__240__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__240__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__240__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__240__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__240__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__35__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__35__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__246__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__35__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__246__part 
                            = vlSelf->__Vfunc_leading_zero32__246__value;
                        vlSelf->__Vfunc_leading_zero32__246__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__246__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__246__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__246__count)));
                            vlSelf->__Vfunc_leading_zero32__246__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__246__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__246__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__246__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__246__count)));
                            vlSelf->__Vfunc_leading_zero32__246__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__246__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__246__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__246__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__246__count)));
                            vlSelf->__Vfunc_leading_zero32__246__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__246__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__246__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__246__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__246__count)));
                            vlSelf->__Vfunc_leading_zero32__246__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__246__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__246__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__246__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__246__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__246__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__246__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__246__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__246__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__36__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__36__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__252__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__36__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__252__part 
                            = vlSelf->__Vfunc_leading_zero32__252__value;
                        vlSelf->__Vfunc_leading_zero32__252__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__252__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__252__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__252__count)));
                            vlSelf->__Vfunc_leading_zero32__252__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__252__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__252__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__252__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__252__count)));
                            vlSelf->__Vfunc_leading_zero32__252__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__252__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__252__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__252__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__252__count)));
                            vlSelf->__Vfunc_leading_zero32__252__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__252__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__252__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__252__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__252__count)));
                            vlSelf->__Vfunc_leading_zero32__252__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__252__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__252__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__252__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__252__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__252__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__252__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__252__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__252__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__37__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__37__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__258__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__37__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__258__part 
                            = vlSelf->__Vfunc_leading_zero32__258__value;
                        vlSelf->__Vfunc_leading_zero32__258__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__258__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__258__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__258__count)));
                            vlSelf->__Vfunc_leading_zero32__258__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__258__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__258__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__258__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__258__count)));
                            vlSelf->__Vfunc_leading_zero32__258__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__258__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__258__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__258__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__258__count)));
                            vlSelf->__Vfunc_leading_zero32__258__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__258__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__258__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__258__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__258__count)));
                            vlSelf->__Vfunc_leading_zero32__258__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__258__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__258__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__258__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__258__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__258__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__258__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__258__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__258__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__38__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__38__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__264__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__38__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__264__part 
                            = vlSelf->__Vfunc_leading_zero32__264__value;
                        vlSelf->__Vfunc_leading_zero32__264__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__264__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__264__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__264__count)));
                            vlSelf->__Vfunc_leading_zero32__264__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__264__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__264__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__264__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__264__count)));
                            vlSelf->__Vfunc_leading_zero32__264__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__264__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__264__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__264__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__264__count)));
                            vlSelf->__Vfunc_leading_zero32__264__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__264__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__264__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__264__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__264__count)));
                            vlSelf->__Vfunc_leading_zero32__264__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__264__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__264__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__264__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__264__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__264__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__264__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__264__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__264__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__39__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__39__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__270__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__39__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__270__part 
                            = vlSelf->__Vfunc_leading_zero32__270__value;
                        vlSelf->__Vfunc_leading_zero32__270__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__270__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__270__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__270__count)));
                            vlSelf->__Vfunc_leading_zero32__270__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__270__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__270__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__270__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__270__count)));
                            vlSelf->__Vfunc_leading_zero32__270__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__270__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__270__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__270__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__270__count)));
                            vlSelf->__Vfunc_leading_zero32__270__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__270__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__270__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__270__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__270__count)));
                            vlSelf->__Vfunc_leading_zero32__270__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__270__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__270__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__270__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__270__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__270__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__270__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__270__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__270__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__40__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__40__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__276__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__40__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__276__part 
                            = vlSelf->__Vfunc_leading_zero32__276__value;
                        vlSelf->__Vfunc_leading_zero32__276__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__276__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__276__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__276__count)));
                            vlSelf->__Vfunc_leading_zero32__276__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__276__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__276__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__276__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__276__count)));
                            vlSelf->__Vfunc_leading_zero32__276__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__276__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__276__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__276__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__276__count)));
                            vlSelf->__Vfunc_leading_zero32__276__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__276__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__276__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__276__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__276__count)));
                            vlSelf->__Vfunc_leading_zero32__276__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__276__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__276__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__276__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__276__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__276__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__276__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__276__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__276__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__41__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__41__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__282__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__41__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__282__part 
                            = vlSelf->__Vfunc_leading_zero32__282__value;
                        vlSelf->__Vfunc_leading_zero32__282__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__282__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__282__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__282__count)));
                            vlSelf->__Vfunc_leading_zero32__282__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__282__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__282__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__282__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__282__count)));
                            vlSelf->__Vfunc_leading_zero32__282__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__282__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__282__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__282__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__282__count)));
                            vlSelf->__Vfunc_leading_zero32__282__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__282__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__282__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__282__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__282__count)));
                            vlSelf->__Vfunc_leading_zero32__282__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__282__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__282__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__282__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__282__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__282__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__282__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__282__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__282__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__42__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__42__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__288__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__42__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__288__part 
                            = vlSelf->__Vfunc_leading_zero32__288__value;
                        vlSelf->__Vfunc_leading_zero32__288__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__288__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__288__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__288__count)));
                            vlSelf->__Vfunc_leading_zero32__288__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__288__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__288__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__288__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__288__count)));
                            vlSelf->__Vfunc_leading_zero32__288__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__288__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__288__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__288__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__288__count)));
                            vlSelf->__Vfunc_leading_zero32__288__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__288__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__288__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__288__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__288__count)));
                            vlSelf->__Vfunc_leading_zero32__288__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__288__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__288__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__288__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__288__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__288__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__288__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__288__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__288__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__43__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__43__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__294__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__43__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__294__part 
                            = vlSelf->__Vfunc_leading_zero32__294__value;
                        vlSelf->__Vfunc_leading_zero32__294__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__294__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__294__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__294__count)));
                            vlSelf->__Vfunc_leading_zero32__294__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__294__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__294__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__294__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__294__count)));
                            vlSelf->__Vfunc_leading_zero32__294__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__294__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__294__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__294__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__294__count)));
                            vlSelf->__Vfunc_leading_zero32__294__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__294__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__294__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__294__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__294__count)));
                            vlSelf->__Vfunc_leading_zero32__294__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__294__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__294__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__294__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__294__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__294__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__294__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__294__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__294__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__44__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__44__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__300__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__44__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__300__part 
                            = vlSelf->__Vfunc_leading_zero32__300__value;
                        vlSelf->__Vfunc_leading_zero32__300__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__300__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__300__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__300__count)));
                            vlSelf->__Vfunc_leading_zero32__300__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__300__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__300__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__300__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__300__count)));
                            vlSelf->__Vfunc_leading_zero32__300__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__300__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__300__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__300__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__300__count)));
                            vlSelf->__Vfunc_leading_zero32__300__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__300__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__300__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__300__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__300__count)));
                            vlSelf->__Vfunc_leading_zero32__300__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__300__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__300__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__300__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__300__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__300__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__300__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__300__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__300__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__45__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__45__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__306__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__45__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__306__part 
                            = vlSelf->__Vfunc_leading_zero32__306__value;
                        vlSelf->__Vfunc_leading_zero32__306__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__306__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__306__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__306__count)));
                            vlSelf->__Vfunc_leading_zero32__306__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__306__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__306__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__306__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__306__count)));
                            vlSelf->__Vfunc_leading_zero32__306__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__306__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__306__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__306__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__306__count)));
                            vlSelf->__Vfunc_leading_zero32__306__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__306__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__306__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__306__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__306__count)));
                            vlSelf->__Vfunc_leading_zero32__306__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__306__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__306__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__306__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__306__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__306__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__306__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__306__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__306__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__46__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__46__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__312__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__46__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__312__part 
                            = vlSelf->__Vfunc_leading_zero32__312__value;
                        vlSelf->__Vfunc_leading_zero32__312__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__312__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__312__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__312__count)));
                            vlSelf->__Vfunc_leading_zero32__312__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__312__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__312__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__312__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__312__count)));
                            vlSelf->__Vfunc_leading_zero32__312__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__312__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__312__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__312__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__312__count)));
                            vlSelf->__Vfunc_leading_zero32__312__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__312__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__312__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__312__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__312__count)));
                            vlSelf->__Vfunc_leading_zero32__312__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__312__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__312__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__312__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__312__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__312__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__312__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__312__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__312__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__47__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__47__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__318__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__47__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__318__part 
                            = vlSelf->__Vfunc_leading_zero32__318__value;
                        vlSelf->__Vfunc_leading_zero32__318__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__318__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__318__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__318__count)));
                            vlSelf->__Vfunc_leading_zero32__318__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__318__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__318__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__318__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__318__count)));
                            vlSelf->__Vfunc_leading_zero32__318__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__318__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__318__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__318__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__318__count)));
                            vlSelf->__Vfunc_leading_zero32__318__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__318__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__318__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__318__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__318__count)));
                            vlSelf->__Vfunc_leading_zero32__318__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__318__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__318__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__318__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__318__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__318__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__318__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__318__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__318__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__48__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__48__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__324__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__48__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__324__part 
                            = vlSelf->__Vfunc_leading_zero32__324__value;
                        vlSelf->__Vfunc_leading_zero32__324__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__324__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__324__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__324__count)));
                            vlSelf->__Vfunc_leading_zero32__324__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__324__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__324__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__324__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__324__count)));
                            vlSelf->__Vfunc_leading_zero32__324__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__324__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__324__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__324__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__324__count)));
                            vlSelf->__Vfunc_leading_zero32__324__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__324__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__324__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__324__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__324__count)));
                            vlSelf->__Vfunc_leading_zero32__324__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__324__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__324__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__324__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__324__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__324__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__324__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__324__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__324__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__49__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__49__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__330__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__49__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__330__part 
                            = vlSelf->__Vfunc_leading_zero32__330__value;
                        vlSelf->__Vfunc_leading_zero32__330__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__330__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__330__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__330__count)));
                            vlSelf->__Vfunc_leading_zero32__330__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__330__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__330__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__330__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__330__count)));
                            vlSelf->__Vfunc_leading_zero32__330__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__330__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__330__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__330__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__330__count)));
                            vlSelf->__Vfunc_leading_zero32__330__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__330__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__330__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__330__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__330__count)));
                            vlSelf->__Vfunc_leading_zero32__330__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__330__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__330__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__330__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__330__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__330__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__330__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__330__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__330__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__50__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__50__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__336__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__50__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__336__part 
                            = vlSelf->__Vfunc_leading_zero32__336__value;
                        vlSelf->__Vfunc_leading_zero32__336__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__336__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__336__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__336__count)));
                            vlSelf->__Vfunc_leading_zero32__336__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__336__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__336__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__336__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__336__count)));
                            vlSelf->__Vfunc_leading_zero32__336__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__336__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__336__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__336__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__336__count)));
                            vlSelf->__Vfunc_leading_zero32__336__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__336__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__336__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__336__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__336__count)));
                            vlSelf->__Vfunc_leading_zero32__336__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__336__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__336__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__336__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__336__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__336__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__336__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__336__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__336__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__51__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__51__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__342__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__51__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__342__part 
                            = vlSelf->__Vfunc_leading_zero32__342__value;
                        vlSelf->__Vfunc_leading_zero32__342__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__342__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__342__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__342__count)));
                            vlSelf->__Vfunc_leading_zero32__342__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__342__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__342__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__342__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__342__count)));
                            vlSelf->__Vfunc_leading_zero32__342__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__342__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__342__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__342__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__342__count)));
                            vlSelf->__Vfunc_leading_zero32__342__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__342__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__342__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__342__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__342__count)));
                            vlSelf->__Vfunc_leading_zero32__342__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__342__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__342__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__342__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__342__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__342__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__342__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__342__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__342__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__52__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__52__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__348__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__52__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__348__part 
                            = vlSelf->__Vfunc_leading_zero32__348__value;
                        vlSelf->__Vfunc_leading_zero32__348__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__348__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__348__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__348__count)));
                            vlSelf->__Vfunc_leading_zero32__348__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__348__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__348__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__348__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__348__count)));
                            vlSelf->__Vfunc_leading_zero32__348__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__348__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__348__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__348__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__348__count)));
                            vlSelf->__Vfunc_leading_zero32__348__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__348__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__348__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__348__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__348__count)));
                            vlSelf->__Vfunc_leading_zero32__348__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__348__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__348__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__348__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__348__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__348__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__348__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__348__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__348__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__53__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__53__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__354__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__53__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__354__part 
                            = vlSelf->__Vfunc_leading_zero32__354__value;
                        vlSelf->__Vfunc_leading_zero32__354__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__354__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__354__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__354__count)));
                            vlSelf->__Vfunc_leading_zero32__354__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__354__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__354__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__354__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__354__count)));
                            vlSelf->__Vfunc_leading_zero32__354__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__354__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__354__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__354__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__354__count)));
                            vlSelf->__Vfunc_leading_zero32__354__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__354__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__354__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__354__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__354__count)));
                            vlSelf->__Vfunc_leading_zero32__354__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__354__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__354__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__354__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__354__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__354__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__354__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__354__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__354__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__54__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__54__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__360__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__54__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__360__part 
                            = vlSelf->__Vfunc_leading_zero32__360__value;
                        vlSelf->__Vfunc_leading_zero32__360__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__360__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__360__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__360__count)));
                            vlSelf->__Vfunc_leading_zero32__360__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__360__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__360__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__360__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__360__count)));
                            vlSelf->__Vfunc_leading_zero32__360__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__360__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__360__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__360__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__360__count)));
                            vlSelf->__Vfunc_leading_zero32__360__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__360__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__360__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__360__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__360__count)));
                            vlSelf->__Vfunc_leading_zero32__360__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__360__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__360__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__360__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__360__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__360__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__360__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__360__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__360__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__55__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__55__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__366__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__55__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__366__part 
                            = vlSelf->__Vfunc_leading_zero32__366__value;
                        vlSelf->__Vfunc_leading_zero32__366__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__366__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__366__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__366__count)));
                            vlSelf->__Vfunc_leading_zero32__366__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__366__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__366__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__366__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__366__count)));
                            vlSelf->__Vfunc_leading_zero32__366__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__366__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__366__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__366__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__366__count)));
                            vlSelf->__Vfunc_leading_zero32__366__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__366__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__366__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__366__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__366__count)));
                            vlSelf->__Vfunc_leading_zero32__366__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__366__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__366__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__366__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__366__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__366__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__366__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__366__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__366__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__56__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__56__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__372__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__56__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__372__part 
                            = vlSelf->__Vfunc_leading_zero32__372__value;
                        vlSelf->__Vfunc_leading_zero32__372__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__372__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__372__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__372__count)));
                            vlSelf->__Vfunc_leading_zero32__372__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__372__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__372__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__372__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__372__count)));
                            vlSelf->__Vfunc_leading_zero32__372__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__372__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__372__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__372__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__372__count)));
                            vlSelf->__Vfunc_leading_zero32__372__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__372__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__372__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__372__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__372__count)));
                            vlSelf->__Vfunc_leading_zero32__372__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__372__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__372__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__372__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__372__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__372__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__372__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__372__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__372__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__57__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__57__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__378__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__57__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__378__part 
                            = vlSelf->__Vfunc_leading_zero32__378__value;
                        vlSelf->__Vfunc_leading_zero32__378__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__378__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__378__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__378__count)));
                            vlSelf->__Vfunc_leading_zero32__378__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__378__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__378__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__378__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__378__count)));
                            vlSelf->__Vfunc_leading_zero32__378__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__378__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__378__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__378__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__378__count)));
                            vlSelf->__Vfunc_leading_zero32__378__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__378__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__378__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__378__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__378__count)));
                            vlSelf->__Vfunc_leading_zero32__378__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__378__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__378__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__378__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__378__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__378__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__378__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__378__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__378__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__58__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__58__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__384__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__58__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__384__part 
                            = vlSelf->__Vfunc_leading_zero32__384__value;
                        vlSelf->__Vfunc_leading_zero32__384__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__384__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__384__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__384__count)));
                            vlSelf->__Vfunc_leading_zero32__384__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__384__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__384__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__384__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__384__count)));
                            vlSelf->__Vfunc_leading_zero32__384__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__384__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__384__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__384__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__384__count)));
                            vlSelf->__Vfunc_leading_zero32__384__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__384__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__384__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__384__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__384__count)));
                            vlSelf->__Vfunc_leading_zero32__384__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__384__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__384__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__384__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__384__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__384__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__384__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__384__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__384__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__59__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__59__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__390__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__59__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__390__part 
                            = vlSelf->__Vfunc_leading_zero32__390__value;
                        vlSelf->__Vfunc_leading_zero32__390__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__390__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__390__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__390__count)));
                            vlSelf->__Vfunc_leading_zero32__390__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__390__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__390__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__390__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__390__count)));
                            vlSelf->__Vfunc_leading_zero32__390__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__390__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__390__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__390__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__390__count)));
                            vlSelf->__Vfunc_leading_zero32__390__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__390__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__390__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__390__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__390__count)));
                            vlSelf->__Vfunc_leading_zero32__390__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__390__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__390__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__390__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__390__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__390__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__390__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__390__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__390__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__60__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__60__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__396__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__60__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__396__part 
                            = vlSelf->__Vfunc_leading_zero32__396__value;
                        vlSelf->__Vfunc_leading_zero32__396__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__396__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__396__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__396__count)));
                            vlSelf->__Vfunc_leading_zero32__396__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__396__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__396__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__396__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__396__count)));
                            vlSelf->__Vfunc_leading_zero32__396__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__396__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__396__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__396__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__396__count)));
                            vlSelf->__Vfunc_leading_zero32__396__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__396__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__396__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__396__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__396__count)));
                            vlSelf->__Vfunc_leading_zero32__396__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__396__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__396__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__396__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__396__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__396__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__396__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__396__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__396__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__61__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__61__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__402__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__61__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__402__part 
                            = vlSelf->__Vfunc_leading_zero32__402__value;
                        vlSelf->__Vfunc_leading_zero32__402__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__402__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__402__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__402__count)));
                            vlSelf->__Vfunc_leading_zero32__402__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__402__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__402__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__402__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__402__count)));
                            vlSelf->__Vfunc_leading_zero32__402__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__402__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__402__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__402__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__402__count)));
                            vlSelf->__Vfunc_leading_zero32__402__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__402__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__402__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__402__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__402__count)));
                            vlSelf->__Vfunc_leading_zero32__402__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__402__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__402__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__402__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__402__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__402__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__402__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__402__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__402__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__62__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__62__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__408__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__62__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__408__part 
                            = vlSelf->__Vfunc_leading_zero32__408__value;
                        vlSelf->__Vfunc_leading_zero32__408__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__408__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__408__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__408__count)));
                            vlSelf->__Vfunc_leading_zero32__408__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__408__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__408__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__408__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__408__count)));
                            vlSelf->__Vfunc_leading_zero32__408__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__408__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__408__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__408__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__408__count)));
                            vlSelf->__Vfunc_leading_zero32__408__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__408__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__408__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__408__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__408__count)));
                            vlSelf->__Vfunc_leading_zero32__408__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__408__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__408__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__408__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__408__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__408__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__408__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__408__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__408__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__63__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__63__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__414__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__63__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__414__part 
                            = vlSelf->__Vfunc_leading_zero32__414__value;
                        vlSelf->__Vfunc_leading_zero32__414__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__414__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__414__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__414__count)));
                            vlSelf->__Vfunc_leading_zero32__414__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__414__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__414__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__414__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__414__count)));
                            vlSelf->__Vfunc_leading_zero32__414__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__414__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__414__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__414__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__414__count)));
                            vlSelf->__Vfunc_leading_zero32__414__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__414__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__414__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__414__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__414__count)));
                            vlSelf->__Vfunc_leading_zero32__414__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__414__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__414__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__414__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__414__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__414__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__414__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__414__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__414__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__64__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__64__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__420__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__64__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__420__part 
                            = vlSelf->__Vfunc_leading_zero32__420__value;
                        vlSelf->__Vfunc_leading_zero32__420__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__420__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__420__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__420__count)));
                            vlSelf->__Vfunc_leading_zero32__420__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__420__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__420__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__420__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__420__count)));
                            vlSelf->__Vfunc_leading_zero32__420__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__420__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__420__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__420__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__420__count)));
                            vlSelf->__Vfunc_leading_zero32__420__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__420__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__420__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__420__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__420__count)));
                            vlSelf->__Vfunc_leading_zero32__420__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__420__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__420__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__420__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__420__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__420__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__420__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__420__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__420__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__65__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__65__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__426__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__65__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__426__part 
                            = vlSelf->__Vfunc_leading_zero32__426__value;
                        vlSelf->__Vfunc_leading_zero32__426__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__426__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__426__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__426__count)));
                            vlSelf->__Vfunc_leading_zero32__426__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__426__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__426__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__426__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__426__count)));
                            vlSelf->__Vfunc_leading_zero32__426__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__426__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__426__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__426__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__426__count)));
                            vlSelf->__Vfunc_leading_zero32__426__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__426__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__426__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__426__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__426__count)));
                            vlSelf->__Vfunc_leading_zero32__426__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__426__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__426__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__426__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__426__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__426__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__426__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__426__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__426__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__66__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__66__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__432__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__66__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__432__part 
                            = vlSelf->__Vfunc_leading_zero32__432__value;
                        vlSelf->__Vfunc_leading_zero32__432__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__432__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__432__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__432__count)));
                            vlSelf->__Vfunc_leading_zero32__432__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__432__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__432__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__432__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__432__count)));
                            vlSelf->__Vfunc_leading_zero32__432__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__432__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__432__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__432__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__432__count)));
                            vlSelf->__Vfunc_leading_zero32__432__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__432__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__432__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__432__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__432__count)));
                            vlSelf->__Vfunc_leading_zero32__432__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__432__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__432__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__432__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__432__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__432__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__432__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__432__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__432__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__67__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__67__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__438__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__67__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__438__part 
                            = vlSelf->__Vfunc_leading_zero32__438__value;
                        vlSelf->__Vfunc_leading_zero32__438__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__438__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__438__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__438__count)));
                            vlSelf->__Vfunc_leading_zero32__438__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__438__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__438__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__438__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__438__count)));
                            vlSelf->__Vfunc_leading_zero32__438__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__438__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__438__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__438__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__438__count)));
                            vlSelf->__Vfunc_leading_zero32__438__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__438__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__438__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__438__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__438__count)));
                            vlSelf->__Vfunc_leading_zero32__438__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__438__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__438__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__438__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__438__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__438__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__438__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__438__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__438__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__68__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__68__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__444__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__68__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__444__part 
                            = vlSelf->__Vfunc_leading_zero32__444__value;
                        vlSelf->__Vfunc_leading_zero32__444__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__444__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__444__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__444__count)));
                            vlSelf->__Vfunc_leading_zero32__444__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__444__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__444__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__444__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__444__count)));
                            vlSelf->__Vfunc_leading_zero32__444__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__444__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__444__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__444__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__444__count)));
                            vlSelf->__Vfunc_leading_zero32__444__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__444__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__444__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__444__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__444__count)));
                            vlSelf->__Vfunc_leading_zero32__444__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__444__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__444__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__444__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__444__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__444__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__444__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__444__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__444__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__69__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__69__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__450__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__69__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__450__part 
                            = vlSelf->__Vfunc_leading_zero32__450__value;
                        vlSelf->__Vfunc_leading_zero32__450__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__450__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__450__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__450__count)));
                            vlSelf->__Vfunc_leading_zero32__450__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__450__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__450__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__450__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__450__count)));
                            vlSelf->__Vfunc_leading_zero32__450__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__450__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__450__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__450__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__450__count)));
                            vlSelf->__Vfunc_leading_zero32__450__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__450__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__450__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__450__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__450__count)));
                            vlSelf->__Vfunc_leading_zero32__450__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__450__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__450__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__450__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__450__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__450__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__450__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__450__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__450__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__70__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__70__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__456__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__70__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__456__part 
                            = vlSelf->__Vfunc_leading_zero32__456__value;
                        vlSelf->__Vfunc_leading_zero32__456__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__456__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__456__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__456__count)));
                            vlSelf->__Vfunc_leading_zero32__456__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__456__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__456__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__456__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__456__count)));
                            vlSelf->__Vfunc_leading_zero32__456__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__456__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__456__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__456__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__456__count)));
                            vlSelf->__Vfunc_leading_zero32__456__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__456__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__456__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__456__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__456__count)));
                            vlSelf->__Vfunc_leading_zero32__456__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__456__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__456__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__456__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__456__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__456__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__456__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__456__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__456__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__71__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__71__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__462__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__71__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__462__part 
                            = vlSelf->__Vfunc_leading_zero32__462__value;
                        vlSelf->__Vfunc_leading_zero32__462__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__462__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__462__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__462__count)));
                            vlSelf->__Vfunc_leading_zero32__462__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__462__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__462__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__462__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__462__count)));
                            vlSelf->__Vfunc_leading_zero32__462__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__462__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__462__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__462__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__462__count)));
                            vlSelf->__Vfunc_leading_zero32__462__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__462__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__462__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__462__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__462__count)));
                            vlSelf->__Vfunc_leading_zero32__462__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__462__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__462__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__462__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__462__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__462__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__462__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__462__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__462__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__72__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__72__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__468__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__72__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__468__part 
                            = vlSelf->__Vfunc_leading_zero32__468__value;
                        vlSelf->__Vfunc_leading_zero32__468__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__468__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__468__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__468__count)));
                            vlSelf->__Vfunc_leading_zero32__468__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__468__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__468__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__468__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__468__count)));
                            vlSelf->__Vfunc_leading_zero32__468__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__468__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__468__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__468__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__468__count)));
                            vlSelf->__Vfunc_leading_zero32__468__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__468__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__468__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__468__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__468__count)));
                            vlSelf->__Vfunc_leading_zero32__468__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__468__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__468__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__468__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__468__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__468__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__468__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__468__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__468__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__73__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__73__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__474__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__73__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__474__part 
                            = vlSelf->__Vfunc_leading_zero32__474__value;
                        vlSelf->__Vfunc_leading_zero32__474__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__474__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__474__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__474__count)));
                            vlSelf->__Vfunc_leading_zero32__474__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__474__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__474__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__474__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__474__count)));
                            vlSelf->__Vfunc_leading_zero32__474__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__474__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__474__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__474__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__474__count)));
                            vlSelf->__Vfunc_leading_zero32__474__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__474__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__474__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__474__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__474__count)));
                            vlSelf->__Vfunc_leading_zero32__474__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__474__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__474__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__474__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__474__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__474__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__474__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__474__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__474__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__74__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__74__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__480__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__74__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__480__part 
                            = vlSelf->__Vfunc_leading_zero32__480__value;
                        vlSelf->__Vfunc_leading_zero32__480__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__480__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__480__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__480__count)));
                            vlSelf->__Vfunc_leading_zero32__480__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__480__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__480__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__480__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__480__count)));
                            vlSelf->__Vfunc_leading_zero32__480__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__480__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__480__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__480__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__480__count)));
                            vlSelf->__Vfunc_leading_zero32__480__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__480__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__480__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__480__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__480__count)));
                            vlSelf->__Vfunc_leading_zero32__480__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__480__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__480__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__480__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__480__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__480__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__480__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__480__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__480__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__75__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__75__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__486__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__75__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__486__part 
                            = vlSelf->__Vfunc_leading_zero32__486__value;
                        vlSelf->__Vfunc_leading_zero32__486__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__486__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__486__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__486__count)));
                            vlSelf->__Vfunc_leading_zero32__486__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__486__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__486__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__486__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__486__count)));
                            vlSelf->__Vfunc_leading_zero32__486__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__486__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__486__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__486__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__486__count)));
                            vlSelf->__Vfunc_leading_zero32__486__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__486__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__486__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__486__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__486__count)));
                            vlSelf->__Vfunc_leading_zero32__486__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__486__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__486__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__486__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__486__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__486__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__486__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__486__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__486__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__76__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__76__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__492__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__76__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__492__part 
                            = vlSelf->__Vfunc_leading_zero32__492__value;
                        vlSelf->__Vfunc_leading_zero32__492__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__492__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__492__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__492__count)));
                            vlSelf->__Vfunc_leading_zero32__492__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__492__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__492__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__492__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__492__count)));
                            vlSelf->__Vfunc_leading_zero32__492__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__492__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__492__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__492__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__492__count)));
                            vlSelf->__Vfunc_leading_zero32__492__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__492__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__492__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__492__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__492__count)));
                            vlSelf->__Vfunc_leading_zero32__492__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__492__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__492__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__492__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__492__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__492__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__492__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__492__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__492__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__77__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__77__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__498__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__77__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__498__part 
                            = vlSelf->__Vfunc_leading_zero32__498__value;
                        vlSelf->__Vfunc_leading_zero32__498__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__498__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__498__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__498__count)));
                            vlSelf->__Vfunc_leading_zero32__498__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__498__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__498__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__498__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__498__count)));
                            vlSelf->__Vfunc_leading_zero32__498__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__498__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__498__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__498__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__498__count)));
                            vlSelf->__Vfunc_leading_zero32__498__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__498__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__498__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__498__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__498__count)));
                            vlSelf->__Vfunc_leading_zero32__498__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__498__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__498__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__498__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__498__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__498__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__498__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__498__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__498__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__78__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__78__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__504__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__78__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__504__part 
                            = vlSelf->__Vfunc_leading_zero32__504__value;
                        vlSelf->__Vfunc_leading_zero32__504__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__504__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__504__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__504__count)));
                            vlSelf->__Vfunc_leading_zero32__504__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__504__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__504__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__504__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__504__count)));
                            vlSelf->__Vfunc_leading_zero32__504__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__504__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__504__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__504__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__504__count)));
                            vlSelf->__Vfunc_leading_zero32__504__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__504__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__504__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__504__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__504__count)));
                            vlSelf->__Vfunc_leading_zero32__504__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__504__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__504__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__504__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__504__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__504__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__504__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__504__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__504__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__79__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__79__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__510__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__79__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__510__part 
                            = vlSelf->__Vfunc_leading_zero32__510__value;
                        vlSelf->__Vfunc_leading_zero32__510__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__510__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__510__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__510__count)));
                            vlSelf->__Vfunc_leading_zero32__510__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__510__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__510__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__510__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__510__count)));
                            vlSelf->__Vfunc_leading_zero32__510__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__510__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__510__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__510__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__510__count)));
                            vlSelf->__Vfunc_leading_zero32__510__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__510__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__510__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__510__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__510__count)));
                            vlSelf->__Vfunc_leading_zero32__510__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__510__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__510__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__510__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__510__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__510__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__510__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__510__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__510__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__80__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__80__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__516__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__80__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__516__part 
                            = vlSelf->__Vfunc_leading_zero32__516__value;
                        vlSelf->__Vfunc_leading_zero32__516__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__516__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__516__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__516__count)));
                            vlSelf->__Vfunc_leading_zero32__516__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__516__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__516__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__516__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__516__count)));
                            vlSelf->__Vfunc_leading_zero32__516__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__516__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__516__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__516__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__516__count)));
                            vlSelf->__Vfunc_leading_zero32__516__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__516__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__516__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__516__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__516__count)));
                            vlSelf->__Vfunc_leading_zero32__516__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__516__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__516__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__516__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__516__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__516__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__516__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__516__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__516__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__81__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__81__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__522__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__81__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__522__part 
                            = vlSelf->__Vfunc_leading_zero32__522__value;
                        vlSelf->__Vfunc_leading_zero32__522__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__522__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__522__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__522__count)));
                            vlSelf->__Vfunc_leading_zero32__522__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__522__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__522__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__522__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__522__count)));
                            vlSelf->__Vfunc_leading_zero32__522__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__522__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__522__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__522__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__522__count)));
                            vlSelf->__Vfunc_leading_zero32__522__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__522__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__522__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__522__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__522__count)));
                            vlSelf->__Vfunc_leading_zero32__522__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__522__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__522__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__522__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__522__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__522__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__522__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__522__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__522__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__82__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__82__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__528__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__82__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__528__part 
                            = vlSelf->__Vfunc_leading_zero32__528__value;
                        vlSelf->__Vfunc_leading_zero32__528__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__528__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__528__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__528__count)));
                            vlSelf->__Vfunc_leading_zero32__528__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__528__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__528__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__528__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__528__count)));
                            vlSelf->__Vfunc_leading_zero32__528__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__528__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__528__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__528__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__528__count)));
                            vlSelf->__Vfunc_leading_zero32__528__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__528__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__528__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__528__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__528__count)));
                            vlSelf->__Vfunc_leading_zero32__528__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__528__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__528__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__528__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__528__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__528__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__528__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__528__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__528__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__83__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__83__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__534__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__83__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__534__part 
                            = vlSelf->__Vfunc_leading_zero32__534__value;
                        vlSelf->__Vfunc_leading_zero32__534__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__534__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__534__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__534__count)));
                            vlSelf->__Vfunc_leading_zero32__534__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__534__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__534__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__534__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__534__count)));
                            vlSelf->__Vfunc_leading_zero32__534__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__534__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__534__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__534__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__534__count)));
                            vlSelf->__Vfunc_leading_zero32__534__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__534__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__534__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__534__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__534__count)));
                            vlSelf->__Vfunc_leading_zero32__534__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__534__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__534__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__534__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__534__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__534__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__534__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__534__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__534__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__84__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__84__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__540__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__84__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__540__part 
                            = vlSelf->__Vfunc_leading_zero32__540__value;
                        vlSelf->__Vfunc_leading_zero32__540__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__540__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__540__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__540__count)));
                            vlSelf->__Vfunc_leading_zero32__540__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__540__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__540__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__540__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__540__count)));
                            vlSelf->__Vfunc_leading_zero32__540__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__540__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__540__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__540__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__540__count)));
                            vlSelf->__Vfunc_leading_zero32__540__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__540__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__540__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__540__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__540__count)));
                            vlSelf->__Vfunc_leading_zero32__540__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__540__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__540__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__540__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__540__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__540__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__540__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__540__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__540__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__85__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__85__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__546__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__85__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__546__part 
                            = vlSelf->__Vfunc_leading_zero32__546__value;
                        vlSelf->__Vfunc_leading_zero32__546__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__546__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__546__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__546__count)));
                            vlSelf->__Vfunc_leading_zero32__546__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__546__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__546__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__546__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__546__count)));
                            vlSelf->__Vfunc_leading_zero32__546__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__546__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__546__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__546__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__546__count)));
                            vlSelf->__Vfunc_leading_zero32__546__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__546__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__546__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__546__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__546__count)));
                            vlSelf->__Vfunc_leading_zero32__546__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__546__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__546__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__546__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__546__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__546__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__546__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__546__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__546__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__86__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__86__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__552__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__86__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__552__part 
                            = vlSelf->__Vfunc_leading_zero32__552__value;
                        vlSelf->__Vfunc_leading_zero32__552__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__552__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__552__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__552__count)));
                            vlSelf->__Vfunc_leading_zero32__552__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__552__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__552__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__552__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__552__count)));
                            vlSelf->__Vfunc_leading_zero32__552__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__552__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__552__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__552__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__552__count)));
                            vlSelf->__Vfunc_leading_zero32__552__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__552__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__552__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__552__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__552__count)));
                            vlSelf->__Vfunc_leading_zero32__552__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__552__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__552__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__552__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__552__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__552__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__552__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__552__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__552__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__87__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__87__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__558__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__87__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__558__part 
                            = vlSelf->__Vfunc_leading_zero32__558__value;
                        vlSelf->__Vfunc_leading_zero32__558__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__558__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__558__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__558__count)));
                            vlSelf->__Vfunc_leading_zero32__558__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__558__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__558__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__558__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__558__count)));
                            vlSelf->__Vfunc_leading_zero32__558__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__558__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__558__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__558__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__558__count)));
                            vlSelf->__Vfunc_leading_zero32__558__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__558__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__558__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__558__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__558__count)));
                            vlSelf->__Vfunc_leading_zero32__558__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__558__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__558__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__558__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__558__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__558__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__558__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__558__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__558__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__88__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__88__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__564__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__88__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__564__part 
                            = vlSelf->__Vfunc_leading_zero32__564__value;
                        vlSelf->__Vfunc_leading_zero32__564__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__564__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__564__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__564__count)));
                            vlSelf->__Vfunc_leading_zero32__564__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__564__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__564__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__564__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__564__count)));
                            vlSelf->__Vfunc_leading_zero32__564__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__564__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__564__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__564__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__564__count)));
                            vlSelf->__Vfunc_leading_zero32__564__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__564__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__564__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__564__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__564__count)));
                            vlSelf->__Vfunc_leading_zero32__564__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__564__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__564__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__564__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__564__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__564__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__564__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__564__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__564__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__89__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__89__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__570__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__89__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__570__part 
                            = vlSelf->__Vfunc_leading_zero32__570__value;
                        vlSelf->__Vfunc_leading_zero32__570__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__570__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__570__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__570__count)));
                            vlSelf->__Vfunc_leading_zero32__570__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__570__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__570__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__570__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__570__count)));
                            vlSelf->__Vfunc_leading_zero32__570__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__570__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__570__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__570__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__570__count)));
                            vlSelf->__Vfunc_leading_zero32__570__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__570__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__570__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__570__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__570__count)));
                            vlSelf->__Vfunc_leading_zero32__570__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__570__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__570__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__570__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__570__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__570__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__570__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__570__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__570__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__90__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__90__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__576__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__90__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__576__part 
                            = vlSelf->__Vfunc_leading_zero32__576__value;
                        vlSelf->__Vfunc_leading_zero32__576__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__576__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__576__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__576__count)));
                            vlSelf->__Vfunc_leading_zero32__576__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__576__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__576__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__576__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__576__count)));
                            vlSelf->__Vfunc_leading_zero32__576__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__576__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__576__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__576__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__576__count)));
                            vlSelf->__Vfunc_leading_zero32__576__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__576__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__576__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__576__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__576__count)));
                            vlSelf->__Vfunc_leading_zero32__576__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__576__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__576__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__576__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__576__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__576__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__576__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__576__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__576__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__91__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__91__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__582__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__91__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__582__part 
                            = vlSelf->__Vfunc_leading_zero32__582__value;
                        vlSelf->__Vfunc_leading_zero32__582__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__582__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__582__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__582__count)));
                            vlSelf->__Vfunc_leading_zero32__582__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__582__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__582__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__582__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__582__count)));
                            vlSelf->__Vfunc_leading_zero32__582__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__582__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__582__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__582__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__582__count)));
                            vlSelf->__Vfunc_leading_zero32__582__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__582__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__582__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__582__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__582__count)));
                            vlSelf->__Vfunc_leading_zero32__582__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__582__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__582__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__582__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__582__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__582__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__582__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__582__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__582__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__92__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__92__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__588__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__92__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__588__part 
                            = vlSelf->__Vfunc_leading_zero32__588__value;
                        vlSelf->__Vfunc_leading_zero32__588__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__588__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__588__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__588__count)));
                            vlSelf->__Vfunc_leading_zero32__588__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__588__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__588__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__588__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__588__count)));
                            vlSelf->__Vfunc_leading_zero32__588__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__588__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__588__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__588__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__588__count)));
                            vlSelf->__Vfunc_leading_zero32__588__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__588__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__588__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__588__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__588__count)));
                            vlSelf->__Vfunc_leading_zero32__588__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__588__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__588__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__588__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__588__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__588__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__588__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__588__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__588__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__93__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__93__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__594__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__93__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__594__part 
                            = vlSelf->__Vfunc_leading_zero32__594__value;
                        vlSelf->__Vfunc_leading_zero32__594__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__594__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__594__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__594__count)));
                            vlSelf->__Vfunc_leading_zero32__594__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__594__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__594__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__594__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__594__count)));
                            vlSelf->__Vfunc_leading_zero32__594__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__594__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__594__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__594__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__594__count)));
                            vlSelf->__Vfunc_leading_zero32__594__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__594__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__594__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__594__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__594__count)));
                            vlSelf->__Vfunc_leading_zero32__594__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__594__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__594__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__594__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__594__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__594__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__594__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__594__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__594__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__94__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__94__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__600__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__94__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__600__part 
                            = vlSelf->__Vfunc_leading_zero32__600__value;
                        vlSelf->__Vfunc_leading_zero32__600__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__600__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__600__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__600__count)));
                            vlSelf->__Vfunc_leading_zero32__600__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__600__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__600__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__600__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__600__count)));
                            vlSelf->__Vfunc_leading_zero32__600__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__600__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__600__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__600__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__600__count)));
                            vlSelf->__Vfunc_leading_zero32__600__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__600__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__600__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__600__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__600__count)));
                            vlSelf->__Vfunc_leading_zero32__600__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__600__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__600__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__600__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__600__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__600__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__600__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__600__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__600__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__95__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__95__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__606__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__95__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__606__part 
                            = vlSelf->__Vfunc_leading_zero32__606__value;
                        vlSelf->__Vfunc_leading_zero32__606__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__606__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__606__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__606__count)));
                            vlSelf->__Vfunc_leading_zero32__606__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__606__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__606__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__606__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__606__count)));
                            vlSelf->__Vfunc_leading_zero32__606__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__606__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__606__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__606__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__606__count)));
                            vlSelf->__Vfunc_leading_zero32__606__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__606__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__606__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__606__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__606__count)));
                            vlSelf->__Vfunc_leading_zero32__606__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__606__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__606__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__606__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__606__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__606__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__606__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__606__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__606__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__96__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__96__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__612__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__96__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__612__part 
                            = vlSelf->__Vfunc_leading_zero32__612__value;
                        vlSelf->__Vfunc_leading_zero32__612__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__612__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__612__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__612__count)));
                            vlSelf->__Vfunc_leading_zero32__612__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__612__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__612__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__612__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__612__count)));
                            vlSelf->__Vfunc_leading_zero32__612__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__612__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__612__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__612__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__612__count)));
                            vlSelf->__Vfunc_leading_zero32__612__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__612__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__612__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__612__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__612__count)));
                            vlSelf->__Vfunc_leading_zero32__612__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__612__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__612__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__612__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__612__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__612__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__612__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__612__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__612__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__97__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__97__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__618__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__97__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__618__part 
                            = vlSelf->__Vfunc_leading_zero32__618__value;
                        vlSelf->__Vfunc_leading_zero32__618__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__618__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__618__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__618__count)));
                            vlSelf->__Vfunc_leading_zero32__618__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__618__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__618__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__618__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__618__count)));
                            vlSelf->__Vfunc_leading_zero32__618__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__618__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__618__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__618__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__618__count)));
                            vlSelf->__Vfunc_leading_zero32__618__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__618__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__618__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__618__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__618__count)));
                            vlSelf->__Vfunc_leading_zero32__618__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__618__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__618__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__618__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__618__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__618__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__618__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__618__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__618__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__98__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__98__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__624__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__98__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__624__part 
                            = vlSelf->__Vfunc_leading_zero32__624__value;
                        vlSelf->__Vfunc_leading_zero32__624__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__624__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__624__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__624__count)));
                            vlSelf->__Vfunc_leading_zero32__624__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__624__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__624__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__624__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__624__count)));
                            vlSelf->__Vfunc_leading_zero32__624__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__624__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__624__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__624__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__624__count)));
                            vlSelf->__Vfunc_leading_zero32__624__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__624__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__624__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__624__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__624__count)));
                            vlSelf->__Vfunc_leading_zero32__624__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__624__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__624__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__624__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__624__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__624__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__624__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__624__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__624__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__99__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__99__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__630__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__99__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__630__part 
                            = vlSelf->__Vfunc_leading_zero32__630__value;
                        vlSelf->__Vfunc_leading_zero32__630__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__630__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__630__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__630__count)));
                            vlSelf->__Vfunc_leading_zero32__630__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__630__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__630__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__630__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__630__count)));
                            vlSelf->__Vfunc_leading_zero32__630__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__630__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__630__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__630__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__630__count)));
                            vlSelf->__Vfunc_leading_zero32__630__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__630__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__630__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__630__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__630__count)));
                            vlSelf->__Vfunc_leading_zero32__630__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__630__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__630__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__630__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__630__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__630__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__630__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__630__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__630__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__100__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__100__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__636__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__100__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__636__part 
                            = vlSelf->__Vfunc_leading_zero32__636__value;
                        vlSelf->__Vfunc_leading_zero32__636__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__636__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__636__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__636__count)));
                            vlSelf->__Vfunc_leading_zero32__636__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__636__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__636__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__636__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__636__count)));
                            vlSelf->__Vfunc_leading_zero32__636__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__636__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__636__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__636__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__636__count)));
                            vlSelf->__Vfunc_leading_zero32__636__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__636__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__636__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__636__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__636__count)));
                            vlSelf->__Vfunc_leading_zero32__636__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__636__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__636__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__636__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__636__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__636__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__636__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__636__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__636__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__101__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__101__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__642__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__101__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__642__part 
                            = vlSelf->__Vfunc_leading_zero32__642__value;
                        vlSelf->__Vfunc_leading_zero32__642__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__642__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__642__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__642__count)));
                            vlSelf->__Vfunc_leading_zero32__642__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__642__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__642__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__642__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__642__count)));
                            vlSelf->__Vfunc_leading_zero32__642__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__642__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__642__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__642__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__642__count)));
                            vlSelf->__Vfunc_leading_zero32__642__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__642__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__642__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__642__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__642__count)));
                            vlSelf->__Vfunc_leading_zero32__642__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__642__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__642__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__642__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__642__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__642__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__642__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__642__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__642__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__102__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__102__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__648__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__102__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__648__part 
                            = vlSelf->__Vfunc_leading_zero32__648__value;
                        vlSelf->__Vfunc_leading_zero32__648__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__648__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__648__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__648__count)));
                            vlSelf->__Vfunc_leading_zero32__648__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__648__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__648__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__648__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__648__count)));
                            vlSelf->__Vfunc_leading_zero32__648__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__648__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__648__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__648__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__648__count)));
                            vlSelf->__Vfunc_leading_zero32__648__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__648__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__648__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__648__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__648__count)));
                            vlSelf->__Vfunc_leading_zero32__648__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__648__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__648__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__648__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__648__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__648__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__648__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__648__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__648__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__103__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__103__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__654__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__103__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__654__part 
                            = vlSelf->__Vfunc_leading_zero32__654__value;
                        vlSelf->__Vfunc_leading_zero32__654__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__654__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__654__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__654__count)));
                            vlSelf->__Vfunc_leading_zero32__654__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__654__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__654__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__654__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__654__count)));
                            vlSelf->__Vfunc_leading_zero32__654__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__654__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__654__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__654__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__654__count)));
                            vlSelf->__Vfunc_leading_zero32__654__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__654__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__654__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__654__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__654__count)));
                            vlSelf->__Vfunc_leading_zero32__654__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__654__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__654__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__654__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__654__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__654__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__654__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__654__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__654__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__104__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__104__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__660__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__104__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__660__part 
                            = vlSelf->__Vfunc_leading_zero32__660__value;
                        vlSelf->__Vfunc_leading_zero32__660__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__660__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__660__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__660__count)));
                            vlSelf->__Vfunc_leading_zero32__660__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__660__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__660__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__660__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__660__count)));
                            vlSelf->__Vfunc_leading_zero32__660__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__660__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__660__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__660__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__660__count)));
                            vlSelf->__Vfunc_leading_zero32__660__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__660__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__660__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__660__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__660__count)));
                            vlSelf->__Vfunc_leading_zero32__660__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__660__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__660__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__660__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__660__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__660__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__660__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__660__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__660__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__105__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__105__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__666__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__105__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__666__part 
                            = vlSelf->__Vfunc_leading_zero32__666__value;
                        vlSelf->__Vfunc_leading_zero32__666__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__666__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__666__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__666__count)));
                            vlSelf->__Vfunc_leading_zero32__666__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__666__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__666__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__666__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__666__count)));
                            vlSelf->__Vfunc_leading_zero32__666__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__666__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__666__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__666__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__666__count)));
                            vlSelf->__Vfunc_leading_zero32__666__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__666__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__666__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__666__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__666__count)));
                            vlSelf->__Vfunc_leading_zero32__666__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__666__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__666__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__666__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__666__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__666__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__666__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__666__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__666__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__106__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__106__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__672__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__106__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__672__part 
                            = vlSelf->__Vfunc_leading_zero32__672__value;
                        vlSelf->__Vfunc_leading_zero32__672__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__672__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__672__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__672__count)));
                            vlSelf->__Vfunc_leading_zero32__672__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__672__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__672__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__672__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__672__count)));
                            vlSelf->__Vfunc_leading_zero32__672__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__672__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__672__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__672__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__672__count)));
                            vlSelf->__Vfunc_leading_zero32__672__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__672__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__672__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__672__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__672__count)));
                            vlSelf->__Vfunc_leading_zero32__672__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__672__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__672__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__672__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__672__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__672__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__672__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__672__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__672__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__107__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__107__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__678__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__107__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__678__part 
                            = vlSelf->__Vfunc_leading_zero32__678__value;
                        vlSelf->__Vfunc_leading_zero32__678__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__678__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__678__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__678__count)));
                            vlSelf->__Vfunc_leading_zero32__678__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__678__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__678__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__678__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__678__count)));
                            vlSelf->__Vfunc_leading_zero32__678__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__678__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__678__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__678__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__678__count)));
                            vlSelf->__Vfunc_leading_zero32__678__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__678__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__678__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__678__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__678__count)));
                            vlSelf->__Vfunc_leading_zero32__678__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__678__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__678__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__678__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__678__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__678__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__678__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__678__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__678__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__108__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__108__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__684__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__108__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__684__part 
                            = vlSelf->__Vfunc_leading_zero32__684__value;
                        vlSelf->__Vfunc_leading_zero32__684__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__684__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__684__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__684__count)));
                            vlSelf->__Vfunc_leading_zero32__684__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__684__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__684__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__684__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__684__count)));
                            vlSelf->__Vfunc_leading_zero32__684__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__684__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__684__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__684__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__684__count)));
                            vlSelf->__Vfunc_leading_zero32__684__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__684__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__684__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__684__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__684__count)));
                            vlSelf->__Vfunc_leading_zero32__684__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__684__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__684__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__684__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__684__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__684__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__684__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__684__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__684__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__109__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__109__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__690__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__109__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__690__part 
                            = vlSelf->__Vfunc_leading_zero32__690__value;
                        vlSelf->__Vfunc_leading_zero32__690__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__690__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__690__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__690__count)));
                            vlSelf->__Vfunc_leading_zero32__690__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__690__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__690__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__690__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__690__count)));
                            vlSelf->__Vfunc_leading_zero32__690__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__690__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__690__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__690__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__690__count)));
                            vlSelf->__Vfunc_leading_zero32__690__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__690__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__690__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__690__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__690__count)));
                            vlSelf->__Vfunc_leading_zero32__690__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__690__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__690__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__690__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__690__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__690__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__690__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__690__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__690__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__110__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__110__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__696__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__110__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__696__part 
                            = vlSelf->__Vfunc_leading_zero32__696__value;
                        vlSelf->__Vfunc_leading_zero32__696__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__696__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__696__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__696__count)));
                            vlSelf->__Vfunc_leading_zero32__696__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__696__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__696__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__696__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__696__count)));
                            vlSelf->__Vfunc_leading_zero32__696__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__696__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__696__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__696__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__696__count)));
                            vlSelf->__Vfunc_leading_zero32__696__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__696__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__696__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__696__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__696__count)));
                            vlSelf->__Vfunc_leading_zero32__696__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__696__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__696__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__696__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__696__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__696__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__696__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__696__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__696__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__111__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__111__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__702__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__111__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__702__part 
                            = vlSelf->__Vfunc_leading_zero32__702__value;
                        vlSelf->__Vfunc_leading_zero32__702__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__702__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__702__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__702__count)));
                            vlSelf->__Vfunc_leading_zero32__702__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__702__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__702__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__702__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__702__count)));
                            vlSelf->__Vfunc_leading_zero32__702__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__702__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__702__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__702__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__702__count)));
                            vlSelf->__Vfunc_leading_zero32__702__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__702__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__702__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__702__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__702__count)));
                            vlSelf->__Vfunc_leading_zero32__702__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__702__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__702__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__702__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__702__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__702__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__702__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__702__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__702__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__112__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__112__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__708__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__112__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__708__part 
                            = vlSelf->__Vfunc_leading_zero32__708__value;
                        vlSelf->__Vfunc_leading_zero32__708__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__708__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__708__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__708__count)));
                            vlSelf->__Vfunc_leading_zero32__708__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__708__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__708__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__708__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__708__count)));
                            vlSelf->__Vfunc_leading_zero32__708__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__708__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__708__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__708__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__708__count)));
                            vlSelf->__Vfunc_leading_zero32__708__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__708__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__708__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__708__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__708__count)));
                            vlSelf->__Vfunc_leading_zero32__708__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__708__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__708__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__708__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__708__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__708__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__708__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__708__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__708__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__113__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__113__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__714__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__113__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__714__part 
                            = vlSelf->__Vfunc_leading_zero32__714__value;
                        vlSelf->__Vfunc_leading_zero32__714__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__714__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__714__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__714__count)));
                            vlSelf->__Vfunc_leading_zero32__714__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__714__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__714__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__714__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__714__count)));
                            vlSelf->__Vfunc_leading_zero32__714__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__714__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__714__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__714__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__714__count)));
                            vlSelf->__Vfunc_leading_zero32__714__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__714__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__714__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__714__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__714__count)));
                            vlSelf->__Vfunc_leading_zero32__714__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__714__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__714__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__714__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__714__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__714__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__714__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__714__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__714__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__114__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__114__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__720__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__114__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__720__part 
                            = vlSelf->__Vfunc_leading_zero32__720__value;
                        vlSelf->__Vfunc_leading_zero32__720__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__720__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__720__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__720__count)));
                            vlSelf->__Vfunc_leading_zero32__720__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__720__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__720__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__720__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__720__count)));
                            vlSelf->__Vfunc_leading_zero32__720__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__720__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__720__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__720__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__720__count)));
                            vlSelf->__Vfunc_leading_zero32__720__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__720__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__720__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__720__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__720__count)));
                            vlSelf->__Vfunc_leading_zero32__720__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__720__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__720__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__720__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__720__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__720__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__720__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__720__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__720__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__115__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__115__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__726__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__115__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__726__part 
                            = vlSelf->__Vfunc_leading_zero32__726__value;
                        vlSelf->__Vfunc_leading_zero32__726__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__726__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__726__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__726__count)));
                            vlSelf->__Vfunc_leading_zero32__726__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__726__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__726__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__726__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__726__count)));
                            vlSelf->__Vfunc_leading_zero32__726__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__726__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__726__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__726__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__726__count)));
                            vlSelf->__Vfunc_leading_zero32__726__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__726__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__726__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__726__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__726__count)));
                            vlSelf->__Vfunc_leading_zero32__726__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__726__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__726__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__726__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__726__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__726__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__726__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__726__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__726__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__116__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__116__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__732__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__116__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__732__part 
                            = vlSelf->__Vfunc_leading_zero32__732__value;
                        vlSelf->__Vfunc_leading_zero32__732__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__732__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__732__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__732__count)));
                            vlSelf->__Vfunc_leading_zero32__732__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__732__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__732__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__732__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__732__count)));
                            vlSelf->__Vfunc_leading_zero32__732__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__732__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__732__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__732__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__732__count)));
                            vlSelf->__Vfunc_leading_zero32__732__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__732__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__732__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__732__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__732__count)));
                            vlSelf->__Vfunc_leading_zero32__732__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__732__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__732__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__732__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__732__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__732__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__732__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__732__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__732__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__117__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__117__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__738__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__117__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__738__part 
                            = vlSelf->__Vfunc_leading_zero32__738__value;
                        vlSelf->__Vfunc_leading_zero32__738__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__738__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__738__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__738__count)));
                            vlSelf->__Vfunc_leading_zero32__738__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__738__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__738__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__738__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__738__count)));
                            vlSelf->__Vfunc_leading_zero32__738__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__738__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__738__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__738__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__738__count)));
                            vlSelf->__Vfunc_leading_zero32__738__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__738__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__738__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__738__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__738__count)));
                            vlSelf->__Vfunc_leading_zero32__738__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__738__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__738__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__738__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__738__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__738__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__738__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__738__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__738__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__118__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__118__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__744__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__118__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__744__part 
                            = vlSelf->__Vfunc_leading_zero32__744__value;
                        vlSelf->__Vfunc_leading_zero32__744__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__744__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__744__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__744__count)));
                            vlSelf->__Vfunc_leading_zero32__744__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__744__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__744__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__744__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__744__count)));
                            vlSelf->__Vfunc_leading_zero32__744__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__744__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__744__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__744__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__744__count)));
                            vlSelf->__Vfunc_leading_zero32__744__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__744__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__744__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__744__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__744__count)));
                            vlSelf->__Vfunc_leading_zero32__744__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__744__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__744__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__744__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__744__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__744__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__744__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__744__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__744__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__119__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__119__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__750__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__119__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__750__part 
                            = vlSelf->__Vfunc_leading_zero32__750__value;
                        vlSelf->__Vfunc_leading_zero32__750__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__750__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__750__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__750__count)));
                            vlSelf->__Vfunc_leading_zero32__750__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__750__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__750__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__750__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__750__count)));
                            vlSelf->__Vfunc_leading_zero32__750__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__750__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__750__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__750__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__750__count)));
                            vlSelf->__Vfunc_leading_zero32__750__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__750__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__750__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__750__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__750__count)));
                            vlSelf->__Vfunc_leading_zero32__750__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__750__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__750__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__750__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__750__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__750__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__750__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__750__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__750__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__120__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__120__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__756__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__120__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__756__part 
                            = vlSelf->__Vfunc_leading_zero32__756__value;
                        vlSelf->__Vfunc_leading_zero32__756__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__756__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__756__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__756__count)));
                            vlSelf->__Vfunc_leading_zero32__756__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__756__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__756__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__756__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__756__count)));
                            vlSelf->__Vfunc_leading_zero32__756__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__756__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__756__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__756__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__756__count)));
                            vlSelf->__Vfunc_leading_zero32__756__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__756__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__756__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__756__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__756__count)));
                            vlSelf->__Vfunc_leading_zero32__756__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__756__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__756__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__756__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__756__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__756__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__756__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__756__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__756__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__121__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__121__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__762__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__121__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__762__part 
                            = vlSelf->__Vfunc_leading_zero32__762__value;
                        vlSelf->__Vfunc_leading_zero32__762__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__762__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__762__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__762__count)));
                            vlSelf->__Vfunc_leading_zero32__762__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__762__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__762__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__762__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__762__count)));
                            vlSelf->__Vfunc_leading_zero32__762__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__762__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__762__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__762__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__762__count)));
                            vlSelf->__Vfunc_leading_zero32__762__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__762__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__762__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__762__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__762__count)));
                            vlSelf->__Vfunc_leading_zero32__762__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__762__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__762__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__762__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__762__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__762__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__762__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__762__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__762__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__122__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__122__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__768__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__122__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__768__part 
                            = vlSelf->__Vfunc_leading_zero32__768__value;
                        vlSelf->__Vfunc_leading_zero32__768__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__768__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__768__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__768__count)));
                            vlSelf->__Vfunc_leading_zero32__768__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__768__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__768__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__768__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__768__count)));
                            vlSelf->__Vfunc_leading_zero32__768__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__768__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__768__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__768__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__768__count)));
                            vlSelf->__Vfunc_leading_zero32__768__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__768__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__768__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__768__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__768__count)));
                            vlSelf->__Vfunc_leading_zero32__768__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__768__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__768__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__768__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__768__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__768__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__768__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__768__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__768__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__123__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__123__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__774__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__123__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__774__part 
                            = vlSelf->__Vfunc_leading_zero32__774__value;
                        vlSelf->__Vfunc_leading_zero32__774__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__774__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__774__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__774__count)));
                            vlSelf->__Vfunc_leading_zero32__774__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__774__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__774__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__774__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__774__count)));
                            vlSelf->__Vfunc_leading_zero32__774__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__774__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__774__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__774__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__774__count)));
                            vlSelf->__Vfunc_leading_zero32__774__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__774__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__774__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__774__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__774__count)));
                            vlSelf->__Vfunc_leading_zero32__774__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__774__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__774__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__774__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__774__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__774__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__774__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__774__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__774__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__124__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__124__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__780__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__124__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__780__part 
                            = vlSelf->__Vfunc_leading_zero32__780__value;
                        vlSelf->__Vfunc_leading_zero32__780__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__780__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__780__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__780__count)));
                            vlSelf->__Vfunc_leading_zero32__780__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__780__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__780__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__780__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__780__count)));
                            vlSelf->__Vfunc_leading_zero32__780__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__780__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__780__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__780__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__780__count)));
                            vlSelf->__Vfunc_leading_zero32__780__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__780__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__780__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__780__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__780__count)));
                            vlSelf->__Vfunc_leading_zero32__780__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__780__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__780__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__780__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__780__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__780__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__780__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__780__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__780__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__125__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__125__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__786__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__125__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__786__part 
                            = vlSelf->__Vfunc_leading_zero32__786__value;
                        vlSelf->__Vfunc_leading_zero32__786__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__786__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__786__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__786__count)));
                            vlSelf->__Vfunc_leading_zero32__786__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__786__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__786__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__786__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__786__count)));
                            vlSelf->__Vfunc_leading_zero32__786__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__786__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__786__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__786__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__786__count)));
                            vlSelf->__Vfunc_leading_zero32__786__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__786__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__786__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__786__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__786__count)));
                            vlSelf->__Vfunc_leading_zero32__786__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__786__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__786__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__786__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__786__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__786__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__786__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__786__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__786__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__126__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__126__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__792__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__126__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__792__part 
                            = vlSelf->__Vfunc_leading_zero32__792__value;
                        vlSelf->__Vfunc_leading_zero32__792__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__792__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__792__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__792__count)));
                            vlSelf->__Vfunc_leading_zero32__792__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__792__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__792__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__792__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__792__count)));
                            vlSelf->__Vfunc_leading_zero32__792__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__792__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__792__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__792__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__792__count)));
                            vlSelf->__Vfunc_leading_zero32__792__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__792__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__792__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__792__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__792__count)));
                            vlSelf->__Vfunc_leading_zero32__792__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__792__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__792__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__792__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__792__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__792__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__792__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__792__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__792__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__127__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__127__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__798__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__127__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__798__part 
                            = vlSelf->__Vfunc_leading_zero32__798__value;
                        vlSelf->__Vfunc_leading_zero32__798__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__798__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__798__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__798__count)));
                            vlSelf->__Vfunc_leading_zero32__798__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__798__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__798__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__798__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__798__count)));
                            vlSelf->__Vfunc_leading_zero32__798__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__798__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__798__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__798__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__798__count)));
                            vlSelf->__Vfunc_leading_zero32__798__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__798__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__798__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__798__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__798__count)));
                            vlSelf->__Vfunc_leading_zero32__798__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__798__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__798__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__798__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__798__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__798__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__798__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__798__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__798__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__0__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__0__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3124__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__0__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3124__part 
                            = vlSelf->__Vfunc_leading_zero32__3124__value;
                        vlSelf->__Vfunc_leading_zero32__3124__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3124__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3124__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3124__count)));
                            vlSelf->__Vfunc_leading_zero32__3124__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3124__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3124__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3124__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3124__count)));
                            vlSelf->__Vfunc_leading_zero32__3124__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3124__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3124__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3124__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3124__count)));
                            vlSelf->__Vfunc_leading_zero32__3124__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3124__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3124__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3124__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3124__count)));
                            vlSelf->__Vfunc_leading_zero32__3124__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3124__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3124__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3124__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3124__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3124__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3124__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3124__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3124__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__1__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__1__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3136__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__1__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3136__part 
                            = vlSelf->__Vfunc_leading_zero32__3136__value;
                        vlSelf->__Vfunc_leading_zero32__3136__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3136__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3136__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3136__count)));
                            vlSelf->__Vfunc_leading_zero32__3136__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3136__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3136__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3136__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3136__count)));
                            vlSelf->__Vfunc_leading_zero32__3136__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3136__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3136__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3136__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3136__count)));
                            vlSelf->__Vfunc_leading_zero32__3136__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3136__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3136__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3136__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3136__count)));
                            vlSelf->__Vfunc_leading_zero32__3136__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3136__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3136__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3136__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3136__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3136__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3136__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3136__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3136__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__2__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__2__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3148__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__2__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3148__part 
                            = vlSelf->__Vfunc_leading_zero32__3148__value;
                        vlSelf->__Vfunc_leading_zero32__3148__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3148__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3148__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3148__count)));
                            vlSelf->__Vfunc_leading_zero32__3148__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3148__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3148__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3148__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3148__count)));
                            vlSelf->__Vfunc_leading_zero32__3148__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3148__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3148__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3148__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3148__count)));
                            vlSelf->__Vfunc_leading_zero32__3148__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3148__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3148__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3148__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3148__count)));
                            vlSelf->__Vfunc_leading_zero32__3148__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3148__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3148__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3148__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3148__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3148__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3148__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3148__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3148__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__3__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__3__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3160__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__3__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3160__part 
                            = vlSelf->__Vfunc_leading_zero32__3160__value;
                        vlSelf->__Vfunc_leading_zero32__3160__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3160__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3160__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3160__count)));
                            vlSelf->__Vfunc_leading_zero32__3160__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3160__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3160__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3160__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3160__count)));
                            vlSelf->__Vfunc_leading_zero32__3160__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3160__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3160__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3160__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3160__count)));
                            vlSelf->__Vfunc_leading_zero32__3160__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3160__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3160__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3160__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3160__count)));
                            vlSelf->__Vfunc_leading_zero32__3160__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3160__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3160__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3160__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3160__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3160__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3160__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3160__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3160__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__4__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__4__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3172__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__4__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3172__part 
                            = vlSelf->__Vfunc_leading_zero32__3172__value;
                        vlSelf->__Vfunc_leading_zero32__3172__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3172__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3172__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3172__count)));
                            vlSelf->__Vfunc_leading_zero32__3172__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3172__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3172__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3172__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3172__count)));
                            vlSelf->__Vfunc_leading_zero32__3172__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3172__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3172__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3172__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3172__count)));
                            vlSelf->__Vfunc_leading_zero32__3172__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3172__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3172__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3172__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3172__count)));
                            vlSelf->__Vfunc_leading_zero32__3172__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3172__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3172__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3172__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3172__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3172__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3172__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3172__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3172__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__5__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__5__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3184__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__5__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3184__part 
                            = vlSelf->__Vfunc_leading_zero32__3184__value;
                        vlSelf->__Vfunc_leading_zero32__3184__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3184__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3184__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3184__count)));
                            vlSelf->__Vfunc_leading_zero32__3184__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3184__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3184__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3184__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3184__count)));
                            vlSelf->__Vfunc_leading_zero32__3184__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3184__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3184__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3184__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3184__count)));
                            vlSelf->__Vfunc_leading_zero32__3184__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3184__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3184__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3184__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3184__count)));
                            vlSelf->__Vfunc_leading_zero32__3184__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3184__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3184__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3184__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3184__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3184__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3184__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3184__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3184__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__6__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__6__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3196__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__6__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3196__part 
                            = vlSelf->__Vfunc_leading_zero32__3196__value;
                        vlSelf->__Vfunc_leading_zero32__3196__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3196__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3196__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3196__count)));
                            vlSelf->__Vfunc_leading_zero32__3196__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3196__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3196__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3196__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3196__count)));
                            vlSelf->__Vfunc_leading_zero32__3196__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3196__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3196__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3196__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3196__count)));
                            vlSelf->__Vfunc_leading_zero32__3196__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3196__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3196__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3196__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3196__count)));
                            vlSelf->__Vfunc_leading_zero32__3196__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3196__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3196__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3196__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3196__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3196__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3196__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3196__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3196__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__7__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__7__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3208__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__7__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3208__part 
                            = vlSelf->__Vfunc_leading_zero32__3208__value;
                        vlSelf->__Vfunc_leading_zero32__3208__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3208__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3208__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3208__count)));
                            vlSelf->__Vfunc_leading_zero32__3208__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3208__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3208__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3208__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3208__count)));
                            vlSelf->__Vfunc_leading_zero32__3208__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3208__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3208__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3208__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3208__count)));
                            vlSelf->__Vfunc_leading_zero32__3208__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3208__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3208__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3208__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3208__count)));
                            vlSelf->__Vfunc_leading_zero32__3208__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3208__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3208__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3208__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3208__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3208__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3208__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3208__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3208__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__8__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__8__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3220__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__8__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3220__part 
                            = vlSelf->__Vfunc_leading_zero32__3220__value;
                        vlSelf->__Vfunc_leading_zero32__3220__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3220__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3220__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3220__count)));
                            vlSelf->__Vfunc_leading_zero32__3220__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3220__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3220__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3220__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3220__count)));
                            vlSelf->__Vfunc_leading_zero32__3220__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3220__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3220__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3220__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3220__count)));
                            vlSelf->__Vfunc_leading_zero32__3220__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3220__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3220__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3220__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3220__count)));
                            vlSelf->__Vfunc_leading_zero32__3220__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3220__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3220__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3220__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3220__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3220__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3220__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3220__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3220__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__9__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__9__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3232__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__9__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3232__part 
                            = vlSelf->__Vfunc_leading_zero32__3232__value;
                        vlSelf->__Vfunc_leading_zero32__3232__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3232__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3232__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3232__count)));
                            vlSelf->__Vfunc_leading_zero32__3232__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3232__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3232__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3232__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3232__count)));
                            vlSelf->__Vfunc_leading_zero32__3232__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3232__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3232__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3232__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3232__count)));
                            vlSelf->__Vfunc_leading_zero32__3232__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3232__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3232__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3232__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3232__count)));
                            vlSelf->__Vfunc_leading_zero32__3232__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3232__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3232__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3232__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3232__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3232__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3232__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3232__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3232__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__10__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__10__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3244__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__10__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3244__part 
                            = vlSelf->__Vfunc_leading_zero32__3244__value;
                        vlSelf->__Vfunc_leading_zero32__3244__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3244__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3244__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3244__count)));
                            vlSelf->__Vfunc_leading_zero32__3244__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3244__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3244__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3244__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3244__count)));
                            vlSelf->__Vfunc_leading_zero32__3244__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3244__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3244__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3244__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3244__count)));
                            vlSelf->__Vfunc_leading_zero32__3244__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3244__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3244__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3244__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3244__count)));
                            vlSelf->__Vfunc_leading_zero32__3244__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3244__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3244__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3244__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3244__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3244__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3244__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3244__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3244__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__11__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__11__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3256__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__11__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3256__part 
                            = vlSelf->__Vfunc_leading_zero32__3256__value;
                        vlSelf->__Vfunc_leading_zero32__3256__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3256__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3256__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3256__count)));
                            vlSelf->__Vfunc_leading_zero32__3256__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3256__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3256__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3256__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3256__count)));
                            vlSelf->__Vfunc_leading_zero32__3256__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3256__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3256__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3256__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3256__count)));
                            vlSelf->__Vfunc_leading_zero32__3256__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3256__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3256__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3256__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3256__count)));
                            vlSelf->__Vfunc_leading_zero32__3256__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3256__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3256__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3256__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3256__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3256__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3256__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3256__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3256__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__12__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__12__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3268__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__12__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3268__part 
                            = vlSelf->__Vfunc_leading_zero32__3268__value;
                        vlSelf->__Vfunc_leading_zero32__3268__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3268__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3268__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3268__count)));
                            vlSelf->__Vfunc_leading_zero32__3268__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3268__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3268__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3268__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3268__count)));
                            vlSelf->__Vfunc_leading_zero32__3268__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3268__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3268__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3268__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3268__count)));
                            vlSelf->__Vfunc_leading_zero32__3268__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3268__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3268__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3268__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3268__count)));
                            vlSelf->__Vfunc_leading_zero32__3268__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3268__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3268__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3268__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3268__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3268__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3268__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3268__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3268__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__13__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__13__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3280__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__13__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3280__part 
                            = vlSelf->__Vfunc_leading_zero32__3280__value;
                        vlSelf->__Vfunc_leading_zero32__3280__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3280__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3280__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3280__count)));
                            vlSelf->__Vfunc_leading_zero32__3280__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3280__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3280__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3280__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3280__count)));
                            vlSelf->__Vfunc_leading_zero32__3280__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3280__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3280__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3280__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3280__count)));
                            vlSelf->__Vfunc_leading_zero32__3280__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3280__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3280__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3280__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3280__count)));
                            vlSelf->__Vfunc_leading_zero32__3280__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3280__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3280__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3280__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3280__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3280__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3280__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3280__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3280__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__14__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__14__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3292__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__14__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3292__part 
                            = vlSelf->__Vfunc_leading_zero32__3292__value;
                        vlSelf->__Vfunc_leading_zero32__3292__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3292__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3292__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3292__count)));
                            vlSelf->__Vfunc_leading_zero32__3292__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3292__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3292__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3292__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3292__count)));
                            vlSelf->__Vfunc_leading_zero32__3292__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3292__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3292__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3292__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3292__count)));
                            vlSelf->__Vfunc_leading_zero32__3292__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3292__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3292__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3292__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3292__count)));
                            vlSelf->__Vfunc_leading_zero32__3292__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3292__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3292__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3292__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3292__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3292__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3292__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3292__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3292__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__15__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__15__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3304__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__15__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3304__part 
                            = vlSelf->__Vfunc_leading_zero32__3304__value;
                        vlSelf->__Vfunc_leading_zero32__3304__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3304__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3304__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3304__count)));
                            vlSelf->__Vfunc_leading_zero32__3304__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3304__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3304__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3304__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3304__count)));
                            vlSelf->__Vfunc_leading_zero32__3304__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3304__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3304__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3304__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3304__count)));
                            vlSelf->__Vfunc_leading_zero32__3304__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3304__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3304__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3304__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3304__count)));
                            vlSelf->__Vfunc_leading_zero32__3304__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3304__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3304__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3304__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3304__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3304__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3304__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3304__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3304__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__16__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__16__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3316__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__16__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3316__part 
                            = vlSelf->__Vfunc_leading_zero32__3316__value;
                        vlSelf->__Vfunc_leading_zero32__3316__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3316__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3316__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3316__count)));
                            vlSelf->__Vfunc_leading_zero32__3316__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3316__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3316__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3316__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3316__count)));
                            vlSelf->__Vfunc_leading_zero32__3316__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3316__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3316__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3316__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3316__count)));
                            vlSelf->__Vfunc_leading_zero32__3316__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3316__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3316__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3316__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3316__count)));
                            vlSelf->__Vfunc_leading_zero32__3316__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3316__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3316__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3316__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3316__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3316__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3316__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3316__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3316__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__17__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__17__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3328__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__17__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3328__part 
                            = vlSelf->__Vfunc_leading_zero32__3328__value;
                        vlSelf->__Vfunc_leading_zero32__3328__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3328__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3328__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3328__count)));
                            vlSelf->__Vfunc_leading_zero32__3328__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3328__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3328__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3328__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3328__count)));
                            vlSelf->__Vfunc_leading_zero32__3328__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3328__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3328__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3328__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3328__count)));
                            vlSelf->__Vfunc_leading_zero32__3328__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3328__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3328__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3328__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3328__count)));
                            vlSelf->__Vfunc_leading_zero32__3328__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3328__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3328__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3328__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3328__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3328__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3328__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3328__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3328__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__18__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__18__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3340__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__18__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3340__part 
                            = vlSelf->__Vfunc_leading_zero32__3340__value;
                        vlSelf->__Vfunc_leading_zero32__3340__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3340__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3340__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3340__count)));
                            vlSelf->__Vfunc_leading_zero32__3340__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3340__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3340__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3340__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3340__count)));
                            vlSelf->__Vfunc_leading_zero32__3340__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3340__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3340__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3340__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3340__count)));
                            vlSelf->__Vfunc_leading_zero32__3340__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3340__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3340__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3340__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3340__count)));
                            vlSelf->__Vfunc_leading_zero32__3340__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3340__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3340__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3340__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3340__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3340__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3340__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3340__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3340__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__19__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__19__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3352__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__19__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3352__part 
                            = vlSelf->__Vfunc_leading_zero32__3352__value;
                        vlSelf->__Vfunc_leading_zero32__3352__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3352__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3352__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3352__count)));
                            vlSelf->__Vfunc_leading_zero32__3352__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3352__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3352__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3352__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3352__count)));
                            vlSelf->__Vfunc_leading_zero32__3352__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3352__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3352__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3352__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3352__count)));
                            vlSelf->__Vfunc_leading_zero32__3352__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3352__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3352__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3352__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3352__count)));
                            vlSelf->__Vfunc_leading_zero32__3352__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3352__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3352__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3352__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3352__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3352__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3352__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3352__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3352__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__20__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__20__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3364__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__20__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3364__part 
                            = vlSelf->__Vfunc_leading_zero32__3364__value;
                        vlSelf->__Vfunc_leading_zero32__3364__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3364__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3364__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3364__count)));
                            vlSelf->__Vfunc_leading_zero32__3364__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3364__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3364__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3364__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3364__count)));
                            vlSelf->__Vfunc_leading_zero32__3364__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3364__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3364__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3364__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3364__count)));
                            vlSelf->__Vfunc_leading_zero32__3364__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3364__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3364__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3364__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3364__count)));
                            vlSelf->__Vfunc_leading_zero32__3364__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3364__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3364__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3364__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3364__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3364__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3364__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3364__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3364__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__21__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__21__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3376__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__21__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3376__part 
                            = vlSelf->__Vfunc_leading_zero32__3376__value;
                        vlSelf->__Vfunc_leading_zero32__3376__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3376__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3376__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3376__count)));
                            vlSelf->__Vfunc_leading_zero32__3376__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3376__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3376__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3376__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3376__count)));
                            vlSelf->__Vfunc_leading_zero32__3376__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3376__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3376__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3376__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3376__count)));
                            vlSelf->__Vfunc_leading_zero32__3376__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3376__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3376__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3376__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3376__count)));
                            vlSelf->__Vfunc_leading_zero32__3376__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3376__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3376__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3376__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3376__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3376__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3376__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3376__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3376__Vfuncout)) 
                             - (IData)(8U))));
}
