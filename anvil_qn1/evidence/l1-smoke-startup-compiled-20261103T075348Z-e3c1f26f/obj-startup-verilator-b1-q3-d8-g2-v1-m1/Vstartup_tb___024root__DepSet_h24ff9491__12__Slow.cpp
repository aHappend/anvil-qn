// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstartup_tb.h for the primary calling header

#include "Vstartup_tb__pch.h"
#include "Vstartup_tb___024root.h"

VL_ATTR_COLD void Vstartup_tb___024root___stl_sequent__TOP__13(Vstartup_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vstartup_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstartup_tb___024root___stl_sequent__TOP__13\n"); );
    // Body
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__2__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__2__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__95__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__2__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__95__part 
                            = vlSelf->__Vfunc_leading_zero32__95__value;
                        vlSelf->__Vfunc_leading_zero32__95__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__95__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__95__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__95__count)));
                            vlSelf->__Vfunc_leading_zero32__95__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__95__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__95__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__95__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__95__count)));
                            vlSelf->__Vfunc_leading_zero32__95__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__95__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__95__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__95__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__95__count)));
                            vlSelf->__Vfunc_leading_zero32__95__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__95__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__95__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__95__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__95__count)));
                            vlSelf->__Vfunc_leading_zero32__95__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__95__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__95__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__95__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__95__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__95__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__95__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__95__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__95__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__3__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__3__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__101__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__3__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__101__part 
                            = vlSelf->__Vfunc_leading_zero32__101__value;
                        vlSelf->__Vfunc_leading_zero32__101__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__101__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__101__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__101__count)));
                            vlSelf->__Vfunc_leading_zero32__101__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__101__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__101__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__101__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__101__count)));
                            vlSelf->__Vfunc_leading_zero32__101__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__101__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__101__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__101__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__101__count)));
                            vlSelf->__Vfunc_leading_zero32__101__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__101__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__101__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__101__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__101__count)));
                            vlSelf->__Vfunc_leading_zero32__101__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__101__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__101__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__101__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__101__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__101__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__101__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__101__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__101__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__4__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__4__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__107__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__4__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__107__part 
                            = vlSelf->__Vfunc_leading_zero32__107__value;
                        vlSelf->__Vfunc_leading_zero32__107__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__107__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__107__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__107__count)));
                            vlSelf->__Vfunc_leading_zero32__107__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__107__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__107__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__107__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__107__count)));
                            vlSelf->__Vfunc_leading_zero32__107__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__107__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__107__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__107__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__107__count)));
                            vlSelf->__Vfunc_leading_zero32__107__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__107__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__107__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__107__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__107__count)));
                            vlSelf->__Vfunc_leading_zero32__107__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__107__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__107__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__107__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__107__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__107__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__107__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__107__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__107__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__5__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__5__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__113__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__5__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__113__part 
                            = vlSelf->__Vfunc_leading_zero32__113__value;
                        vlSelf->__Vfunc_leading_zero32__113__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__113__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__113__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__113__count)));
                            vlSelf->__Vfunc_leading_zero32__113__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__113__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__113__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__113__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__113__count)));
                            vlSelf->__Vfunc_leading_zero32__113__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__113__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__113__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__113__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__113__count)));
                            vlSelf->__Vfunc_leading_zero32__113__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__113__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__113__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__113__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__113__count)));
                            vlSelf->__Vfunc_leading_zero32__113__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__113__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__113__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__113__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__113__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__113__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__113__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__113__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__113__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__6__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__6__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__119__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__6__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__119__part 
                            = vlSelf->__Vfunc_leading_zero32__119__value;
                        vlSelf->__Vfunc_leading_zero32__119__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__119__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__119__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__119__count)));
                            vlSelf->__Vfunc_leading_zero32__119__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__119__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__119__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__119__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__119__count)));
                            vlSelf->__Vfunc_leading_zero32__119__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__119__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__119__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__119__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__119__count)));
                            vlSelf->__Vfunc_leading_zero32__119__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__119__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__119__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__119__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__119__count)));
                            vlSelf->__Vfunc_leading_zero32__119__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__119__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__119__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__119__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__119__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__119__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__119__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__119__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__119__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__7__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__7__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__125__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__7__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__125__part 
                            = vlSelf->__Vfunc_leading_zero32__125__value;
                        vlSelf->__Vfunc_leading_zero32__125__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__125__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__125__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__125__count)));
                            vlSelf->__Vfunc_leading_zero32__125__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__125__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__125__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__125__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__125__count)));
                            vlSelf->__Vfunc_leading_zero32__125__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__125__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__125__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__125__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__125__count)));
                            vlSelf->__Vfunc_leading_zero32__125__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__125__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__125__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__125__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__125__count)));
                            vlSelf->__Vfunc_leading_zero32__125__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__125__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__125__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__125__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__125__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__125__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__125__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__125__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__125__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__0__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__0__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1731__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__0__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1731__part 
                            = vlSelf->__Vfunc_leading_zero32__1731__value;
                        vlSelf->__Vfunc_leading_zero32__1731__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1731__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1731__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1731__count)));
                            vlSelf->__Vfunc_leading_zero32__1731__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1731__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1731__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1731__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1731__count)));
                            vlSelf->__Vfunc_leading_zero32__1731__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1731__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1731__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1731__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1731__count)));
                            vlSelf->__Vfunc_leading_zero32__1731__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1731__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1731__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1731__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1731__count)));
                            vlSelf->__Vfunc_leading_zero32__1731__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1731__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1731__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1731__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1731__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1731__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1731__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1731__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1731__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__1__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__1__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1743__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__1__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1743__part 
                            = vlSelf->__Vfunc_leading_zero32__1743__value;
                        vlSelf->__Vfunc_leading_zero32__1743__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1743__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1743__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1743__count)));
                            vlSelf->__Vfunc_leading_zero32__1743__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1743__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1743__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1743__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1743__count)));
                            vlSelf->__Vfunc_leading_zero32__1743__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1743__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1743__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1743__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1743__count)));
                            vlSelf->__Vfunc_leading_zero32__1743__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1743__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1743__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1743__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1743__count)));
                            vlSelf->__Vfunc_leading_zero32__1743__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1743__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1743__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1743__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1743__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1743__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1743__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1743__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1743__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__2__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__2__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1755__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__2__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1755__part 
                            = vlSelf->__Vfunc_leading_zero32__1755__value;
                        vlSelf->__Vfunc_leading_zero32__1755__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1755__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1755__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1755__count)));
                            vlSelf->__Vfunc_leading_zero32__1755__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1755__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1755__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1755__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1755__count)));
                            vlSelf->__Vfunc_leading_zero32__1755__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1755__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1755__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1755__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1755__count)));
                            vlSelf->__Vfunc_leading_zero32__1755__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1755__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1755__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1755__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1755__count)));
                            vlSelf->__Vfunc_leading_zero32__1755__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1755__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1755__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1755__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1755__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1755__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1755__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1755__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1755__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__3__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__3__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1767__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__3__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1767__part 
                            = vlSelf->__Vfunc_leading_zero32__1767__value;
                        vlSelf->__Vfunc_leading_zero32__1767__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1767__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1767__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1767__count)));
                            vlSelf->__Vfunc_leading_zero32__1767__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1767__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1767__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1767__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1767__count)));
                            vlSelf->__Vfunc_leading_zero32__1767__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1767__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1767__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1767__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1767__count)));
                            vlSelf->__Vfunc_leading_zero32__1767__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1767__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1767__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1767__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1767__count)));
                            vlSelf->__Vfunc_leading_zero32__1767__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1767__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1767__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1767__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1767__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1767__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1767__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1767__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1767__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__4__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__4__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1779__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__4__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1779__part 
                            = vlSelf->__Vfunc_leading_zero32__1779__value;
                        vlSelf->__Vfunc_leading_zero32__1779__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1779__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1779__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1779__count)));
                            vlSelf->__Vfunc_leading_zero32__1779__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1779__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1779__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1779__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1779__count)));
                            vlSelf->__Vfunc_leading_zero32__1779__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1779__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1779__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1779__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1779__count)));
                            vlSelf->__Vfunc_leading_zero32__1779__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1779__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1779__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1779__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1779__count)));
                            vlSelf->__Vfunc_leading_zero32__1779__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1779__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1779__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1779__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1779__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1779__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1779__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1779__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1779__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__5__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__5__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1791__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__5__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1791__part 
                            = vlSelf->__Vfunc_leading_zero32__1791__value;
                        vlSelf->__Vfunc_leading_zero32__1791__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1791__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1791__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1791__count)));
                            vlSelf->__Vfunc_leading_zero32__1791__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1791__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1791__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1791__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1791__count)));
                            vlSelf->__Vfunc_leading_zero32__1791__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1791__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1791__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1791__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1791__count)));
                            vlSelf->__Vfunc_leading_zero32__1791__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1791__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1791__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1791__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1791__count)));
                            vlSelf->__Vfunc_leading_zero32__1791__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1791__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1791__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1791__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1791__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1791__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1791__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1791__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1791__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__6__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__6__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1803__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__6__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1803__part 
                            = vlSelf->__Vfunc_leading_zero32__1803__value;
                        vlSelf->__Vfunc_leading_zero32__1803__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1803__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1803__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1803__count)));
                            vlSelf->__Vfunc_leading_zero32__1803__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1803__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1803__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1803__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1803__count)));
                            vlSelf->__Vfunc_leading_zero32__1803__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1803__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1803__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1803__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1803__count)));
                            vlSelf->__Vfunc_leading_zero32__1803__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1803__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1803__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1803__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1803__count)));
                            vlSelf->__Vfunc_leading_zero32__1803__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1803__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1803__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1803__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1803__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1803__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1803__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1803__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1803__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__7__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__7__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1815__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__7__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1815__part 
                            = vlSelf->__Vfunc_leading_zero32__1815__value;
                        vlSelf->__Vfunc_leading_zero32__1815__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1815__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1815__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1815__count)));
                            vlSelf->__Vfunc_leading_zero32__1815__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1815__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1815__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1815__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1815__count)));
                            vlSelf->__Vfunc_leading_zero32__1815__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1815__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1815__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1815__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1815__count)));
                            vlSelf->__Vfunc_leading_zero32__1815__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1815__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1815__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1815__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1815__count)));
                            vlSelf->__Vfunc_leading_zero32__1815__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1815__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1815__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1815__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1815__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1815__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1815__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1815__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1815__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__8__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__8__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1827__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__8__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1827__part 
                            = vlSelf->__Vfunc_leading_zero32__1827__value;
                        vlSelf->__Vfunc_leading_zero32__1827__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1827__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1827__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1827__count)));
                            vlSelf->__Vfunc_leading_zero32__1827__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1827__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1827__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1827__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1827__count)));
                            vlSelf->__Vfunc_leading_zero32__1827__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1827__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1827__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1827__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1827__count)));
                            vlSelf->__Vfunc_leading_zero32__1827__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1827__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1827__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1827__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1827__count)));
                            vlSelf->__Vfunc_leading_zero32__1827__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1827__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1827__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1827__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1827__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1827__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1827__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1827__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1827__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__9__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__9__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1839__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__9__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1839__part 
                            = vlSelf->__Vfunc_leading_zero32__1839__value;
                        vlSelf->__Vfunc_leading_zero32__1839__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1839__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1839__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1839__count)));
                            vlSelf->__Vfunc_leading_zero32__1839__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1839__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1839__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1839__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1839__count)));
                            vlSelf->__Vfunc_leading_zero32__1839__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1839__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1839__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1839__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1839__count)));
                            vlSelf->__Vfunc_leading_zero32__1839__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1839__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1839__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1839__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1839__count)));
                            vlSelf->__Vfunc_leading_zero32__1839__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1839__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1839__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1839__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1839__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1839__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1839__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1839__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1839__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__10__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__10__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1851__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__10__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1851__part 
                            = vlSelf->__Vfunc_leading_zero32__1851__value;
                        vlSelf->__Vfunc_leading_zero32__1851__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1851__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1851__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1851__count)));
                            vlSelf->__Vfunc_leading_zero32__1851__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1851__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1851__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1851__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1851__count)));
                            vlSelf->__Vfunc_leading_zero32__1851__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1851__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1851__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1851__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1851__count)));
                            vlSelf->__Vfunc_leading_zero32__1851__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1851__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1851__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1851__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1851__count)));
                            vlSelf->__Vfunc_leading_zero32__1851__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1851__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1851__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1851__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1851__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1851__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1851__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1851__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1851__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__11__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__11__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1863__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__11__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1863__part 
                            = vlSelf->__Vfunc_leading_zero32__1863__value;
                        vlSelf->__Vfunc_leading_zero32__1863__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1863__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1863__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1863__count)));
                            vlSelf->__Vfunc_leading_zero32__1863__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1863__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1863__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1863__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1863__count)));
                            vlSelf->__Vfunc_leading_zero32__1863__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1863__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1863__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1863__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1863__count)));
                            vlSelf->__Vfunc_leading_zero32__1863__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1863__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1863__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1863__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1863__count)));
                            vlSelf->__Vfunc_leading_zero32__1863__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1863__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1863__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1863__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1863__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1863__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1863__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1863__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1863__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__12__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__12__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1875__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__12__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1875__part 
                            = vlSelf->__Vfunc_leading_zero32__1875__value;
                        vlSelf->__Vfunc_leading_zero32__1875__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1875__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1875__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1875__count)));
                            vlSelf->__Vfunc_leading_zero32__1875__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1875__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1875__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1875__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1875__count)));
                            vlSelf->__Vfunc_leading_zero32__1875__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1875__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1875__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1875__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1875__count)));
                            vlSelf->__Vfunc_leading_zero32__1875__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1875__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1875__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1875__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1875__count)));
                            vlSelf->__Vfunc_leading_zero32__1875__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1875__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1875__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1875__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1875__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1875__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1875__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1875__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1875__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__13__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__13__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1887__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__13__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1887__part 
                            = vlSelf->__Vfunc_leading_zero32__1887__value;
                        vlSelf->__Vfunc_leading_zero32__1887__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1887__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1887__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1887__count)));
                            vlSelf->__Vfunc_leading_zero32__1887__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1887__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1887__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1887__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1887__count)));
                            vlSelf->__Vfunc_leading_zero32__1887__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1887__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1887__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1887__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1887__count)));
                            vlSelf->__Vfunc_leading_zero32__1887__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1887__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1887__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1887__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1887__count)));
                            vlSelf->__Vfunc_leading_zero32__1887__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1887__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1887__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1887__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1887__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1887__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1887__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1887__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1887__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__14__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__14__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1899__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__14__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1899__part 
                            = vlSelf->__Vfunc_leading_zero32__1899__value;
                        vlSelf->__Vfunc_leading_zero32__1899__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1899__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1899__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1899__count)));
                            vlSelf->__Vfunc_leading_zero32__1899__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1899__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1899__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1899__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1899__count)));
                            vlSelf->__Vfunc_leading_zero32__1899__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1899__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1899__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1899__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1899__count)));
                            vlSelf->__Vfunc_leading_zero32__1899__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1899__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1899__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1899__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1899__count)));
                            vlSelf->__Vfunc_leading_zero32__1899__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1899__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1899__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1899__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1899__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1899__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1899__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1899__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1899__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__15__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__15__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1911__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__15__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1911__part 
                            = vlSelf->__Vfunc_leading_zero32__1911__value;
                        vlSelf->__Vfunc_leading_zero32__1911__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1911__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1911__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1911__count)));
                            vlSelf->__Vfunc_leading_zero32__1911__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1911__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1911__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1911__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1911__count)));
                            vlSelf->__Vfunc_leading_zero32__1911__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1911__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1911__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1911__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1911__count)));
                            vlSelf->__Vfunc_leading_zero32__1911__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1911__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1911__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1911__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1911__count)));
                            vlSelf->__Vfunc_leading_zero32__1911__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1911__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1911__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1911__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1911__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1911__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1911__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1911__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1911__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__16__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__16__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1923__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__16__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1923__part 
                            = vlSelf->__Vfunc_leading_zero32__1923__value;
                        vlSelf->__Vfunc_leading_zero32__1923__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1923__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1923__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1923__count)));
                            vlSelf->__Vfunc_leading_zero32__1923__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1923__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1923__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1923__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1923__count)));
                            vlSelf->__Vfunc_leading_zero32__1923__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1923__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1923__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1923__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1923__count)));
                            vlSelf->__Vfunc_leading_zero32__1923__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1923__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1923__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1923__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1923__count)));
                            vlSelf->__Vfunc_leading_zero32__1923__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1923__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1923__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1923__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1923__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1923__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1923__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1923__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1923__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__17__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__17__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1935__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__17__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1935__part 
                            = vlSelf->__Vfunc_leading_zero32__1935__value;
                        vlSelf->__Vfunc_leading_zero32__1935__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1935__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1935__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1935__count)));
                            vlSelf->__Vfunc_leading_zero32__1935__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1935__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1935__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1935__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1935__count)));
                            vlSelf->__Vfunc_leading_zero32__1935__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1935__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1935__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1935__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1935__count)));
                            vlSelf->__Vfunc_leading_zero32__1935__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1935__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1935__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1935__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1935__count)));
                            vlSelf->__Vfunc_leading_zero32__1935__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1935__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1935__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1935__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1935__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1935__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1935__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1935__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1935__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__18__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__18__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1947__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__18__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1947__part 
                            = vlSelf->__Vfunc_leading_zero32__1947__value;
                        vlSelf->__Vfunc_leading_zero32__1947__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1947__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1947__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1947__count)));
                            vlSelf->__Vfunc_leading_zero32__1947__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1947__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1947__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1947__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1947__count)));
                            vlSelf->__Vfunc_leading_zero32__1947__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1947__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1947__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1947__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1947__count)));
                            vlSelf->__Vfunc_leading_zero32__1947__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1947__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1947__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1947__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1947__count)));
                            vlSelf->__Vfunc_leading_zero32__1947__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1947__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1947__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1947__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1947__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1947__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1947__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1947__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1947__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__19__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__19__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1959__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__19__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1959__part 
                            = vlSelf->__Vfunc_leading_zero32__1959__value;
                        vlSelf->__Vfunc_leading_zero32__1959__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1959__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1959__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1959__count)));
                            vlSelf->__Vfunc_leading_zero32__1959__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1959__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1959__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1959__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1959__count)));
                            vlSelf->__Vfunc_leading_zero32__1959__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1959__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1959__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1959__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1959__count)));
                            vlSelf->__Vfunc_leading_zero32__1959__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1959__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1959__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1959__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1959__count)));
                            vlSelf->__Vfunc_leading_zero32__1959__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1959__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1959__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1959__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1959__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1959__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1959__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1959__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1959__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__20__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__20__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1971__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__20__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1971__part 
                            = vlSelf->__Vfunc_leading_zero32__1971__value;
                        vlSelf->__Vfunc_leading_zero32__1971__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1971__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1971__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1971__count)));
                            vlSelf->__Vfunc_leading_zero32__1971__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1971__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1971__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1971__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1971__count)));
                            vlSelf->__Vfunc_leading_zero32__1971__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1971__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1971__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1971__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1971__count)));
                            vlSelf->__Vfunc_leading_zero32__1971__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1971__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1971__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1971__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1971__count)));
                            vlSelf->__Vfunc_leading_zero32__1971__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1971__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1971__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1971__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1971__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1971__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1971__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1971__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1971__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__21__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__21__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1983__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__21__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1983__part 
                            = vlSelf->__Vfunc_leading_zero32__1983__value;
                        vlSelf->__Vfunc_leading_zero32__1983__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1983__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1983__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1983__count)));
                            vlSelf->__Vfunc_leading_zero32__1983__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1983__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1983__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1983__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1983__count)));
                            vlSelf->__Vfunc_leading_zero32__1983__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1983__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1983__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1983__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1983__count)));
                            vlSelf->__Vfunc_leading_zero32__1983__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1983__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1983__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1983__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1983__count)));
                            vlSelf->__Vfunc_leading_zero32__1983__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1983__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1983__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1983__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1983__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1983__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1983__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1983__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1983__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__22__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__22__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1995__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__22__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1995__part 
                            = vlSelf->__Vfunc_leading_zero32__1995__value;
                        vlSelf->__Vfunc_leading_zero32__1995__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1995__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1995__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1995__count)));
                            vlSelf->__Vfunc_leading_zero32__1995__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1995__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1995__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1995__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1995__count)));
                            vlSelf->__Vfunc_leading_zero32__1995__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1995__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1995__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1995__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1995__count)));
                            vlSelf->__Vfunc_leading_zero32__1995__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1995__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1995__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1995__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1995__count)));
                            vlSelf->__Vfunc_leading_zero32__1995__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1995__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1995__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1995__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1995__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1995__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1995__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1995__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1995__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__23__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__23__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2007__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__23__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2007__part 
                            = vlSelf->__Vfunc_leading_zero32__2007__value;
                        vlSelf->__Vfunc_leading_zero32__2007__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2007__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2007__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2007__count)));
                            vlSelf->__Vfunc_leading_zero32__2007__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2007__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2007__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2007__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2007__count)));
                            vlSelf->__Vfunc_leading_zero32__2007__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2007__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2007__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2007__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2007__count)));
                            vlSelf->__Vfunc_leading_zero32__2007__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2007__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2007__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2007__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2007__count)));
                            vlSelf->__Vfunc_leading_zero32__2007__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2007__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2007__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2007__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2007__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2007__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2007__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2007__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2007__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__24__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__24__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2019__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__24__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2019__part 
                            = vlSelf->__Vfunc_leading_zero32__2019__value;
                        vlSelf->__Vfunc_leading_zero32__2019__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2019__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2019__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2019__count)));
                            vlSelf->__Vfunc_leading_zero32__2019__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2019__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2019__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2019__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2019__count)));
                            vlSelf->__Vfunc_leading_zero32__2019__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2019__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2019__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2019__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2019__count)));
                            vlSelf->__Vfunc_leading_zero32__2019__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2019__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2019__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2019__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2019__count)));
                            vlSelf->__Vfunc_leading_zero32__2019__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2019__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2019__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2019__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2019__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2019__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2019__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2019__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2019__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__25__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__25__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2031__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__25__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2031__part 
                            = vlSelf->__Vfunc_leading_zero32__2031__value;
                        vlSelf->__Vfunc_leading_zero32__2031__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2031__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2031__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2031__count)));
                            vlSelf->__Vfunc_leading_zero32__2031__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2031__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2031__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2031__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2031__count)));
                            vlSelf->__Vfunc_leading_zero32__2031__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2031__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2031__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2031__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2031__count)));
                            vlSelf->__Vfunc_leading_zero32__2031__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2031__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2031__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2031__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2031__count)));
                            vlSelf->__Vfunc_leading_zero32__2031__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2031__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2031__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2031__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2031__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2031__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2031__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2031__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2031__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__26__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__26__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2043__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__26__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2043__part 
                            = vlSelf->__Vfunc_leading_zero32__2043__value;
                        vlSelf->__Vfunc_leading_zero32__2043__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2043__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2043__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2043__count)));
                            vlSelf->__Vfunc_leading_zero32__2043__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2043__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2043__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2043__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2043__count)));
                            vlSelf->__Vfunc_leading_zero32__2043__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2043__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2043__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2043__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2043__count)));
                            vlSelf->__Vfunc_leading_zero32__2043__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2043__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2043__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2043__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2043__count)));
                            vlSelf->__Vfunc_leading_zero32__2043__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2043__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2043__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2043__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2043__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2043__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2043__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2043__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2043__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__27__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__27__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2055__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__27__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2055__part 
                            = vlSelf->__Vfunc_leading_zero32__2055__value;
                        vlSelf->__Vfunc_leading_zero32__2055__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2055__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2055__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2055__count)));
                            vlSelf->__Vfunc_leading_zero32__2055__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2055__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2055__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2055__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2055__count)));
                            vlSelf->__Vfunc_leading_zero32__2055__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2055__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2055__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2055__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2055__count)));
                            vlSelf->__Vfunc_leading_zero32__2055__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2055__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2055__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2055__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2055__count)));
                            vlSelf->__Vfunc_leading_zero32__2055__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2055__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2055__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2055__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2055__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2055__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2055__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2055__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2055__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__28__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__28__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2067__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__28__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2067__part 
                            = vlSelf->__Vfunc_leading_zero32__2067__value;
                        vlSelf->__Vfunc_leading_zero32__2067__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2067__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2067__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2067__count)));
                            vlSelf->__Vfunc_leading_zero32__2067__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2067__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2067__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2067__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2067__count)));
                            vlSelf->__Vfunc_leading_zero32__2067__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2067__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2067__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2067__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2067__count)));
                            vlSelf->__Vfunc_leading_zero32__2067__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2067__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2067__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2067__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2067__count)));
                            vlSelf->__Vfunc_leading_zero32__2067__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2067__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2067__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2067__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2067__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2067__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2067__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2067__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2067__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__29__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__29__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2079__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__29__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2079__part 
                            = vlSelf->__Vfunc_leading_zero32__2079__value;
                        vlSelf->__Vfunc_leading_zero32__2079__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2079__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2079__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2079__count)));
                            vlSelf->__Vfunc_leading_zero32__2079__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2079__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2079__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2079__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2079__count)));
                            vlSelf->__Vfunc_leading_zero32__2079__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2079__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2079__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2079__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2079__count)));
                            vlSelf->__Vfunc_leading_zero32__2079__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2079__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2079__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2079__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2079__count)));
                            vlSelf->__Vfunc_leading_zero32__2079__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2079__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2079__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2079__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2079__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2079__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2079__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2079__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2079__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__30__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__30__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2091__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__30__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2091__part 
                            = vlSelf->__Vfunc_leading_zero32__2091__value;
                        vlSelf->__Vfunc_leading_zero32__2091__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2091__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2091__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2091__count)));
                            vlSelf->__Vfunc_leading_zero32__2091__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2091__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2091__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2091__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2091__count)));
                            vlSelf->__Vfunc_leading_zero32__2091__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2091__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2091__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2091__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2091__count)));
                            vlSelf->__Vfunc_leading_zero32__2091__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2091__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2091__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2091__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2091__count)));
                            vlSelf->__Vfunc_leading_zero32__2091__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2091__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2091__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2091__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2091__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2091__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2091__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2091__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2091__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__31__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__31__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2103__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__31__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2103__part 
                            = vlSelf->__Vfunc_leading_zero32__2103__value;
                        vlSelf->__Vfunc_leading_zero32__2103__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2103__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2103__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2103__count)));
                            vlSelf->__Vfunc_leading_zero32__2103__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2103__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2103__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2103__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2103__count)));
                            vlSelf->__Vfunc_leading_zero32__2103__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2103__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2103__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2103__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2103__count)));
                            vlSelf->__Vfunc_leading_zero32__2103__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2103__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2103__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2103__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2103__count)));
                            vlSelf->__Vfunc_leading_zero32__2103__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2103__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2103__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2103__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2103__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2103__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2103__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2103__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2103__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__32__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__32__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2115__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__32__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2115__part 
                            = vlSelf->__Vfunc_leading_zero32__2115__value;
                        vlSelf->__Vfunc_leading_zero32__2115__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2115__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2115__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2115__count)));
                            vlSelf->__Vfunc_leading_zero32__2115__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2115__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2115__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2115__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2115__count)));
                            vlSelf->__Vfunc_leading_zero32__2115__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2115__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2115__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2115__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2115__count)));
                            vlSelf->__Vfunc_leading_zero32__2115__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2115__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2115__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2115__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2115__count)));
                            vlSelf->__Vfunc_leading_zero32__2115__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2115__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2115__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2115__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2115__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2115__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2115__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2115__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2115__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__33__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__33__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2127__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__33__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2127__part 
                            = vlSelf->__Vfunc_leading_zero32__2127__value;
                        vlSelf->__Vfunc_leading_zero32__2127__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2127__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2127__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2127__count)));
                            vlSelf->__Vfunc_leading_zero32__2127__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2127__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2127__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2127__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2127__count)));
                            vlSelf->__Vfunc_leading_zero32__2127__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2127__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2127__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2127__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2127__count)));
                            vlSelf->__Vfunc_leading_zero32__2127__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2127__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2127__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2127__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2127__count)));
                            vlSelf->__Vfunc_leading_zero32__2127__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2127__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2127__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2127__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2127__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2127__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2127__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2127__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2127__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__34__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__34__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2139__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__34__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2139__part 
                            = vlSelf->__Vfunc_leading_zero32__2139__value;
                        vlSelf->__Vfunc_leading_zero32__2139__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2139__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2139__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2139__count)));
                            vlSelf->__Vfunc_leading_zero32__2139__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2139__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2139__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2139__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2139__count)));
                            vlSelf->__Vfunc_leading_zero32__2139__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2139__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2139__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2139__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2139__count)));
                            vlSelf->__Vfunc_leading_zero32__2139__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2139__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2139__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2139__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2139__count)));
                            vlSelf->__Vfunc_leading_zero32__2139__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2139__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2139__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2139__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2139__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2139__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2139__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2139__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2139__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__35__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__35__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2151__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__35__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2151__part 
                            = vlSelf->__Vfunc_leading_zero32__2151__value;
                        vlSelf->__Vfunc_leading_zero32__2151__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2151__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2151__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2151__count)));
                            vlSelf->__Vfunc_leading_zero32__2151__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2151__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2151__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2151__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2151__count)));
                            vlSelf->__Vfunc_leading_zero32__2151__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2151__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2151__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2151__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2151__count)));
                            vlSelf->__Vfunc_leading_zero32__2151__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2151__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2151__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2151__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2151__count)));
                            vlSelf->__Vfunc_leading_zero32__2151__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2151__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2151__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2151__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2151__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2151__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2151__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2151__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2151__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__36__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__36__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2163__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__36__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2163__part 
                            = vlSelf->__Vfunc_leading_zero32__2163__value;
                        vlSelf->__Vfunc_leading_zero32__2163__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2163__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2163__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2163__count)));
                            vlSelf->__Vfunc_leading_zero32__2163__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2163__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2163__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2163__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2163__count)));
                            vlSelf->__Vfunc_leading_zero32__2163__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2163__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2163__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2163__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2163__count)));
                            vlSelf->__Vfunc_leading_zero32__2163__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2163__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2163__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2163__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2163__count)));
                            vlSelf->__Vfunc_leading_zero32__2163__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2163__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2163__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2163__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2163__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2163__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2163__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2163__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2163__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__37__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__37__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2175__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__37__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2175__part 
                            = vlSelf->__Vfunc_leading_zero32__2175__value;
                        vlSelf->__Vfunc_leading_zero32__2175__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2175__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2175__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2175__count)));
                            vlSelf->__Vfunc_leading_zero32__2175__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2175__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2175__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2175__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2175__count)));
                            vlSelf->__Vfunc_leading_zero32__2175__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2175__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2175__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2175__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2175__count)));
                            vlSelf->__Vfunc_leading_zero32__2175__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2175__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2175__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2175__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2175__count)));
                            vlSelf->__Vfunc_leading_zero32__2175__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2175__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2175__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2175__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2175__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2175__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2175__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2175__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2175__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__38__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__38__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2187__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__38__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2187__part 
                            = vlSelf->__Vfunc_leading_zero32__2187__value;
                        vlSelf->__Vfunc_leading_zero32__2187__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2187__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2187__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2187__count)));
                            vlSelf->__Vfunc_leading_zero32__2187__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2187__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2187__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2187__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2187__count)));
                            vlSelf->__Vfunc_leading_zero32__2187__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2187__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2187__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2187__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2187__count)));
                            vlSelf->__Vfunc_leading_zero32__2187__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2187__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2187__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2187__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2187__count)));
                            vlSelf->__Vfunc_leading_zero32__2187__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2187__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2187__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2187__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2187__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2187__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2187__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2187__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2187__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__39__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__39__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2199__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__39__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2199__part 
                            = vlSelf->__Vfunc_leading_zero32__2199__value;
                        vlSelf->__Vfunc_leading_zero32__2199__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2199__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2199__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2199__count)));
                            vlSelf->__Vfunc_leading_zero32__2199__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2199__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2199__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2199__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2199__count)));
                            vlSelf->__Vfunc_leading_zero32__2199__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2199__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2199__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2199__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2199__count)));
                            vlSelf->__Vfunc_leading_zero32__2199__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2199__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2199__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2199__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2199__count)));
                            vlSelf->__Vfunc_leading_zero32__2199__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2199__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2199__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2199__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2199__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2199__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2199__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2199__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2199__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__40__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__40__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2211__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__40__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2211__part 
                            = vlSelf->__Vfunc_leading_zero32__2211__value;
                        vlSelf->__Vfunc_leading_zero32__2211__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2211__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2211__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2211__count)));
                            vlSelf->__Vfunc_leading_zero32__2211__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2211__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2211__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2211__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2211__count)));
                            vlSelf->__Vfunc_leading_zero32__2211__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2211__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2211__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2211__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2211__count)));
                            vlSelf->__Vfunc_leading_zero32__2211__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2211__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2211__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2211__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2211__count)));
                            vlSelf->__Vfunc_leading_zero32__2211__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2211__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2211__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2211__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2211__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2211__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2211__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2211__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2211__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__41__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__41__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2223__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__41__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2223__part 
                            = vlSelf->__Vfunc_leading_zero32__2223__value;
                        vlSelf->__Vfunc_leading_zero32__2223__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2223__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2223__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2223__count)));
                            vlSelf->__Vfunc_leading_zero32__2223__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2223__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2223__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2223__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2223__count)));
                            vlSelf->__Vfunc_leading_zero32__2223__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2223__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2223__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2223__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2223__count)));
                            vlSelf->__Vfunc_leading_zero32__2223__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2223__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2223__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2223__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2223__count)));
                            vlSelf->__Vfunc_leading_zero32__2223__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2223__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2223__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2223__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2223__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2223__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2223__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2223__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2223__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__42__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__42__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2235__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__42__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2235__part 
                            = vlSelf->__Vfunc_leading_zero32__2235__value;
                        vlSelf->__Vfunc_leading_zero32__2235__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2235__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2235__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2235__count)));
                            vlSelf->__Vfunc_leading_zero32__2235__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2235__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2235__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2235__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2235__count)));
                            vlSelf->__Vfunc_leading_zero32__2235__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2235__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2235__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2235__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2235__count)));
                            vlSelf->__Vfunc_leading_zero32__2235__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2235__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2235__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2235__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2235__count)));
                            vlSelf->__Vfunc_leading_zero32__2235__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2235__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2235__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2235__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2235__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2235__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2235__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2235__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2235__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__43__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__43__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2247__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__43__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2247__part 
                            = vlSelf->__Vfunc_leading_zero32__2247__value;
                        vlSelf->__Vfunc_leading_zero32__2247__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2247__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2247__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2247__count)));
                            vlSelf->__Vfunc_leading_zero32__2247__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2247__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2247__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2247__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2247__count)));
                            vlSelf->__Vfunc_leading_zero32__2247__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2247__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2247__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2247__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2247__count)));
                            vlSelf->__Vfunc_leading_zero32__2247__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2247__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2247__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2247__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2247__count)));
                            vlSelf->__Vfunc_leading_zero32__2247__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2247__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2247__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2247__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2247__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2247__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2247__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2247__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2247__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__44__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__44__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2259__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__44__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2259__part 
                            = vlSelf->__Vfunc_leading_zero32__2259__value;
                        vlSelf->__Vfunc_leading_zero32__2259__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2259__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2259__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2259__count)));
                            vlSelf->__Vfunc_leading_zero32__2259__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2259__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2259__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2259__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2259__count)));
                            vlSelf->__Vfunc_leading_zero32__2259__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2259__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2259__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2259__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2259__count)));
                            vlSelf->__Vfunc_leading_zero32__2259__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2259__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2259__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2259__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2259__count)));
                            vlSelf->__Vfunc_leading_zero32__2259__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2259__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2259__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2259__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2259__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2259__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2259__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2259__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2259__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__45__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__45__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2271__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__45__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2271__part 
                            = vlSelf->__Vfunc_leading_zero32__2271__value;
                        vlSelf->__Vfunc_leading_zero32__2271__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2271__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2271__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2271__count)));
                            vlSelf->__Vfunc_leading_zero32__2271__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2271__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2271__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2271__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2271__count)));
                            vlSelf->__Vfunc_leading_zero32__2271__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2271__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2271__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2271__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2271__count)));
                            vlSelf->__Vfunc_leading_zero32__2271__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2271__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2271__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2271__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2271__count)));
                            vlSelf->__Vfunc_leading_zero32__2271__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2271__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2271__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2271__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2271__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2271__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2271__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2271__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2271__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__46__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__46__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2283__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__46__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2283__part 
                            = vlSelf->__Vfunc_leading_zero32__2283__value;
                        vlSelf->__Vfunc_leading_zero32__2283__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2283__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2283__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2283__count)));
                            vlSelf->__Vfunc_leading_zero32__2283__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2283__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2283__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2283__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2283__count)));
                            vlSelf->__Vfunc_leading_zero32__2283__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2283__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2283__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2283__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2283__count)));
                            vlSelf->__Vfunc_leading_zero32__2283__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2283__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2283__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2283__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2283__count)));
                            vlSelf->__Vfunc_leading_zero32__2283__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2283__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2283__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2283__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2283__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2283__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2283__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2283__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2283__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__47__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__47__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2295__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__47__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2295__part 
                            = vlSelf->__Vfunc_leading_zero32__2295__value;
                        vlSelf->__Vfunc_leading_zero32__2295__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2295__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2295__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2295__count)));
                            vlSelf->__Vfunc_leading_zero32__2295__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2295__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2295__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2295__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2295__count)));
                            vlSelf->__Vfunc_leading_zero32__2295__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2295__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2295__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2295__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2295__count)));
                            vlSelf->__Vfunc_leading_zero32__2295__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2295__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2295__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2295__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2295__count)));
                            vlSelf->__Vfunc_leading_zero32__2295__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2295__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2295__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2295__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2295__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2295__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2295__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2295__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2295__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__48__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__48__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2307__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__48__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2307__part 
                            = vlSelf->__Vfunc_leading_zero32__2307__value;
                        vlSelf->__Vfunc_leading_zero32__2307__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2307__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2307__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2307__count)));
                            vlSelf->__Vfunc_leading_zero32__2307__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2307__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2307__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2307__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2307__count)));
                            vlSelf->__Vfunc_leading_zero32__2307__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2307__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2307__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2307__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2307__count)));
                            vlSelf->__Vfunc_leading_zero32__2307__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2307__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2307__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2307__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2307__count)));
                            vlSelf->__Vfunc_leading_zero32__2307__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2307__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2307__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2307__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2307__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2307__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2307__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2307__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2307__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__49__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__49__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2319__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__49__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2319__part 
                            = vlSelf->__Vfunc_leading_zero32__2319__value;
                        vlSelf->__Vfunc_leading_zero32__2319__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2319__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2319__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2319__count)));
                            vlSelf->__Vfunc_leading_zero32__2319__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2319__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2319__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2319__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2319__count)));
                            vlSelf->__Vfunc_leading_zero32__2319__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2319__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2319__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2319__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2319__count)));
                            vlSelf->__Vfunc_leading_zero32__2319__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2319__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2319__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2319__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2319__count)));
                            vlSelf->__Vfunc_leading_zero32__2319__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2319__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2319__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2319__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2319__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2319__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2319__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2319__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2319__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__50__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__50__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2331__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__50__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2331__part 
                            = vlSelf->__Vfunc_leading_zero32__2331__value;
                        vlSelf->__Vfunc_leading_zero32__2331__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2331__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2331__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2331__count)));
                            vlSelf->__Vfunc_leading_zero32__2331__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2331__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2331__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2331__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2331__count)));
                            vlSelf->__Vfunc_leading_zero32__2331__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2331__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2331__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2331__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2331__count)));
                            vlSelf->__Vfunc_leading_zero32__2331__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2331__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2331__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2331__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2331__count)));
                            vlSelf->__Vfunc_leading_zero32__2331__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2331__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2331__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2331__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2331__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2331__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2331__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2331__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2331__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__51__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__51__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2343__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__51__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2343__part 
                            = vlSelf->__Vfunc_leading_zero32__2343__value;
                        vlSelf->__Vfunc_leading_zero32__2343__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2343__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2343__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2343__count)));
                            vlSelf->__Vfunc_leading_zero32__2343__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2343__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2343__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2343__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2343__count)));
                            vlSelf->__Vfunc_leading_zero32__2343__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2343__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2343__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2343__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2343__count)));
                            vlSelf->__Vfunc_leading_zero32__2343__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2343__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2343__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2343__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2343__count)));
                            vlSelf->__Vfunc_leading_zero32__2343__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2343__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2343__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2343__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2343__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2343__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2343__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2343__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2343__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__52__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__52__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2355__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__52__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2355__part 
                            = vlSelf->__Vfunc_leading_zero32__2355__value;
                        vlSelf->__Vfunc_leading_zero32__2355__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2355__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2355__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2355__count)));
                            vlSelf->__Vfunc_leading_zero32__2355__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2355__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2355__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2355__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2355__count)));
                            vlSelf->__Vfunc_leading_zero32__2355__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2355__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2355__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2355__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2355__count)));
                            vlSelf->__Vfunc_leading_zero32__2355__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2355__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2355__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2355__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2355__count)));
                            vlSelf->__Vfunc_leading_zero32__2355__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2355__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2355__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2355__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2355__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2355__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2355__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2355__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2355__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__53__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__53__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2367__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__53__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2367__part 
                            = vlSelf->__Vfunc_leading_zero32__2367__value;
                        vlSelf->__Vfunc_leading_zero32__2367__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2367__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2367__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2367__count)));
                            vlSelf->__Vfunc_leading_zero32__2367__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2367__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2367__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2367__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2367__count)));
                            vlSelf->__Vfunc_leading_zero32__2367__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2367__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2367__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2367__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2367__count)));
                            vlSelf->__Vfunc_leading_zero32__2367__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2367__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2367__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2367__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2367__count)));
                            vlSelf->__Vfunc_leading_zero32__2367__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2367__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2367__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2367__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2367__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2367__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2367__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2367__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2367__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__54__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__54__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2379__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__54__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2379__part 
                            = vlSelf->__Vfunc_leading_zero32__2379__value;
                        vlSelf->__Vfunc_leading_zero32__2379__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2379__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2379__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2379__count)));
                            vlSelf->__Vfunc_leading_zero32__2379__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2379__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2379__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2379__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2379__count)));
                            vlSelf->__Vfunc_leading_zero32__2379__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2379__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2379__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2379__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2379__count)));
                            vlSelf->__Vfunc_leading_zero32__2379__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2379__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2379__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2379__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2379__count)));
                            vlSelf->__Vfunc_leading_zero32__2379__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2379__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2379__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2379__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2379__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2379__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2379__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2379__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2379__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__55__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__55__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2391__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__55__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2391__part 
                            = vlSelf->__Vfunc_leading_zero32__2391__value;
                        vlSelf->__Vfunc_leading_zero32__2391__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2391__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2391__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2391__count)));
                            vlSelf->__Vfunc_leading_zero32__2391__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2391__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2391__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2391__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2391__count)));
                            vlSelf->__Vfunc_leading_zero32__2391__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2391__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2391__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2391__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2391__count)));
                            vlSelf->__Vfunc_leading_zero32__2391__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2391__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2391__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2391__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2391__count)));
                            vlSelf->__Vfunc_leading_zero32__2391__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2391__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2391__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2391__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2391__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2391__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2391__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2391__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2391__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__56__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__56__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2403__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__56__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2403__part 
                            = vlSelf->__Vfunc_leading_zero32__2403__value;
                        vlSelf->__Vfunc_leading_zero32__2403__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2403__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2403__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2403__count)));
                            vlSelf->__Vfunc_leading_zero32__2403__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2403__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2403__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2403__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2403__count)));
                            vlSelf->__Vfunc_leading_zero32__2403__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2403__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2403__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2403__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2403__count)));
                            vlSelf->__Vfunc_leading_zero32__2403__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2403__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2403__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2403__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2403__count)));
                            vlSelf->__Vfunc_leading_zero32__2403__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2403__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2403__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2403__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2403__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2403__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2403__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2403__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2403__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__57__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__57__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2415__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__57__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2415__part 
                            = vlSelf->__Vfunc_leading_zero32__2415__value;
                        vlSelf->__Vfunc_leading_zero32__2415__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2415__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2415__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2415__count)));
                            vlSelf->__Vfunc_leading_zero32__2415__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2415__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2415__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2415__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2415__count)));
                            vlSelf->__Vfunc_leading_zero32__2415__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2415__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2415__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2415__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2415__count)));
                            vlSelf->__Vfunc_leading_zero32__2415__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2415__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2415__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2415__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2415__count)));
                            vlSelf->__Vfunc_leading_zero32__2415__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2415__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2415__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2415__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2415__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2415__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2415__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2415__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2415__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__58__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__58__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2427__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__58__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2427__part 
                            = vlSelf->__Vfunc_leading_zero32__2427__value;
                        vlSelf->__Vfunc_leading_zero32__2427__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2427__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2427__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2427__count)));
                            vlSelf->__Vfunc_leading_zero32__2427__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2427__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2427__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2427__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2427__count)));
                            vlSelf->__Vfunc_leading_zero32__2427__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2427__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2427__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2427__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2427__count)));
                            vlSelf->__Vfunc_leading_zero32__2427__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2427__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2427__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2427__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2427__count)));
                            vlSelf->__Vfunc_leading_zero32__2427__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2427__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2427__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2427__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2427__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2427__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2427__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2427__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2427__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__59__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__59__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2439__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__59__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2439__part 
                            = vlSelf->__Vfunc_leading_zero32__2439__value;
                        vlSelf->__Vfunc_leading_zero32__2439__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2439__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2439__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2439__count)));
                            vlSelf->__Vfunc_leading_zero32__2439__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2439__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2439__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2439__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2439__count)));
                            vlSelf->__Vfunc_leading_zero32__2439__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2439__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2439__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2439__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2439__count)));
                            vlSelf->__Vfunc_leading_zero32__2439__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2439__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2439__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2439__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2439__count)));
                            vlSelf->__Vfunc_leading_zero32__2439__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2439__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2439__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2439__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2439__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2439__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2439__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2439__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2439__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__60__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__60__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2451__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__60__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2451__part 
                            = vlSelf->__Vfunc_leading_zero32__2451__value;
                        vlSelf->__Vfunc_leading_zero32__2451__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2451__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2451__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2451__count)));
                            vlSelf->__Vfunc_leading_zero32__2451__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2451__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2451__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2451__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2451__count)));
                            vlSelf->__Vfunc_leading_zero32__2451__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2451__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2451__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2451__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2451__count)));
                            vlSelf->__Vfunc_leading_zero32__2451__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2451__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2451__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2451__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2451__count)));
                            vlSelf->__Vfunc_leading_zero32__2451__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2451__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2451__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2451__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2451__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2451__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2451__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2451__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2451__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__61__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__61__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2463__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__61__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2463__part 
                            = vlSelf->__Vfunc_leading_zero32__2463__value;
                        vlSelf->__Vfunc_leading_zero32__2463__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2463__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2463__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2463__count)));
                            vlSelf->__Vfunc_leading_zero32__2463__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2463__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2463__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2463__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2463__count)));
                            vlSelf->__Vfunc_leading_zero32__2463__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2463__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2463__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2463__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2463__count)));
                            vlSelf->__Vfunc_leading_zero32__2463__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2463__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2463__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2463__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2463__count)));
                            vlSelf->__Vfunc_leading_zero32__2463__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2463__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2463__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2463__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2463__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2463__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2463__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2463__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2463__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__62__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__62__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2475__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__62__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2475__part 
                            = vlSelf->__Vfunc_leading_zero32__2475__value;
                        vlSelf->__Vfunc_leading_zero32__2475__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2475__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2475__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2475__count)));
                            vlSelf->__Vfunc_leading_zero32__2475__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2475__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2475__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2475__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2475__count)));
                            vlSelf->__Vfunc_leading_zero32__2475__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2475__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2475__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2475__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2475__count)));
                            vlSelf->__Vfunc_leading_zero32__2475__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2475__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2475__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2475__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2475__count)));
                            vlSelf->__Vfunc_leading_zero32__2475__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2475__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2475__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2475__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2475__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2475__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2475__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2475__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2475__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__63__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__63__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2487__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__63__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2487__part 
                            = vlSelf->__Vfunc_leading_zero32__2487__value;
                        vlSelf->__Vfunc_leading_zero32__2487__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2487__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2487__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2487__count)));
                            vlSelf->__Vfunc_leading_zero32__2487__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2487__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2487__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2487__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2487__count)));
                            vlSelf->__Vfunc_leading_zero32__2487__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2487__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2487__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2487__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2487__count)));
                            vlSelf->__Vfunc_leading_zero32__2487__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2487__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2487__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2487__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2487__count)));
                            vlSelf->__Vfunc_leading_zero32__2487__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2487__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2487__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2487__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2487__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2487__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2487__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2487__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2487__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__64__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__64__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2499__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__64__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2499__part 
                            = vlSelf->__Vfunc_leading_zero32__2499__value;
                        vlSelf->__Vfunc_leading_zero32__2499__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2499__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2499__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2499__count)));
                            vlSelf->__Vfunc_leading_zero32__2499__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2499__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2499__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2499__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2499__count)));
                            vlSelf->__Vfunc_leading_zero32__2499__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2499__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2499__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2499__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2499__count)));
                            vlSelf->__Vfunc_leading_zero32__2499__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2499__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2499__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2499__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2499__count)));
                            vlSelf->__Vfunc_leading_zero32__2499__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2499__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2499__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2499__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2499__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2499__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2499__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2499__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2499__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__65__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__65__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2511__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__65__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2511__part 
                            = vlSelf->__Vfunc_leading_zero32__2511__value;
                        vlSelf->__Vfunc_leading_zero32__2511__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2511__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2511__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2511__count)));
                            vlSelf->__Vfunc_leading_zero32__2511__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2511__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2511__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2511__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2511__count)));
                            vlSelf->__Vfunc_leading_zero32__2511__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2511__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2511__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2511__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2511__count)));
                            vlSelf->__Vfunc_leading_zero32__2511__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2511__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2511__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2511__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2511__count)));
                            vlSelf->__Vfunc_leading_zero32__2511__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2511__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2511__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2511__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2511__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2511__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2511__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2511__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2511__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__66__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__66__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2523__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__66__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2523__part 
                            = vlSelf->__Vfunc_leading_zero32__2523__value;
                        vlSelf->__Vfunc_leading_zero32__2523__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2523__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2523__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2523__count)));
                            vlSelf->__Vfunc_leading_zero32__2523__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2523__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2523__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2523__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2523__count)));
                            vlSelf->__Vfunc_leading_zero32__2523__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2523__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2523__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2523__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2523__count)));
                            vlSelf->__Vfunc_leading_zero32__2523__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2523__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2523__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2523__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2523__count)));
                            vlSelf->__Vfunc_leading_zero32__2523__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2523__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2523__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2523__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2523__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2523__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2523__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2523__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2523__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__67__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__67__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2535__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__67__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2535__part 
                            = vlSelf->__Vfunc_leading_zero32__2535__value;
                        vlSelf->__Vfunc_leading_zero32__2535__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2535__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2535__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2535__count)));
                            vlSelf->__Vfunc_leading_zero32__2535__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2535__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2535__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2535__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2535__count)));
                            vlSelf->__Vfunc_leading_zero32__2535__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2535__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2535__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2535__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2535__count)));
                            vlSelf->__Vfunc_leading_zero32__2535__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2535__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2535__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2535__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2535__count)));
                            vlSelf->__Vfunc_leading_zero32__2535__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2535__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2535__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2535__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2535__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2535__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2535__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2535__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2535__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__68__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__68__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2547__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__68__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2547__part 
                            = vlSelf->__Vfunc_leading_zero32__2547__value;
                        vlSelf->__Vfunc_leading_zero32__2547__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2547__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2547__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2547__count)));
                            vlSelf->__Vfunc_leading_zero32__2547__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2547__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2547__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2547__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2547__count)));
                            vlSelf->__Vfunc_leading_zero32__2547__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2547__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2547__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2547__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2547__count)));
                            vlSelf->__Vfunc_leading_zero32__2547__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2547__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2547__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2547__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2547__count)));
                            vlSelf->__Vfunc_leading_zero32__2547__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2547__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2547__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2547__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2547__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2547__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2547__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2547__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2547__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__69__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__69__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2559__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__69__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2559__part 
                            = vlSelf->__Vfunc_leading_zero32__2559__value;
                        vlSelf->__Vfunc_leading_zero32__2559__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2559__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2559__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2559__count)));
                            vlSelf->__Vfunc_leading_zero32__2559__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2559__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2559__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2559__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2559__count)));
                            vlSelf->__Vfunc_leading_zero32__2559__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2559__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2559__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2559__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2559__count)));
                            vlSelf->__Vfunc_leading_zero32__2559__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2559__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2559__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2559__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2559__count)));
                            vlSelf->__Vfunc_leading_zero32__2559__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2559__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2559__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2559__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2559__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2559__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2559__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2559__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2559__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__70__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__70__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2571__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__70__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2571__part 
                            = vlSelf->__Vfunc_leading_zero32__2571__value;
                        vlSelf->__Vfunc_leading_zero32__2571__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2571__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2571__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2571__count)));
                            vlSelf->__Vfunc_leading_zero32__2571__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2571__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2571__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2571__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2571__count)));
                            vlSelf->__Vfunc_leading_zero32__2571__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2571__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2571__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2571__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2571__count)));
                            vlSelf->__Vfunc_leading_zero32__2571__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2571__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2571__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2571__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2571__count)));
                            vlSelf->__Vfunc_leading_zero32__2571__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2571__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2571__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2571__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2571__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2571__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2571__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2571__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2571__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__71__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__71__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2583__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__71__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2583__part 
                            = vlSelf->__Vfunc_leading_zero32__2583__value;
                        vlSelf->__Vfunc_leading_zero32__2583__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2583__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2583__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2583__count)));
                            vlSelf->__Vfunc_leading_zero32__2583__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2583__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2583__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2583__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2583__count)));
                            vlSelf->__Vfunc_leading_zero32__2583__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2583__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2583__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2583__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2583__count)));
                            vlSelf->__Vfunc_leading_zero32__2583__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2583__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2583__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2583__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2583__count)));
                            vlSelf->__Vfunc_leading_zero32__2583__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2583__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2583__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2583__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2583__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2583__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2583__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2583__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2583__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__72__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__72__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2595__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__72__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2595__part 
                            = vlSelf->__Vfunc_leading_zero32__2595__value;
                        vlSelf->__Vfunc_leading_zero32__2595__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2595__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2595__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2595__count)));
                            vlSelf->__Vfunc_leading_zero32__2595__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2595__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2595__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2595__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2595__count)));
                            vlSelf->__Vfunc_leading_zero32__2595__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2595__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2595__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2595__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2595__count)));
                            vlSelf->__Vfunc_leading_zero32__2595__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2595__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2595__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2595__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2595__count)));
                            vlSelf->__Vfunc_leading_zero32__2595__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2595__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2595__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2595__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2595__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2595__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2595__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2595__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2595__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__73__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__73__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2607__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__73__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2607__part 
                            = vlSelf->__Vfunc_leading_zero32__2607__value;
                        vlSelf->__Vfunc_leading_zero32__2607__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2607__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2607__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2607__count)));
                            vlSelf->__Vfunc_leading_zero32__2607__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2607__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2607__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2607__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2607__count)));
                            vlSelf->__Vfunc_leading_zero32__2607__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2607__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2607__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2607__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2607__count)));
                            vlSelf->__Vfunc_leading_zero32__2607__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2607__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2607__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2607__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2607__count)));
                            vlSelf->__Vfunc_leading_zero32__2607__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2607__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2607__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2607__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2607__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2607__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2607__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2607__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2607__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__74__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__74__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2619__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__74__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2619__part 
                            = vlSelf->__Vfunc_leading_zero32__2619__value;
                        vlSelf->__Vfunc_leading_zero32__2619__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2619__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2619__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2619__count)));
                            vlSelf->__Vfunc_leading_zero32__2619__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2619__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2619__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2619__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2619__count)));
                            vlSelf->__Vfunc_leading_zero32__2619__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2619__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2619__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2619__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2619__count)));
                            vlSelf->__Vfunc_leading_zero32__2619__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2619__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2619__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2619__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2619__count)));
                            vlSelf->__Vfunc_leading_zero32__2619__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2619__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2619__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2619__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2619__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2619__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2619__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2619__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2619__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__75__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__75__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2631__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__75__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2631__part 
                            = vlSelf->__Vfunc_leading_zero32__2631__value;
                        vlSelf->__Vfunc_leading_zero32__2631__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2631__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2631__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2631__count)));
                            vlSelf->__Vfunc_leading_zero32__2631__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2631__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2631__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2631__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2631__count)));
                            vlSelf->__Vfunc_leading_zero32__2631__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2631__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2631__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2631__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2631__count)));
                            vlSelf->__Vfunc_leading_zero32__2631__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2631__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2631__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2631__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2631__count)));
                            vlSelf->__Vfunc_leading_zero32__2631__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2631__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2631__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2631__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2631__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2631__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2631__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2631__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2631__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__76__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__76__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2643__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__76__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2643__part 
                            = vlSelf->__Vfunc_leading_zero32__2643__value;
                        vlSelf->__Vfunc_leading_zero32__2643__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2643__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2643__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2643__count)));
                            vlSelf->__Vfunc_leading_zero32__2643__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2643__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2643__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2643__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2643__count)));
                            vlSelf->__Vfunc_leading_zero32__2643__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2643__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2643__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2643__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2643__count)));
                            vlSelf->__Vfunc_leading_zero32__2643__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2643__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2643__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2643__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2643__count)));
                            vlSelf->__Vfunc_leading_zero32__2643__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2643__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2643__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2643__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2643__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2643__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2643__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2643__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2643__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__77__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__77__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2655__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__77__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2655__part 
                            = vlSelf->__Vfunc_leading_zero32__2655__value;
                        vlSelf->__Vfunc_leading_zero32__2655__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2655__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2655__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2655__count)));
                            vlSelf->__Vfunc_leading_zero32__2655__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2655__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2655__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2655__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2655__count)));
                            vlSelf->__Vfunc_leading_zero32__2655__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2655__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2655__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2655__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2655__count)));
                            vlSelf->__Vfunc_leading_zero32__2655__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2655__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2655__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2655__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2655__count)));
                            vlSelf->__Vfunc_leading_zero32__2655__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2655__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2655__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2655__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2655__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2655__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2655__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2655__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2655__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__78__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__78__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2667__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__78__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2667__part 
                            = vlSelf->__Vfunc_leading_zero32__2667__value;
                        vlSelf->__Vfunc_leading_zero32__2667__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2667__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2667__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2667__count)));
                            vlSelf->__Vfunc_leading_zero32__2667__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2667__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2667__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2667__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2667__count)));
                            vlSelf->__Vfunc_leading_zero32__2667__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2667__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2667__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2667__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2667__count)));
                            vlSelf->__Vfunc_leading_zero32__2667__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2667__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2667__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2667__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2667__count)));
                            vlSelf->__Vfunc_leading_zero32__2667__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2667__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2667__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2667__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2667__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2667__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2667__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2667__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2667__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__79__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__79__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2679__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__79__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2679__part 
                            = vlSelf->__Vfunc_leading_zero32__2679__value;
                        vlSelf->__Vfunc_leading_zero32__2679__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2679__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2679__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2679__count)));
                            vlSelf->__Vfunc_leading_zero32__2679__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2679__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2679__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2679__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2679__count)));
                            vlSelf->__Vfunc_leading_zero32__2679__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2679__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2679__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2679__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2679__count)));
                            vlSelf->__Vfunc_leading_zero32__2679__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2679__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2679__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2679__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2679__count)));
                            vlSelf->__Vfunc_leading_zero32__2679__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2679__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2679__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2679__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2679__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2679__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2679__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2679__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2679__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__80__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__80__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2691__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__80__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2691__part 
                            = vlSelf->__Vfunc_leading_zero32__2691__value;
                        vlSelf->__Vfunc_leading_zero32__2691__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2691__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2691__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2691__count)));
                            vlSelf->__Vfunc_leading_zero32__2691__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2691__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2691__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2691__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2691__count)));
                            vlSelf->__Vfunc_leading_zero32__2691__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2691__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2691__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2691__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2691__count)));
                            vlSelf->__Vfunc_leading_zero32__2691__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2691__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2691__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2691__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2691__count)));
                            vlSelf->__Vfunc_leading_zero32__2691__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2691__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2691__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2691__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2691__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2691__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2691__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2691__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2691__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__81__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__81__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2703__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__81__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2703__part 
                            = vlSelf->__Vfunc_leading_zero32__2703__value;
                        vlSelf->__Vfunc_leading_zero32__2703__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2703__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2703__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2703__count)));
                            vlSelf->__Vfunc_leading_zero32__2703__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2703__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2703__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2703__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2703__count)));
                            vlSelf->__Vfunc_leading_zero32__2703__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2703__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2703__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2703__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2703__count)));
                            vlSelf->__Vfunc_leading_zero32__2703__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2703__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2703__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2703__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2703__count)));
                            vlSelf->__Vfunc_leading_zero32__2703__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2703__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2703__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2703__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2703__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2703__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2703__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2703__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2703__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__82__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__82__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2715__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__82__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2715__part 
                            = vlSelf->__Vfunc_leading_zero32__2715__value;
                        vlSelf->__Vfunc_leading_zero32__2715__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2715__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2715__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2715__count)));
                            vlSelf->__Vfunc_leading_zero32__2715__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2715__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2715__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2715__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2715__count)));
                            vlSelf->__Vfunc_leading_zero32__2715__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2715__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2715__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2715__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2715__count)));
                            vlSelf->__Vfunc_leading_zero32__2715__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2715__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2715__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2715__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2715__count)));
                            vlSelf->__Vfunc_leading_zero32__2715__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2715__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2715__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2715__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2715__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2715__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2715__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2715__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2715__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__83__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__83__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2727__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__83__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2727__part 
                            = vlSelf->__Vfunc_leading_zero32__2727__value;
                        vlSelf->__Vfunc_leading_zero32__2727__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2727__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2727__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2727__count)));
                            vlSelf->__Vfunc_leading_zero32__2727__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2727__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2727__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2727__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2727__count)));
                            vlSelf->__Vfunc_leading_zero32__2727__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2727__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2727__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2727__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2727__count)));
                            vlSelf->__Vfunc_leading_zero32__2727__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2727__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2727__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2727__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2727__count)));
                            vlSelf->__Vfunc_leading_zero32__2727__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2727__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2727__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2727__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2727__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2727__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2727__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2727__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2727__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__84__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__84__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2739__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__84__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2739__part 
                            = vlSelf->__Vfunc_leading_zero32__2739__value;
                        vlSelf->__Vfunc_leading_zero32__2739__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2739__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2739__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2739__count)));
                            vlSelf->__Vfunc_leading_zero32__2739__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2739__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2739__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2739__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2739__count)));
                            vlSelf->__Vfunc_leading_zero32__2739__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2739__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2739__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2739__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2739__count)));
                            vlSelf->__Vfunc_leading_zero32__2739__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2739__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2739__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2739__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2739__count)));
                            vlSelf->__Vfunc_leading_zero32__2739__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2739__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2739__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2739__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2739__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2739__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2739__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2739__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2739__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__85__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__85__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2751__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__85__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2751__part 
                            = vlSelf->__Vfunc_leading_zero32__2751__value;
                        vlSelf->__Vfunc_leading_zero32__2751__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2751__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2751__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2751__count)));
                            vlSelf->__Vfunc_leading_zero32__2751__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2751__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2751__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2751__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2751__count)));
                            vlSelf->__Vfunc_leading_zero32__2751__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2751__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2751__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2751__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2751__count)));
                            vlSelf->__Vfunc_leading_zero32__2751__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2751__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2751__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2751__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2751__count)));
                            vlSelf->__Vfunc_leading_zero32__2751__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2751__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2751__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2751__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2751__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2751__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2751__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2751__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2751__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__86__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__86__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2763__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__86__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2763__part 
                            = vlSelf->__Vfunc_leading_zero32__2763__value;
                        vlSelf->__Vfunc_leading_zero32__2763__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2763__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2763__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2763__count)));
                            vlSelf->__Vfunc_leading_zero32__2763__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2763__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2763__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2763__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2763__count)));
                            vlSelf->__Vfunc_leading_zero32__2763__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2763__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2763__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2763__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2763__count)));
                            vlSelf->__Vfunc_leading_zero32__2763__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2763__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2763__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2763__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2763__count)));
                            vlSelf->__Vfunc_leading_zero32__2763__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2763__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2763__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2763__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2763__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2763__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2763__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2763__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2763__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__87__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__87__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2775__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__87__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2775__part 
                            = vlSelf->__Vfunc_leading_zero32__2775__value;
                        vlSelf->__Vfunc_leading_zero32__2775__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2775__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2775__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2775__count)));
                            vlSelf->__Vfunc_leading_zero32__2775__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2775__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2775__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2775__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2775__count)));
                            vlSelf->__Vfunc_leading_zero32__2775__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2775__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2775__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2775__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2775__count)));
                            vlSelf->__Vfunc_leading_zero32__2775__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2775__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2775__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2775__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2775__count)));
                            vlSelf->__Vfunc_leading_zero32__2775__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2775__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2775__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2775__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2775__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2775__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2775__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2775__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2775__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__88__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__88__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2787__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__88__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2787__part 
                            = vlSelf->__Vfunc_leading_zero32__2787__value;
                        vlSelf->__Vfunc_leading_zero32__2787__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2787__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2787__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2787__count)));
                            vlSelf->__Vfunc_leading_zero32__2787__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2787__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2787__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2787__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2787__count)));
                            vlSelf->__Vfunc_leading_zero32__2787__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2787__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2787__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2787__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2787__count)));
                            vlSelf->__Vfunc_leading_zero32__2787__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2787__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2787__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2787__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2787__count)));
                            vlSelf->__Vfunc_leading_zero32__2787__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2787__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2787__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2787__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2787__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2787__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2787__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2787__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2787__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__89__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__89__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2799__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__89__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2799__part 
                            = vlSelf->__Vfunc_leading_zero32__2799__value;
                        vlSelf->__Vfunc_leading_zero32__2799__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2799__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2799__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2799__count)));
                            vlSelf->__Vfunc_leading_zero32__2799__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2799__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2799__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2799__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2799__count)));
                            vlSelf->__Vfunc_leading_zero32__2799__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2799__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2799__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2799__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2799__count)));
                            vlSelf->__Vfunc_leading_zero32__2799__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2799__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2799__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2799__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2799__count)));
                            vlSelf->__Vfunc_leading_zero32__2799__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2799__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2799__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2799__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2799__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2799__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2799__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2799__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2799__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__90__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__90__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2811__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__90__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2811__part 
                            = vlSelf->__Vfunc_leading_zero32__2811__value;
                        vlSelf->__Vfunc_leading_zero32__2811__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2811__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2811__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2811__count)));
                            vlSelf->__Vfunc_leading_zero32__2811__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2811__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2811__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2811__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2811__count)));
                            vlSelf->__Vfunc_leading_zero32__2811__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2811__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2811__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2811__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2811__count)));
                            vlSelf->__Vfunc_leading_zero32__2811__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2811__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2811__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2811__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2811__count)));
                            vlSelf->__Vfunc_leading_zero32__2811__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2811__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2811__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2811__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2811__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2811__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2811__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2811__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2811__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__91__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__91__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2823__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__91__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2823__part 
                            = vlSelf->__Vfunc_leading_zero32__2823__value;
                        vlSelf->__Vfunc_leading_zero32__2823__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2823__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2823__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2823__count)));
                            vlSelf->__Vfunc_leading_zero32__2823__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2823__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2823__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2823__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2823__count)));
                            vlSelf->__Vfunc_leading_zero32__2823__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2823__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2823__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2823__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2823__count)));
                            vlSelf->__Vfunc_leading_zero32__2823__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2823__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2823__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2823__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2823__count)));
                            vlSelf->__Vfunc_leading_zero32__2823__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2823__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2823__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2823__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2823__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2823__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2823__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2823__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2823__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__92__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__92__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2835__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__92__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2835__part 
                            = vlSelf->__Vfunc_leading_zero32__2835__value;
                        vlSelf->__Vfunc_leading_zero32__2835__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2835__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2835__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2835__count)));
                            vlSelf->__Vfunc_leading_zero32__2835__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2835__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2835__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2835__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2835__count)));
                            vlSelf->__Vfunc_leading_zero32__2835__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2835__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2835__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2835__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2835__count)));
                            vlSelf->__Vfunc_leading_zero32__2835__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2835__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2835__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2835__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2835__count)));
                            vlSelf->__Vfunc_leading_zero32__2835__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2835__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2835__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2835__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2835__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2835__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2835__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2835__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2835__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__93__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__93__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2847__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__93__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2847__part 
                            = vlSelf->__Vfunc_leading_zero32__2847__value;
                        vlSelf->__Vfunc_leading_zero32__2847__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2847__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2847__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2847__count)));
                            vlSelf->__Vfunc_leading_zero32__2847__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2847__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2847__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2847__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2847__count)));
                            vlSelf->__Vfunc_leading_zero32__2847__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2847__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2847__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2847__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2847__count)));
                            vlSelf->__Vfunc_leading_zero32__2847__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2847__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2847__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2847__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2847__count)));
                            vlSelf->__Vfunc_leading_zero32__2847__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2847__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2847__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2847__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2847__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2847__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2847__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2847__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2847__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__94__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__94__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2859__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__94__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2859__part 
                            = vlSelf->__Vfunc_leading_zero32__2859__value;
                        vlSelf->__Vfunc_leading_zero32__2859__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2859__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2859__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2859__count)));
                            vlSelf->__Vfunc_leading_zero32__2859__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2859__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2859__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2859__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2859__count)));
                            vlSelf->__Vfunc_leading_zero32__2859__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2859__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2859__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2859__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2859__count)));
                            vlSelf->__Vfunc_leading_zero32__2859__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2859__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2859__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2859__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2859__count)));
                            vlSelf->__Vfunc_leading_zero32__2859__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2859__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2859__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2859__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2859__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2859__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2859__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2859__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2859__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__95__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__95__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2871__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__95__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2871__part 
                            = vlSelf->__Vfunc_leading_zero32__2871__value;
                        vlSelf->__Vfunc_leading_zero32__2871__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2871__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2871__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2871__count)));
                            vlSelf->__Vfunc_leading_zero32__2871__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2871__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2871__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2871__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2871__count)));
                            vlSelf->__Vfunc_leading_zero32__2871__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2871__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2871__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2871__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2871__count)));
                            vlSelf->__Vfunc_leading_zero32__2871__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2871__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2871__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2871__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2871__count)));
                            vlSelf->__Vfunc_leading_zero32__2871__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2871__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2871__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2871__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2871__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2871__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2871__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2871__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2871__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__96__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__96__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2883__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__96__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2883__part 
                            = vlSelf->__Vfunc_leading_zero32__2883__value;
                        vlSelf->__Vfunc_leading_zero32__2883__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2883__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2883__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2883__count)));
                            vlSelf->__Vfunc_leading_zero32__2883__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2883__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2883__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2883__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2883__count)));
                            vlSelf->__Vfunc_leading_zero32__2883__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2883__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2883__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2883__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2883__count)));
                            vlSelf->__Vfunc_leading_zero32__2883__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2883__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2883__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2883__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2883__count)));
                            vlSelf->__Vfunc_leading_zero32__2883__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2883__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2883__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2883__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2883__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2883__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2883__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2883__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2883__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__97__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__97__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2895__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__97__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2895__part 
                            = vlSelf->__Vfunc_leading_zero32__2895__value;
                        vlSelf->__Vfunc_leading_zero32__2895__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2895__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2895__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2895__count)));
                            vlSelf->__Vfunc_leading_zero32__2895__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2895__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2895__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2895__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2895__count)));
                            vlSelf->__Vfunc_leading_zero32__2895__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2895__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2895__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2895__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2895__count)));
                            vlSelf->__Vfunc_leading_zero32__2895__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2895__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2895__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2895__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2895__count)));
                            vlSelf->__Vfunc_leading_zero32__2895__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2895__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2895__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2895__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2895__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2895__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2895__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2895__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2895__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__98__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__98__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2907__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__98__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2907__part 
                            = vlSelf->__Vfunc_leading_zero32__2907__value;
                        vlSelf->__Vfunc_leading_zero32__2907__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2907__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2907__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2907__count)));
                            vlSelf->__Vfunc_leading_zero32__2907__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2907__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2907__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2907__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2907__count)));
                            vlSelf->__Vfunc_leading_zero32__2907__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2907__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2907__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2907__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2907__count)));
                            vlSelf->__Vfunc_leading_zero32__2907__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2907__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2907__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2907__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2907__count)));
                            vlSelf->__Vfunc_leading_zero32__2907__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2907__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2907__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2907__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2907__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2907__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2907__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2907__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2907__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__99__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__99__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2919__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__99__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2919__part 
                            = vlSelf->__Vfunc_leading_zero32__2919__value;
                        vlSelf->__Vfunc_leading_zero32__2919__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2919__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2919__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2919__count)));
                            vlSelf->__Vfunc_leading_zero32__2919__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2919__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2919__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2919__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2919__count)));
                            vlSelf->__Vfunc_leading_zero32__2919__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2919__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2919__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2919__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2919__count)));
                            vlSelf->__Vfunc_leading_zero32__2919__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2919__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2919__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2919__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2919__count)));
                            vlSelf->__Vfunc_leading_zero32__2919__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2919__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2919__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2919__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2919__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2919__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2919__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2919__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2919__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__100__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__100__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2931__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__100__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2931__part 
                            = vlSelf->__Vfunc_leading_zero32__2931__value;
                        vlSelf->__Vfunc_leading_zero32__2931__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2931__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2931__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2931__count)));
                            vlSelf->__Vfunc_leading_zero32__2931__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2931__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2931__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2931__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2931__count)));
                            vlSelf->__Vfunc_leading_zero32__2931__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2931__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2931__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2931__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2931__count)));
                            vlSelf->__Vfunc_leading_zero32__2931__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2931__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2931__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2931__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2931__count)));
                            vlSelf->__Vfunc_leading_zero32__2931__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2931__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2931__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2931__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2931__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2931__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2931__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2931__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2931__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__101__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__101__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2943__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__101__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2943__part 
                            = vlSelf->__Vfunc_leading_zero32__2943__value;
                        vlSelf->__Vfunc_leading_zero32__2943__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2943__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2943__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2943__count)));
                            vlSelf->__Vfunc_leading_zero32__2943__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2943__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2943__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2943__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2943__count)));
                            vlSelf->__Vfunc_leading_zero32__2943__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2943__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2943__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2943__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2943__count)));
                            vlSelf->__Vfunc_leading_zero32__2943__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2943__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2943__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2943__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2943__count)));
                            vlSelf->__Vfunc_leading_zero32__2943__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2943__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2943__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2943__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2943__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2943__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2943__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2943__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2943__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__102__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__102__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2955__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__102__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2955__part 
                            = vlSelf->__Vfunc_leading_zero32__2955__value;
                        vlSelf->__Vfunc_leading_zero32__2955__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2955__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2955__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2955__count)));
                            vlSelf->__Vfunc_leading_zero32__2955__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2955__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2955__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2955__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2955__count)));
                            vlSelf->__Vfunc_leading_zero32__2955__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2955__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2955__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2955__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2955__count)));
                            vlSelf->__Vfunc_leading_zero32__2955__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2955__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2955__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2955__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2955__count)));
                            vlSelf->__Vfunc_leading_zero32__2955__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2955__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2955__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2955__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2955__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2955__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2955__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2955__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2955__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__103__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__103__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2967__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__103__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2967__part 
                            = vlSelf->__Vfunc_leading_zero32__2967__value;
                        vlSelf->__Vfunc_leading_zero32__2967__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2967__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2967__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2967__count)));
                            vlSelf->__Vfunc_leading_zero32__2967__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2967__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2967__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2967__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2967__count)));
                            vlSelf->__Vfunc_leading_zero32__2967__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2967__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2967__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2967__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2967__count)));
                            vlSelf->__Vfunc_leading_zero32__2967__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2967__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2967__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2967__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2967__count)));
                            vlSelf->__Vfunc_leading_zero32__2967__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2967__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2967__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2967__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2967__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2967__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2967__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2967__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2967__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__104__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__104__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2979__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__104__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2979__part 
                            = vlSelf->__Vfunc_leading_zero32__2979__value;
                        vlSelf->__Vfunc_leading_zero32__2979__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2979__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2979__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2979__count)));
                            vlSelf->__Vfunc_leading_zero32__2979__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2979__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2979__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2979__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2979__count)));
                            vlSelf->__Vfunc_leading_zero32__2979__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2979__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2979__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2979__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2979__count)));
                            vlSelf->__Vfunc_leading_zero32__2979__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2979__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2979__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2979__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2979__count)));
                            vlSelf->__Vfunc_leading_zero32__2979__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2979__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2979__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2979__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2979__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2979__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2979__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2979__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2979__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__105__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__105__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2991__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__105__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2991__part 
                            = vlSelf->__Vfunc_leading_zero32__2991__value;
                        vlSelf->__Vfunc_leading_zero32__2991__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2991__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2991__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2991__count)));
                            vlSelf->__Vfunc_leading_zero32__2991__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2991__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2991__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2991__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2991__count)));
                            vlSelf->__Vfunc_leading_zero32__2991__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2991__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2991__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2991__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2991__count)));
                            vlSelf->__Vfunc_leading_zero32__2991__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2991__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2991__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2991__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2991__count)));
                            vlSelf->__Vfunc_leading_zero32__2991__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2991__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2991__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2991__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2991__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2991__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2991__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2991__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2991__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__106__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__106__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3003__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__106__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3003__part 
                            = vlSelf->__Vfunc_leading_zero32__3003__value;
                        vlSelf->__Vfunc_leading_zero32__3003__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3003__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3003__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3003__count)));
                            vlSelf->__Vfunc_leading_zero32__3003__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3003__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3003__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3003__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3003__count)));
                            vlSelf->__Vfunc_leading_zero32__3003__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3003__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3003__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3003__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3003__count)));
                            vlSelf->__Vfunc_leading_zero32__3003__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3003__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3003__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3003__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3003__count)));
                            vlSelf->__Vfunc_leading_zero32__3003__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3003__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3003__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3003__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3003__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3003__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3003__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3003__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3003__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__107__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__107__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3015__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__107__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3015__part 
                            = vlSelf->__Vfunc_leading_zero32__3015__value;
                        vlSelf->__Vfunc_leading_zero32__3015__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3015__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3015__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3015__count)));
                            vlSelf->__Vfunc_leading_zero32__3015__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3015__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3015__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3015__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3015__count)));
                            vlSelf->__Vfunc_leading_zero32__3015__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3015__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3015__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3015__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3015__count)));
                            vlSelf->__Vfunc_leading_zero32__3015__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3015__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3015__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3015__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3015__count)));
                            vlSelf->__Vfunc_leading_zero32__3015__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3015__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3015__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3015__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3015__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3015__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3015__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3015__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3015__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__108__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__108__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3027__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__108__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3027__part 
                            = vlSelf->__Vfunc_leading_zero32__3027__value;
                        vlSelf->__Vfunc_leading_zero32__3027__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3027__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3027__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3027__count)));
                            vlSelf->__Vfunc_leading_zero32__3027__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3027__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3027__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3027__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3027__count)));
                            vlSelf->__Vfunc_leading_zero32__3027__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3027__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3027__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3027__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3027__count)));
                            vlSelf->__Vfunc_leading_zero32__3027__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3027__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3027__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3027__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3027__count)));
                            vlSelf->__Vfunc_leading_zero32__3027__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3027__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3027__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3027__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3027__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3027__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3027__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3027__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3027__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__109__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__109__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3039__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__109__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3039__part 
                            = vlSelf->__Vfunc_leading_zero32__3039__value;
                        vlSelf->__Vfunc_leading_zero32__3039__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3039__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3039__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3039__count)));
                            vlSelf->__Vfunc_leading_zero32__3039__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3039__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3039__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3039__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3039__count)));
                            vlSelf->__Vfunc_leading_zero32__3039__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3039__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3039__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3039__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3039__count)));
                            vlSelf->__Vfunc_leading_zero32__3039__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3039__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3039__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3039__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3039__count)));
                            vlSelf->__Vfunc_leading_zero32__3039__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3039__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3039__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3039__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3039__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3039__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3039__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3039__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3039__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__110__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__110__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3051__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__110__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3051__part 
                            = vlSelf->__Vfunc_leading_zero32__3051__value;
                        vlSelf->__Vfunc_leading_zero32__3051__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3051__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3051__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3051__count)));
                            vlSelf->__Vfunc_leading_zero32__3051__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3051__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3051__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3051__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3051__count)));
                            vlSelf->__Vfunc_leading_zero32__3051__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3051__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3051__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3051__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3051__count)));
                            vlSelf->__Vfunc_leading_zero32__3051__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3051__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3051__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3051__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3051__count)));
                            vlSelf->__Vfunc_leading_zero32__3051__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3051__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3051__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3051__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3051__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3051__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3051__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3051__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3051__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__111__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__111__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3063__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__111__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3063__part 
                            = vlSelf->__Vfunc_leading_zero32__3063__value;
                        vlSelf->__Vfunc_leading_zero32__3063__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3063__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3063__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3063__count)));
                            vlSelf->__Vfunc_leading_zero32__3063__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3063__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3063__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3063__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3063__count)));
                            vlSelf->__Vfunc_leading_zero32__3063__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3063__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3063__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3063__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3063__count)));
                            vlSelf->__Vfunc_leading_zero32__3063__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3063__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3063__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3063__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3063__count)));
                            vlSelf->__Vfunc_leading_zero32__3063__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3063__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3063__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3063__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3063__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3063__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3063__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3063__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3063__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__112__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__112__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3075__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__112__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3075__part 
                            = vlSelf->__Vfunc_leading_zero32__3075__value;
                        vlSelf->__Vfunc_leading_zero32__3075__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3075__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3075__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3075__count)));
                            vlSelf->__Vfunc_leading_zero32__3075__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3075__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3075__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3075__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3075__count)));
                            vlSelf->__Vfunc_leading_zero32__3075__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3075__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3075__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3075__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3075__count)));
                            vlSelf->__Vfunc_leading_zero32__3075__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3075__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3075__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3075__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3075__count)));
                            vlSelf->__Vfunc_leading_zero32__3075__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3075__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3075__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3075__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3075__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3075__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3075__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3075__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3075__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__113__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__113__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3087__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__113__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3087__part 
                            = vlSelf->__Vfunc_leading_zero32__3087__value;
                        vlSelf->__Vfunc_leading_zero32__3087__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3087__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3087__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3087__count)));
                            vlSelf->__Vfunc_leading_zero32__3087__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3087__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3087__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3087__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3087__count)));
                            vlSelf->__Vfunc_leading_zero32__3087__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3087__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3087__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3087__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3087__count)));
                            vlSelf->__Vfunc_leading_zero32__3087__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3087__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3087__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3087__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3087__count)));
                            vlSelf->__Vfunc_leading_zero32__3087__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3087__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3087__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3087__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3087__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3087__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3087__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3087__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3087__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__114__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__114__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3099__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__114__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3099__part 
                            = vlSelf->__Vfunc_leading_zero32__3099__value;
                        vlSelf->__Vfunc_leading_zero32__3099__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3099__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3099__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3099__count)));
                            vlSelf->__Vfunc_leading_zero32__3099__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3099__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3099__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3099__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3099__count)));
                            vlSelf->__Vfunc_leading_zero32__3099__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3099__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3099__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3099__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3099__count)));
                            vlSelf->__Vfunc_leading_zero32__3099__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3099__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3099__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3099__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3099__count)));
                            vlSelf->__Vfunc_leading_zero32__3099__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3099__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3099__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3099__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3099__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3099__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3099__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3099__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3099__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__115__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__115__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3111__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__115__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3111__part 
                            = vlSelf->__Vfunc_leading_zero32__3111__value;
                        vlSelf->__Vfunc_leading_zero32__3111__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3111__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3111__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3111__count)));
                            vlSelf->__Vfunc_leading_zero32__3111__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3111__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3111__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3111__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3111__count)));
                            vlSelf->__Vfunc_leading_zero32__3111__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3111__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3111__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3111__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3111__count)));
                            vlSelf->__Vfunc_leading_zero32__3111__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3111__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3111__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3111__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3111__count)));
                            vlSelf->__Vfunc_leading_zero32__3111__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3111__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3111__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3111__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3111__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3111__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3111__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3111__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3111__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__116__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__116__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3123__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__116__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3123__part 
                            = vlSelf->__Vfunc_leading_zero32__3123__value;
                        vlSelf->__Vfunc_leading_zero32__3123__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3123__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3123__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3123__count)));
                            vlSelf->__Vfunc_leading_zero32__3123__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3123__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3123__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3123__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3123__count)));
                            vlSelf->__Vfunc_leading_zero32__3123__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3123__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3123__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3123__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3123__count)));
                            vlSelf->__Vfunc_leading_zero32__3123__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3123__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3123__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3123__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3123__count)));
                            vlSelf->__Vfunc_leading_zero32__3123__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3123__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3123__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3123__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3123__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3123__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3123__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3123__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3123__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__117__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__117__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3135__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__117__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3135__part 
                            = vlSelf->__Vfunc_leading_zero32__3135__value;
                        vlSelf->__Vfunc_leading_zero32__3135__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3135__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3135__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3135__count)));
                            vlSelf->__Vfunc_leading_zero32__3135__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3135__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3135__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3135__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3135__count)));
                            vlSelf->__Vfunc_leading_zero32__3135__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3135__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3135__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3135__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3135__count)));
                            vlSelf->__Vfunc_leading_zero32__3135__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3135__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3135__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3135__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3135__count)));
                            vlSelf->__Vfunc_leading_zero32__3135__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3135__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3135__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3135__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3135__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3135__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3135__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3135__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3135__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__118__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__118__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3147__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__118__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3147__part 
                            = vlSelf->__Vfunc_leading_zero32__3147__value;
                        vlSelf->__Vfunc_leading_zero32__3147__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3147__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3147__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3147__count)));
                            vlSelf->__Vfunc_leading_zero32__3147__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3147__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3147__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3147__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3147__count)));
                            vlSelf->__Vfunc_leading_zero32__3147__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3147__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3147__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3147__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3147__count)));
                            vlSelf->__Vfunc_leading_zero32__3147__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3147__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3147__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3147__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3147__count)));
                            vlSelf->__Vfunc_leading_zero32__3147__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3147__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3147__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3147__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3147__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3147__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3147__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3147__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3147__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__119__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__119__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3159__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__119__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3159__part 
                            = vlSelf->__Vfunc_leading_zero32__3159__value;
                        vlSelf->__Vfunc_leading_zero32__3159__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3159__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3159__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3159__count)));
                            vlSelf->__Vfunc_leading_zero32__3159__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3159__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3159__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3159__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3159__count)));
                            vlSelf->__Vfunc_leading_zero32__3159__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3159__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3159__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3159__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3159__count)));
                            vlSelf->__Vfunc_leading_zero32__3159__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3159__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3159__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3159__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3159__count)));
                            vlSelf->__Vfunc_leading_zero32__3159__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3159__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3159__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3159__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3159__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3159__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3159__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3159__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3159__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__120__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__120__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3171__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__120__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3171__part 
                            = vlSelf->__Vfunc_leading_zero32__3171__value;
                        vlSelf->__Vfunc_leading_zero32__3171__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3171__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3171__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3171__count)));
                            vlSelf->__Vfunc_leading_zero32__3171__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3171__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3171__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3171__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3171__count)));
                            vlSelf->__Vfunc_leading_zero32__3171__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3171__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3171__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3171__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3171__count)));
                            vlSelf->__Vfunc_leading_zero32__3171__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3171__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3171__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3171__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3171__count)));
                            vlSelf->__Vfunc_leading_zero32__3171__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3171__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3171__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3171__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3171__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3171__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3171__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3171__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3171__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__121__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__121__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3183__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__121__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3183__part 
                            = vlSelf->__Vfunc_leading_zero32__3183__value;
                        vlSelf->__Vfunc_leading_zero32__3183__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3183__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3183__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3183__count)));
                            vlSelf->__Vfunc_leading_zero32__3183__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3183__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3183__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3183__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3183__count)));
                            vlSelf->__Vfunc_leading_zero32__3183__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3183__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3183__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3183__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3183__count)));
                            vlSelf->__Vfunc_leading_zero32__3183__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3183__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3183__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3183__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3183__count)));
                            vlSelf->__Vfunc_leading_zero32__3183__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3183__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3183__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3183__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3183__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3183__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3183__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3183__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3183__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__122__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__122__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3195__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__122__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3195__part 
                            = vlSelf->__Vfunc_leading_zero32__3195__value;
                        vlSelf->__Vfunc_leading_zero32__3195__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3195__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3195__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3195__count)));
                            vlSelf->__Vfunc_leading_zero32__3195__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3195__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3195__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3195__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3195__count)));
                            vlSelf->__Vfunc_leading_zero32__3195__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3195__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3195__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3195__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3195__count)));
                            vlSelf->__Vfunc_leading_zero32__3195__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3195__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3195__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3195__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3195__count)));
                            vlSelf->__Vfunc_leading_zero32__3195__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3195__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3195__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3195__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3195__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3195__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3195__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3195__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3195__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__123__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__123__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3207__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__123__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3207__part 
                            = vlSelf->__Vfunc_leading_zero32__3207__value;
                        vlSelf->__Vfunc_leading_zero32__3207__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3207__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3207__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3207__count)));
                            vlSelf->__Vfunc_leading_zero32__3207__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3207__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3207__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3207__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3207__count)));
                            vlSelf->__Vfunc_leading_zero32__3207__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3207__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3207__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3207__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3207__count)));
                            vlSelf->__Vfunc_leading_zero32__3207__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3207__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3207__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3207__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3207__count)));
                            vlSelf->__Vfunc_leading_zero32__3207__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3207__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3207__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3207__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3207__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3207__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3207__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3207__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3207__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__124__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__124__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3219__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__124__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3219__part 
                            = vlSelf->__Vfunc_leading_zero32__3219__value;
                        vlSelf->__Vfunc_leading_zero32__3219__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3219__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3219__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3219__count)));
                            vlSelf->__Vfunc_leading_zero32__3219__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3219__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3219__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3219__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3219__count)));
                            vlSelf->__Vfunc_leading_zero32__3219__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3219__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3219__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3219__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3219__count)));
                            vlSelf->__Vfunc_leading_zero32__3219__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3219__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3219__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3219__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3219__count)));
                            vlSelf->__Vfunc_leading_zero32__3219__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3219__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3219__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3219__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3219__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3219__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3219__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3219__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3219__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__125__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__125__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3231__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__125__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3231__part 
                            = vlSelf->__Vfunc_leading_zero32__3231__value;
                        vlSelf->__Vfunc_leading_zero32__3231__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3231__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3231__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3231__count)));
                            vlSelf->__Vfunc_leading_zero32__3231__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3231__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3231__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3231__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3231__count)));
                            vlSelf->__Vfunc_leading_zero32__3231__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3231__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3231__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3231__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3231__count)));
                            vlSelf->__Vfunc_leading_zero32__3231__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3231__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3231__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3231__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3231__count)));
                            vlSelf->__Vfunc_leading_zero32__3231__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3231__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3231__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3231__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3231__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3231__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3231__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3231__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3231__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__126__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__126__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3243__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__126__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3243__part 
                            = vlSelf->__Vfunc_leading_zero32__3243__value;
                        vlSelf->__Vfunc_leading_zero32__3243__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3243__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3243__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3243__count)));
                            vlSelf->__Vfunc_leading_zero32__3243__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3243__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3243__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3243__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3243__count)));
                            vlSelf->__Vfunc_leading_zero32__3243__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3243__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3243__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3243__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3243__count)));
                            vlSelf->__Vfunc_leading_zero32__3243__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3243__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3243__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3243__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3243__count)));
                            vlSelf->__Vfunc_leading_zero32__3243__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3243__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3243__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3243__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3243__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3243__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3243__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3243__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3243__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__127__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__127__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3255__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__127__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3255__part 
                            = vlSelf->__Vfunc_leading_zero32__3255__value;
                        vlSelf->__Vfunc_leading_zero32__3255__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3255__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3255__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3255__count)));
                            vlSelf->__Vfunc_leading_zero32__3255__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3255__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3255__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3255__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3255__count)));
                            vlSelf->__Vfunc_leading_zero32__3255__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3255__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3255__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3255__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3255__count)));
                            vlSelf->__Vfunc_leading_zero32__3255__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3255__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3255__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3255__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3255__count)));
                            vlSelf->__Vfunc_leading_zero32__3255__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3255__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3255__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3255__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3255__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3255__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3255__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3255__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3255__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__128__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__128__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3267__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__128__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3267__part 
                            = vlSelf->__Vfunc_leading_zero32__3267__value;
                        vlSelf->__Vfunc_leading_zero32__3267__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3267__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3267__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3267__count)));
                            vlSelf->__Vfunc_leading_zero32__3267__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3267__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3267__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3267__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3267__count)));
                            vlSelf->__Vfunc_leading_zero32__3267__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3267__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3267__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3267__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3267__count)));
                            vlSelf->__Vfunc_leading_zero32__3267__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3267__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3267__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3267__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3267__count)));
                            vlSelf->__Vfunc_leading_zero32__3267__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3267__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3267__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3267__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3267__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3267__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3267__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3267__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3267__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__129__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__129__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3279__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__129__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3279__part 
                            = vlSelf->__Vfunc_leading_zero32__3279__value;
                        vlSelf->__Vfunc_leading_zero32__3279__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3279__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3279__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3279__count)));
                            vlSelf->__Vfunc_leading_zero32__3279__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3279__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3279__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3279__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3279__count)));
                            vlSelf->__Vfunc_leading_zero32__3279__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3279__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3279__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3279__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3279__count)));
                            vlSelf->__Vfunc_leading_zero32__3279__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3279__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3279__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3279__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3279__count)));
                            vlSelf->__Vfunc_leading_zero32__3279__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3279__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3279__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3279__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3279__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3279__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3279__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3279__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3279__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__130__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__130__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3291__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__130__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3291__part 
                            = vlSelf->__Vfunc_leading_zero32__3291__value;
                        vlSelf->__Vfunc_leading_zero32__3291__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3291__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3291__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3291__count)));
                            vlSelf->__Vfunc_leading_zero32__3291__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3291__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3291__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3291__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3291__count)));
                            vlSelf->__Vfunc_leading_zero32__3291__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3291__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3291__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3291__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3291__count)));
                            vlSelf->__Vfunc_leading_zero32__3291__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3291__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3291__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3291__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3291__count)));
                            vlSelf->__Vfunc_leading_zero32__3291__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3291__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3291__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3291__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3291__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3291__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3291__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3291__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3291__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__131__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__131__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3303__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__131__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3303__part 
                            = vlSelf->__Vfunc_leading_zero32__3303__value;
                        vlSelf->__Vfunc_leading_zero32__3303__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3303__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3303__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3303__count)));
                            vlSelf->__Vfunc_leading_zero32__3303__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3303__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3303__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3303__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3303__count)));
                            vlSelf->__Vfunc_leading_zero32__3303__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3303__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3303__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3303__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3303__count)));
                            vlSelf->__Vfunc_leading_zero32__3303__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3303__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3303__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3303__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3303__count)));
                            vlSelf->__Vfunc_leading_zero32__3303__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3303__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3303__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3303__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3303__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3303__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3303__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3303__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3303__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__132__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__132__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3315__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__132__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3315__part 
                            = vlSelf->__Vfunc_leading_zero32__3315__value;
                        vlSelf->__Vfunc_leading_zero32__3315__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3315__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3315__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3315__count)));
                            vlSelf->__Vfunc_leading_zero32__3315__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3315__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3315__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3315__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3315__count)));
                            vlSelf->__Vfunc_leading_zero32__3315__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3315__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3315__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3315__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3315__count)));
                            vlSelf->__Vfunc_leading_zero32__3315__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3315__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3315__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3315__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3315__count)));
                            vlSelf->__Vfunc_leading_zero32__3315__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3315__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3315__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3315__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3315__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3315__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3315__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3315__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3315__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__133__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__133__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3327__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__133__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3327__part 
                            = vlSelf->__Vfunc_leading_zero32__3327__value;
                        vlSelf->__Vfunc_leading_zero32__3327__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3327__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3327__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3327__count)));
                            vlSelf->__Vfunc_leading_zero32__3327__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3327__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3327__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3327__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3327__count)));
                            vlSelf->__Vfunc_leading_zero32__3327__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3327__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3327__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3327__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3327__count)));
                            vlSelf->__Vfunc_leading_zero32__3327__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3327__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3327__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3327__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3327__count)));
                            vlSelf->__Vfunc_leading_zero32__3327__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3327__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3327__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3327__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3327__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3327__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3327__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3327__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3327__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__134__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__134__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3339__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__134__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3339__part 
                            = vlSelf->__Vfunc_leading_zero32__3339__value;
                        vlSelf->__Vfunc_leading_zero32__3339__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3339__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3339__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3339__count)));
                            vlSelf->__Vfunc_leading_zero32__3339__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3339__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3339__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3339__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3339__count)));
                            vlSelf->__Vfunc_leading_zero32__3339__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3339__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3339__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3339__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3339__count)));
                            vlSelf->__Vfunc_leading_zero32__3339__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3339__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3339__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3339__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3339__count)));
                            vlSelf->__Vfunc_leading_zero32__3339__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3339__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3339__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3339__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3339__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3339__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3339__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3339__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3339__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__135__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__135__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3351__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__135__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3351__part 
                            = vlSelf->__Vfunc_leading_zero32__3351__value;
                        vlSelf->__Vfunc_leading_zero32__3351__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3351__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3351__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3351__count)));
                            vlSelf->__Vfunc_leading_zero32__3351__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3351__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3351__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3351__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3351__count)));
                            vlSelf->__Vfunc_leading_zero32__3351__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3351__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3351__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3351__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3351__count)));
                            vlSelf->__Vfunc_leading_zero32__3351__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3351__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3351__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3351__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3351__count)));
                            vlSelf->__Vfunc_leading_zero32__3351__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3351__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3351__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3351__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3351__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3351__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3351__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3351__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3351__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__136__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__136__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3363__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__136__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3363__part 
                            = vlSelf->__Vfunc_leading_zero32__3363__value;
                        vlSelf->__Vfunc_leading_zero32__3363__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3363__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3363__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3363__count)));
                            vlSelf->__Vfunc_leading_zero32__3363__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3363__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3363__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3363__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3363__count)));
                            vlSelf->__Vfunc_leading_zero32__3363__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3363__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3363__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3363__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3363__count)));
                            vlSelf->__Vfunc_leading_zero32__3363__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3363__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3363__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3363__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3363__count)));
                            vlSelf->__Vfunc_leading_zero32__3363__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3363__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3363__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3363__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3363__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3363__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3363__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3363__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3363__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__137__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__137__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3375__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__137__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3375__part 
                            = vlSelf->__Vfunc_leading_zero32__3375__value;
                        vlSelf->__Vfunc_leading_zero32__3375__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3375__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3375__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3375__count)));
                            vlSelf->__Vfunc_leading_zero32__3375__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3375__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3375__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3375__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3375__count)));
                            vlSelf->__Vfunc_leading_zero32__3375__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3375__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3375__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3375__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3375__count)));
                            vlSelf->__Vfunc_leading_zero32__3375__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3375__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3375__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3375__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3375__count)));
                            vlSelf->__Vfunc_leading_zero32__3375__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3375__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3375__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3375__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3375__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3375__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3375__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3375__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3375__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__138__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__138__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3387__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__138__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3387__part 
                            = vlSelf->__Vfunc_leading_zero32__3387__value;
                        vlSelf->__Vfunc_leading_zero32__3387__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3387__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3387__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3387__count)));
                            vlSelf->__Vfunc_leading_zero32__3387__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3387__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3387__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3387__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3387__count)));
                            vlSelf->__Vfunc_leading_zero32__3387__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3387__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3387__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3387__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3387__count)));
                            vlSelf->__Vfunc_leading_zero32__3387__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3387__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3387__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3387__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3387__count)));
                            vlSelf->__Vfunc_leading_zero32__3387__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3387__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3387__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3387__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3387__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3387__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3387__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3387__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3387__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__139__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__139__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3399__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__139__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3399__part 
                            = vlSelf->__Vfunc_leading_zero32__3399__value;
                        vlSelf->__Vfunc_leading_zero32__3399__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3399__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3399__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3399__count)));
                            vlSelf->__Vfunc_leading_zero32__3399__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3399__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3399__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3399__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3399__count)));
                            vlSelf->__Vfunc_leading_zero32__3399__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3399__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3399__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3399__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3399__count)));
                            vlSelf->__Vfunc_leading_zero32__3399__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3399__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3399__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3399__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3399__count)));
                            vlSelf->__Vfunc_leading_zero32__3399__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3399__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3399__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3399__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3399__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3399__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3399__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3399__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3399__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__140__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__140__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3411__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__140__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3411__part 
                            = vlSelf->__Vfunc_leading_zero32__3411__value;
                        vlSelf->__Vfunc_leading_zero32__3411__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3411__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3411__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3411__count)));
                            vlSelf->__Vfunc_leading_zero32__3411__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3411__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3411__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3411__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3411__count)));
                            vlSelf->__Vfunc_leading_zero32__3411__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3411__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3411__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3411__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3411__count)));
                            vlSelf->__Vfunc_leading_zero32__3411__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3411__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3411__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3411__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3411__count)));
                            vlSelf->__Vfunc_leading_zero32__3411__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3411__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3411__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3411__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3411__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3411__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3411__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3411__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3411__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__141__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__141__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3423__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__141__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3423__part 
                            = vlSelf->__Vfunc_leading_zero32__3423__value;
                        vlSelf->__Vfunc_leading_zero32__3423__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3423__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3423__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3423__count)));
                            vlSelf->__Vfunc_leading_zero32__3423__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3423__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3423__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3423__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3423__count)));
                            vlSelf->__Vfunc_leading_zero32__3423__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3423__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3423__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3423__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3423__count)));
                            vlSelf->__Vfunc_leading_zero32__3423__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3423__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3423__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3423__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3423__count)));
                            vlSelf->__Vfunc_leading_zero32__3423__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3423__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3423__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3423__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3423__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3423__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3423__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3423__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3423__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__142__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__142__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3435__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__142__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3435__part 
                            = vlSelf->__Vfunc_leading_zero32__3435__value;
                        vlSelf->__Vfunc_leading_zero32__3435__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3435__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3435__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3435__count)));
                            vlSelf->__Vfunc_leading_zero32__3435__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3435__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3435__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3435__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3435__count)));
                            vlSelf->__Vfunc_leading_zero32__3435__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3435__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3435__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3435__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3435__count)));
                            vlSelf->__Vfunc_leading_zero32__3435__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3435__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3435__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3435__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3435__count)));
                            vlSelf->__Vfunc_leading_zero32__3435__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3435__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3435__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3435__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3435__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3435__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3435__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3435__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3435__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__143__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__143__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3447__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__143__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3447__part 
                            = vlSelf->__Vfunc_leading_zero32__3447__value;
                        vlSelf->__Vfunc_leading_zero32__3447__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3447__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3447__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3447__count)));
                            vlSelf->__Vfunc_leading_zero32__3447__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3447__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3447__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3447__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3447__count)));
                            vlSelf->__Vfunc_leading_zero32__3447__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3447__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3447__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3447__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3447__count)));
                            vlSelf->__Vfunc_leading_zero32__3447__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3447__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3447__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3447__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3447__count)));
                            vlSelf->__Vfunc_leading_zero32__3447__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3447__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3447__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3447__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3447__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3447__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3447__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3447__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3447__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__144__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__144__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3459__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__144__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3459__part 
                            = vlSelf->__Vfunc_leading_zero32__3459__value;
                        vlSelf->__Vfunc_leading_zero32__3459__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3459__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3459__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3459__count)));
                            vlSelf->__Vfunc_leading_zero32__3459__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3459__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3459__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3459__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3459__count)));
                            vlSelf->__Vfunc_leading_zero32__3459__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3459__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3459__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3459__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3459__count)));
                            vlSelf->__Vfunc_leading_zero32__3459__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3459__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3459__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3459__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3459__count)));
                            vlSelf->__Vfunc_leading_zero32__3459__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3459__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3459__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3459__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3459__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3459__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3459__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3459__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3459__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__145__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__145__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3471__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__145__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3471__part 
                            = vlSelf->__Vfunc_leading_zero32__3471__value;
                        vlSelf->__Vfunc_leading_zero32__3471__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3471__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3471__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3471__count)));
                            vlSelf->__Vfunc_leading_zero32__3471__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3471__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3471__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3471__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3471__count)));
                            vlSelf->__Vfunc_leading_zero32__3471__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3471__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3471__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3471__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3471__count)));
                            vlSelf->__Vfunc_leading_zero32__3471__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3471__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3471__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3471__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3471__count)));
                            vlSelf->__Vfunc_leading_zero32__3471__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3471__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3471__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3471__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3471__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3471__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3471__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3471__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3471__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__146__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__146__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3483__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__146__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3483__part 
                            = vlSelf->__Vfunc_leading_zero32__3483__value;
                        vlSelf->__Vfunc_leading_zero32__3483__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3483__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3483__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3483__count)));
                            vlSelf->__Vfunc_leading_zero32__3483__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3483__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3483__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3483__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3483__count)));
                            vlSelf->__Vfunc_leading_zero32__3483__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3483__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3483__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3483__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3483__count)));
                            vlSelf->__Vfunc_leading_zero32__3483__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3483__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3483__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3483__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3483__count)));
                            vlSelf->__Vfunc_leading_zero32__3483__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3483__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3483__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3483__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3483__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3483__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3483__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3483__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3483__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__147__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__147__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3495__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__147__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3495__part 
                            = vlSelf->__Vfunc_leading_zero32__3495__value;
                        vlSelf->__Vfunc_leading_zero32__3495__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3495__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3495__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3495__count)));
                            vlSelf->__Vfunc_leading_zero32__3495__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3495__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3495__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3495__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3495__count)));
                            vlSelf->__Vfunc_leading_zero32__3495__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3495__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3495__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3495__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3495__count)));
                            vlSelf->__Vfunc_leading_zero32__3495__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3495__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3495__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3495__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3495__count)));
                            vlSelf->__Vfunc_leading_zero32__3495__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3495__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3495__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3495__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3495__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3495__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3495__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3495__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3495__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__148__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__148__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3507__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__148__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3507__part 
                            = vlSelf->__Vfunc_leading_zero32__3507__value;
                        vlSelf->__Vfunc_leading_zero32__3507__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3507__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3507__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3507__count)));
                            vlSelf->__Vfunc_leading_zero32__3507__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3507__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3507__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3507__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3507__count)));
                            vlSelf->__Vfunc_leading_zero32__3507__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3507__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3507__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3507__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3507__count)));
                            vlSelf->__Vfunc_leading_zero32__3507__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3507__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3507__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3507__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3507__count)));
                            vlSelf->__Vfunc_leading_zero32__3507__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3507__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3507__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3507__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3507__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3507__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3507__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3507__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3507__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__149__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__149__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3519__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__149__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3519__part 
                            = vlSelf->__Vfunc_leading_zero32__3519__value;
                        vlSelf->__Vfunc_leading_zero32__3519__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3519__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3519__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3519__count)));
                            vlSelf->__Vfunc_leading_zero32__3519__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3519__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3519__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3519__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3519__count)));
                            vlSelf->__Vfunc_leading_zero32__3519__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3519__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3519__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3519__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3519__count)));
                            vlSelf->__Vfunc_leading_zero32__3519__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3519__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3519__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3519__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3519__count)));
                            vlSelf->__Vfunc_leading_zero32__3519__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3519__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3519__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3519__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3519__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3519__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3519__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3519__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3519__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__150__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__150__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3531__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__150__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3531__part 
                            = vlSelf->__Vfunc_leading_zero32__3531__value;
                        vlSelf->__Vfunc_leading_zero32__3531__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3531__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3531__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3531__count)));
                            vlSelf->__Vfunc_leading_zero32__3531__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3531__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3531__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3531__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3531__count)));
                            vlSelf->__Vfunc_leading_zero32__3531__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3531__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3531__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3531__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3531__count)));
                            vlSelf->__Vfunc_leading_zero32__3531__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3531__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3531__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3531__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3531__count)));
                            vlSelf->__Vfunc_leading_zero32__3531__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3531__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3531__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3531__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3531__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3531__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3531__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3531__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3531__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__151__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__151__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3543__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__151__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3543__part 
                            = vlSelf->__Vfunc_leading_zero32__3543__value;
                        vlSelf->__Vfunc_leading_zero32__3543__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3543__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3543__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3543__count)));
                            vlSelf->__Vfunc_leading_zero32__3543__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3543__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3543__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3543__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3543__count)));
                            vlSelf->__Vfunc_leading_zero32__3543__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3543__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3543__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3543__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3543__count)));
                            vlSelf->__Vfunc_leading_zero32__3543__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3543__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3543__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3543__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3543__count)));
                            vlSelf->__Vfunc_leading_zero32__3543__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3543__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3543__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3543__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3543__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3543__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3543__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3543__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3543__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__152__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__152__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3555__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__152__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3555__part 
                            = vlSelf->__Vfunc_leading_zero32__3555__value;
                        vlSelf->__Vfunc_leading_zero32__3555__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3555__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3555__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3555__count)));
                            vlSelf->__Vfunc_leading_zero32__3555__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3555__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3555__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3555__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3555__count)));
                            vlSelf->__Vfunc_leading_zero32__3555__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3555__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3555__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3555__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3555__count)));
                            vlSelf->__Vfunc_leading_zero32__3555__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3555__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3555__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3555__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3555__count)));
                            vlSelf->__Vfunc_leading_zero32__3555__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3555__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3555__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3555__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3555__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3555__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3555__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3555__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3555__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__153__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__153__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3567__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__153__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3567__part 
                            = vlSelf->__Vfunc_leading_zero32__3567__value;
                        vlSelf->__Vfunc_leading_zero32__3567__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3567__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3567__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3567__count)));
                            vlSelf->__Vfunc_leading_zero32__3567__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3567__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3567__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3567__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3567__count)));
                            vlSelf->__Vfunc_leading_zero32__3567__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3567__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3567__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3567__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3567__count)));
                            vlSelf->__Vfunc_leading_zero32__3567__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3567__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3567__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3567__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3567__count)));
                            vlSelf->__Vfunc_leading_zero32__3567__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3567__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3567__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3567__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3567__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3567__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3567__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3567__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3567__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__154__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__154__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3579__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__154__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3579__part 
                            = vlSelf->__Vfunc_leading_zero32__3579__value;
                        vlSelf->__Vfunc_leading_zero32__3579__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3579__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3579__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3579__count)));
                            vlSelf->__Vfunc_leading_zero32__3579__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3579__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3579__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3579__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3579__count)));
                            vlSelf->__Vfunc_leading_zero32__3579__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3579__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3579__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3579__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3579__count)));
                            vlSelf->__Vfunc_leading_zero32__3579__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3579__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3579__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3579__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3579__count)));
                            vlSelf->__Vfunc_leading_zero32__3579__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3579__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3579__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3579__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3579__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3579__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3579__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3579__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3579__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__155__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__155__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3591__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__155__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3591__part 
                            = vlSelf->__Vfunc_leading_zero32__3591__value;
                        vlSelf->__Vfunc_leading_zero32__3591__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3591__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3591__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3591__count)));
                            vlSelf->__Vfunc_leading_zero32__3591__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3591__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3591__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3591__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3591__count)));
                            vlSelf->__Vfunc_leading_zero32__3591__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3591__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3591__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3591__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3591__count)));
                            vlSelf->__Vfunc_leading_zero32__3591__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3591__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3591__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3591__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3591__count)));
                            vlSelf->__Vfunc_leading_zero32__3591__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3591__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3591__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3591__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3591__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3591__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3591__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3591__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3591__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__156__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__156__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3603__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__156__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3603__part 
                            = vlSelf->__Vfunc_leading_zero32__3603__value;
                        vlSelf->__Vfunc_leading_zero32__3603__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3603__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3603__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3603__count)));
                            vlSelf->__Vfunc_leading_zero32__3603__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3603__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3603__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3603__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3603__count)));
                            vlSelf->__Vfunc_leading_zero32__3603__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3603__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3603__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3603__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3603__count)));
                            vlSelf->__Vfunc_leading_zero32__3603__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3603__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3603__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3603__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3603__count)));
                            vlSelf->__Vfunc_leading_zero32__3603__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3603__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3603__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3603__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3603__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3603__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3603__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3603__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3603__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__157__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__157__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3615__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__157__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3615__part 
                            = vlSelf->__Vfunc_leading_zero32__3615__value;
                        vlSelf->__Vfunc_leading_zero32__3615__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3615__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3615__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3615__count)));
                            vlSelf->__Vfunc_leading_zero32__3615__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3615__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3615__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3615__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3615__count)));
                            vlSelf->__Vfunc_leading_zero32__3615__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3615__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3615__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3615__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3615__count)));
                            vlSelf->__Vfunc_leading_zero32__3615__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3615__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3615__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3615__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3615__count)));
                            vlSelf->__Vfunc_leading_zero32__3615__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3615__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3615__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3615__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3615__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3615__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3615__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3615__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3615__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__158__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__158__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3627__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__158__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3627__part 
                            = vlSelf->__Vfunc_leading_zero32__3627__value;
                        vlSelf->__Vfunc_leading_zero32__3627__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3627__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3627__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3627__count)));
                            vlSelf->__Vfunc_leading_zero32__3627__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3627__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3627__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3627__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3627__count)));
                            vlSelf->__Vfunc_leading_zero32__3627__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3627__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3627__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3627__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3627__count)));
                            vlSelf->__Vfunc_leading_zero32__3627__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3627__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3627__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3627__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3627__count)));
                            vlSelf->__Vfunc_leading_zero32__3627__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3627__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3627__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3627__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3627__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3627__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3627__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3627__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3627__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__159__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__159__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3639__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__159__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3639__part 
                            = vlSelf->__Vfunc_leading_zero32__3639__value;
                        vlSelf->__Vfunc_leading_zero32__3639__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3639__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3639__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3639__count)));
                            vlSelf->__Vfunc_leading_zero32__3639__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3639__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3639__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3639__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3639__count)));
                            vlSelf->__Vfunc_leading_zero32__3639__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3639__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3639__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3639__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3639__count)));
                            vlSelf->__Vfunc_leading_zero32__3639__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3639__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3639__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3639__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3639__count)));
                            vlSelf->__Vfunc_leading_zero32__3639__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3639__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3639__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3639__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3639__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3639__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3639__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3639__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3639__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__160__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__160__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3651__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__160__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3651__part 
                            = vlSelf->__Vfunc_leading_zero32__3651__value;
                        vlSelf->__Vfunc_leading_zero32__3651__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3651__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3651__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3651__count)));
                            vlSelf->__Vfunc_leading_zero32__3651__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3651__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3651__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3651__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3651__count)));
                            vlSelf->__Vfunc_leading_zero32__3651__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3651__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3651__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3651__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3651__count)));
                            vlSelf->__Vfunc_leading_zero32__3651__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3651__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3651__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3651__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3651__count)));
                            vlSelf->__Vfunc_leading_zero32__3651__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3651__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3651__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3651__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3651__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3651__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3651__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3651__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3651__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__161__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__161__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3663__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__161__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3663__part 
                            = vlSelf->__Vfunc_leading_zero32__3663__value;
                        vlSelf->__Vfunc_leading_zero32__3663__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3663__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3663__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3663__count)));
                            vlSelf->__Vfunc_leading_zero32__3663__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3663__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3663__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3663__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3663__count)));
                            vlSelf->__Vfunc_leading_zero32__3663__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3663__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3663__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3663__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3663__count)));
                            vlSelf->__Vfunc_leading_zero32__3663__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3663__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3663__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3663__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3663__count)));
                            vlSelf->__Vfunc_leading_zero32__3663__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3663__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3663__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3663__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3663__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3663__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3663__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3663__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3663__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__162__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__162__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3675__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__162__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3675__part 
                            = vlSelf->__Vfunc_leading_zero32__3675__value;
                        vlSelf->__Vfunc_leading_zero32__3675__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3675__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3675__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3675__count)));
                            vlSelf->__Vfunc_leading_zero32__3675__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3675__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3675__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3675__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3675__count)));
                            vlSelf->__Vfunc_leading_zero32__3675__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3675__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3675__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3675__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3675__count)));
                            vlSelf->__Vfunc_leading_zero32__3675__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3675__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3675__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3675__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3675__count)));
                            vlSelf->__Vfunc_leading_zero32__3675__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3675__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3675__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3675__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3675__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3675__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3675__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3675__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3675__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__163__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__163__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3687__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__163__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3687__part 
                            = vlSelf->__Vfunc_leading_zero32__3687__value;
                        vlSelf->__Vfunc_leading_zero32__3687__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3687__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3687__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3687__count)));
                            vlSelf->__Vfunc_leading_zero32__3687__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3687__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3687__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3687__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3687__count)));
                            vlSelf->__Vfunc_leading_zero32__3687__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3687__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3687__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3687__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3687__count)));
                            vlSelf->__Vfunc_leading_zero32__3687__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3687__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3687__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3687__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3687__count)));
                            vlSelf->__Vfunc_leading_zero32__3687__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3687__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3687__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3687__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3687__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3687__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3687__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3687__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3687__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__164__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__164__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3699__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__164__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3699__part 
                            = vlSelf->__Vfunc_leading_zero32__3699__value;
                        vlSelf->__Vfunc_leading_zero32__3699__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3699__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3699__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3699__count)));
                            vlSelf->__Vfunc_leading_zero32__3699__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3699__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3699__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3699__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3699__count)));
                            vlSelf->__Vfunc_leading_zero32__3699__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3699__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3699__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3699__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3699__count)));
                            vlSelf->__Vfunc_leading_zero32__3699__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3699__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3699__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3699__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3699__count)));
                            vlSelf->__Vfunc_leading_zero32__3699__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3699__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3699__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3699__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3699__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3699__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3699__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3699__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3699__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__165__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__165__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3711__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__165__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3711__part 
                            = vlSelf->__Vfunc_leading_zero32__3711__value;
                        vlSelf->__Vfunc_leading_zero32__3711__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3711__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3711__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3711__count)));
                            vlSelf->__Vfunc_leading_zero32__3711__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3711__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3711__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3711__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3711__count)));
                            vlSelf->__Vfunc_leading_zero32__3711__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3711__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3711__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3711__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3711__count)));
                            vlSelf->__Vfunc_leading_zero32__3711__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3711__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3711__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3711__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3711__count)));
                            vlSelf->__Vfunc_leading_zero32__3711__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3711__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3711__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3711__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3711__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3711__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3711__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3711__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3711__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__166__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__166__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3723__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__166__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3723__part 
                            = vlSelf->__Vfunc_leading_zero32__3723__value;
                        vlSelf->__Vfunc_leading_zero32__3723__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3723__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3723__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3723__count)));
                            vlSelf->__Vfunc_leading_zero32__3723__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3723__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3723__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3723__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3723__count)));
                            vlSelf->__Vfunc_leading_zero32__3723__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3723__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3723__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3723__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3723__count)));
                            vlSelf->__Vfunc_leading_zero32__3723__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3723__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3723__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3723__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3723__count)));
                            vlSelf->__Vfunc_leading_zero32__3723__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3723__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3723__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3723__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3723__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3723__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3723__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3723__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3723__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__167__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__167__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3735__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__167__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3735__part 
                            = vlSelf->__Vfunc_leading_zero32__3735__value;
                        vlSelf->__Vfunc_leading_zero32__3735__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3735__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3735__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3735__count)));
                            vlSelf->__Vfunc_leading_zero32__3735__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3735__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3735__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3735__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3735__count)));
                            vlSelf->__Vfunc_leading_zero32__3735__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3735__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3735__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3735__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3735__count)));
                            vlSelf->__Vfunc_leading_zero32__3735__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3735__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3735__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3735__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3735__count)));
                            vlSelf->__Vfunc_leading_zero32__3735__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3735__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3735__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3735__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3735__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3735__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3735__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3735__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3735__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__168__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__168__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3747__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__168__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3747__part 
                            = vlSelf->__Vfunc_leading_zero32__3747__value;
                        vlSelf->__Vfunc_leading_zero32__3747__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3747__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3747__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3747__count)));
                            vlSelf->__Vfunc_leading_zero32__3747__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3747__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3747__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3747__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3747__count)));
                            vlSelf->__Vfunc_leading_zero32__3747__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3747__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3747__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3747__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3747__count)));
                            vlSelf->__Vfunc_leading_zero32__3747__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3747__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3747__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3747__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3747__count)));
                            vlSelf->__Vfunc_leading_zero32__3747__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3747__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3747__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3747__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3747__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3747__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3747__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3747__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3747__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__169__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__169__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3759__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__169__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3759__part 
                            = vlSelf->__Vfunc_leading_zero32__3759__value;
                        vlSelf->__Vfunc_leading_zero32__3759__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3759__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3759__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3759__count)));
                            vlSelf->__Vfunc_leading_zero32__3759__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3759__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3759__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3759__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3759__count)));
                            vlSelf->__Vfunc_leading_zero32__3759__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3759__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3759__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3759__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3759__count)));
                            vlSelf->__Vfunc_leading_zero32__3759__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3759__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3759__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3759__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3759__count)));
                            vlSelf->__Vfunc_leading_zero32__3759__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3759__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3759__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3759__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3759__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3759__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3759__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3759__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3759__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__170__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__170__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3771__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__170__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3771__part 
                            = vlSelf->__Vfunc_leading_zero32__3771__value;
                        vlSelf->__Vfunc_leading_zero32__3771__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3771__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3771__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3771__count)));
                            vlSelf->__Vfunc_leading_zero32__3771__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3771__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3771__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3771__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3771__count)));
                            vlSelf->__Vfunc_leading_zero32__3771__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3771__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3771__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3771__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3771__count)));
                            vlSelf->__Vfunc_leading_zero32__3771__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3771__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3771__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3771__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3771__count)));
                            vlSelf->__Vfunc_leading_zero32__3771__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3771__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3771__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3771__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3771__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3771__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3771__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3771__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3771__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__171__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__171__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3783__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__171__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3783__part 
                            = vlSelf->__Vfunc_leading_zero32__3783__value;
                        vlSelf->__Vfunc_leading_zero32__3783__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3783__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3783__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3783__count)));
                            vlSelf->__Vfunc_leading_zero32__3783__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3783__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3783__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3783__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3783__count)));
                            vlSelf->__Vfunc_leading_zero32__3783__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3783__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3783__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3783__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3783__count)));
                            vlSelf->__Vfunc_leading_zero32__3783__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3783__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3783__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3783__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3783__count)));
                            vlSelf->__Vfunc_leading_zero32__3783__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3783__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3783__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3783__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3783__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3783__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3783__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3783__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3783__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__172__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__172__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3795__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__172__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3795__part 
                            = vlSelf->__Vfunc_leading_zero32__3795__value;
                        vlSelf->__Vfunc_leading_zero32__3795__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3795__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3795__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3795__count)));
                            vlSelf->__Vfunc_leading_zero32__3795__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3795__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3795__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3795__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3795__count)));
                            vlSelf->__Vfunc_leading_zero32__3795__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3795__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3795__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3795__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3795__count)));
                            vlSelf->__Vfunc_leading_zero32__3795__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3795__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3795__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3795__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3795__count)));
                            vlSelf->__Vfunc_leading_zero32__3795__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3795__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3795__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3795__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3795__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3795__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3795__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3795__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3795__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__173__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__173__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3807__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__173__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3807__part 
                            = vlSelf->__Vfunc_leading_zero32__3807__value;
                        vlSelf->__Vfunc_leading_zero32__3807__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3807__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3807__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3807__count)));
                            vlSelf->__Vfunc_leading_zero32__3807__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3807__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3807__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3807__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3807__count)));
                            vlSelf->__Vfunc_leading_zero32__3807__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3807__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3807__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3807__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3807__count)));
                            vlSelf->__Vfunc_leading_zero32__3807__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3807__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3807__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3807__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3807__count)));
                            vlSelf->__Vfunc_leading_zero32__3807__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3807__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3807__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3807__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3807__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3807__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3807__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3807__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3807__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__174__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__174__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3819__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__174__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3819__part 
                            = vlSelf->__Vfunc_leading_zero32__3819__value;
                        vlSelf->__Vfunc_leading_zero32__3819__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3819__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3819__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3819__count)));
                            vlSelf->__Vfunc_leading_zero32__3819__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3819__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3819__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3819__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3819__count)));
                            vlSelf->__Vfunc_leading_zero32__3819__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3819__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3819__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3819__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3819__count)));
                            vlSelf->__Vfunc_leading_zero32__3819__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3819__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3819__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3819__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3819__count)));
                            vlSelf->__Vfunc_leading_zero32__3819__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3819__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3819__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3819__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3819__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3819__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3819__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3819__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3819__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__175__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__175__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3831__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__175__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3831__part 
                            = vlSelf->__Vfunc_leading_zero32__3831__value;
                        vlSelf->__Vfunc_leading_zero32__3831__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3831__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3831__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3831__count)));
                            vlSelf->__Vfunc_leading_zero32__3831__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3831__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3831__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3831__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3831__count)));
                            vlSelf->__Vfunc_leading_zero32__3831__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3831__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3831__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3831__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3831__count)));
                            vlSelf->__Vfunc_leading_zero32__3831__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3831__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3831__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3831__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3831__count)));
                            vlSelf->__Vfunc_leading_zero32__3831__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3831__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3831__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3831__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3831__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3831__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3831__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3831__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3831__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__176__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__176__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3843__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__176__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3843__part 
                            = vlSelf->__Vfunc_leading_zero32__3843__value;
                        vlSelf->__Vfunc_leading_zero32__3843__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3843__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3843__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3843__count)));
                            vlSelf->__Vfunc_leading_zero32__3843__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3843__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3843__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3843__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3843__count)));
                            vlSelf->__Vfunc_leading_zero32__3843__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3843__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3843__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3843__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3843__count)));
                            vlSelf->__Vfunc_leading_zero32__3843__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3843__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3843__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3843__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3843__count)));
                            vlSelf->__Vfunc_leading_zero32__3843__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3843__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3843__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3843__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3843__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3843__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3843__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3843__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3843__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__177__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__177__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3855__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__177__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3855__part 
                            = vlSelf->__Vfunc_leading_zero32__3855__value;
                        vlSelf->__Vfunc_leading_zero32__3855__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3855__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3855__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3855__count)));
                            vlSelf->__Vfunc_leading_zero32__3855__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3855__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3855__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3855__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3855__count)));
                            vlSelf->__Vfunc_leading_zero32__3855__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3855__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3855__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3855__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3855__count)));
                            vlSelf->__Vfunc_leading_zero32__3855__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3855__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3855__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3855__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3855__count)));
                            vlSelf->__Vfunc_leading_zero32__3855__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3855__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3855__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3855__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3855__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3855__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3855__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3855__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3855__Vfuncout)) 
                             - (IData)(8U))));
}
